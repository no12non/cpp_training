#include "pch.h"

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	
	cout << "Введите число : ";
	cin >> a;
	cout << "---- - Проверяем чётное ли число -" << endl;

	if (a <=0) {
		cout << "Ошибка число не подходит тк. нулевое или отрицательное! "<<endl;
	}
	else if (a % 2 != 0) {
		cout << "Ошибка число не чётное! " << endl;

	}
	else {
		cout << "число чётное! " << endl;
	}



}

//Задание 3. Проверка на чётное число
//Что нужно сделать
//Напишите программу, которая проверяет, чётное ли число ввел пользователь.
//
//Пример: int remainder = x % 2 (вычисляет остаток от деления `x` на 2).
//
//	Пример
//
//	Введите число : 28
//	---- - Проверяем---- -
//	Число 28 — чётное
//
//	Советы и рекомендации
//	Для проверки чётности используйте оператор %.Он вычисляет остаток от деления двух чисел.
//	Не забудьте про отрицательные числа.

