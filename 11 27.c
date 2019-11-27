#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
int main(){
	srand(time(0));
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++){
		a[i] = rand() % 10;
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 9 - i; j++){
			if (a[j]>a[j + 1]){
				int b = a[j + 1];
				a[j + 1] = a[j];
				a[j] = b;
			}
		}
	}
	for (int i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
    system("pause");
	return 0;
}