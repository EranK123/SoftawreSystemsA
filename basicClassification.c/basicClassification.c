#include <stdio.h>
#include "NumClass.h"


void main(){
int x = isPrime(12);
printf("%d", x);
}

int isPrime(int x){
    if(x < 2)
    {
        return 0;
    }
    for(int i = 2; i < x / 2; i++)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }
    return 1;
    }

    int factorial(int x){
        if(x = 0 || x == 1)
        {
            return 1;
        }
        return x * factorial(x -1);
    }
       int isStrong(int x){
        int sum = 0;
        int temp = x;
        int r = 0;
        while(temp > 0){
            r = temp % 10;
            temp = temp / 10;
            sum += factorial(r);
        }
        if(sum == x){
            return 1;
        }else{
            return 0;
        }
    }
}