#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int n = 0, m = 0, i = 0;
//	int count = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		//循环输入数组
//	}
//	scanf("%d", &m);
//	if(arr[i] != m)
//	{
//		for (i = 0; i < n - 1; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	//while (arr[i] != m)
//	//{
//	//	printf("%d ", arr[i]);
//	//	count++;
//	//	if (count == n - 1)
//	//		break;
//	//}//这里用while不行，会一直打印，得让他停下来
//	return 0;
//}
//我犯的错误是 if那里写了while，我是想写当那个时候，在循环打印数组，但while本身就是循环，所以会死循环，再上来第一个元素还不是m，就会一直往下}

//以上是我写的，我做的是只是不打印出那个要删除的元素，可并没在数组里删去它

int main()
{
    int n = 0, m = 0, i = 0;
    int arr[50] = { 0 };
    scanf("%d", &n);
    //循环输入数组
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //输入要删除的数
    scanf("%d", &m);
    //去改变数组
    for (i = 0; i < n; i++)
    {
        if (arr[i] == m)
            break;
    }//这时跳出循环，i为要删除的元素的下标
    //把后边的值顶上来，从arr[i]开始
    while (i < n - 1)
    {
        //此时arr[i]是要删除的元素
        arr[i] = arr[i + 1];
        i++;
        //用它下一个元素覆盖它  
    }
    //此时数组已经被改变了，个数变为了n-1，最后要打印
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}