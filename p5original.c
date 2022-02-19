#include<stdio.h>
int input()
{
  int a;
  printf("enter the two numbers\n");
  scanf("%d",&a);
  return(a);
}
int gcd(int a, int b)
{
  int i;
  if(a>b){
    i=a;
  }else{
    i=b;
  }
  for(;i>0;i--)
    {
      if(a%i==0 && b%i==0)
      {
        return(i);
      }
    }
}
void output(int a,int b,int hcf)
{
  printf("the hcf of %d and %d is %d\n",a,b,hcf);
}
int main()
{
  int a,b,hcf;
  printf("enter the two numbers\n");
  a=input();
  b=input();
  hcf=gcd(a,b);
  output(a,b,hcf);
}