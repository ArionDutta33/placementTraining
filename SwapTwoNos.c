#include<stdio.h>
int main(){
    int numOne=20;
    int temp=-1;
    int numTwo=30;
    printf("Original numbers are %d %d \n",numOne,numTwo);
    temp=numOne;
    numOne=numTwo;
    numTwo=temp;
    printf("The swapped numbers are %d %d",numOne,numTwo);
}