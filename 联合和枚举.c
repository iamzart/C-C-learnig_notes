#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*ö��*/
//�ѿ��ܵ�ȡֵһһ�о�
//enum Day
//{
//	MON,
//	TUES,
//	WED,
//	THUR,
//	FRI,
//	SAT,
//	SUN
//};

//�ŵ㣺
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.ʹ�÷��㣬һ���Զ���������
//3.ö�������ں����ڣ�ֻ���ں�����ʹ��



/*
�ؼ��֣�
������-union
�ṹ��-struct
ö��-enum
*/



/*������*/

//��ṹ��һ����������Ҳ����һ��������Ա���ɣ����ǲ�ͬ����
//�ص㣺
//1.ֻΪ���ĳ�Ա�����㹻���ڴ�ռ�
//2.���г�Ա����һ���ڴ�ռ䣬Ҳ�й�����
//3.��һ�����ϱ����Ĵ�С������������Ա�Ĵ�С
//4.����Ա��СҪ����������������������


//������������һ����Ա��ֵ��������ԱҲ���ű仯


//union Un
//{
//	char ch;
//	int i;
//};
//int main()
//{
//	//initialization
//	union Un un = { 0 };
//	printf("%p\n", &(un.ch));
//	printf("%p\n", &(un.i));
//	printf("%zd", sizeof(un));
//	return 0;
//}


//struct gift_list
//{
//	int stock_num;//�����
//	double price;
//	int item_type;//��Ʒ����
//	union {
//		struct
//		{
//			char title[20];
//			char author[20];
//			int num_page;
//		}book;
//		struct {
//			char design[30];//���
//		}mug;
//		struct {
//			char design[30];
//			char colour[20];
//			int sizes;
//		}shirt;
//	}item;
//};
//
//int main()
//{
//	printf("%d %lf %d ")
//	return 0;
//}


