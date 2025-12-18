/*
START
Accept number and store as no
Divide by 2
If the remainder is 0 
then Display it as Even
Otherwise
Display as Odd
STOP


*/
#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is odd number");
    }

}




int main()
{
    int iValue = 0;

    printf("Enter the number : ");
        scanf("%d",&iValue);

        CheckEvenOdd(iValue);

    return 0;
}