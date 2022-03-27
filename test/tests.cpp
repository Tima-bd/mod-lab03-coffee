// Copyright 2022 GHA Test Team

#include <gtest/gtest.h>
#include "automata.h"

TEST(task1, operation)
{
	Automata coffee;
	coffee.state = OFF;
	coffee.on();
	States ok = coffee.get_state();
	EXPECT_EQ(Wait, ok);
}
TEST(task2, operation)
{
	Automata coffee;
	coffee.state = COOK;
	coffee.on();
	States ok = coffee.get_state();
	EXPECT_EQ(COOK, ok);
}
TEST(task3, operation)
{
	Automata coffee;
	coffee.state = CHECK;
	coffee.check();
	EXPECT_EQ(isEnough, 1);
}
