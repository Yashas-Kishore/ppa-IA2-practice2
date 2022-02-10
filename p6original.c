#include<stdio.h>
void input_string(char *a)
{
  scanf("%s",a);
}
void str_revers(char *a, char *r)
{
  int k=0;
  for(int i=0;a[i]!=0;i++)
    {
      k=k+1;
    }
  for(int i=0;i<k+1;i++)
    {
      r[i]=a[k-i-1];
    }
}
void output(char *a,char *revers)
{
  printf("%s reversed is %s",a,revers);
}
int main()
{
  char a[20],r[20];
  input_string(a);
  str_revers(a,r);
  output(a,r);
}