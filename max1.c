#include<stdio.h>
int max(int a ,int b);
int main(){
    int num1,num2;
    printf("enter two number:");
    scanf ("%d""%d",&num1,&num2);
    printf("the maximum of %d and %d is %d\n",num1,num2,max(num1, num2));
    return 0;
}
int max(int a,int b){
    if(a>b)
    return a ;

else return b;
}