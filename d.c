#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
int main(){
	//int i, j, m, n;
	//for (i = 1; i <= 7; i++){
	//	for (j = 1; j <= 2*i-1; j++){
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (m = 1; m <= 6; m++){
	//	for (n = 11; n >=2*m-1 ; n--){
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	/*int i, j, k, n;
	for (i = 1; i < 10; i++){
		for (j = 0; j < 10; j++){
			for (k = 0; k < 10; k++){
				int n = 100 * i + 10 * j + k;
				if (i*i*i + j*j*j + k*k*k == n){
					printf("%d ", n);
				}
			}
		}
	}*/
	int a = 0;
	scanf("%d", &a);
	int num = a + (10 * a + a) + (100 * a + 10 * a + a) + (1000 * a + 100 * a + 10 * a + a);
	printf("%d", num);
	system("pause");
	return 0;
}