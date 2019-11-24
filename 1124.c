#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
//二分法的函数方法
//int Bi(int* arr, int size, int tofind){
//	int left = 0;
//	int right = size - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] < tofind){
//			left = mid + 1;
//		}
//		else if (arr[mid]>tofind){
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//递归算法
//int fib(int x){
//	if (x ==1 || x == 2){
//		return 1;
//	}
//	else if (x > 2){
//		return fib(x - 1) + fib(x - 2);
//	}
//}
//迭代算法
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
int main(){
   int i=0, j=0, k=0;
	for (i = 1; i<8; i++)
	{
		for (j = 1; j <= 7- i; j++){
			printf(" ");
		}
		for (k = 1; k <= 2 * i-1; k++){
			printf("*"); 
		}
		printf("\n");
	}
	int a, b, c;
	for (int a = 1; a<=6; a++){
		for (int b = 1; b <= a; b++){
			printf(" ");
		}
		for (int c =1; c<=2*(7-a)-1; c++){
			printf("*");
		}
		printf("\n");
	}
	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int a = Bi(arr, size, 5);
	printf("%d\n", a);*/
	//printf("%d", fib(2));
	system("pause");
	return 0;
}