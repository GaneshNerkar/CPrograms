#include<stdio.h>
//Structure declaration
// There is no memory allocation at this point.
struct
{
    int i;
    float f;
    int j;
    double d;
};
int main()
{
    //int no; //auto storage class //garbage value
    //int X = 0;
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.d = 11.0;
    obj2.i = 21;
    obj3.j = 51;

    printf("size of obj1:%d\n",sizeof(obj1));
    printf("size of obj2:%d\n",sizeof(obj2));
    printf("i of obj2:%d\n",obj2.i);
    return 0;
}