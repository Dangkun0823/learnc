#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
//ĳ��/��/�������ڼ�
//�㷨��(��ķ����ɭ)Weekday = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7
//int weekday(int y, int m, int d){
//	if (m == 1 || m == 2){
//		m += 12;
//		y--;
//	}
//	int w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
//	return w + 1;
//}
//�жϻ���
//void fun(char buf[10])
//{
//	int i = 0, j = 0;
//	while (buf[i] != '\0')
//		i++;
//	for (; j <= i / 2; j++)
//	{
//		if (buf[j] == buf[i - j - 1])
//		{
//			if (j == (i - 1) / 2)
//			{
//				printf("yes\n");
//				return;
//			}
//		}
//		else
//		{
//			printf("no\n");
//			return;
//		}
//	}
//}
//void findkey(int arr[100], int ilen, int key){
//	int i = 0, j = 0;
//	for (i = 0; i < ilen; i++){
//		if (arr[i] == key){
//			printf("�ҵ���");
//			j = 1;
//			break;
//		}
//	}
//	if (j != 1){
//		printf("������");
//	}
//}
//�ж�ˮ�ɻ���
//int shui(int x){
//	int a = x / 100;
//	int b = x / 10 % 10;
//	int c = x % 10;
//	if ((a*a*a + b*b*b + c*c*c) == x)
//		printf("%d��ˮ�ɻ���", x);
//	else
//		printf("%d����ˮ�ɻ���", x);
//}
//�����������ĺ������� �����������ĵ�ַ
//int jiaohuan(int* x, int* y){
//	int z;
//	z = *y;
//	*y = *x;
//	*x = z;
//}
//��ʼ������ĺ���
//int add(int a, int b){
//	int sum = a + b;
//	return sum;
//}
//void show(int num[100], int ilen){
//	int i = 0;
//	for (i = 0; i < ilen; i++){
//		printf("%d\n", num[i]);
//	}
//}

int main(){
	//int a = 3, b = 5;
	//jiaohuan(&a, &b);
	//printf("%d %d", a, b);
	/*int result = add(1, 2);
	printf("%d\n", result);
	int buf[100] = { 1, 2, 3, 4, 5, 6 };
	show(buf, 6);*/
	/*int y = 0;
	printf("����һ����λ����");
	scanf("%d", &y);
	shui(y);*/
	//int arr[100] = { 1, 2, 5, 6, 8 };
	//findkey(arr, 5, 3);
	//char buf[10] = "abcba";
	//fun(buf);
	//int y = 2018, m = 1, d = 1;
	//printf("���������ڣ�%d\n", weekday(y, m, d));
	double sn = 100;
	double hn = sn / 2;
	int i = 0;
	for (i = 2; i <= 10; i++){
		sn = sn + hn * 2;
		hn = hn / 2;
	}
	printf("��%d����ؾ���%f��", i - 1, sn);
	system("pause");
	return 0;
}