# 我的C语言重学笔记

> 记录于2026年5月10日，已经学到操作符了，才开始记录。

## 今日学习内容：操作符

### 1. 什么叫操作符？
操作符有很多类型，赋值操作符，移位操作符，单目双目甚至还有三目等等，但老师点到为止了，一些等后面在学。

### 2. 写了一段测试代码
下面是我今天在VS里写的代码，用来测试操作符的基本用法（ps:下面不是我写的代码，是我在dp那里问怎么写这个日记，他给我的范本，就留着吧）

```c
#include <stdio.h>

int main() {
    int num = 10;
    int *p = &num;  // p是一个指针，存了num的地址
    
    printf("num的值是：%d\n", num);
    printf("p指向的地址是：%p\n", p);
    printf("p指向的值是：%d\n", *p);
    
    return 0;
}
```
> 记录与2026念5月11日，刚好学到指针，指针的视频有一个多小时，已经十二点了，明天学。

## 今日学习内容：typedef,static,register,define

### 知识
小的知识点都在c语言学习那个文件里了，我这里就不再赘述了

### 今日份代码
也没什么值得写的，就写一个以前不知道的define定义宏来替换吧

```c
#include <stdio.h>
#define ADD(x,y) ((x)+(y))
int main()
{
int a=10;
int b=20;
int c=ADD(a,b);
printf("%d\n",c);
return 0;
}
```
> 记录于5月12日，今天把初识c语言学完了，明天开始进阶学习了，要继续坚持啊，现在是12；30，今天学了2个小时代码

## 今日学习内容：指针，结构体

### 今日份代码

```c
#include <stdio.h>
struct Stu
{
char name[20];
int age;
char sex[10];
char tele[12];
};
void print(struct Stu* x)
{
printf("%s %d %s %s\n",(*x).name,(*x).age,(*x).sex,(*x).tele);
printf("%s %d %s %s\n",x->name,x->age,x->sex,x->tele);
}
int main()
{
struct Stu s={"zhangyang",19,"man","19922796930"};
printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele);
print(&s);
return 0;
}
```
> 记录于5月13日，星期三，晴，11:40

## 今日学习：if深入学习，switch学习
而且知道了switch的嵌套使用

### 今日份代码

```c
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)//switch可以嵌套使用
		{
		case 1:
			n++;
		case 2:
			m++; n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;

	}
	printf("%d %d", m, n);
	return 0;
}
```
> 5月14日，周四晴，11:23，今天晚上没课，所以早点学，今天学了不少

## 今日学习：把while循环学完了，还学了很多的小知识点

### 今日份代码

```c
#include <stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("输入密码\n");
	scanf("%s", password);
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("检查密码是否正确（Y/N）\n");
	int ret = getchar();
	if (ret == 'Y')
	{
		printf("YES");
	}
	else
		printf("NO");
	int arr[] = { 23,64,78,106 };
	int i = 0;
	int se = sizeof(arr) / sizeof(arr[0]);
	while (i <=se)
	{
		printf("%c\n", arr[i]);
		i++;
	}
	int year = 0;
	int month = 0;
	int day = 0;
	printf("输入出生日期\n");
	scanf("%4d%2d%2d", &year, &month, &day);
	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	printf("day=%02d\n", day);
	return 0;
}
```
> 5/16,星期五，小雨，0：43，因为结束了一周的课，比较放松学的比较少

## 今日学习：听了一些题目

### 今日代码

```c
#include<stdio.h>
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