//Iteration
#include<stdio.h>

int main()
{
    int iNo = 0;
    int iDigit = 0;

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    printf("-----------------------------------------------------\n");

    printf("Origianl value of iNo is %d :\n",iNo);

    printf("-----------------------------------------------------\n");

    while(iNo!=0)    
    {
        iDigit = iNo % 10;
        printf("iDigit is :%d\n",iDigit);
        iNo = iNo / 10;
        printf("%d\n",iNo);
        printf("iNo is :%d\n",iNo);
    }
    
    printf("-----------------------------------------------------\n");


    return 0;
}

