#include<stdio.h>
int main(){
    int number;
    printf("Enter any hexadecimal number : ");
    scanf("%X",&number);
    
    printf("The octal equivalent is : %o",number);
    getch();

}