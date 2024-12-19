#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* sizeof 和strlen 的对比 */
//sizeof是操作符，计算变量所占内存空间的大小，单位是字节，只关注内存大小，不在乎是什么数据
//strlen是c语言里的库函数，求字符串长度，只针对字符串（字符数组）
//统计的是字符串中\0之前的字符个数

/* 数组和指针笔试题解析 */
//数组名是数组首元素的地址
//例外：1.sizeof数组名 2.&数组名

//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	printf("%zd", sizeof(a));//数组名单独放在sizeof,a表示整个数组，计算的是整个数组的大小，单位是字节
//	printf("%zd", sizeof(a+0));//a是数组名表示首元素的大小
//	printf("%zd", sizeof(*a));//这里数组名不是例外，依然是首元素的地址，a[0]
//	printf("%zd", sizeof(a + 1));//同上，a[1]的地址
//	printf("%zd", sizeof(&a));//取出的是整个数组的地址
//	printf("%zd", sizeof(*&a));//1. 这里的*和&抵消了 
//	                           //2. &a是数组的地址，类型是：int(*)[4],对数组指针解引用，访问的是这个数组
//	printf("%zd", sizeof(&a+1));//&a是数组的地址，这个是跳过数组后的那个位置的地址，是地址，都是4/8个字节
//	printf("%zd", sizeof(&a[0]+1));//第二个元素的地址
//	return 0;
//}



/* 字符数组 */
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr+0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr+1));//4/8
//	printf("%d\n", sizeof(&arr[0]+1));//4/8
//	
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%zd\n", strlen(arr));//随机值
//	printf("%zd\n", strlen(arr + 0));//随机值
//	printf("%zd\n", strlen(*arr));
//	//*arr是首元素--'a'-97,传给strlen后，strlen会认为97就是地址，然后去访问内存，程序会崩盘
//	printf("%zd\n", strlen(arr[1]));//同上
//	printf("%zd\n", strlen(&arr));//随机值
//	printf("%zd\n", strlen(&arr + 1));//随机值
//	printf("%zd\n", strlen(&arr[0] + 1));//随机值
//
//	return 0;
//}
//只要是地址，大小就是4/8
//数组的地址和数组首元素的地址是指向同一位置的，strlen也是从第一个元素开始向后访问的

//指针变量的大小是4/8，是地址

#include<string.h>
int main()
{
	const char* p = "abcdef";
	return 0;
}