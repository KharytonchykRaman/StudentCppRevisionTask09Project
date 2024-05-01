#include "tasks.h"

/*	Task X. Unique Number Digits [уникальные цифры числа]
*
*	Дано целое число. Необходимо определить, все ли цифры числа уникальны,
*	т.е. среди цифр числа нет повторяющихся.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено булевское значение - результат решения задания.
*
*	[ input 1]: 12345
*	[output 1]: true
*
*	[ input 2]: 54321
*	[output 2]: true
*
*	[ input 3]: 11111
*	[output 3]: false
*
*	[ input 4]: 121
*	[output 4]: false
*
*	[ input 5]: -12345
*	[output 5]: true
*
*	[ input 6]: 0
*	[output 6]: true
*/

//taskX
bool taskX(long long a) {
	a = a > 0 ? a : -a;

	while (a > 9)
	{
		int lastD = a % 10;
		int t = a / 10;
		while (t > 0)
		{
			if (t % 10 == lastD) {
				return false;
			}
			t /= 10;
		}
		a /= 10;
	}

	return true;
}