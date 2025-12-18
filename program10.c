/*

step 1 : Understand The Problem Statement
step 2 : Write the algorithm
step 3 : Decide the progaramming language
step 4 : write the program
step 5 : Test the program

*/

/*

  START 
       Accept first number as no1
       Accept second number as no2
       If the input is neagative convert it into positive
       Perform addition of no1 and no2
       Display the addition on screen
  STOP

*/



///////////////////////////////////////////////////////////////////////////////////////////////
//
// Require Header files
//
///////////////////////////////////////////////////////////////////////////////////////////////                                 

#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////                  
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         float,float        
//  Output :        float
//  Author :        Uddhav Venkatesh Khatal
//  Date :          09/10/2025 
//            
///////////////////////////////////////////////////////////////////////////////////////////////                              
float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;  
   
    //Updator
    if(fNo1  <  0.0f)
    {
        fNo1 = -fNo1;
    }
    
    if(fNo2  <  0.0f)   
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1+fNo2;  // Business 
    
    return fSum;
}
/////////////////////////////////////////////////////////////////////////////////////////////// 
//
//  Entry point for application
//
/////////////////////////////////////////////////////////////////////////////////////////////// 

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f\n",fRet);
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////// 
// Test Cases successfully handled by application
//  Input1 : 10.5       Input2 : 3.2        Output : 13.7
//  Input1 : -10.5      Input2 : 3.2        Output : 13.7
//  Input1 : 10.5       Input2 : -3.2       Output : 13.7
//  Input1 : -10.5      Input2 : -3.2       Output : 13.7  
//  Input1 : -10.5      Input2 : 0.0        Output : 10.5 
//
/////////////////////////////////////////////////////////////////////////////////////////////// 