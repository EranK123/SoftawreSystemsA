#include <stdio.h>
#include "NumClass.h"
#include <math.h>
int main(){
    int x = isArmstrong(9474);
    printf("%d",x);
    return 0;
}
int isPalimdrome(int x){
        int sum = 0;
        int temp = x;
        int r = 0;
        while(temp > 0){
            r = temp % 10;
            sum = (sum * 10) + r;
            temp = temp / 10;
        }
        if (x == sum)
        {
            return 1;
        }
        return 0;
}

int isArmstrong(int x){
        int digits = numOfDigits(x);
        int sum = 0;
        int temp = x;
        int r = 0;
        while(temp > 0){
            r = temp % 10;
            temp = temp / 10;
            sum += pow(r,numOfDigits(x));   
        }
        if(sum == x){
            return 1;
        }else{
            return 0;
        }
    }
    int numOfDigits(int x){
        int sum = 0;
        int temp = x;
        while (temp > 0)
        {
           temp = temp / 10;
           sum += 1; 
        }
        return sum;
    }
}