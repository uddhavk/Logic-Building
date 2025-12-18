#include<stdio.h>

//Input 10
//2 4 8 10


  void Display(int iNo)
    {
        int icnt=0;

        for(icnt=2;icnt<=iNo;icnt+=2)
        {
            printf("%d\t",icnt);
        }
        
    }
//  Time Complexity : O(N/2)

int main()
{

    int iValue;
    printf("Please Enter Frequency : \n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}