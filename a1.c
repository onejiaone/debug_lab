#include<stdio.h>
int main()
{
  int m;
  scanf("%d",&m);
while (m--) {
  double a,b,c;
  scanf("%lf %lf %lf",&a, &b, &c);
    if (a+b>c && a+c>b && b+c>a)
    {printf("YES\n");}
    else 
    {printf("NO\n");}
     }
    return 0;
}