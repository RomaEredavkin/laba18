#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("��������� �����\n");
	printf("������ 4\n");


	int a, b, c, d, e;

	int p;




	FILE* fin = fopen("C:\\Programs\\in4.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	fscanf(fin, "%d%d%d%d%d", &a, &b, &c, &d, &e);
	fclose(fin);
	// ����������� �����
	printf("�����: %d, %d, %d, %d, %d\n", a, b, c, d, e);
	// ���������
	p = a + b + c + d + e;

	// ����������� ������
	printf("p =  %d\n", p);

	// ������ � �������� ����

	// �������� ����
	FILE* fout;
	fout = fopen("C:\\Programs\\out4.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	fprintf(fout, "%d", p);
	fclose(fout);

}