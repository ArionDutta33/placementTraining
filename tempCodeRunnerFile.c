//8 4 2 1
//2*3 2*2 2*1 2*0
//pow count-1
#include<stdio.h>
#include<math.h>
int main(){
    int binary=1101;
    double power=0;
    int des=0;
    while (binary!=0)
    {
        des=des+pow(2.0,power);
        power++;
        binary=binary/10;
        /* code */
    }
    printf("%d",des);
    

}