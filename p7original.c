#include<stdio.h>
typedef struct _triangle
{
  float base,altitude,area;
}Triangle;
Triangle input_triangle()
{
  Triangle a;
  printf("enter the base and height of the triangle respectively:\n");
  scanf("%f %f",&a.base,&a.altitude);
  return(a);
}
void find_area(Triangle *t)
{
  t->area=t->base*(t->altitude*0.5);
}
void output(Triangle t)
{
  printf("the area of triangle with base %f height %f is %f\n",t.base,t.altitude,t.area );
}
int main()
{
  Triangle a;
  a=input_triangle();
  find_area(&a);
  output(a);
  return 0;
}