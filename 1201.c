#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
void Init(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessBoard[row][col] = ' ';
		}
	}
	srand((unsigned int)time(0));
}
void Print(char chessBoard[MAX_ROW][MAX_COL]){
	printf("+----+----+----+\n");
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			//%c��ʾ��ӡһ���ַ�
			printf("| %c  ",chessBoard[row][col]);
		} 
		printf("| \n+----+----+----+\n");
	}
}
void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]){
	//�������
	printf("������ӣ�\n");
	while (1){
		printf("��������Ҫ���ӵ�λ�ã�");
		int row =0;
		int col = 0;
		//scanf�ĸ�ʽ���ַ������ϸ�Ҫע��
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
			//�û���������
			printf("��������\n");
			continue;
		}
		if (chessBoard[row][col] != ' '){
			printf("��λ���Ѿ������ˣ�\n");
			continue;
		}
		chessBoard[row][col] = 'X';
		break;
	}
}
void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]){
	printf("�������ӣ�\n");
	//����һ�������
	while (1){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' '){
			continue;
		}
		chessBoard[row][col] = '0';
		break;
	}
}
//�������ˣ�����1�����򷵻�0
int IsFull(char chessBoard[MAX_ROW][MAX_COL]){
	//�����ܷ��ҵ��ո���˵��û��
	//��������ڿո�˵������
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_ROW; col++){
			if (chessBoard[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
//�����������Ҫ���������Ƿ��������Ҫ����˭Ӯ��
//�������X��ʾ���Ӯ
//O��ʾ����ҲӮ
//�� ����ʾʤ��δ��
//Q��ʾ����
char Check(char chessBoard[MAX_ROW][MAX_COL]){
	//1.�ȼ��������
	for (int row = 0; row < MAX_ROW; row++){
		if (chessBoard[row][0] != ' '&&
			chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]){
			return chessBoard[row][0];
		}
	}
	//2.���������
	for (int col = 0; col < MAX_COL; col++){
		if (chessBoard[0][col] != ' ' &&
			chessBoard[0][col] == chessBoard[1][col] &&
			chessBoard[0][col] == chessBoard[2][col]){
			return chessBoard[0][col];
		}
	}
	//3.�ټ��Խ���
	if (chessBoard[0][0] != ' ' &&
		chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]){
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' ' &&
		chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]){
		return chessBoard[0][2];
	}
	if (IsFull(chessBoard)){
		return 'Q';
	}
	return ' ';
}
void Game(){
	//1.�������̲���ʼ�����̣�ÿ��λ�ö���Ϊ�ո�
	char chessBoard[MAX_ROW][MAX_COL];
	Init(chessBoard);
	char winner = ' ';
	while (1){
		//2.��ӡ���̣���һ�δ�ӡ���ǿհ����̣�
		Print(chessBoard);
		//3.���������������
		PlayerMove(chessBoard);
		//4.�ж���Ϸ�Ƿ����
		if (winner != ' '){
			break;
		}
		//5.��������
		ComputerMove(chessBoard);
		//6.�ж���Ϸ�Ƿ����
		winner = Check(chessBoard);
		if (winner != ' '){
			break;
		}
	}
	if (winner == 'X'){
		printf("��ϲ�㣬��Ӯ�ˣ�\n");
	}
	else if (winner == 'O'){
		printf("�����ˣ�\n");
	}
	else{
		printf("�����ˣ�\n");
	}

}
int Menu(){
	printf("=============\n");
	printf("��ӭ������������Ϸ��\n");
	printf("1.��ʼ��Ϸ\n");
	printf("1.�˳���Ϸ\n");
	printf("=============\n");
	printf("����������ѡ�� ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main(){
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("goodbye!\n");
			break;
		}
		else{
			printf("������������\n");
        }
	}
	system("pause");
	return 0;
}