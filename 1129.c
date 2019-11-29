#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
//µ›πÈ
//int jiecheng(int n){
//	if (n == 1 || n == 2)
//		return n;
//	if (n > 2)
//		return n*jiecheng(n - 1);
//}
//∑«µ›πÈ
//int jiecheng(int n){
//	int k = 1;
//	while (n > 0)
//		k *= n--;
//		return k;
//
//}
//void Print(int n){
//	if (n > 9){
//		Print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//µ›πÈ
/*int mystrlen(char* string){
	if (*string != '\0'){
		return 1 + mystrlen(string + 1);
	}
	else{
		return 0;
	}
}*/
//∑«µ›πÈ
//int mystrlen(char* string){
//	int count = 0;
//	while(*string != '\0'){
//		string++;
//		count++;
//	}
//	return count;
//}
void Reversestring(char* str){
	if (*str == '\0'){
		return;
	}
	Reversestring(str + 1);
	printf("%c", *str);
}
int main(){
	/*char string[] = "abcdef";
	printf("%d", mystrlen(string));*/
	//int n = 0;
	//printf(" ‰»În£∫");
	//scanf("%d", &n);
	//printf("%d", jiecheng(n));
	//Print(9527);
	char str[] = "abcd";
	Reversestring(str);
	system("pause");
	return 0;
}