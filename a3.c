#include<stdio.h>
#include<math.h>

#define K 3.14

double sff(double a, double b){
    return ceil(a/b);
}
 int main(){
     int h,r;
     scanf("%d %d",&h,&r);
     double d = K*r*r*h;
     int x = (int)sff(20000,d);
     printf("%d\n",x);
     return 0;
 }