// ConsoleApplication11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Программа для нахождяния f(x)\nВведите значение x\n");
	float x;
	scanf_s("%f", &x);
	printf("Результат: %f\n", (pow(x, 3)) + ((pow(x, 4 / 3) - 1) / (sin(x) + M_PI + pow(M_E, x))));
	system("pause");
    return 0;
}

