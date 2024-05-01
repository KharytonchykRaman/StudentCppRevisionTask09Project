#include "tasks.h"

/*	Task 05. Count of Number Digits [подсчёт цифр числа]
*
*	Дано целое число. Подсчитайте количество цифр в нём.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено целое число, которое является решением задания.
*
*	[ input 1]: 15
*	[output 1]: 2
*
*	[ input 2]: 9
*	[output 2]: 1
*
*	[ input 3]: 0
*	[output 3]: 1
*
*	[ input 4]: -15
*	[output 4]: 2
*/

//task05
int task05(long long a) {
	a = a > 0 ? a : -a;
	int count = 0;

	do
	{
		count++;
		a /= 10;
	} while (a > 0);

	return count;
}