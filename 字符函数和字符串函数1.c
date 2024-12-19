#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<assert.h>


/* 字符分类函数 */
//c语言中有一系列的函数是专门做字符分类的，也就是一个字符是属于什么类型的字符的
//头文件#include<ctype.h>


//写一个程序，把小写变成大写
//1.遍历这个字符数组
//2.大小写转换

//int main()
//{
//	char arr[] = "I am a student.";
//	int i = 0;
//	//现在这个数组末尾有一个‘/0’，如果没有遇到他，就是说明还没遍历完
//	while (arr[i] != '\0')
//	{
//		//开始转
//		if (islower(arr[i]))//如果这个元素是小写
//			//小写-32 = 大写
//			arr[i] -= 32;
//		i++;//没有遇到就接着往下走
//	}
//	//循环结束，转换完了
//	printf("%s", arr);
//	return 0;
//}


//长度不受限制的函数

/* 字符转换函数 */

//int tolower (int c);大写转小写
//int toupper (int c);小写转大写

//int main()
//{
//	char ch = toupper('c');
//	printf("%c", ch);
//	return 0;
//}

/* strlen的使用和模拟实现 */
//strlen函数返回的是在字符串中'\0'之前的字符个数

//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = strlen(arr);
//	printf("%zd", len);
//	return 0;
//}
//size_t因为返回的长度不能是0和负数
//两个无符号整型计算的结果也是无符号的

//创造函数的时候，函数名前的是返回类型



/* 自己创造一个strlen函数 */

//方法1：计数器

//#include<assert.h>
//size_t my_strlen(const char* str)//接受的是字符首元素的地址，因为传的是arr
//{
//	int count = 0;
//	assert(str != NULL);//以防他是空指针
//	while (*str != '\0')//str是个指针类型，首元素的地址，解引用才是首元素
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd", len);
//	return 0;
//}
//


//方法2：指针-指针
//指针相减得到的是中间元素个数

//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	const char* start = str;//用start来记录str最开始的指针，后边他要递增的变成最后一个指针
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd", len);
//	return 0;
//}


//方法3：递归

//递归要把数算完才能回归，有递推，又回归
//像剥洋葱一样，一层一层剥到极限，就不再往下推了开始回归
 
 
//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd", len);
//	return 0;
//}


/* strcpy的模拟和实现 */
//strcpy(destination,source),都是指针类型，数组名也可以，代表首元素的地址，对应指针
//条件：1.源头的字符串中必须有‘/0’，没有的话不能结束
//      2.‘/0’也会拷贝到目标空间
//      3.目标空间足够大
//      4.目标空间可修改 eg：常量字符串不能修改

//int main()
//{
//	char arr1[] = "love u.";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//模拟

#include<assert.h>
/* 最精简 */

//void my_strcpy(char* des, const char* str)//因为源字符串不希望被改变
//{
//	assert(des && str);//确保des和str都不是空指针
//	char* ret = des;
//	while (*des++ = *str++)//拷贝过去后，判断表达式的值，当‘、0’过去，判断为假，停止循环
//	{
//		;
//	}
//	return ret;
//}

/* 第一版 最不精简 、0分开的 */

//char* my_strcpy(char* des, const char* str)//因为源字符串不希望被改变
//{
//	assert(des && str);//确保des和str都不是空指针
//	char* ret = des;
//	while (*str != '\0')
//	{
//		*des = *str;//把源字符串赋给目标字符串
//		str++;
//		des++;
//	}//最后一位，轮到'\0'了，跳出循环了，再单独自增到/0这位，再赋值
//	*des = *str;
//	return ret;
//}


/* 第二版 稍微精简 */
//char* my_strcpy(char* des, const char* str)//因为源字符串不希望被改变
//{
//	assert(des && str);//确保des和str都不是空指针
//	char* ret = des;
//	while (*str != '\0')
//	{
//		*des++ = *str++;//把源字符串赋给目标字符串
//	}//最后用完后，再给他致命一击的++，也去包括了/0
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

/* strcat的模拟实现 */
//char* strcat(char* destination , const char* source)

//1.找到目标空间的\0，源字符串必须有\0才知道从哪结束
//3.目标字符串有\0才知道从哪追加
//2.再将原字符串拷贝过来
//4.要保证目标空间足够大，且可修改，不可常量字符串


//要把arr2追加到后边，先找到arr1目标空间的\0
//拷贝：

//char* my_strcat(char* des, const char* src)
////要返回目标空间的起始地址
////把起始地址存起来
//{
//	char* ret = des;
//	//第一步找斜杠0
//	assert(des && src);
//	while (*des != '\0')
//	{
//		des++;//这时恰好指向'\0'
//	}
//	//第二步，拷贝
//	while (*des++ = *src++)
//	{
//		;//意思是，上一步时des恰好指向'\0',这是先使用把’\0‘顶替掉，继续向后访问，把源字符串都赋到目标字符串里
//	}
//}
//
///*
//0--数字
//’\0‘--\ddd表示1-3个八进制数字
//\0--ASCII值是0
//*/
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

/* strcmp的模拟和实现 */
//用来进行字符串大小比较的
//int strcmp(const char* str1,const char* str2);
//比对应位置的字符的大小，不是长度
//前<后，返回负数，前=后，返回0，前>后，返回正数

//思路：两个字符比较，相等就继续向后访问

//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//		if (*str1 == '\0')//他俩相等才进来的，左边等于啥右边也等于啥
//			return 0;
//	}
//	//以下是不相等的
//	if (*str1 > str2)
//		return 1;
//	else
//		return -1;
//	//return (*str1 - str2);
//}
//
//int main()
//{
//	char arr1[] = "abq";
//	char arr2[] = "abq";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}



//长度受限制的字符串函数

/* strncpy */
//char* strncpy(char* destination,const char* source,size_t num);
//num : 最大拷贝字符的个数

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = { 0 };
//	strncpy(arr2, arr1,3);
//	printf("%s", arr2);
//	return 0;
//}


/* strncat 追加 */
//char* strncat(char* destination, const char* source, size_t num);

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "xxxxxxxxx";
//	strncat(arr1, arr2,3);
//	printf("%s", arr2);
//	return 0;
//}


/* strncmp */
//int strncmp(const char* str1,const char* str2,size_t);

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "abcq";
//	int ret = strncmp(arr1, arr2, 3);
//	printf("%d", ret);
//	return 0;
//}
//


/* strtok 的使用 */
//char* strtok(char* str, const char* sep);
//sep参数指向一个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或多个分隔符分割的标记
//一般把原函数拷贝到另一个数组里，用这个拷贝的
//strtok函数找到str下一个标记，并将其用\0结尾，返回一个指向这个标记的指针
/* 被strtok函数分割的字符串一般都是临时拷贝的内容且可修改 */
//第一个参数不为NULL，函数找到第一个标记，函数将保存他在字符串中的位置
//strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//如果字符串中不存在更多的标记，则返回NULL指针

//int main()
//{
//	char arr[] = "zyiwen@yeah.net";
//	char buf[256] = { 0 };
//	strcpy(buf, arr);
//	//char sep[] = "@.";
//	char* sep = "@.";
//
//	return 0;
//}

//for循环初始化部分只会被执行一次
//不等于空指针为真，进入循环

//int main()
//{
//	char arr[] = "zyiwen@yeah.net";
//	char buf[256] = { 0 };
//	char* sep = "@.";
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(buf, sep); ret != NULL; ret = strtok(NULL, sep))//不返回空指针就是还存在更多的标记
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

/*这个函数不错，还有点意思*/