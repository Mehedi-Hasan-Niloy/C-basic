//F = (C * 1.8) + 32
#include <stdio.h>
int main(){
    float C,F;
    printf("Enter Centrigrade : ");
    scanf("%f",&C);

    F = (C*1.8) + 32;

    printf("Fahrenheit = %.2f\n",F);
    return 0;
}