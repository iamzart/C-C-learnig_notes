#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
数组名是首元素的地址例外
1.sizeof(数组名)
这里的数组名是整个数组大小，单位是字节
2.数组名
表示整个数组，取出的是整个数组的大小
*/
//指针类型决定了指针的差异
//使用下标的方式访问数组
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//        printf("%d", arr[i]);
//	}
//	return 0;
//}
//用指针
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* pa = arr;//pa是数组首元素的地址，让pa++，就是再向后访问数组中的元素
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", pa+i);//scanf这里应该是地址类型，pa就是下标为0元素的地址，加i就是下标为i元素的地址
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(pa+i));
//	}
//	return 0;
//}
//*(arr+i) = arr[i]
//1.数组就是数组，是一块连续的空间，是可以存放一个或者多个数组的
//2.指针变量是一个变量，是可以存放地址的变量
//数组和指针不是一回事，但是可以用指针来访问数组
/*
* 为什么可以使用指针来访问数组呢?
* 1.数组在内存中是连续存放的
* 2.指针的元素很方便的可以遍历数组，取出数组的内容（指针运算）
*/

//一维数组传参的本质
/*
数组传参的本质 传递的是数组首元素的地址
所以形参即使写成数组的形式，本质上也是指针数量变量
写成数组的形式为了方便理解，容易上手
即使写成数组，本质还是int* arr
*/
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	return 0;
//}


/*冒泡排序*/
//思想：两两相邻的元素去比较，不满足顺序就交换，满足就找下一对
//外边一共sz - 1趟，因为最后一个会自动升起来不用动它
// 
//void input(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);//bingo
//	}
//}
//void bubble_sort(int *arr,int sz)//函数括号里要写参数!!!
//{
//	for (int i = 0; i < sz - 1; i++)//确定趟数
//	{
//		int flag = 1;//假设已经满足顺序
//		//内部的比较，两两之间[j]vs[j+1]
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if(arr[j]>arr[j+1])//默认前边比后边小（升序），如果不满足就交换
//			{ 
//				flag = 0;//还不是有序
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)//并没有让他等于0，也就是没有出现不满足顺序的情况
//			break;//跳出的是i的循环
//		//走完第一趟了一个都没有交换，任意两两之间都没交换，证明已经换好了
//	}
//}
//void print_arr(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", *(arr + i));
//}
//int main()
//{
//	//写一个输入函数
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	input(arr, sz);
//	//排序 - 写一个函数完成数组的排序 排成升序
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
// }



/*二级指针*/
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%p %p", pa, ppa);
//	return 0;
//}
//二级指针是用来存放一级指针变量的地址 


//指针数组
//学会类比！！
/*
* char arr[10] 字符数组 - 存放字符的数组
* int arr[10] 整型数组 - 存放整形的数组
* 指针数组 - 存放指针的数组，数组中每个元素都是指针类型
 */
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* arr[3] = { pa,pb,pc };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* arr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%p\n", arr[i]);
//	}
//	return 0;
//}
//arr[i][j] = *(*(arr[i])+j)
//int main()
//{
//	char ch = 'w';
//	char* pch = &ch;
//	printf("%c", *pch);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//这里的复制是将字符串中首字母的地址赋给p
//	//数组里面能被修改，常量字符串不行
//	//使用%s打印字符串，只需提供首字符的地址
//	//常量字符串 指针指向的就是字符串首元素的地址
//	printf("%s", p);
//	return 0;
//}


/*
* 数组指针变量
* 整形指针变量：int* pint 存放的是整型变量的地址
* 数组指针：存放的是数组的地址
*/

	//int (*p)[10] = &arr;//p就是数组指针，p中存放的是数组的地址
	//p与*结合是数组指针类型
	/*
	arr--int*--跳过四个字节（一个元素）
	&arr[0]--int* 跳过四个字节
	&arr --int(*) 跳过四十个字节
	*/
	
