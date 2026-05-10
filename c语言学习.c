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
int main()
{
//操作符：
//1重点 / 除法：除号两端都是整数的时候，执行的是整数除法，结果是前面的整数（int）如果两端只要有一个是浮点数就执行浮点数的除法
//int a = 7 / 2(a = 3); float b = 7 / 2.0; (b = 3.5);
//%.1f(表示精确到小数点一位)，
//%（取模操作符）两端必须是整数
//int main()
//{
//	float a = 7.0 / 2;
//	double b = 7.0 / 2;
//	printf("%.100f\n", a);
//	printf("%.50lf\n", b);
//	return 0;
//}
//2移位操作符（>>右移<<左移)
//未操作符，赋值操作符，单目操作符（sizeof也是）
	/*int a = 10;
	printf("%zu\n", sizeof(a));
	printf("%zu\n", sizeof a);
	printf("%zu\n", sizeof(int));*/
	/*int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));*/
	/*int a = 10;
	int b = a++;*///后置++，先赋值在++；
	//b=a;a=a++;
	//printf("%d\n", a); //a = 11;
	//printf("%d\n", b);//b=10;
	/*int a = 10;
	int b = ++a*/;//前置++(先++再赋值)
	//a=b=11;
	  //（）强制转换
	//int a = (int)3.14;//像这种字面浮点数，编译器都默认为double类型；
	//printf("%d", a);
	//关系操作符(==两个等号表示判断）；
	//逻辑操作符（&&并且，||或者）；
	//条件操作符（三目操作符)
	//a?b:c(a为真，结果为b；a为假，结果为c）；
	/*int a = 10;
	int b = 20;
	int r = a > b ? a : b;
	printf("%d\n", r);*/
	//逗号表达式：就是被逗号隔开的一窜表达式，
	//特点是，从左到右一次计算，整个表达式的结果是最后一个表达式的结果；
	//int a = 10;
	//int b = 8;
	//int c = 0;
	//          // c=8        a=16       c=5
	//int d = (c = a - 2, a = b + c, c - 3);
	//printf("%d\n", d);
	//函数标识符（），引用函数；
//#关键字
	//1, auto自动被省略 ，auto int a = 10;
	//2,break,跳出循环
	//特点：变量的名字不能是关键字
	//变量的命名：
	/*1：有意义；
	2：名字必须是字母，数字，下划线组成，不能有特殊字符，同时不能以数字开头；
	3：不能是关键字；*/











	return 0;
}









