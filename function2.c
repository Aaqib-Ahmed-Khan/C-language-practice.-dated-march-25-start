#include<stdio.h>
// void caclulate()
// int main()
// {
// printf(%d)
// }
// void hello();
// void goodbye();

// int main(){
//      hello();   //function call
//    goodbye();

//     return 0;
// }
// void hello  (){
//     printf("hello"); 

// }
// void goodbye  (){
//     printf("goodbye"); 
// }
void cricket();
void football();
int main(){
printf("enter c for cricket or f for football");
char ch;
scanf("%c",&ch);
if(ch=='c'){
    cricket();
}else{
    football();
}
return 0;
}
void cricket(){
    printf("cricket");
}
void football(){
printf("football");
}