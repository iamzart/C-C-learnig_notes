#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<assert.h>


/* �ַ����ຯ�� */
//c��������һϵ�еĺ�����ר�����ַ�����ģ�Ҳ����һ���ַ�������ʲô���͵��ַ���
//ͷ�ļ�#include<ctype.h>


//дһ�����򣬰�Сд��ɴ�д
//1.��������ַ�����
//2.��Сдת��

//int main()
//{
//	char arr[] = "I am a student.";
//	int i = 0;
//	//�����������ĩβ��һ����/0�������û��������������˵����û������
//	while (arr[i] != '\0')
//	{
//		//��ʼת
//		if (islower(arr[i]))//������Ԫ����Сд
//			//Сд-32 = ��д
//			arr[i] -= 32;
//		i++;//û�������ͽ���������
//	}
//	//ѭ��������ת������
//	printf("%s", arr);
//	return 0;
//}


//���Ȳ������Ƶĺ���

/* �ַ�ת������ */

//int tolower (int c);��дתСд
//int toupper (int c);Сдת��д

//int main()
//{
//	char ch = toupper('c');
//	printf("%c", ch);
//	return 0;
//}

/* strlen��ʹ�ú�ģ��ʵ�� */
//strlen�������ص������ַ�����'\0'֮ǰ���ַ�����

//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = strlen(arr);
//	printf("%zd", len);
//	return 0;
//}
//size_t��Ϊ���صĳ��Ȳ�����0�͸���
//�����޷������ͼ���Ľ��Ҳ���޷��ŵ�

//���캯����ʱ�򣬺�����ǰ���Ƿ�������



/* �Լ�����һ��strlen���� */

//����1��������

//#include<assert.h>
//size_t my_strlen(const char* str)//���ܵ����ַ���Ԫ�صĵ�ַ����Ϊ������arr
//{
//	int count = 0;
//	assert(str != NULL);//�Է����ǿ�ָ��
//	while (*str != '\0')//str�Ǹ�ָ�����ͣ���Ԫ�صĵ�ַ�������ò�����Ԫ��
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


//����2��ָ��-ָ��
//ָ������õ������м�Ԫ�ظ���

//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	const char* start = str;//��start����¼str�ʼ��ָ�룬�����Ҫ�����ı�����һ��ָ��
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


//����3���ݹ�

//�ݹ�Ҫ����������ܻع飬�е��ƣ��ֻع�
//������һ����һ��һ��������ޣ��Ͳ����������˿�ʼ�ع�
 
 
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


/* strcpy��ģ���ʵ�� */
//strcpy(destination,source),����ָ�����ͣ�������Ҳ���ԣ�������Ԫ�صĵ�ַ����Ӧָ��
//������1.Դͷ���ַ����б����С�/0����û�еĻ����ܽ���
//      2.��/0��Ҳ�´����Ŀ��ռ�
//      3.Ŀ��ռ��㹻��
//      4.Ŀ��ռ���޸� eg�������ַ��������޸�

//int main()
//{
//	char arr1[] = "love u.";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//ģ��

#include<assert.h>
/* ��� */

//void my_strcpy(char* des, const char* str)//��ΪԴ�ַ�����ϣ�����ı�
//{
//	assert(des && str);//ȷ��des��str�����ǿ�ָ��
//	char* ret = des;
//	while (*des++ = *str++)//������ȥ���жϱ��ʽ��ֵ��������0����ȥ���ж�Ϊ�٣�ֹͣѭ��
//	{
//		;
//	}
//	return ret;
//}

/* ��һ�� ����� ��0�ֿ��� */

//char* my_strcpy(char* des, const char* str)//��ΪԴ�ַ�����ϣ�����ı�
//{
//	assert(des && str);//ȷ��des��str�����ǿ�ָ��
//	char* ret = des;
//	while (*str != '\0')
//	{
//		*des = *str;//��Դ�ַ�������Ŀ���ַ���
//		str++;
//		des++;
//	}//���һλ���ֵ�'\0'�ˣ�����ѭ���ˣ��ٵ���������/0��λ���ٸ�ֵ
//	*des = *str;
//	return ret;
//}


/* �ڶ��� ��΢���� */
//char* my_strcpy(char* des, const char* str)//��ΪԴ�ַ�����ϣ�����ı�
//{
//	assert(des && str);//ȷ��des��str�����ǿ�ָ��
//	char* ret = des;
//	while (*str != '\0')
//	{
//		*des++ = *str++;//��Դ�ַ�������Ŀ���ַ���
//	}//���������ٸ�������һ����++��Ҳȥ������/0
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

/* strcat��ģ��ʵ�� */
//char* strcat(char* destination , const char* source)

//1.�ҵ�Ŀ��ռ��\0��Դ�ַ���������\0��֪�����Ľ���
//3.Ŀ���ַ�����\0��֪������׷��
//2.�ٽ�ԭ�ַ�����������
//4.Ҫ��֤Ŀ��ռ��㹻���ҿ��޸ģ����ɳ����ַ���


//Ҫ��arr2׷�ӵ���ߣ����ҵ�arr1Ŀ��ռ��\0
//������

//char* my_strcat(char* des, const char* src)
////Ҫ����Ŀ��ռ����ʼ��ַ
////����ʼ��ַ������
//{
//	char* ret = des;
//	//��һ����б��0
//	assert(des && src);
//	while (*des != '\0')
//	{
//		des++;//��ʱǡ��ָ��'\0'
//	}
//	//�ڶ���������
//	while (*des++ = *src++)
//	{
//		;//��˼�ǣ���һ��ʱdesǡ��ָ��'\0',������ʹ�ðѡ�\0������������������ʣ���Դ�ַ���������Ŀ���ַ�����
//	}
//}
//
///*
//0--����
//��\0��--\ddd��ʾ1-3���˽�������
//\0--ASCIIֵ��0
//*/
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

/* strcmp��ģ���ʵ�� */
//���������ַ�����С�Ƚϵ�
//int strcmp(const char* str1,const char* str2);
//�ȶ�Ӧλ�õ��ַ��Ĵ�С�����ǳ���
//ǰ<�󣬷��ظ�����ǰ=�󣬷���0��ǰ>�󣬷�������

//˼·�������ַ��Ƚϣ���Ⱦͼ���������

//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//		if (*str1 == '\0')//������ȲŽ����ģ���ߵ���ɶ�ұ�Ҳ����ɶ
//			return 0;
//	}
//	//�����ǲ���ȵ�
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



//���������Ƶ��ַ�������

/* strncpy */
//char* strncpy(char* destination,const char* source,size_t num);
//num : ��󿽱��ַ��ĸ���

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = { 0 };
//	strncpy(arr2, arr1,3);
//	printf("%s", arr2);
//	return 0;
//}


/* strncat ׷�� */
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


/* strtok ��ʹ�� */
//char* strtok(char* str, const char* sep);
//sep����ָ��һ���ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�������ָ����ָ�ı��
//һ���ԭ������������һ������������������
//strtok�����ҵ�str��һ����ǣ���������\0��β������һ��ָ�������ǵ�ָ��
/* ��strtok�����ָ���ַ���һ�㶼����ʱ�����������ҿ��޸� */
//��һ��������ΪNULL�������ҵ���һ����ǣ����������������ַ����е�λ��
//strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
//����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��

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

//forѭ����ʼ������ֻ�ᱻִ��һ��
//�����ڿ�ָ��Ϊ�棬����ѭ��

//int main()
//{
//	char arr[] = "zyiwen@yeah.net";
//	char buf[256] = { 0 };
//	char* sep = "@.";
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(buf, sep); ret != NULL; ret = strtok(NULL, sep))//�����ؿ�ָ����ǻ����ڸ���ı��
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

/*��������������е���˼*/