//1.�ж�һ�����Ƿ�Ϊ����
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d",& a);
//	if (0 == a % 2)
//		printf("��ż��");
//	else
//		printf("������");
//	return 0;
//}

//2.���0-100�������
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
//    if (a == 0)��������������������if ����{ }�Ļ�Ӱ�������һ�д��롣
//        if (b == 2)
//            printf("hehe\n");
//    printf("�����޵е�\n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf_s("%d", &age);
//	if (age < 18)
//		printf("δ����");
//	if (age >= 18 && age <= 24)
//		printf("����");
//	else if (age > 24 && 50 >= age)
//		printf("׳��");
//	else
//		printf("����");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	if (1==a)
//		printf("�����޵е�de");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:	printf("����һ"); break;
//	case 2:	printf("���ڶ�"); break;
//	case 3:	printf("������"); break;
//	case 4:	printf("������"); break;
//	case 5:	printf("������"); break;
//	case 6:	printf("������"); break;
//	case 7:	printf("������"); break;
//	default:printf("�������");
//		return 0;
//	}
//}



//{
//	int day = 0;
//	scanf_s("%d", &day);
//	if (day==1)
//		printf("����һ");
//	if (day==2)
//		printf("���ڶ�");
//	if (day==3)
//		printf("������");
//	if (day==4)
//		printf("������");
//	if (day==5)
//		printf("������");
//	if (day==6)
//		printf("������");
//	if (day==7)
//		printf("������");
//	return 0;
//}

//#include<stdio.h>����������������Ƶ�������
//int main()
//{
//	int ch = getchar();
//	if((putchar(ch))!=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>����������������������������Ƶ����޴󣡣�����
//int main()
//{
//	int m = 0;
//	char password[20] = { 0 };
//	printf("���������룺\n");
//	scanf_s("%s\n", password);
//	printf("��ȷ�ϣ�Y/N��");
//	m = getchar();
//	if (m =='Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȡ��ȷ��");
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
//	printf("���������룺\n");
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
//		printf("����");
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
//		printf("����");
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
//		printf("����");
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

//n�Ľ׳�
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

//����1��+...+10!=
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