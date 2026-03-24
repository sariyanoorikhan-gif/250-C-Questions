#include<stdio.h>
int main()
{
    int n;
    int i;
    int isPrime = 1;
   
    printf("enter the number");
    scanf("%d",&n);

    if (n <= 1 )
{
    printf("Not prime number");
    return 0;
}
   

   for( i = 2;i < n ; i++)
  {
     if( n%i== 0 &&  n != 2 )
     {
        isPrime = 0;
        break;
      } 
         
 }
           if(isPrime == 1)
           printf("prime number");

           else 
            printf("not prime");

        
return 0;
}