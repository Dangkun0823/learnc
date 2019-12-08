#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<time.h>
#include<ctype.h>
int main(){
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int i = 0;
	//int*p = arr;
	//for (i = 0; i < 10; i++){
	//	printf("%d ", *(p + i));
	//}
	int i = 0, j = 0;
	scanf("%d", i);
	for (i; i > 0; i /2 ){
		if (i % 2 == 1)
			j++;
	}
	printf("%d", j);
	system("pause");
	return 0;
}