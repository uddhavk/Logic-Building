#include<stdio.h>
//Factor frequency counting
int CountNonFactors(int iNo)
{
    int iCnt = 0,iFrequency;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFrequency++;
        }
    }

    return iFrequency;
    
}
//  Time Complexity : o(N)  
int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    iRet=CountNonFactors(iValue);
    
    printf("Number of factors are : %d\n",iRet);


    return 0;
}