#include <stdio.h>
int main(){
    int n1,n2;
    char ch;
    printf("enter 1 number\n");
    scanf("%d",&n1);
    printf("enter any character\n");
    scanf("%s",&ch);
    printf("enter 2 number\n");
    scanf("%d",&n2);
    if (ch=='+'){
        // printf("sum of %d and %d is=%d",n1,n2,(n1+n2));
        printf("sum of %d and %d is=%d",n1,n2,(n1+n2));
    }
    else if(ch=='-'){
    printf("difference of %d and %d is=%d",n1,n2,(n1-n2));
    }
    else if(ch=='*'){
        printf("multiplication of %d and %d is=%d",n1,n2,(n1*n2));

    }
else if(ch=='/'){
        printf("division of %d and %d is=%d",n1,n2,(n1/n2));

    }
else {
    printf("invalid operator");
}

return 0;

}