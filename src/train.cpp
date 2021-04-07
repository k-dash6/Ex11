// Copyright dash 2021
#include <iostream>
#include <ctime>

#include "train.h"


Train::Train() {
	this->first = nullptr;
	this->last = nullptr;
}

void Train::add(bool light) {
	Cage* new_cage = new Cage;

	if (light == false) {
		new_cage->off();
	}
	else {
		new_cage->on();
	}

	if ((this->first == nullptr) && (this->last == nullptr)) {
		this->first = new_cage;
		this->last = new_cage;
	}

	if (this->first == this->last) {
		this->last = new_cage;
		this->first->next = new_cage;
		this->first->prev = new_cage;
		this->last->next = this->first;
		this->last->prev = this->first;
	}
	else {
		new_cage->prev = this->last;
		this->last->next = new_cage;
		this->last = new_cage;
		this->first->prev = this->last;
		this->last->next = this->first;
	}
}

void Train::print() {
	Cage* k = this->first;
	int sum = 1;
	while (k != this->last) {
		std::cout << "Cage" << sum << " - " << k->get();
		sum++;
		k = k->next;
	}
	std::cout << "Cage" << sum << " - " << k->get();
}

int Train::find_len() {
	Cage* k = this->first;
	k->on();
	unsigned int len = 1;
	while (1) {
		for (unsigned int i = 0; i < len; i++) {
			k = k->next;
			k->off();
		}
		for (unsigned int i = 0; i < len; i++) {
			k = k->prev;
		}
		if (k->get() == false) {
			break;
		}
		len++;
	}
	return len;
}

int Train::get_len() {
	return len;
}

void Train::set_len(unsigned int len) {
	this->len = len;
}