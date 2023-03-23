#include<stdio.h>
int add(); //function Declaration
int main()
{
    int ret = add();
    printf("sum is %d\n",ret);
    return 0;
}
int add()
{
    // function Defination
    int A = 10;
    int B = 20;
    int sum = A + B;
    return sum;
}