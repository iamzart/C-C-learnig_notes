#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//变量有地址，数组也有地址,那函数呢？
//int Add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    printf("%p\n", &Add);
//    //函数名和&函数名都是函数的地址，没有区别
//    int (*pf)(int, int) = &Add;//pf函数指针变量，pf要和*结合
//    /* 用指针去调用函数 */
//    //先给它解引用
//    int ret = (*pf)(4, 5);
//    printf("%d", ret);
//    return 0;
//}
//变量去掉名字是它的类型 int(*)(int,int)

/*有趣的代码*/
//int main()
//{
//	(*(void(*)())0)();//函数指针类型，强制类型转换，没有参数，不返回
//	//意思：是一次函数调用，调用0处的地址放的那个函数
//	return 0;
//}
//int main()
//{
//	void (*signal(int, void(*)(int)) )(int);
//	return 0;
//

//typedef unsigned int unit;
//int main()
//{
//	unit num2;
//	return 0;
//}

/*把整形指针 int* p 重命名*/
//
//typededf int* pint_t;
//int main()
//{
//	pint_t p2;
//	return 0;
//}


//typededf int(*parr_t)[6]//把新的类型名放在*旁边
//int main()
//{
//	int arr[6] = { 0 };
//	int(*p)[6] = &arr;//p是数组指针变量名字
//	int parr_t p2 = &arr;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//typededf int (*pa_t)(int, int);
//int main()
//{
//	int (*pa)(int, int) = Add;
//	return 0;
//}
//int (*pa)(int,int)是函数指针变量，
//int (*)(int,int)去掉名字是函数指针类型

/*函数指针数组*/
//int main()
//{
//	int (*pf[4])(int, int) = { Add,Sum,Mul,Div };
//
//	for (int i = 0; i < 4; i++)
//	{
//		int ret = pf[i](6, 2);
//		printf("%d ", ret);
//}
//	return 0;
//}
////存放的是函数的数组

