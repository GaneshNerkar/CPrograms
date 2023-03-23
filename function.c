#include<stdio.h>

int X = 20;            //Global variable // memory in Data section

int Multiplication(int No1, int No2) // user defined function //function defination
{
	register int Ans = 0; // memory on CPU Registers.
	Ans = No1 * No2;
	return Ans;
}
int main()
{
	int A=10, B=11;
	auto int ret = 0;
    printf("Inside main function\n");
	
	ret = Multiplication(A,B); //Multiplication(10,11);  Function call
	printf("Multiplication is :%d\n",ret);
	return 0;
}
