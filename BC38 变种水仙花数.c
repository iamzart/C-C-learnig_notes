#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//先判断几位数，是几就先除1*10的n-1次方
//再循环n-1次，得到了分离出来的两位数
//再用if就行了吧

//int main()
//{
//	int count = 0, src = 0, num1 = 0, num2 = 0, src2 = 0, result = 0, sum = 0;
//	for (int i = 10; i <= 10000; i++)
//	{    
//		src = i;//没必要
//		while (src)
//		{
//			count++;//可以删掉，直接把长度固定就行
//			src /= 10;
//		}//判断几位数，为count位数
//		count -= 1;没必要
//		src2 = count;没必要
//		for (int j = 0; j < count; j++)
//		{
//			i = src;//本来的值还给他 没必要
//			num1 = i / pow(10, src2);
//			num2 = i - pow(10, src2);//得到第一次分离的两个数
//			src2--;
//			result = num1 * num2;
//			sum += result;
//		}
//		if (sum = i)
//			printf("%d", i);
//	}
//	printf("\n");
//	return 0;
//}

/*自己写的错了！哈哈哈，错误点如下*/
//1.首先题目看错了，人家说是五位数，你写的五位数以内的
//2.把操作放到一个循环里，i外循环遍历，j内循环操作
//3.拆分低位的时候，取模要比减法高级一点哈
//终于懂老师说的 都换掉，不要用人家循环变量i做测试哈 ，我给i基础初始值的那步没啥必要，因为i没有变，因为操作后把值赋给别人了
//把位数和循环结合到一起很方便，每次循环，需要用到位数的地方也会跟着改变





int main()
{
    int sum, num1, num2, result;

    // 遍历5位数
    for (int i = 10000; i <= 99999; i++)
    {
        sum = 0;  // 每个数字的拆分后乘积和
        int len = 5;

        // 对每种拆分方式进行循环
        for (int j = 1; j < len; j++)
        {
            // 通过位置 j 将数字拆分成 num1 和 num2
            num1 = i / pow(10, len - j);  // 拆分出高位部分
            num2 = i % (int)pow(10, len - j);  // 拆分出低位部分

            // 计算这两个数字的乘积并加到 sum
            result = num1 * num2;
            sum += result;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}