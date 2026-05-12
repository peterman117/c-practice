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