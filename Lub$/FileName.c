#include <stdio.h>
#include <locale.h>
main() {
	task1();
}
task1() {
	setlocale(LC_ALL,"RUS");
	int x1, x2, y1, y2, z1, z2,sum1,sum2;
	printf("������� ������ ����� � �����������?\n");
	scanf("%i", &x1);
	printf("������� ������ ���� � �����������?\n");
	scanf("%i", &y1);
	printf("������� ������ ���������� � �����������?\n");
	scanf("%i", &z1);
	sum1 = x1 + (y1*2) + (z1*3);
	printf("���������� ������� � �����������:%i ������\n", sum1);
	printf("������� ������ ����� �� �������?\n");
	scanf("%i", &x2);
	printf("������� ������ ���� �� �������?\n");
	scanf("%i", &y2);
	printf("������� ������ ���������� �� �������?\n");
	scanf("%i", &z2);
	sum2 = x2 + (y2 * 2) + (z2 * 3);
	printf("���������� ������� �� �������:%i ������\n", sum2);
	printf("����������  ����� �������:%i ������\n", sum2+sum1);
}