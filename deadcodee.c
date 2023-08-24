#include <stdio.h>

int main() {
    int x ;
    printf("enter the value of x:");
    scanf("%d",&x);
    if (x < 5) {
        printf("x is greater than 5.\n");
    } else {
        printf("x is not greater than 5.\n");
    }
    printf("This code is dead.\n");

}