
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
float AdditionTwoNumbers(
                             float fNo1,                            //First Input   
                             float fNo2                             //Second Input
                        )
{
    float fSum = 0.0f;                                              //To store the result
   
    if(fNo1  <  0.0f)                                               //Updator
    {
        fNo1 = -fNo1;
    }
    
    if(fNo2  <  0.0f)                                               //Updator   
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1+fNo2;                                              // Business Logic
    
    return fSum;
}  // end of AdditionTwoNumbers
/////////////////////////////////////////////////////////////////////////////////////////////// 
//
//  Entry point for application
//
/////////////////////////////////////////////////////////////////////////////////////////////// 

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;                          //To Accept user input         
    float fRet = 0.0f;                                             //To store the result

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);                   //Method call

    printf("Addition is : %f\n",fRet);
    return 0;
}     // end of main

/////////////////////////////////////////////////////////////////////////////////////////////// 
// Test Cases successfully handled by application
//  Input1 : 10.5       Input2 : 3.2        Output : 13.7
//  Input1 : -10.5      Input2 : 3.2        Output : 13.7
//  Input1 : 10.5       Input2 : -3.2       Output : 13.7
//  Input1 : -10.5      Input2 : -3.2       Output : 13.7  
//  Input1 : -10.5      Input2 : 0.0        Output : 10.5 
//
/////////////////////////////////////////////////////////////////////////////////////////////// 