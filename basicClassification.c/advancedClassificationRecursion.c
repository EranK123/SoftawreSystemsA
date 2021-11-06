#include <stdio.h>
#include <math.h>

int main(){
    int x = isPalindrome(153);
    printf("%d",x);
    return 0;
}

    int checkPal(int num)
{
    int numOfDigits = (int)log10(num);
        if(num == 0)
        return 0;

    return ((num%10 * pow(10, numOfDigits)) + checkPal(num/10));
}

int isPalindrome(int num)
{
   
    if(num == checkPal(num))
    {
        return 1;
    }
    
    return 0;
}



int isArmstrong(int x){
     int digits = (int)log10(x)
        int sum = 0;
        int temp = x;
        int r = 0;
        while(temp > 0){
            r = temp % 10;
            temp = temp / 10;
            sum += power(r,digits);   
        }
        if(sum == x){
            return 1;
        }else{
            return 0;
        }
}
int power(int x, int y){
    if (y == 0)
    {
        return 1;
    }
    return x * power(x,y-1);
}

