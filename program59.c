#include<stdio.h>
#include<stdbool.h>

//prime number counting
bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bflag = false;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    
    for(iCnt = 2,bflag = true; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bflag = false;
            break;       //Optimization
        }
    }
    return bflag;

    
}

int main()
{
    int iValue = 0;
    bool iRet = false;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    iRet=CheckPrime(iValue);
    
    if(iRet == true)
    {
       printf("%d is a prime number \n",iValue);
    }
    else
    {
        printf("%d is a non prime number \n",iValue);
    }


    return 0;
}

/*
Time Complexity : for prime - N/2
Time Complexity : for non prime - either 1 or 2

*/