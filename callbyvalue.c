#include<stdio.h>
void changevalue(int*a){
*a=534;
}
int main()
{
    int a=34, b=54;
    printf("the value of now is %d\n",a);
    changevalue(&a);
    printf("the value of now is %d\n", a);


    return 0;
}