#include <stdio.h>

int main(){
    float x;
    scanf("%f",&x);
    float area;
    area = 3.14*x*x;
    scanf("%f",&area);
    printf("Area: %.2f",area);
    return 0;
}