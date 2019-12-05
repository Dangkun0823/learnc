#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<time.h>
#include<ctype.h>
int main(){
	//打印上下两个菱形
	/*int i = 0, j = 0, k = 0, n;
	printf("请输入一个数：");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			printf(" ");
		}
		for (int k = 0; k <2*i+1; k++){
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j <= i; j++){
			printf(" ");
		}
		for (int k = 0; k < 2 * (n - i - 1) - 1; k++){
			printf("*");
		}
		printf("\n");
	}*/
	int i = 0, j=0, sum=0;
	int n = 1;
	int flag = 10;
	for (i = 0; i < 10000000; i++){
		if (i == flag){
			n++;
			flag *= 10;
		}
		for (j = i; j; j /= 10){
			sum += pow(j % 10, n);
		}
		if (sum == i)
			printf("%d\n", sum);
		sum = 0;
	}
	system("pause");
	return 0;
}