#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
int main(){
	//int a, b, c;
	//scanf("%d%d", &a, &b);
	//c = a%b;
	//while (c){
	//	a = b;
	//	b = c;
	//	c = a%b;
	//}
	//printf("%d\n", b);
	//�������������Լ������С������
	/*int a, b, c,d;
	printf("������������������");
	scanf("%d %d", &a, &b);
	if (a > b)
		d = b;
	else d= a;
	for (int i = d; i > 0;i--){
		c = i;
		if (a%i == 0 && b%i == 0) break;
	}
	printf("���Լ��%d\n", c);
	printf("��С������%d\n", a*b / c);*/
	//����1/1-1/2+1/3-1/4..+1/99-1/100
	//double a = 1;
	//double b = 1;
	//double sum = 0;
	//int flag = 1;
	//for (a = 1; a <= 100; a++){
	//	b= flag*1.0 / a;
	//	flag *= -1;
	//	sum += b;
	//}
	//printf("%f\n", sum);
	//��1-1000��9���ֵĴ���
	int a, b=0;
	for (a = 1; a <= 1000; a++){
		if (a % 10 == 9)
			b++;
		if (a / 10 % 10 == 9)
			b++;
		if (a / 100 == 9)
			b++;
	}
	printf("%d", b);
	system("pause");
	return 0;
}