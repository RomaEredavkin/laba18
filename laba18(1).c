#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("��������� �����\n");
	printf("������ 1\n");

	
	int a, b, c;
	int p;

	scanf("%d%d%d", &a, &b, &c);
	printf("�����: %d, %d, %d\n", a, b, c);
	
	p = a * b * c;
	printf("p =  %d\n", p);
}
