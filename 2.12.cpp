// ConsoleApplication11.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("��������� ��� ���������� f(x)\n������� �������� x\n");
	float x;
	scanf_s("%f", &x);
	printf("���������: %f\n", (pow(x, 3)) + ((pow(x, 4 / 3) - 1) / (sin(x) + M_PI + pow(M_E, x))));
	system("pause");
    return 0;
}

