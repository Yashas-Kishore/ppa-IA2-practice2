#include<stdio.h>

void input(float *base, float *height)
{
  printf("enter the base and the height respectively: \n");
  scanf("%f%f",base,height);

}


void find_area(float base , float height, float *area)
{
  float a;
  a=(base*height);
  *area=a/2;
}
void output(float base, float height, float area)
{
  printf("the area of triangle with the given base %f and height %f is %f",base,height,area);

}

int main()
{
  float b,h,area;
  input(&b,&h);
  find_area(b,h,&area);
  output(b,h,area);
  return 0;
}