#include <stdio.h>


int main(){


    int n,m;
    
    printf("\n\n---- GREATEST OF TWO NUMBERS ----\n\n");
    
    printf("Enter the numbers here : \n\n");
    scanf("%d%d", &n,&m);
    
    if(n>m)
    printf("%d is greatest", n);
    
    else
    printf("%d is greatest", m);


//smallest of 3 numbers
printf("\n\n---- SMALLEST OF THREE NUMBERS ----\n\n");

    int mars, earth, sun;

    printf("Enter the numbers here : \n\n");
    scanf("%d%d%d",&mars,&earth,&sun);
    
    if(earth<mars&&earth<sun)
    printf("%d is smallest number\n",earth);
    
    else if(mars<earth&&mars<sun)
    printf("%d is smallest number\n",mars);
    
    else
    printf("%d is smallest number\n",sun);    
    
//even or odd check
printf("\n\n---- CHECK ODD OR EVEN ----\n\n");

    int pewpew;
    
    printf("Enter the number to be checked even or odd here : ");
    scanf("%d", &pewpew);
    
    if(pewpew%2==0)
    printf("\n\n%d is even number", pewpew);
    
    else
    printf("\n\n %d is odd number", pewpew);
    
    
//grade of students
printf("\n\n---- CHECK GRADE ----\n\n");

#include <stdio.h>

   float percentage,a,b,c,d,e,pew;
   
   printf("Enter marks here :");
   scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
   
   pew = a+b+c+d+e;
   
   percentage =(pew/500)*100.0;

   printf("Percentage = %.2f%%", percentage);
   
   if(percentage>75)
   printf("\n\n--DISTINCTION--");
   
   else if(percentage>=60&&percentage<=75)
   printf("\n\n--1st DIV--");
   
   else if(percentage>=50&&percentage<=60)
   printf("\n\n--2nd DIV--");
   
   else if(percentage>=40&&percentage<=50)
   printf("\n\n--3rd DIV--");
   
   else 
   printf("\n\n-- congratulations you have FAILED. Enjoy! --");

return (0);
}