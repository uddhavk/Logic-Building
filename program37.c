#include<stdio.h>


  void Display(int iNo)
    {
        int icnt=0;

        for(icnt=1;icnt<=iNo;icnt++)
        {
            printf("%d\t",icnt);
        }
        
    }

int main()
{

    int iValue;
    printf("Please Enter Frequency : \n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}