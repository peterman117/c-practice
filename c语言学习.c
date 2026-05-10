#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*int main()
{
	printf("hello world\n");
	return 0;
}*/
//ctrl+k+c=注释，ctrl+k+u=解除注释;
//ctrl+d=快速复制一行；
//数据类型;
/*int main()
{
	printf("%zu\n", sizeof(char));//1
	printf("%zu\n", sizeof(int));//4
	printf("%zu\n", sizeof(double
		));//8
	printf("%zu\n", sizeof(short));//2 
	printf("%zu\n", sizeof(long));//4
	return 0;
}*/
//zu表示无符号整形；
//计算机的单位：bit比特，byte字节，kb,mb,gb,tb,pb;
//8bit = 1byte;后面都是1024；
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int num = num1 + num2;
//	printf("%d\n", num);
//	return 0;
//}
/*extern int a;
void test()
{
	printf("test--->%d\n", a);
}
int main()
{
	test();
	printf("%d\n", a);
	return 0;
}*/
//enum color
//{
//	RED,YELLOW,BLUE
//};
//int main()
//{
//	const int a = 10;
//	//char arr[a] = { 0 };
//	printf("%s\n", "RED");
//	return 0;
//}
//int main()
//{
//	char arr1[] = { "12345" };
//	char arr2[] = { '1','2','3','4','5' ,'\0'};
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	return 0;	
//}
//f10是调试，%zu打印sizeof的返回值；
//\n换行，\0字符串结束标志，\xdd:dd表示2个十六进制数，\ddd(1~3个数）表示八进制数，\t水平制表符=tab，\r回车，\\表示反斜杠；
//a=97,A=65,0=48，ascll编码值；
//int main()
//{
//	printf("%c\n", '\x63');
//	printf("%c\n", '\130');
//	return 0;
//}

//选择语句：if-else，switch语句
//int main()
//{
//	int input = 0;
//	printf("加入比特(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好的offer");
//	}
//	else
//	{
//		printf("卖红薯");
//	}
//	return 0;
//
//}
 /*循环：while语句，for语句，do...while*/
//int main()
//{
//	printf("加入比特");
//	int line = 0;
//	while (line < 20000)
//	{
//		line++;
//		printf("我要好好敲代码，积累%d\n", line);
//	}
//	if (line >= 20000)
//	{
//		printf("进入大厂\n");
//	}
//	else
//	{
//		printf("没工作\n");
//	}
//	return 0;
//}
//函数；
//int ADD(int, int);
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d,%d", &n1, &n2);
//	int sum = ADD(n1, n2);
//	printf("%d", sum);
//	return 0;
//}
//int ADD(x, y)
//{
//	return (x + y);
//}
//数组
//在线oj--online judge,很多互联网公司在笔试环节都采用oj的形式；
//1：IO型，所有的代码都是自己完成（输入，计算，输出）；
//2：接口型：只需要完成一个函数，其他需要的数据都是准备好的；
//int main()
//{
//	/*char arr[6] = { 'a','b','\0' };
//	printf("%d\n", strlen(arr));
//	return 0;*/
//	数组现在允许数组的大小是常量，arr[3], 也允许初始化；
//		当数组大小是变量时，不能初始化，int a = 3;arr[a]={}(错误)；
//}








