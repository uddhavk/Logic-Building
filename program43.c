#include<stdio.h>
//Input : 12    2       output : true
//Input : 13    2       output : true
//Input : 12    5       output : false
//Input : 12    2       output : true

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    if(iValue1 % iValue2 == 0)
    {
        printf("It is completly divisible");
    }
    else
    {
        printf("It is not divisible");        
    }

    return 0;
}