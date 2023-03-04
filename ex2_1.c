#include <stdio.h>

int main(){
    int score;
    scanf("%d", &score);
    switch(score) { 
        case 100: 
            printf("A\n"); 
            break; 
        case 90 ... 99: 
            printf("B\n"); 
            break; 
        case 80 ... 89: 
            printf("C\n"); 
            break; 
        case 70 ... 79: 
            printf("D\n"); 
            break; 
        case 60 ... 69: 
            printf("E\n"); 
            break; 
        default: 
            printf("F\n"); 
            break;
    } 

}