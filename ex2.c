#include <stdio.h>

int main(){
    int score;
    scanf("%d", &score);

    if (score == 100){
        printf("A\n");
    }
    else if (score<=99 && score>=90){
        printf("B\n");
    }
    else if (score<=89 && score>=80){
        printf("C\n");
    }
    else if (score<=79 && score>=70){
        printf("D\n");
    }
    else if (score<=69 && score>=60){
        printf("E\n");
    }
    else{
        printf("F\n");
    }
}