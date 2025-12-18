#include<stdio.h>

//Input 10
//2 4 8 10


  void Display(int iNo)
    {
        int icnt=0;

        for(icnt = 1; icnt <= iNo; icnt ++)
        {
            if((icnt%2) == 0)
            {
                printf("%d\t",icnt);
            }
        }
        
    }
//  Time Complexity : O(N)

int main()
{

    int iValue;
    printf("Please Enter Frequency : \n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}