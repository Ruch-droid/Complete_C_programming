#include<stdio.h>
int main()
{
    int a=56;
    int* ptra = &a;

    int*ptrb=NULL
    printf("the address of pointer a is %p\n",&ptra);
    printf("the value of a is %d\n",*ptra);
    return 0;
}