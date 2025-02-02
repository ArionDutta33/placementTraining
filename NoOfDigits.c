#include<stdio.h>
int main(){
    int number=120;
    int count=0;
    while(number!=0){
        number=number/10;
        count++;
    }
    printf('%d',count);
}

 