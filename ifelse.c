#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("you have enterd %d as ur age\n",age);
    if(age>18)
    {
printf("you can vote");
    

    }
    else
    {
        printf("you are not eligible");
    }
    


    return 0;
}
