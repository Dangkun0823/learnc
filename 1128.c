#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
//µÝ¹é
//int fib(int x){
//	if (x == 1 || x == 2){
//		return 1;
//	}
//	else if (x > 2){
//		return fib(x - 1) + fib(x - 2);
//	}
//}
//·ÇµÝ¹é
//int fib(int x){
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2){
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int zhishu(int x, int n){
//	if (n == 1){
//		return x;
//	}
//	else if (n >= 2){
//		return x*zhishu(x, (n - 1));
//	}
//}
int DigitSum(int x){
	int sum = 0;
	int b = 0;
	if (x > 9){ 
		DigitSum(x / 10);
	}

		printf("%d  ", x%10);

}

int main(){
	DigitSum(234);
	/*printf("%d", zhishu(5, 4));*/
	system("pause");
	return 0;
}