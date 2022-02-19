#include<stdio.h>
int input_array_size()
{
  int a;
  printf("enter the of number of values to enter\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[])
{
  for(int i=0;i<n;i++)
    {
      printf("enter the numbers\n");
      scanf("%d",&a[i]);
    }
}
int is_composit(int n)
{
  int i;
  for(i=2;i<n;i++){
    if(n%i==0){
    return(1);
    }
  }
  return(0);
}
int sum_composite_number(int n,int a[])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    if(is_composit(a[i])==1)
    {
      sum=sum+a[i];
    }
  }
  return(sum);
}
void out_put(int sum)
{
  printf("the sum is %d",sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_number(n,a);
  out_put(sum);
}