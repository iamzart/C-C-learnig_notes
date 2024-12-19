#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* 内存函数 */

//针对内存块来处理的

//memcpy -- 内存拷贝
//memmove -- 内存移动
//memset -- 内存设置
//memcmp -- 内存比较

/* memcpy的使用和模拟实现 */
//void* memcpy(void* destination, const void* source,  size_t num);
//               目标空间的地址    源空间的地址      被拷贝的字节个数
//目标空间可修改，足够大
//不限类型所以用void
//返回的是目标空间的起始地址
//int main()
//{
//	char arr1[] = { 1,2,3,4,5,6,7 };
//	//拷贝1，2，3，4到arr2里
//	char arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);
//	return 0;
//}
//这个函数遇到\0并不会停下来

//错误写法：(char*)dest++,因为强制类型转换是临时的，这里先使用后加加，自增的时候已经不是char*了
//不拷贝重叠的内存，非要使用，结果未定义
//涉及到重叠，用memmove

#include<assert.h>
#include<string.h>


//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	//定义两个指针，把源解引用赋给另一个
//	assert(src && dest);
//	void* ret = dest;
//	//因为要一个字节一个字节去，所以强制转换成char*
//	while (num--)//先用再减，16-1 共十六次
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	//拷贝1，2，3，4到arr2里
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}


/*memmove的模拟实现*/


//void* my_memmove(void* dest, const void* src,size_t num)
//{
//	assert(dest && src);
//	//主要是把src的元素赋给dest
//	void* ret = dest;
//	if(dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;//先赋再自增
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)dest + num);
//			//第一次：num使用后进来时19，dest首元素的地址，向后移动19个字节就是最后一个
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1 = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[10] = {0};
//	my_memmove(arr2, arr1 + 1, 24);//把2，3，4，5，6，7拷贝到arr2里
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}


/*memset 函数的使用*/

//void* memset(void* ptr,int value,size_t num)
//ptr-要被填充的指针
//要设置的值
//要设置的字节



/*memcmp 函数的使用*/

//void* memcmp(const void* ptr1,const void* ptr2,size_t num)