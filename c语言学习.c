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
//int main()
//{

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

//五月十一号
	/*typedef struct Node
	{
		int data;
		struct Node* next;
	}Node;*/
	//void test()
	//{
	//	//int a = 1; (a每次出函数都被销毁了，又变成1了，所以打印结果全为2，局部变量存储在栈区，)；
	//	static int a = 1; /*(结果为234567891011，所以static修饰局部变量的时候，局部变量出了作用域，不销毁，
	//		本质上static改变了变量的存储位置，从变量在栈区到静态区，和程序的生命周期一样);*/
	//	a++;
	//	printf("%d\n",a);
	//}
	    /*int main()	
	    {*/
		/*1:typedef(重命名)*/
		//typedef unsigned int uint;
		//uint a = 1;
		//struct Node b ;
		//Node b ;

		/*2:static
		{
			修饰局部变量；修饰全局变量；修饰函数；
		}*/
		//修饰局部变量
		/*int i = 0;
		while (i < 10)
		{
			test();
			i++;
		}*/
		//ctrl+滚轮，可以直接改变字体大小；
		// 修饰全局变量
		//static修饰全局变量的时候，这个全局变量的外部链接属性就变成了内部连接属性，其他源文件(.c)就用不到这个全局变量了
		//例如extern不能再用被static修饰的全局变量；(全局变量也是存储在静态区)  
		//修饰函数
		//和static修饰全局变量一样，修饰函数时，一个函数原本的外部链接属性就变成了内部连接属性
		//其他源文件(.c)就无法使用了(即extern也没招了);

		//3:register-寄存器
		//电脑上的存储设备
		/*{
			寄存器（集成到cpu上）
				高速缓存（cache）
				内存
				硬盘
		}（上面的空间小，读取速度快，造价高）
			寄存器变量
				register int num = 3;*///建议3放在寄存器中；

		//4:define定义常量和宏；
		//define定义标识常量
		//#define NUM 100//(后面不写分号;)
		//int main()
		//{
		//	printf("%d\n", NUM);
		//	int n = NUM;
		//	printf("%d\n", n);
		//	int arr[NUM] = { 0 };
		//	return 0;
		//}
		//define定义宏(来完成替换)，宏是有参数的；
	/*#define ADD宏名(x,y)宏参数 ((x)+(y))宏体
	int main()
	{
		int a = 10;
		int b = 20;
		int c = ADD(a, b);
		printf("%d\n", c);
		return 0;
	}*/
//5月12号
	/*int main()
	{*/
		//1:指针
			//内存：内存会划分为一个个的内存单元（一个内存单元的大小:1byte）；
			// 假设一个32位的电脑（有32个地址线），每个地址线由0/1来表示
			//000000000000000000000000000到11111111111111111111111一共有二的三十二次方个地址序列
			//每个地址序列代表一个字节，除以1024得到4194394kb，再除以1024得到4096mb，再除以得到4gb，所以32位电脑内存为4gb
			//一般地址序列写成十六进制
			//int a=10;(向内存申请四个字节，储存10） &a取地址；
		/*int a = 10;*/
		  /*&a;
		printf("%p", &a); 000000D4614FF9A4,取地址用p；*/
		//int* p = &a;//(*表示p是指针变量，int表示p指向int类型，p为指针变量)
		//内存单元：编号->地址->地址也被称为指针
		//所以存放指针（地址）的变量就是指针变量；
		//*p=20;解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p所指向的对象；
		//2：指针变量的大小
		/*不管什么类型的指针，都是在创建指针变量
		指针变量是用来存放地址的
		指针变量的大小取决于一个地址存放的时候需要多大的空间
		32为机器上的地址：32bit位 = 4byte，所以指针变量的大小是四个字节
		64位机器上的地址：64位bit = 8byte，所以指针变量的大小是8个字节*/
		//printf("%zu\n", sizeof(int*));//8
		//printf("%zu\n", sizeof(char*));
		//printf("%zu\n", sizeof(double*));
		//printf("%zu\n", sizeof(float*));
		// int* p1,p2,p3(这里只有p1是指针，p2和p3是int类型变量
		// int *p1，*p2，*p3（这样都是指针）
		/*return 0；
	}*/
		//3:结构体（struct）
		//把一些单一类型组合在一起
	
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* x)
//{
//	printf("%s %d %s %s\n", (*x).name, (*x).age, (*x).sex, (*x).tele);
//	//结构体指针变量->成员名；
//	printf("%s %d %s %s", x->name,x->age,x->sex,x->tele);
//}
//int main()
//{
//	struct Stu s = { "zhangyang",19,"male","19922796930" };
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//		}
//5月13日
//1:分支语句和循环语句
// if语句
// if括号里面的内容为真就执行，为假的就跳过（0/1）
// 若果条件成立，要执行多条语句，要用大括号（即代码块）  
/*int main()
{
	int a = 0;
	int b = 2;
	if (a == 0)
		if (b == 1)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
 }*///告诉我们，else与最近的if相匹配，并且if-else语句算一条语句，最上面的if不加大括号也能把这一条语句判断完；

// if(
//int main()
//{
//	int b = 0;
//	scanf("%d", &b);
//	if (b >= 10 && b < 18)
//	{
//		printf("青少年\n");
//	}
//	else if (b >= 18&&b < 30)
//	{
//		printf("青年\n");
//	}
//	else if (b >= 30 && b < 40)
//	{
//		printf("壮年\n");
//	}
//	else
//	{
//		printf("老年\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	//scanf("%d", &a);
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}
//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch里面表达式只能是整形
//	{
//	case 1://case后面必须是整形常量表达式，字符也可以
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//			printf("星期六\n");
//			break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default://没有case匹配的项目，就走到default；
//		printf("输入错误");
//			break;
//
//		return 0;
//	}
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	}
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)//switch可以嵌套使用
//		{
//		case 1:
//			n++;
//		case 2:
//			m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//
//	}
//	printf("%d %d", m, n);
//	return 0;
//}
//5月14号
//1:循环
//while循环
 //continue跳过当前循环，直接下次循环；
//break是用于永久的终止循环;
/*int main()
{
	//while (getchar())
	 //int ch = getchar();//getchar用来接收字符，输入字符，然后ch得到该字符的ASCLL值
	//printf("%c\n", ch);//然后printf里面是%c就输出该ACSLL值对应的字符，%d就输出该ACSLL值
	//putchar(ch);//putchar和getchar是一对，输出对应的字符；
	return 0;
}*/
//错误	LNK1168	无法打开 F:\code\c-practice\x64\Debug\c语言.exe 进行写入
//上面这个错误表示已经打开了一个可执行程序，只需要关掉就可以；
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s", password);//这里数组不用取地址，因为数组本来就是地址
//	//scanf的特性，遇到空格和\n都停止接受了，所以你输入完密码后会写下一个\n
//	//但\n会留在键盘缓冲区，然后直接被getchar吃掉给ret，然后就打印NO了
//	//getchar()//写这个会消除上面的bug，直接吃掉遗留的\n
//	//但是如果密码里面有空格，或者说不小心打了一个空格，空格和后面的密码都会遗留
//	//所以说要写个循环让getchar一直吃，直到吃到\n
//	//int ch = 0;
//	//while ((ch = getchar()) != '\n')
//	//{
//	//	;
//	//}//这样就可以清空缓冲区了
//
//	printf("请确认密码\n");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}
//输入ctrl+z结束循环;
	//int main()
	//{
	//	int arr[] = { 73,32,99,110,32,109,116 };
	//	int se = sizeof(arr) / sizeof(arr[0]);//计算数组里面的个数
	//	int i = 0;
	//	while (i < se)
	//	{
	//		printf("%c\n", arr[i]);
	//		i++;
	//	}
	//	return 0;
	//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	//4d表示取前面的四位，2d表示取两位；
//	printf("year=%d\n", year);
//	printf("month=%d\n", month);
//	printf("day=%2d\n", day);
//	//如果day只有一位，你写的是%2d，输出的结果会在数字前面补一个空格
//	//但你写%02d，就会用0在前面补
//	return 0;
//}
//float c=0.0f//如果不写f会默认为double类型，与前面的float不符合
//输出浮点数的时候，%.2f表示保留两位小数
//int main()
//{
//	int n = printf("Hello world!");//printf的返回值为int,即打印的字符数13,一个汉字代表两个字符;
//	printf("\n%d\n", n);//在前面加一个\n也能换行
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("输入密码\n");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("检查密码是否正确（Y/N）\n");
//	int ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("YES");
//	}
//	else
//		printf("NO");
//	int arr[] = { 23,64,78,106 };
//	int i = 0;
//	int se = sizeof(arr) / sizeof(arr[0]);
//	while (i <=se)
//	{
//		printf("%c\n", arr[i]);
//		i++;
//	}
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	printf("输入出生日期\n");
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//	return 0;
//}
//5月15号
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout<<\"Hello world!\"<< endl;\n");
//	return 0;
//}//转义字符
//找到输入的数中的最大值
//方法一
//int main()
//{
//	int arr[4] = { 0 };
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int j = 1;
//	while (j < 4)
//	{
//		if (arr[j] > max)
//		{
//			max = arr[j];
//		}
//		j++;
//	}
//	printf("%d", max);
//	return 0;
//}
//方法二
//int main()
//{
//	int max = 0;
//	scanf("%d", &max);
//	int i = 1;
//	int n = 0;
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}//边输入边比较
int main()
{
	printf("printf(\"Hello world!\\n\");\n");
	printf("cout<<\"Hello world!\"<< endl;\n");//转义字符的知识
	int arr[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int j = 1;
	while (j < 4)
	{
		if (arr[j] > max)
		{
			max = arr[j];
		}
		j++;
	}
	printf("%d\n", max);
	int max1 = 0;
	scanf("%d", &max1);
	int m = 1;
	int n = 0;
	while (m < 4)
	{
		scanf("%d", &n);
		if (n > max1)
		{
			max1 = n;
		}
		m++;
	}
	printf("%d\n", max1);
	return 0;
}























