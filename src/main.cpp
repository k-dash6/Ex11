// Copyright dash 2021
#include <iostream>
#include <string>
#include "train.h"

int main() {
	Train a;
	a.set_len(10);
	a.add();
	a.print();
	a.find_len();
	a.get_len();
	return 0;
}

