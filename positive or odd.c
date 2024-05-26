#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
if (n==0)
printf("number is even\n");
else if(n % 2 !=0)
printf("number is odd\n");
return 0;
}