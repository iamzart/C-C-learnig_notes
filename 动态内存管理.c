#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//空间开辟的大小是固定的
//数组空间一旦确定了大小不能调整


/*
开辟好了这块空间，把其实地址返回给你

强转成期望用的指针类型，返回一个指针变量

这是把数字放到这个地址里了 stdlib.h

free完，p还记得当时的地址，p就是个野指针

为了让他忘记，就让他归空

局部变量超过范维空间就回收了，自动还给系统

free失手动，通过代码方式释放内存

free里的p必须指向动态的

*/


/* malloc 动态内存开辟函数*/
//void* malloc(size_t size);
//这个函数像内存申请一块连续的空间，并返回这块空间的指针
//成功--返回指向空间的指针
//失败--返回null


//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	//申请十个整数的大小
//	if (p == NULL)
//	{
//		//空间开辟失败
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	return 0;
//}
//


/*free*/
//专门的动态内存的释放和回收
//void free(void* ptr);
// int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	//申请十个整数的大小
//	if (p == NULL)
//	{
//		//空间开辟失败
//		perror("malloc");
//		return 1;
//	}
	/*int i = 0;
	for (i; i < 10; i++)
	{
		p[i] = i + 1;
	}*/
//	free(p);
//	p = NULL;//通过代码的方式释放内存
//	//如果不释放，程序结束时也会被操作系统自动回收
//	return 0;
//}

 //malloc和free最好 成对使用！




/*calloc*/
//void* calloc(size_t num,size_t size);
//申请十个整形的空间
// calloc(10,sizeof(int));





/*realloc*/
//调整
//void* realloc(void* ptr, size_t size);
 //ptr是要调整的内容地址
//size是调整之后的大小


/*两种情况*/
/*
1.源空间之后有足够大的空间
直接追加，源空间数据不变

2.源空间之后没有有足够大的空间
在堆空间上找一个合适大小的连续空间使用，返回的是新的内存地址
*/

/*
p是起始地址，相当于数组名
malloc不初始化
calloc把值初始化成0

realloc如何扩容？
第二种情况 如果空间不够，会直接在内存堆区找一块新的满足大小的空间
将旧的数据拷贝到新的空间
释放就的空间
返回新的地址

不能让p直接接受，因为如果失败了，就会返回空指针，就把p也搞空了数据都丢了
*/


/*常见错误*/

//对NULL解引用
//给的值大，p是空指针就全错了

//对动态开辟空间的越界访问
//for循环超了

//对非动态使用free释放
//不能是局部变量

//free释放一块动态内存的一部分
//循环玩5次，p指向第六个，不是起始位置了，不能中途释放

//对同一块多次释放

//忘记释放-内存泄漏
//使用完就释放

//不能对NULL解引用，会崩

//栈空间就是临时空间，可以返回值，不能返回地址

//返回栈，得到野指针

//ptr都没有初始化，不能解引用，不然是野指针

