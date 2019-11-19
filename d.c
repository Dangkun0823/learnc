#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
long count = 0;
void hanoi(int n, char a, char b, char c){
	if (1 == n){
		printf("第%d次，%c塔-->%c塔", ++count，a, c);
	}
	else{
		hanoi(n - 1, a, c, b);
		printf("第%c次,%c塔-->%c塔"，++count，a, c)；
			hanoi(n - 1, b, a, c);
	}
}
int main(void){
	int h;
	printf("输入汉诺塔圆盘数量：");
	scanf("%d", &h);
	hanoi(h, 'A', 'B', 'C');
	system("pause");
	return 0;
}