#include<stdio.h>
//yin
#define MJ 3.1415927
int main(){  
    double r;  
    while(scanf("%lf",&r)!=EOF){        
    printf("%.3lf\n",(4.0/3.0)*MJ*r*r*r);  
}    
    return 0;
}