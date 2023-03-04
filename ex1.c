#include <stdio.h>

    int main(){
        // Start Info 程式執行時輸出
        printf("================================\n");
        printf("|> ED1 Power Function\n");
        printf("================================\n");
        printf("Please Enter base and power.\n");
        printf("* * * * * * * * * * * * * * * *\n");

    
        // Input 使用者輸入
        int base;
        int power;
        int result;

        scanf("%d %d", &base, &power);

        // Output 輸出結果
        if (base == 0 && power == 0){
            printf(">> Pow( %d, %d ) = Does not exist!!!\n", base, power); 
        }

        else if (base == 0){
            printf(">> Pow( %d, %d ) = e^0 = 1\n", base, power);
        }
           // Sample 1 & 2
        else{
            result = base;
            for(int i=1 ; i<power ; i++){
                result=result*base;
            }
            
            printf(">> Pow( %d, %d ) = %d\n", base, power, result);
        }
                // Sample 3
        // Stop 程式停止時輸出
            printf("* * * * * * * * * * * * * * * *\n");
            printf("|> Program: End Of Run...\n\n");
        }
        