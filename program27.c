#include<stdio.h>
 //Dynamic function
    void Display(int iFrequency)
    {
        int icnt=0;
        
        //Filter
        if(iFrequency < 0)
        {
            printf("Invalid input \n");
        }
        for(icnt=1;icnt<=iFrequency;icnt++)
        {
            printf("Jay Ganesh\n");
        }
    }

int main()
{
    int iCount;

    printf("Enter the frequency : \n");
    scanf("%d",&iCount);

    Display(iCount);

    return 0;
}
