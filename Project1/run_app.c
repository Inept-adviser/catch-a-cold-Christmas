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

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	if (1==a)
//		printf("我是无敌得de");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:	printf("星期一"); break;
//	case 2:	printf("星期二"); break;
//	case 3:	printf("星期三"); break;
//	case 4:	printf("星期四"); break;
//	case 5:	printf("星期五"); break;
//	case 6:	printf("星期六"); break;
//	case 7:	printf("星期天"); break;
//	default:printf("输入错误");
//		return 0;
//	}
//}



//{
//	int day = 0;
//	scanf_s("%d", &day);
//	if (day==1)
//		printf("星期一");
//	if (day==2)
//		printf("星期二");
//	if (day==3)
//		printf("星期三");
//	if (day==4)
//		printf("星期四");
//	if (day==5)
//		printf("星期五");
//	if (day==6)
//		printf("星期六");
//	if (day==7)
//		printf("星期日");
//	return 0;
//}

//#include<stdio.h>——————与视频结果不符
//int main()
//{
//	int ch = getchar();
//	if((putchar(ch))!=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>————————————和视频出入巨大！！！！
//int main()
//{
//	int m = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：\n");
//	scanf_s("%s\n", password);
//	printf("请确认（Y/N）");
//	m = getchar();
//	if (m =='Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("取消确认");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("11\n");
//	printf("12\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：\n");
//	scanf_s("%s\n", password);
//	printf("%s",password);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		printf("加油");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		if (a == 5)
//			continue;
//		printf("加油");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (a == 5)
//			continue;
//		printf("加油");
//		a++;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 0; a < 10; a++)
//	{
//		if (a==5)
//			printf("hehe\n");
//		printf("haha");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	} 
//	while (i < 10);
//	return 0;
//}

//n的阶乘
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 1;
//	scanf_s("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		sum = sum * a;
//	}
//	printf("%d", sum);
//	return 0;
//
//}

//计算1！+...+10!=
//#include<stdio.h>
//int main()
//{
//		int a = 0;
//		int n = 0;
//		int b = 0;
//		int sum = 0;
//		for (n=1;n<11;n++)
//		{
//			int num = 1;
//			for (a = 1; a <= n; a++)
//			{
//				num = num * a;
//			}
//		sum = sum + num;
//		}
//		printf("%d", sum);
//	return 0;
//}