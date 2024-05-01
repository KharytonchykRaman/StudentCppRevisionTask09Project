#include "tasks.h"

/*	Task 04. Все целые степени двойк (All Integer Powers of Two)
*
*	По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
*	В случае некорректных данных напечатайте ноль.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Должна возвращаться строка, которая содержит ответ на задание.
*
*	[ input 1]: 40
*	[output 1]: 1 2 4 8 16 32
*
*	[ input 2]: 1
*	[output 2]: 1
*
*	[ input 3]: 0
*	[output 3]: 0
*
*	[ input 4]: -40
*	[output 4]: 0
*/

//task04
string task04(int a) {

	if (a < 1)
	{
		return "0";
	}

	string s = "1";

	for (int i = 1; pow(2, i) <= a; i++)
	{
		int c = pow(2, i);
		s += " " + to_string(c);
	}

	return s;
}