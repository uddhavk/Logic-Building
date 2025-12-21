// Code to Demonstrate iteration

#include<stdio.h>

int main()
{
    int iNo = 723614;
    int iDigit = 0;
    
    printf("-----------------------------------------------------\n");

    printf("Origianl value of iNo is %d :\n",iNo);

    printf("-----------------------------------------------------\n");
    
    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d\n",iNo);
    printf("iNo is :%d\n",iNo);
    
    printf("-----------------------------------------------------\n");

    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d\n",iNo);
    printf("iNo is :%d\n",iNo);
    
    printf("-----------------------------------------------------\n");

    iDigit = iNo % 10;  
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d\n",iNo);
    printf("iNo is :%d\n",iNo);
    
    printf("-----------------------------------------------------\n");

    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10; 
    printf("%d\n",iNo);
    printf("iNo is :%d\n",iNo);
    
    printf("-----------------------------------------------------\n");

    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10; 
    printf("%d\n",iNo);
    printf("iNo is :%d\n",iNo);
    
    printf("-----------------------------------------------------\n");

    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10; 
    printf("%d\n",iNo);
    printf("iNo is :%d\n",iNo);
    
    printf("-----------------------------------------------------\n");

    return 0;
}

