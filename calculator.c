#include<stdio.h>
int main()
{
    printf("enter Two Numbers");
    int num1, num2;
    char ch;
    scanf("%d%d",&num1,&num2);
    printf("entered numbers: %d%d",num1,num2);
    printf("enter the choice between +,-,*,/");
    scanf("%c",&ch);
    if(ch == '+')
    {
        int res = addition(num1,num2);
        printf("%d",res);
    }

    return 0;
}

int addition(int n1,int n2)
{
    int add = n1 + n2;
    return add;   
}

int substraction(int n1,int n2)
{
    int sub = n1 - n2;
    return sub;
}

int multiplication(int n1,int n2)
{
    int mul = n1 * n2;
    return mul;
}

int division(int n1,int n2)
{
    int div = n1/n2;
    return div;
}