#include <stdio.h>
#include "lab.h"

int main()
{
  // First worksheet
  float firstArea;
  printf("Shape 1\nIt contains a semi-circle and a rectangle.\n"); 
  firstArea = circleArea(4)/2 + rectangleArea(12,8); 
  printf("Area of shape 1 = %.2fft\n\n", firstArea); 

  float secondArea;
  printf("Shape 2\nIt contains a rectangle and a triangle.\n");
  secondArea = rectangleArea(8,13) + triangleArea(8,6);
  printf("Area of shape 2 = %.2fft\n\n", secondArea);

  float thirdArea;
  printf("Shape 3\nIt contains a square and a rectangle.\n");
  thirdArea = squareArea(5) + rectangleArea(11,4);
  printf("Area of shape 3 = %.2fft\n\n", thirdArea);

  float fourthArea;
  printf("Shape 4\nIt contains a semi-circle and a triangle.\n");
  fourthArea = circleArea(4)/2 + triangleArea(7,8);
  printf("Area of shape 4 = %.2fft\n\n", fourthArea);

  float fifthArea;
  printf("Shape 5\nIt contains a square and a triangle.\n");
  fifthArea = squareArea(7) + triangleArea(4,7);
  printf("Area of shape 5 = %.2fft\n\n", fifthArea);

  float sixthArea;
  printf("Shape 6\nIt contains a rectangle and a rectangle.\n");
  sixthArea = rectangleArea(6,12) + rectangleArea(6,12);
  printf("Area of shape 6 = %.2fft\n\n", sixthArea);


  // Second worksheet
  float areaOne;
  printf("Shape 1\nIt contains a semi-circle and a trapezium.\n");
  areaOne = circleArea2(9)/2 + trapeziumArea(12,8,13);
  printf("Area of shape 1 = %.2fft\n\n", areaOne);

  float areaTwo;
  printf("Shape 2\nIt is a trapezium\n");
  areaTwo = trapeziumArea(19,19,15) - triangleArea(19,7);
  printf("Area of shape 2 = %.2fft\n\n", areaTwo);

  float areaThree;
  printf("Shape 3\nIt contains a circle and a triangle.\n");
  areaThree = circleArea2(6) + triangleArea(12,6);
  printf("Area of shape 3 = %.2fft\n\n", areaThree);

  float areaFour;
  printf("Shape 4\nIt contains a square and a parallelogram.\n");
  areaFour = squareArea(11) + parallelogramArea(11,5);
  printf("Area of shape 4 = %.2fin\n\n", areaFour);

  float areaFive;
  printf("Shape 5\nIt contains a semicircle and a rectangle.\n");
  areaFive = circleArea2(11) + rectangleArea(13,22);
  printf("Area of shape 5 = %.2fft\n\n",areaFive);

  float areaSix;
  printf("Shape 6\nIt contains a rectangle and a trapezium.\n");
  areaSix = rectangleArea(5,17) + trapeziumArea(21,7,17);
  printf("Area of shape 6 = %.2fyd\n\n", areaSix);

  return 0;
}