#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
long count = 0;
void hanoi(int n, char a, char b, char c){
	if (1 == n){
		printf("��%d�Σ�%c��-->%c��", ++count��a, c);
	}
	else{
		hanoi(n - 1, a, c, b);
		printf("��%c��,%c��-->%c��"��++count��a, c)��
			hanoi(n - 1, b, a, c);
	}
}
int main(void){
	int h;
	printf("���뺺ŵ��Բ��������");
	scanf("%d", &h);
	hanoi(h, 'A', 'B', 'C');
	system("pause");
	return 0;
}