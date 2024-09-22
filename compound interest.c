/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// C Program To Calculate Compound Interest 
#include <stdio.h>
#include <math.h>

int main(){
    float principal, rate, time, CI, amount;
    
    // Asking for Input
    printf("Enter The Principal Amount: \n");
    scanf("%f", &principal);
    printf("Enter Rate of Interest: \n");
    scanf("%f", &rate);
    printf("Enter Time Period: \n");
    scanf("%f", &time);
    
    amount = principal * (pow((1 + rate/100), time));
    CI = amount - principal;
    printf("Compound Interest is %.2f", CI);
    
    return 0;
}