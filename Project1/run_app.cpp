//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num = 0;
//	scanf_s("%d%d", &num1, &num2);//scanf�ò���											����1(��ʱ����)
//	num = num1 + num2;
//	printf("sum=%d", num);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int sum = 2;
//	sum = 3;//����ʲôд��������ֱ�Ӹ�ֵ������											����2������ԭ��*��
//	printf("%d", sum);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	const int sum = 2;//������(const)
//	sum = 3;//����ֱ�Ӹ�ֵ��
//	printf("%d", sum);
//	return 0;
//}
//
//#include<stdio.h>
//
//2����ת���ַ�
//
//int main()
//{
//	printf("%s\n", "\"");//ת���ַ���\��
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//printf("c:\test\32\test.c");
//	//printf("%s",'\32');//Ϊʲô��%d,%s,%c��������ֲ�һ������							����3
//	printf("\32");
//	return 0;
//}
//
//����if���
//�������
//#include<stdio.h>
//int main()
//{
//	int coding = 0
//		printf("���Ƿ����õ���offer��>��1/0����");
//	scanf_s("%d", &coding);
//	if (coding == 0)
//	{
//		printf("ף�����");
//	}
//	else
//	{
//		printf��"���ɹ���"��;
//	}
//	return 0;
//}
//����ԭ��δ֪
//
////��ȷ���룺
////#include<stdio.h>
////int main()
////{
////	int coding = 0;
////	printf("���Ƿ���úö��飿");
////	scanf_s("%d", &coding);
////	if (coding == 1)
////	{
////		printf("���ɹ���");
////	}
////	else
////	{
////		printf("�ټ�");
////	}
////	return 0;
////}
//
//����whileѭ��
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	printf("��ʼ��ϰ");
//	while (line <= 2000)
//	{
//		printf("�������ͣ�\n");
//		line++;
//	}
//	printf("��ɹ���!");
//	return 0;
//}
//
//��������
//��������룩
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
//����ԭ��˳�򲻶԰�Ҫ��˳������
//��ȷ����
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

//�Ƚ������ϴ�ֵ��
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


//���������Ƚ������ϴ�ֵ��
//#include<stdio.h>���������������������������в���
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


//sizeof(������С������λ)��
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

//��������[]
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0,2,4 };
//	int a = arr[1];����"�±����ò�����[]"
//	printf("%d", a);
//	return 9;
//}

//��������++
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = ++num1;//��++����ʹ��
//	printf("%d,%d", num1, num2);
//	return 0;
//}

//��������<<
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = a << 3;
//	printf("b=%d", b);
//	return 0;
//}

//��������(����)
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	printf("a=%d", a);
//	return 0;
//}

//��������exp1 ? exp2 : exp3
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

//�ؼ��֡�typedef
//#include<stdio.h>
//typedef int sb;
//int main()
//{
//	int a = 10;
//	sb b = 6;
//	printf("%d\n%d", a, b);
//	return 0;
//}

//�ؼ��֡�static
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

//�ؼ��֡�extern
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

//   static�Ժ���������
//static int Add(int x, int y)
//{
//	z = x + y;
//	return z;
//}
//�����������²���ͬһ�ļ��С�
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

//ָ������Ĵ�С�ǿ����Եģ��е���4�ֽڣ���32�����е���8����64��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int*sb = &a;
//	printf("%d",sizeof(sb));
//	return 0;
//}

//*��Ӧ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int*sb = &a;
//	*sb = 30;�������������ò�����*
//	printf("%d",*sb);
//	return 0;
//}

//�ṹ��
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
//	struct people a1 = { "��Ԩʥ",24,"��"};
//	printf("%s",a1.name);
//	printf("%d", a1.age);
//	printf("%s", a1.sex);
//	return 0;
//}

//�ṹ����ָ��Ľ����ϰ
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
//	struct people a1 = { "��Ԩʥ",24,"��" };
//	struct people *sb = &a1;
//	printf("������%s", (*sb).name);
//	printf("���䣺%d", (*sb).age);
//	printf("�Ա�%s", (*sb).sex);
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
//	struct people a1 = { "��Ԩʥ",24,"��" };
//	struct people *sb = &a1;
//	printf("������%s", sb->name);
//	printf("���䣺%d", (*sb).age);
//	printf("�Ա�%s", (*sb).sex);
//	return 0;
//}

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
//2.27


//����1.��������(%d,%c,%s������)
