#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//操作符
//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//取模
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	//除号两端都是整数时，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数除法
//
//
//	float a = 7 / 2.0;
//	int b = 7 % 2;//取模
//	//取模操作符的两个操作符只能是整数
//	printf("%.1f\n", a); 
//	printf("%d\n", b);
//
//	return 0;
//}
//

//int main()
//{
//	int a = 0;//初始化
//	int a = 20;//赋值
//
//	a = a + 3;//a+23
//	a += 3;//同上
//	a -= 3;
//	a = a - 3;
//
//
//	return 0;
//}


//c语言中
//0表示假
//非0表示真


//int main()
//{
//	/*int flag = 9;
//	if (!flag)
//	{
//		printf("hehe\n");
//		return 0;
//	}*/
//	/*int a = -10;
//	int b = -a;
//	printf("%d\n", b);*/
//
//
//
//	//sinzeof是操作符，是单目操作符
//	//int a = 10;
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a );//4
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
//	//printf("%d\n", sizeof(arr[0]));
//	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10--数组的元素个数
//	//int a = 10;
//	//int b = a++;//后置++，先使用，后++
//	//int b = a;a =a+1;
//
//	////int b = ++a;//前置++，先++，后使用
//	////a=a+1;b=a;
//	//int a = 10;
//	////int b = a--;
//	////b=a,a=a-1
//	//int b = --a;
//	////a=a-1;b=a
//
//
//
//	//printf("%d\n", b);//10
//	//printf("%d\n", a);//11
//	int a = (int)3.14;
//	//3.14 字面浮点数，编译器默认理解成double类型
//	printf("%d\n",a);
//
//
//
//
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	if (a == 3)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}



////逻辑

//int main()
//{
//	//&&逻辑与-并且
//	//||逻辑或-或者
//	/*int a = 10;
//	int b = 20;
//	if (a && b)
//	{
//		printf("hehe\n");
//	}*/
//	int a = 0;
//	int b =50;
//	if (a || b)
//	{
//		printf("hehhe\n");
//	}
//
//
//	return 0;
//}
//






//条件
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//
//	return 0;
//}



//逗号表达式，就是都好隔开的一串表达式
//特点是从左向右依次计算。整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	//       c=10-2=8   a=20+8=28  8-3=5    
//	printf("%d\n", d);
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;// 就是下标引用操作符     arr和3就是[]的操作数
//
//	//a+b
//	return 0;
//}



//函数调用操作符
//int Add(int x, int y)
//{
//	
//	return x+y;
//}
//int main()
//{
//	int sum=Add(2, 3);//()函数调用操作符，Add，2，3都是()的操作符
//
//	return 0;
//}



int main()
{
	auto int a = 10;//自动变量

	return 0;
}
