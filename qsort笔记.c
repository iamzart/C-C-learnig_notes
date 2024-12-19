#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*qsort 是C语言中的一个库函数
这个函数是用来对数据进行排序，对任意数据类型都可以排序
底层使用的快速排序
*/
//void qsort(void* base,//指向待排序数组的第一个元素的指针
//	size_t num,//base指向数组中的元素个数
//	size_t size,//base指向数组中一个元素的大小，单位是字节
//	int(*cmp)(const void*, const void*)//函数指针，传递函数的大小
//);
/*比较字符串大小时不能用操作符，要用strcmp函数 */

//测试qsort 来排序整形数据
// //使用qsort就是要提供一个比较两个数的函数
//void类型不能解引用
//*(int*)p1是 把p1(void型)强制转换成整形指针，再解引用

//int cmp_int(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 < *(int*)p2)
//		return -1;
//	else
//		return 0;
//}
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//void test1()
//{
//	int arr[] = { 3,6,5,8,9,4,1,2,7,5,6,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//int mian()
//{
//	test1();
//	return 0;
//}


//结构体
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct Stu s = { "zhangsan",20 };
//	printf("%s %d", s.name, s.age);
//	struct Stu* ps = &s;
//	printf("%s %d", (*ps).name, (*ps).age);
//	printf("%s %d", ps->name, ps->age);
//}
/*结构体成员访问操作符
.      结构体变量.成员名
->     结构体指针->成员名
*/

//strcmp比较的不是字符串的长度，而是对应位置上字符的大小
