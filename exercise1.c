#include<stdio.h>
/*print a multiplication table of a number entered by a user in preety form  
example:

Input:
Enter the nuber u want multiplicable table of:
6*1=6
6*2=12
6*3=18
*/
int main()
{
    int num,i;
    printf("enter the number you want multiplication of:\n");
    scanf("%d", & num);

    printf("multiplication table of %d is as follows:\n",num);

    /* without using loop
     printf("%d x 1=%d\n",num, num*1);
    printf("%d x 2=%d\n",num, num*2);
    printf("%d x 3=%d\n",num, num*3);
     printf("%d x 4=%d\n",num, num*4);
     printf("%d x 5=%d\n",num, num*5);
    printf("%d x 6=%d\n",num, num*6);
    */

    for ( i = 0; i < 11; i++)
    {
        printf("%d x%d=%d\n",num, i, num*i);
    }
    


    return 0;

}

