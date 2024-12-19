#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*枚举*/
//把可能的取值一一列举
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

//优点：
//1.增加代码的可读性和可维护性
//2.使用方便，一次性定义多个常量
//3.枚举声明在函数内，只能在函数内使用



/*
关键字：
联合体-union
结构体-struct
枚举-enum
*/



/*联合体*/

//像结构体一样，联合体也是有一个或多个成员构成，可是不同类型
//特点：
//1.只为最大的成员分配足够的内存空间
//2.所有成员共用一块内存空间，也叫共用体
//3.这一个联合变量的大小，至少是最大成员的大小
//4.最大成员大小要像最大对齐数的整数倍看齐


//给联合体其中一个成员赋值，其他成员也跟着变化


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
//	int stock_num;//库存量
//	double price;
//	int item_type;//商品类型
//	union {
//		struct
//		{
//			char title[20];
//			char author[20];
//			int num_page;
//		}book;
//		struct {
//			char design[30];//设计
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


