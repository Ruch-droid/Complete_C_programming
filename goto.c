#include<stdio.h>
int main()
{
    int i;
     
     label:
     printf("we are inside label\n");
     goto end;

     goto label;
     end:
     printf("we are at end\n");
     
    return 0;
}

