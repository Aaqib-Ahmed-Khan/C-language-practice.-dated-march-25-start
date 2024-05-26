#include <stdio.h>
int main()
{
    int choice;
    char yn;
     start:
    // clrscr();
    printf("1.karachi\n");
    printf("2.islamabad\n");
    printf("enter choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("welcome to karachi\n");
        goto karachi;
    }
    else if (choice==2){
          printf("welcome to karachi\n");
        goto islamabad;
    }
    else{
        printf(" wrong choice!do you want to continue(y/n):");
        scanf("%c",&yn);
        // y=getche();
        if(yn=='y' || yn=='Y'){
          
          goto start;
        } else {
            goto end;
        }
    }
    karachi:
    printf("Welcome to Karachi!\n");
    
    goto end;

islamabad:
    printf("Welcome to Islamabad!\n");
    
    goto end;

end:
    printf("End of the program.\n");
    return 0;
}

