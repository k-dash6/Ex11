// Copyright dash 2021
#include <gtest/gtest.h>
#include <string>
#include <ctime>
#include "train.h"

TEST(Test, test1) {
    Train t1;
    EXPECT_EQ(0, t1.find_len());
}

TEST(Test, test2) {
    Train t2;
    t2.set_len(10);
    EXPECT_EQ(10, t2.find_len());
}

TEST(Test, test3) {
    Train t3;
    t3.add(false);
    EXPECT_EQ(true, t3.get_first()->get());
}

TEST(Test, test4) {
    Train t4;
    t4.set_len(10);
    t4.add();
    EXPECT_EQ(10, t4.find_len());
}

