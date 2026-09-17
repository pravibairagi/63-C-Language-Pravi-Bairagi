#include<stdio.h>
int main ()
{
    int A ;
    printf("Enter the value of A : ",A );
    scanf("%d",&A);

    int B ;
    printf("Enter the value of B : ",B);
    scanf("%d",&B);

    int C = A % B ;
    printf("The remainder in division of A and B : %d ", C);
    return 0 ;

} 
