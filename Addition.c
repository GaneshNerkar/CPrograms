#include<stdio.h>
int addition(int value1, int value2)
{
	int add = 0;
	add = value1+value2;
	return add;
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum  = 0;
	sum = addition(num1,num2);
	
	printf("The Addition is %d",sum);
	return 0;
}