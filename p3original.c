#include<stdio.h>

int input_number()
{
  int a;
  printf("enter the number to check : \n");
  scanf("%d",&a);
  return a;
}


int is_composite(int n,int composite)
{
  composite=0;
  for(int i=1;i<=n;i++)
  {
    if(n % i==0)
    {
      composite +=1;
    }
  }
  return composite;
}
void output(int n, int a)
{
  if(a>2)
  {
    printf("the given number %d is composite",n);
  }
  else
  {
    printf("the given number %d is not composite",n);
  }
}

int main()
{
  int p,q,r;
  p=input_number();
  q=is_composite(p,q);
  output(p,q);
  return 0;

}