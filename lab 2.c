/* Name: Nana Akosua Agyeiwaa Marfo
Index Number: 7275323*/

#include <stdio.h>
int main()
{
  printf("G\n");

  char firstChar = 'G';
  auto char secondChar = 'G';

// Declaring num with the integer data type
  int num = 0;
  // Changing the value of num to 1
  num = 1;
  printf("%d\n",num);

// Declaring variables a,b and c with the integer data type
  int a,b,c;
  a = 2;
  b = 3;

  c = a + b;
  printf("%d\n",c);

// Performing arithmetic operations
  int multiply = a * b;
  int divide = a / b;
  int subtract = a - b;
  int mod = a % b;
  
   printf("%d %d %d %d\n",multiply,divide,subtract,mod);

// Declaring variables d and e with the integer data type
  int d = 40;
  int e = 30;

// Performing arithmetic operations
  d += e;
  printf("%d",d);
  d -= e;
  printf(" %d",d);
  d *= e;
  printf(" %d",d);
  d /= e;
  printf(" %d",d);
  d %= e;
  printf(" %d\n",d);

  // Operator precedence practice
  int first_result = 10 + 5 * 2;
  printf("Result: %d\n",first_result);

  int second_result = (10 + 5)*2;
  printf("Result: %d\n",second_result);

  int x = 5, y = 10, z;
  z = x = y;
  printf("x:%d y:%d z:%d\n",x,y,z);


  return 0;
}