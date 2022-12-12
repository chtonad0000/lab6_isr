#include "lib/calc.h"
#include <gtest/gtest.h>

TEST(calculator_suit,sum_test){
ASSERT_EQ(Plus(2,3),6);
ASSERT_EQ(Plus(10000,3),10003);
ASSERT_EQ(Plus(-7,-3),-10);
ASSERT_EQ(Plus(5,-3),2);
}
TEST(calculator_suit,diff_test){
ASSERT_EQ(Diff(2,3),-1);
ASSERT_EQ(Diff(10000,3),9997);
ASSERT_EQ(Diff(-7,-3),-4);
ASSERT_EQ(Diff(5,-3),8);
}
TEST(calculator_suit,miltiply_test){
ASSERT_EQ(Multiply(2,3),6);
ASSERT_EQ(Multiply(10000,3),30000);
ASSERT_EQ(Multiply(-7,-3),21);
ASSERT_EQ(Multiply(5,-3),-15);
}
TEST(calculator_suit,divisioin_test){
ASSERT_EQ(Division(6,3),2);
ASSERT_EQ(Division(-9,3),-3);
ASSERT_EQ(Division(100,4),25);
ASSERT_EQ(Division(5,2),2.5);
}