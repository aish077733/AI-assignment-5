#include <stdio.h> 
int main() 
{ 
    int fever, cough; 
    float pDisease; 
    printf("=== Bayesian Network Example ===\n"); 
    printf("Do you have Fever? (1=Yes, 0=No): "); 
    scanf("%d", &fever); 
    printf("Do you have Cough? (1=Yes, 0=No): "); 
    scanf("%d", &cough); 
    if(fever==1 && cough==1) 
        pDisease = 0.90; 
    else if(fever==1 || cough==1) 
        pDisease = 0.60; 
    else 
        pDisease = 0.10; 
printf("\nProbability of Disease = %.2f\n", pDisease); 
    if(pDisease > 0.5) 
        printf("Inference: Disease Likely\n"); 
    else 
printf("Inference: Disease Unlikely\n"); 
return 0; 
}
