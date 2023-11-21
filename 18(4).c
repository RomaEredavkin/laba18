#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Ередавкин Роман\n");
	printf("Задача 4\n");


	int a, b, c, d, e;

	int p;




	FILE* fin = fopen("C:\\Programs\\in4.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	fscanf(fin, "%d%d%d%d%d", &a, &b, &c, &d, &e);
	fclose(fin);
	// логирование ввода
	printf("ввели: %d, %d, %d, %d, %d\n", a, b, c, d, e);
	// Обработка
	p = a + b + c + d + e;

	// логирование вывода
	printf("p =  %d\n", p);

	// Запись в выходной файл

	// Выходной файл
	FILE* fout;
	fout = fopen("C:\\Programs\\out4.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fprintf(fout, "%d", p);
	fclose(fout);

}