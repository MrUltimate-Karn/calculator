//write a c program to perform arithmetic operation. 
#include <stdio.h>
int main()
{
    int num1,num2;//to store first number and second number.
    float result;//to store the result.
    int opr;    //to store operator choice
     
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform 1.add\n2.subtract\n3.multiply\n4.division\n5.exit: ");
    scanf(" %d",&opr);
     
    result=0;
    while(opr!=5){
    switch(ch)    
    {
        case '1':
            result=num1+num2;
            break;
             
        case '2':
            result=num1-num2;
            break;
         
        case '3':
            result=num1*num2;
            break;
             
        case '4':
            result=(double)num1/(double)num2;
            break;
        default:
            printf("operation does not exist.\n");
    }
    printf("Result: %d %c %d = %lf\n",num1,ch,num2,result);
   int p;
   printf("Enter your choice again or press 5 to exit");
   scanf("%d",&p);
   opr=p;
 }
    return 0;
}
