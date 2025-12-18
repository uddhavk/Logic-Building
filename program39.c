#include<stdio.h>

// 5 4 3 2 1 0


  void Display(int iNo)
    {
        int icnt=0;

        for(icnt=iNo;icnt>=0;icnt--)
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