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
// void cricket();
// void football();
// int main(){
// printf("enter c for cricket or f for football\n");
// char ch;
// scanf("%c",&ch);
// if(ch=='c'){
//     cricket();
// }else{
//     football();
// }
// return 0;
// }
// void cricket(){
//     printf("cricket\n");
// }
// void football(){
// printf("football\n");
// }
void biryani();
void tikka();
void salad();
int main(){
    printf("enter b for biryani or wnter t for tika or s for salad\n");
    char ch;
    scanf("%c",&ch);
    if(ch=='b'){
        biryani();

    }
    else if (ch=='s'){
    salad();
}
    else{
        tikka();
}
return 0;
}
void biryani(){
printf("biryani\n");
}
void tikka(){
    printf("tikka\n");
}
void salad(){
    printf("salad\n");
}