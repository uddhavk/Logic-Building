#include<stdio.h>

// Factors of 6

void DisplayFactors(int iNo)
{
    
    int icnt = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }
    for(icnt = 1; icnt < iNo ; icnt ++)
    {
        if((iNo % icnt) == 0)
        {
            printf("%d\n",icnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}