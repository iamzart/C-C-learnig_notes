#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*冒泡排序*/
//思想：两两相邻的元素去比较，不满足顺序就交换，满足就找下一对
//外边一共sz - 1趟，因为最后一个会自动升起来不用动它
// 
void input(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", arr + i);//bingo
	}
}
void bubble_sort(int* arr, int sz)//函数括号里要写参数!!!
{
	for (int i = 0; i < sz - 1; i++)//确定趟数
	{
		int flag = 1;//假设已经满足顺序
		//内部的比较，两两之间[j]vs[j+1]
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])//默认前边比后边小（升序），如果不满足就交换
			{
				flag = 0;//还不是有序
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 1)//并没有让他等于0，也就是没有出现不满足顺序的情况
			break;//跳出的是i的循环
		//走完第一趟了一个都没有交换，任意两两之间都没交换，证明已经换好了
	}
}
void print_arr(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
		printf("%d ", *(arr + i));
}
int main()
{
	//写一个输入函数
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	input(arr, sz);
	//排序 - 写一个函数完成数组的排序 排成升序
	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}