#pragma once
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = task01(15) == 3
		&& task01(49) == 7
		&& task01(1) == 0
		&& task01(-15) == 0
		&& task01(0) == 0
		&& task01(2) == 2
		&& task01(3) == 3
		&& task01(4) == 2
		&& task01(5) == 5
		&& task01(6) == 2
		&& task01(7) == 7
		&& task01(8) == 2
		&& task01(9) == 3
		&& task01(10) == 2
		&& task01(11) == 11
		&& task01(13) == 13
		&& task01(17) == 17
		&& task01(19) == 19
		&& task01(23) == 23
		&& task01(29) == 29
		&& task01(31) == 31;

	cout << "Task 01 [The Smallest Natural Divisor]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(32)
		&& task02(1)
		&& !task02(0)
		&& !task02(30)
		&& !task02(28)
		&& !task02(-4)
		&& !task02(-64)
		&& !task02(-512)
		&& !task02(3)
		&& !task02(7)
		&& !task02(10)
		&& !task02(20)
		&& !task02(40)
		&& !task02(50)

		&& task02(2)
		&& task02(4)
		&& task02(8)
		&& task02(16)
		&& task02(32)
		&& task02(64)
		&& task02(128)
		&& task02(256)
		&& task02(512)
		&& task02(4096);

	cout << "Task 02 [An Exact Power of Two]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = task03(50) == "1 4 9 16 25 36 49"
		&& task03(-50) == "0"
		&& task03(0) == "0"
		&& task03(49) == "1 4 9 16 25 36 49"
		&& task03(1) == "1"
		&& task03(2) == "1"
		&& task03(3) == "1"
		&& task03(4) == "1 4"
		&& task03(10) == "1 4 9"
		&& task03(20) == "1 4 9 16"
		&& task03(25) == "1 4 9 16 25"
		&& task03(40) == "1 4 9 16 25 36";

	cout << "Task 03 [Squares of Natural Numbers]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {
	bool result = task04(40) == "1 2 4 8 16 32"
		&& task04(1) == "1"
		&& task04(0) == "0"
		&& task04(-40) == "0"
		&& task04(2) == "1 2"
		&& task04(5) == "1 2 4"
		&& task04(10) == "1 2 4 8"
		&& task04(16) == "1 2 4 8 16"
		&& task04(20) == "1 2 4 8 16"
		&& task04(100) == "1 2 4 8 16 32 64"
		&& task04(500) == "1 2 4 8 16 32 64 128 256"
		&& task04(1000) == "1 2 4 8 16 32 64 128 256 512"
		&& task04(10000) == "1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192";

	cout << "Task 04 [All Integer Powers of Two]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {
	bool result = task05(15) == 2
		&& task05(9) == 1
		&& task05(0) == 1
		&& task05(-15) == 2
		&& task05(-123456789) == 9
		&& task05(1234567890) == 10
		&& task05(900) == 3
		&& task05(11111) == 5
		&& task05(999999) == 6
		&& task05(1000000) == 7;

	cout << "Task 05 [Count of Number Digits]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask06() {
	bool result = task06(123456) == 21
		&& task06(9) == 9
		&& task06(0) == 0
		&& task06(-15) == 6
		&& task06(15) == 6
		&& task06(-9) == 9
		&& task06(-123456) == 21
		&& task06(1234567890) == 45
		&& task06(-1234567890) == 45
		&& task06(123456789) == 45
		&& task06(-123456789) == 45
		&& task06(900) == 9
		&& task06(-900) == 9
		&& task06(11111) == 5
		&& task06(-11111) == 5
		&& task06(999999) == 54
		&& task06(-999999) == 54
		&& task06(1000000) == 1
		&& task06(-1000000) == 1;

	cout << "Task 06 [Sum of Number Digits]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask07() {
	bool result = task07(12345) == 1
		&& task07(54321) == 1
		&& task07(0) == 0
		&& task07(-12345) == 1
		&& task07(-54321) == 1
		&& task07(1) == 1
		&& task07(-1) == 1
		&& task07(9) == 9
		&& task07(-9) == 9
		&& task07(1234567890) == 0
		&& task07(-1234567890) == 0
		&& task07(999999999) == 9
		&& task07(-999999999) == 9
		&& task07(11111) == 1
		&& task07(-11111) == 1
		&& task07(101) == 0
		&& task07(-101) == 0
		&& task07(100) == 0
		&& task07(-100) == 0;

	cout << "Task 07 [Min Number Digit]" << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {
	bool result = taskX(12345)
		&& taskX(54321)
		&& taskX(0)
		&& !taskX(11111)
		&& !taskX(121)
		&& taskX(-12345)
		&& taskX(-54321)
		&& !taskX(11345)
		&& !taskX(54311)
		&& !taskX(12145)
		&& !taskX(54121)
		&& !taskX(-11345)
		&& !taskX(-54311)
		&& taskX(1234567890)
		&& taskX(-1234567890)
		&& !taskX(900)
		&& !taskX(-900)
		&& !taskX(11111)
		&& !taskX(-11111)
		&& !taskX(999999)
		&& !taskX(-999999)
		&& !taskX(1000000)
		&& !taskX(-1000000);

	cout << "Task X [Unique Number Digits] " << (result ? RIGHT : WRONG) << endl;
}
