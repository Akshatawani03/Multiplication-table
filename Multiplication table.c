#include <stdio.h>
int factorial (int n);
int main()
{
    int  n;
    int  i;
    printf("\nEnter an integer:\n");
    scanf("%d",& n);
    for(i=1;i<=10;++i)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
return 0;

}
