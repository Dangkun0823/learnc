#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
//long count = 0;
//void hanoi(int n, char a, char b, char c){
//	if (1 == n){
//		printf("��%d��,%c��-->%c��\n", ++count,a, c);
//	}
//	else{
//		hanoi(n - 1, a, c, b);
//		printf("��%d��,%c��-->%c��\n",++count,a, c);
//			hanoi(n - 1, b, a, c);
//	}
//}
int jumpfloor(int n){
	if (n == 1 || n == 2){
		return n;
	}
	else{
		return jumpfloor(n - 1) + jumpfloor(n - 2);
	}
}
int main(){
	//int h;
	//printf("���뺺ŵ��Բ��������");
	//scanf("%d", &h);
	//hanoi(h, 'A', 'B', 'C');
	printf("%d", jumpfloor(5));
	system("pause");
	return 0;
}