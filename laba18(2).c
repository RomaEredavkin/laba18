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

	
	

	FILE* fin = fopen("C:\\Programs\\in2.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	fscanf(fin, "%d%d%d", &a, &b, &c);
	fclose(fin);
	// ����������� �����
	printf("�����: %d, %d, %d\n", a, b, c);

	// ���������
	p = a * b * c;

	// ����������� ������
	printf("p =  %d\n", p);

	// ������ � �������� ����

	// �������� ����
	FILE* fout;
	fout = fopen("C:\\Programs\\out2.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	fprintf(fout, "%d", p);
	fclose(fout);

}


