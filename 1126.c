#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
int main(){
	//�������һ����
	//int k, n, sum = 0;
	//scanf("%d", &k);
	//while (k!=0){
	//	n = k % 10;
	//	sum = sum * 10 + n;       //sum*10+k����˼����ԭ��sum�Ļ�������չһ����λ���洢k���е���ջ�Ĳ�����
	//	k = k / 10;          //ȥ��һλ
	//}
	//printf("%d", sum);//�����ת�����
	//�������20��[10 , 100]���������������Щ���Լ������е������
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
	//��֪abc + cba = 1333, ����a, b, c��Ϊһλ��������������������a, b, c�������
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
	//printf("��������������");
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
	//printf("���Լ��%d", c);
	//printf("��С������%d", a*b/c);
	//һ�����100m�߶��������£�ÿ����غ�����ԭ���߶ȵ�һ�룬�����£��ٷ����������ڵ�10�����ʱ�������������ף���10�η������
	//float h = 100.0;
	//float s = 0;
	//for (int n = 1; n <= 10; n++){
	//	h = 0.5*h;
	//	s = s + h*4;
	//}
	//printf("��ʮ�η���%f\n", h);
	//printf("������%f��", s-100);
	//���ʵ������
	//int n = 0;
	//printf("������һ����:");
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
		printf("����\n");
		scanf("%d %d", &year, &month);
		if (year >= month)
			break;
	}
    system("pause");
	return 0;
}