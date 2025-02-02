#include<stdio.h>
int main(){
    printf("Enter the character");
    char character;
    scanf("%c",&character);
    int res;
    int range=character;
    if(range>=97){
        res=character-32;

    }else{
        res=character+32;
    }
    printf("%c",res);
}