#include<iostream>
#include <iomanip>
#include "string"
#include<stdio.h>
#include<math.h>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 10000


typedef struct
{
	char no[20];
	char name[50];
	char author[20];

}Book;
typedef struct
{
	Book *elem;
	int length;

}SqList;




void Printf(SqList &L);


int InitList(SqList &L)
{
	L.elem = new Book[MAXSIZE];
	if (!L.elem)  exit(OVERFLOW);
	L.length = 0;
	return OK;
}
int GetElem(SqList L, int i, Book &e)      //取出
{
	if (i<1 || i>L.length) return ERROR;
	e = L.elem[i - 1];
	return OK;
}
void LocateElem(SqList L)   //查找
{
	Book e;
	int i;
	char n = 0;
	while (1)
	{
		cout << "输入1按书号查找，输入2按书名查找，输入3按作者名查找，输入4按序号查找,输入#返回上一级：" << endl;
		cin >> n;
		if (n == '#')
			break;
		if (n == '1')
		{
			cout << "请输入要查找的书号：";
			cin >> e.no;
			for (i = 0; i < L.length; i++)
			{
				if (strcmp(L.elem[i].no, e.no) == 0)
				{
					cout << L.elem[i].no << "    " << L.elem[i].name << "   " << L.elem[i].author << endl;
					break;
				}

			}
			if (i >= L.length)
				cout << "查无此书！请查看输入是否正确" << endl;


		}
		if (n == '2')
		{
			cout << "请输入要查找的书名：";
			cin >> e.name;
			for (i = 0; i < L.length; i++)
			{
				if (strcmp(L.elem[i].name, e.name) == 0)
				{
					cout << L.elem[i].no << "    " << L.elem[i].name << "   " << L.elem[i].author << endl;
					break;
				}


			}
			if (i >= L.length)
				cout << "查无此书！请查看输入是否正确" << endl;
		}
		if (n == '3')
		{
			cout << "请输入要查找的作者：";
			cin >> e.author;
			for (i = 0; i < L.length; i++)
			{
				if (strcmp(L.elem[i].author, e.author) == 0)
				{
					cout << L.elem[i].no << "    " << L.elem[i].name << "   " << L.elem[i].author << endl;
					break;
				}


			}
			if (i >= L.length)
				cout << "查无此书！请查看输入是否正确" << endl;
		}
		if (n == '4')
		{
			cout << "请输入要查找的序号：";
			cin >> i;
			if (i <= L.length)
			{
				cout << L.elem[i - 1].no << "    " << L.elem[i - 1].name << "   " << L.elem[i - 1].author << endl;


			}
			if (i > L.length)
				cout << "查无此书！请查看输入是否正确" << endl;
		}



	}

}
int ListInsert(SqList &L, int i)        //插入
{
	int j = 0;
	if ((i<1) || (i > L.length + 1)) return ERROR;
	if (L.length == MAXSIZE) return ERROR;
	for (j = L.length - 1; j >= i - 1; j--)
		L.elem[j + 1] = L.elem[j];

	cout << "请输入书号、书名、作者" << endl;
	cin >> L.elem[i].no >> L.elem[i].name >> L.elem[i].author;
	++L.length;
	Printf(L);

	return OK;
}


void ListDelete(SqList &L)               //删除
{
	int i;
	int j;
	char s = 0;
	cout << "输入要删除书本的序号：" << endl;
	cin >> i;
	if ((i<1) || (i>L.length)) cout << "输入的序号不正确" << endl;
	else
	{
		cout << "是否删除该书  输入1确定，输入0否定：";
		cin >> s;
		if (s == '1')
		{
			for (j = i; j <= L.length - 1; j++)
				L.elem[j - 1] = L.elem[j];
			--L.length;
			Printf(L);
		}
	}




}


void Update(SqList &L)
{
	Book e;
	int i;
	char  n;
	while (1)
	{
		cout << "请输入要修改的书的序号 ,输入0返回上一级:";
		cin >> i;
		if (i == 0) break;
		else if ((i<1) || (i>L.length)) cout << "输入的序号不正确" << endl;
		else
		{
			cout << L.elem[i - 1].no << "    " << L.elem[i - 1].name << "   " << L.elem[i - 1].author << endl;
			cout << "请选择要修改的对象，1：书号，2：书名，3：作者 ,输入#返回上一级" << endl;
			cin >> n;
			if (n == '#')
				break;
			switch (n)
			{
			case '1':cout << "把其修改为：";
				cin >> L.elem[i - 1].no;
				cout << L.elem[i - 1].no << "    " << L.elem[i - 1].name << "   " << L.elem[i - 1].author << endl; break;
			case '2':cout << "把其修改为：";
				cin >> L.elem[i - 1].name;
				cout << L.elem[i - 1].no << "    " << L.elem[i - 1].name << "   " << L.elem[i - 1].author << endl; break;
			case '3':cout << "把其修改为：";
				cin >> L.elem[i - 1].author;
				cout << L.elem[i - 1].no << "    " << L.elem[i - 1].name << "   " << L.elem[i - 1].author << endl; break;
			default:break;
			}




		}
	}

}


void Create(SqList &L, int n)            //创建图书信息
{
	int i;

	for (i = 0; i < n; i++)
	{
		cout << "请分别输入第" << i + 1 << "本书的书号、书名、作者" << endl;
		cin >> L.elem[i].no >> L.elem[i].name >> L.elem[i].author;

		L.length++;
	}
}
void Printf(SqList &L)
{
	int i;
	cout << "/---------------------  存在以下图书  ----------------------------------/" << endl;
	cout << "       " << setw(10) << left << "序号" << setw(10) << left << "书号" << setw(30) << left << "书名" << setw(10) << left << "作者" << endl << endl;
	for (i = 0; i<L.length; i++)
	{
		cout << "        " << setw(10) << left << i + 1 << setw(10) << left << L.elem[i].no << setw(30) << left << L.elem[i].name << setw(10) << left << L.elem[i].author << endl;
	}
	cout << "/-----------------------------------------------------------------------/" << endl;
}
void main()
{
	SqList L;
	Book B;
	char n[20];
	int m = 0;
	char s = 0;
	InitList(L);
	cout << "/------------------------欢迎进入图书管理系统---------------------------/" << endl;
	cout << "创建图书信息" << endl;
	cout << "请输入书本数目：";
	cin >> m;
	Create(L, m);
	Printf(L);
	while (1)
	{
		cout << "请选择要进行的操作 ： 1：查找     2： 插入     3： 删除     4：修改    0: 显示：   ：" << endl;
		cin >> s;
		switch (s)
		{
		case '0':  Printf(L); break;
		case '1':  LocateElem(L); break;
		case '2':  ListInsert(L, L.length); break;
		case '3':  ListDelete(L); break;
		case '4':  Update(L); break;
		}
	}

	system("pause");
}
