#include<stdio.h>

int input_side()
{
  int a;
  printf("enter the side of the triangle : \n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  int tri;
  if (a==b && b==c)
  {
  tri=0;
  }
  else if(a!=b && a==c) 
  {
    tri=1;
  }
  else if(a==b && a!=c)
  {
    tri=1;
  }
  else if(b==c && a!=b)
  {
    tri=1;
  }
  else 
  {
    tri=5;
  }
  return tri;
}
void output(int a, int b, int c, int tri)
{
  
  if(tri==0)
  {
  printf(" is equilateral ");
  }
  if(tri==1)
  {
  printf(" is isosceles ");
  }
  else if(tri==5)
  {
    printf("is scalene");
  }
}

int main()
{
  int m,n,o,y;
  m=input_side();
  n=input_side();
  o=input_side();
  y=check_scalene(m,n,o);
  output(m,n,o,y);
  return 0;

}