#include<stdio.h>
#include<stdbool.h>
//Input : 12    2       output : true
//Input : 13    2       output : true
//Input : 12    5       output : false
//Input : 12    2       output : true

bool ChecKDivisible(int iNo1,int iNo2)
{
    if(iNo1%iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
    

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    bRet = ChecKDivisible(iValue1,iValue2);

     if(bRet == true)
    {
        printf("It is completly divisible");
    }
    else
    {
        printf("It is not divisible");        
    }

    return 0;
}