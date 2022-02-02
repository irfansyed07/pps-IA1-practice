#include <stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int add(int a, int b)
{
  int c;
  c=a+b;
  return c;
}
void output(int c)
{
printf("addition of two numbers is %d", c);
}
int main()
{
int x,y,z;
x= input ();
y=input();
z=add(x,y);
output (z);
return 0 ;
}
