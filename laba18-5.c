#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Ередавкин Роман\n");
	printf("Задача 5\n");
	int a[10];
	int n;
	int i;
	FILE* fin = fopen("C:\\Programs\\in5.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	fscanf(fin, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);
	printf("Ввели  массив a[%d] =", n);
	for (i = 0; i < n; i++) {
		printf("%d", a[i]);
	}
	int s = 0;
	for (i = 0; i < n; i++) {
		s += a[i];
	}
	float sa = (float)s / n;
	printf("\nsa = %f\n", sa);
	for (i = 0; i < n; i++) {
		if (a[i] > sa) {
			a[i] *= 10;
		}
	}
	printf("Ввели  массив a[%d] =", n);
	for (i = 0; i < n; i++) {
		printf("%d", a[i]);
	}
	FILE* fout;
	fout = fopen("C:\\Programs\\out5.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	for (i = 0; i < n; i++) {
		fprintf(fout, "%d", a[i]);
	}
	fclose(fout);
}