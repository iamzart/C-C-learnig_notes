#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*strstr的使用和模拟实现*/

//用来在一个字符串中找另外一个字符串是否出现过
//在1里找2
//const char* strstr(const char* str1,const char* str2);
//在str1中找str2 第一次 出现的位置
//找到了返回地址，没找到返回空指针




/*注意！！！！*/
//写个while循环就要有跳出来怎么办的相反的情况

//加const保护
//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)//要使用，保证不能为空指针
//{
//	assert(str1 && str2);
//	//以下两个指针，形参那里受const控制，下边的也要受控制，不能把受限制的地址交给不受限制的指针变量
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cur = str1;
//	//特殊情况，str2为空，直接返回str1的地址
//	if (*str2 == '\0')
//		return str1;
//	while (*cur)//*cur不是\0,
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)//相等就继续往下比较
//		{
//			s1++;
//			s2++;
//		}//不相等了或者谁为空了就跳出来
//		//但跳出来的时候如果s2为空（相等完了才为空不就是比较完了吗）
//		if (*s2 == '\0')
//			return cur;
//			//要是不是的话，就是匹配失败了cur++，重新开始
//		cur++;//但是在他++之前，用的是他第一次进来的最开始的值，所以这些操作得在它前边执行
//	}
//	//当cur都结束了跳出来了，也没返回，就是没找到，就返回空指针
//	return NULL;
//    
//}
//
//
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "def";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("不存在");
//	else
//		printf("%s", ret);
//	return 0;
//}


/*代码思路*/

// 先传两个字符串，先用cur这个指针变量把大字符串的起始地址刻下来，赋给s1，让s1指向大字符串的第一个元素，s2指向小字符串的第一个元素，
// s1和s2比较，相等了就继续，不相等就改变母cur，反正他是决定起始点的，就算找到了最后也是返回的他的地址，就是怎么也得有个开始的地址，而且是在大的里边找小的，所以从哪里开始也是大字符串决定的，
// 然后当s1和s2都没结束呢，已经不相等了，就是已经跳出了他们相等为条件的那个循环，就证明这次匹配失败了，让cur继续往后，从头来过，然后s1也跟着cur更新，来到了最开始的初始化那里，s2又等于了str2就是小字符串的第一位
//但如果他们一直相等，一直到s2==\0，那就是说小字符串包含在大字符串里面了呀，那就是匹配成功了就返回最开始记录的cur
//如果一直到大字符串都结束了，跳出cur这个循环了，那就是真正的结束了，返回空指针

//while(*cur) ==  while(*cur != '\0')
//因为当他等于\0，本身就为假，就会跳出来





/* strerror函数的使用 */

//char* strerror (int errnum);
//打印字符串需要的是地址
//每一个错误码都对应着错误信息，这个函数的功能就是输入错误码能把你的错误信息返回来

//errno --全局变量
//404 -- 错误码

//#include<errno.h>
//
//int main()
//{
//	FILE* pf = fopen("date.txt", "r");//"r” - 读，以读文件的形式，打开文件，如果这个文件不存在，就打开失败，返回一个空指针
//	if (pf == NULL)//pf为空，就是打开文件失败，会把错误码传到函数里
//	{
//		printf("打开文件失败，原因是：%s", strerror(errno));//这里放着错误码
//		return 1;
//	}
//	else
//	{
//		printf("打开文件成功");
//		fclose(pf);//有打开有关闭
//		pf = NULL;
//	}
//
//}


/*类比*/

//strerror --- 将错误码对应的错误信息的字符串的起始地址返回
//perror --- 将errno中对应的错误信息打印出来



/*perror 函数*/
//void perror(const char* str ): 
//perror函数先打印str指向的字符串，再打印冒号、空格再打印错误码对应的错误信息
//perror = printf + sreerror



//#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("data.docx", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败,原因是%s\n", strerror(errno));
//		perror("打开文件失败，原因是");
//	}
//	else
//	{
//		printf("打开文件成功");
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}


