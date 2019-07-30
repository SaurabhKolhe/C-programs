/* Arithmetic Operators:
   1. Addition (+)
   2.Substraction (-)
   3.Multiplication (*)
   4.Division (/)
   5.Mod (%)    Remainder of division
  */
  #include <stdio.h>
  void main()
  {
  int a=20;
  int b=10;
  int c;
  c=a+b;
  printf("Addition : %d",c);
  //we can directly take addition
  printf("Addition : %d",a+b);
  printf("Substraction : %d",a-b);
  printf("Multiplication : %d",a*b);  
  printf("Division : %d",a/b);
  printf("Remainder : %d",a%b);
  
  //Taking input from user
  int d,e;
  printf("Enter 1st Number");
  scanf("%d",&d);   //scanf() is use to store the value at address of variable i.e. &variable_name.
  printf("Enter 2nd Number");
  scanf("%d",&e);
  printf("Addition : %d",d+e);
  printf("Substraction : %d",d-e);
  printf("Multiplication : %d",d*e);  
  printf("Division : %d",d/e);
  printf("Remainder : %d",d%e);
  }
