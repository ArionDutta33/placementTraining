#include<stdio.h>
int main(){
    int number=1293;
    int rev=0;
    while (number!=0){
        int digit=number%10;
        rev=rev*10+digit;
        number=number/10;
    }
    printf("%d",rev);
    
}