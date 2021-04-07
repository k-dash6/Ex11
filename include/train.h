// Copyright dash 2021
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Cage {
 private:
    bool light;

 public:
    Cage* next;
    Cage* prev;
    Cage() : light(false), next(nullptr), prev(nullptr) {}
    void on() { light = true; }
    void off() { light = false; }
    bool get() const { return light; }
};

class Train {
 private:
    Cage* first;
    Cage* last;

 public:
    Train();
    void add(bool light = false);
    void print();
    int find_len();
    int get_len();
    void set_len(unsigned int len);
    Cage* get_first() { return first; }
    Cage* get_last() { return last; }
    unsigned int len;
};

#endif  // INCLUDE_TRAIN_H_
