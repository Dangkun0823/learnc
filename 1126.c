#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
int main(){
	//逆序输出一个数
	//int k, n, sum = 0;
	//scanf("%d", &k);
	//while (k!=0){
	//	n = k % 10;
	//	sum = sum * 10 + n;       //sum*10+k的意思是在原数sum的基础上拓展一个个位并存储k（有点像栈的操作）
	//	k = k / 10;          //去掉一位
	//}
	//printf("%d", sum);//输出反转后的数
	//随机产生20个[10 , 100]的正整数，输出这些数以及他们中的最大数
	//srand(time(0));
	//int i = 0;
	//int temp = 0;
	//for (i = 0; i < 20; i++){
	//	int a = rand() % 91 + 10;
	//	printf("%d ", a);
	//	if (temp < a)
	//		temp = a;
	//}
	//printf("%d", temp);
	//已知abc + cba = 1333, 其中a, b, c均为一位数，编程求出满足条件的a, b, c所有组合
	//int a, b, c;
	//for (a = 0; a <= 9; a++){
	//	for (b = 0; b <= 9; b++){
	//		for (c = 0; c <= 9; c++){
	//			if (100 * a + 10 * b + c + 100 * c + 10 * b + a == 1333){
	//				printf("%d %d %d\n", a,b,c);
	//			}
	//		}
	//	}
	//}
	//int a, b, c, d;
	//printf("请输入两个数：");
	//scanf("%d %d", &a, &b);
	//if (a > b)
	//	d = b;
	//else
	//	d = a;
	//for (int i = d; i > 0; i--){
	//	c = i;
	//	if (a%i == 0 && b%i == 0)
	//		break;
	//}
	//printf("最大公约数%d", c);
	//printf("最小公倍数%d", a*b/c);
	//一个球从100m高度自由落下，每次落地后反跳回原来高度的一半，再落下，再反弹。求它在第10次落地时，共经过多少米？第10次反弹多高
	//float h = 100.0;
	//float s = 0;
	//for (int n = 1; n <= 10; n++){
	//	h = 0.5*h;
	//	s = s + h*4;
	//}
	//printf("第十次反弹%f\n", h);
	//printf("共经过%f米", s-100);
	//输出实心菱形
	//int n = 0;
	//printf("请输入一个数:");
	//scanf("%d", &n);
	//for (int i = 1; i <=n; i++){
	//	for (int j =1; j<=n-i; j++){
	//		printf(" ");
	//	}
	//	for (int k = 1; k <= 2*i-1; k++){
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (int a= 1; a <= n - 1; a++){
	//	for (int b = 1; b <= a; b++){
	//		printf(" ");
	//	}
	//	for (int c =1; c<=2*(n-1-a)+1; c++){
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	int year = 1, month = 2, day = 0;
	while (1){
		printf("输入\n");
		scanf("%d %d", &year, &month);
		if (year >= month)
			break;
	}
    system("pause");
	return 0;
}