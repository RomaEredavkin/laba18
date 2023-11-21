#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Ередавкин Роман\n");
	printf("Задача 1\n");


	int a, b, c;

	int p;

	
	

	FILE* fin = fopen("C:\\Programs\\in2.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	fscanf(fin, "%d%d%d", &a, &b, &c);
	fclose(fin);
	// логирование ввода
	printf("ввели: %d, %d, %d\n", a, b, c);

	// Обработка
	p = a * b * c;

	// логирование вывода
	printf("p =  %d\n", p);

	// Запись в выходной файл

	// Выходной файл
	FILE* fout;
	fout = fopen("C:\\Programs\\out2.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fprintf(fout, "%d", p);
	fclose(fout);

}


