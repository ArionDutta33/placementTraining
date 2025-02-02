// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // read the age of a user and check if he is eligible for voting or not
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Eligible");
    }
    else
    {
        printf("No");
    }

    return 0;
}