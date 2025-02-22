#include "lab.h"

float squareArea(float side)
{
  float area = side * side;
  return area;
}

float rectangleArea(float length, float width)
{
  float area = length * width;
  return area;
}

float circleArea(float radius)
{
  float area = 3.14159 * radius * radius;
  return area;
}

float circleArea2(float radius)
{
  float area = 3.14 * radius * radius;
  return area;
}

float triangleArea(float base, float height)
{
  float area = 0.5 * base * height;
  return area;
}

float trapeziumArea(float base1, float base2, float height)
{
  float area = 0.5 * (base1 + base2) * height;
  return area;
}

float parallelogramArea(float base, float height)
{
  float area = base * height;
  return area;
}