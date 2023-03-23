#include<stdio.h>
int main()
{
    int Arr[4] = {11,21,51,101};
    //printf("%d\n",Arr[0]);
    //printf("%d\n",Arr[1]);
    //printf("%d\n",Arr[2]);
    //printf("%d\n",Arr[3]);

    int icnt = 0;   //Loop Counter
    //    1          2         3
    for(icnt = 0 ; icnt < 4; icnt++)
    {
        printf("%d\n",Arr[icnt]);  //4
    }
    return 0;
}