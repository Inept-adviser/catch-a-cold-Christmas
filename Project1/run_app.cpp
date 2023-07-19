//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num = 0;
//	scanf_s("%d%d", &num1, &num2);//scanf用不了											问题1(暂时不管)
//	num = num1 + num2;
//	printf("sum=%d", num);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int sum = 2;
//	sum = 3;//这是什么写法？？？直接赋值？？？											问题2（优先原则*）
//	printf("%d", sum);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	const int sum = 2;//常变量(const)
//	sum = 3;//不能直接赋值了
//	printf("%d", sum);
//	return 0;
//}
//
//#include<stdio.h>
//
//2——转义字符
//
//int main()
//{
//	printf("%s\n", "\"");//转义字符（\）
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//printf("c:\test\32\test.c");
//	//printf("%s",'\32');//为什么用%d,%s,%c打出来的字不一样？？							问题3
//	printf("\32");
//	return 0;
//}
//
//——if语句
//错误代码
//#include<stdio.h>
//int main()
//{
//	int coding = 0
//		printf("你是否想拿到好offer？>（1/0）：");
//	scanf_s("%d", &coding);
//	if (coding == 0)
//	{
//		printf("祝你好运");
//	}
//	else
//	{
//		printf（"你会成功的"）;
//	}
//	return 0;
//}
//错误原因：未知
//
////正确代码：
////#include<stdio.h>
////int main()
////{
////	int coding = 0;
////	printf("你是否想好好读书？");
////	scanf_s("%d", &coding);
////	if (coding == 1)
////	{
////		printf("你会成功的");
////	}
////	else
////	{
////		printf("再见");
////	}
////	return 0;
////}
//
//——while循环
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	printf("开始练习");
//	while (line <= 2000)
//	{
//		printf("继续加油！\n");
//		line++;
//	}
//	printf("你成功啦!");
//	return 0;
//}
//
//——函数
//（错误代码）
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	scanf_s("%d %d", &sum1, &sum2);
//	printf("sum=%d", sum);
//	sum = Add(sum1, sum2);
//	return 0;
//}
//错误原因；顺序不对按要求顺序来。
//正确代码
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	scanf_s("%d %d", &sum1, &sum2);
//	sum = Add(sum1, sum2);
//	printf("sum=%d", sum);
//	return 0;
//}

//比较两数较大值：
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d%d", &num1, &num2);
//	if (num1 > num2)
//	{
//		printf("%d", num1);
//	}
//	if (num1 < num2)
//	{
//		printf("%d", num2);
//	}
//	return 0;
//}


//创建函数比较两数较大值：
//#include<stdio.h>————————————运行不了
//int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf_s("%d%d", &num1, num2);
//	max = MAX(num1, num2);
//	printf("max=%d", max);
//	return 0;
//}


//sizeof(测量大小——几位)：
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof 'a');
//	return 0;
//}

//操作符—[]
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0,2,4 };
//	int a = arr[1];——"下标引用操作符[]"
//	printf("%d", a);
//	return 9;
//}

//操作符—++
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = ++num1;//先++，再使用
//	printf("%d,%d", num1, num2);
//	return 0;
//}

//操作符—<<
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = a << 3;
//	printf("b=%d", b);
//	return 0;
//}

//操作符—(类型)
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	printf("a=%d", a);
//	return 0;
//}

//操作符—exp1 ? exp2 : exp3
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 40;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max=%d", max);
//	return 0;
//}

//关键字—typedef
//#include<stdio.h>
//typedef int sb;
//int main()
//{
//	int a = 10;
//	sb b = 6;
//	printf("%d\n%d", a, b);
//	return 0;
//}

//关键字—static
//#include<stdio.h>
//void sb()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i <= 5)
//	{
//		sb();
//		i++;
//	}
//	return 0;
//}

//关键字—extern
//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	extern int b;
//	int sum;
//	sum = a + b;
//	printf("sum=%d", sum);
//	return 0;
//}

//   static对函数的限制
//static int Add(int x, int y)
//{
//	z = x + y;
//	return z;
//}
//————上下不在同一文件中。
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	extern int Add(int, int);
//	printf("sum=%d", sum);
//	return 0;
//}

//指针变量的大小是看电脑的，有的是4字节（×32），有的是8（×64）
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int*sb = &a;
//	printf("%d",sizeof(sb));
//	return 0;
//}

//*的应用
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int*sb = &a;
//	*sb = 30;————解引用操作符*
//	printf("%d",*sb);
//	return 0;
//}

//结构体
//#include<stdio.h>
//struct people
//{
//	char name[20];
//	int age;
//	char sex[10];
//
//};
//int main()
//{
//	struct people a1 = { "吴渊圣",24,"男"};
//	printf("%s",a1.name);
//	printf("%d", a1.age);
//	printf("%s", a1.sex);
//	return 0;
//}

//结构体与指针的结合练习
//#include<stdio.h>
//struct people
//{
//	char name[20];
//	int age;
//	char sex[10];
//
//};
//int main()
//{
//	struct people a1 = { "吴渊圣",24,"男" };
//	struct people *sb = &a1;
//	printf("姓名：%s", (*sb).name);
//	printf("年龄：%d", (*sb).age);
//	printf("性别：%s", (*sb).sex);
//	return 0;
//}

//#include<stdio.h>
//struct people
//{
//	char name[20];
//	int age;
//	char sex[10];
//
//};
//int main()
//{
//	struct people a1 = { "吴渊圣",24,"男" };
//	struct people *sb = &a1;
//	printf("姓名：%s", sb->name);
//	printf("年龄：%d", (*sb).age);
//	printf("性别：%s", (*sb).sex);
//	return 0;
//}

//1.判断一个数是否为奇数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d",& a);
//	if (0 == a % 2)
//		printf("是偶数");
//	else
//		printf("是奇数");
//	return 0;
//}

//2.输出0-100里的奇数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a%2==1)
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 10 % 3;
//	printf("%d", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 0)——————————if 不打{ }的话影响的是下一行代码。
//        if (b == 2)
//            printf("hehe\n");
//    printf("我是无敌的\n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf_s("%d", &age);
//	if (age < 18)
//		printf("未成年");
//	if (age >= 18 && age <= 24)
//		printf("青年");
//	else if (age > 24 && 50 >= age)
//		printf("壮年");
//	else
//		printf("老年");
//	return 0;
//}
//2.27


//问题1.————(%d,%c,%s的区别)
