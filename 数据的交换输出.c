#include<stdio.h>
#include<iostream>
int main(){
  int n;
  int a[100];
  while(scanf("%d",&n)!=EOF){
    if(n==0)
      break;
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int min_pos = 0;
  for(int i=1;i<n;i++){
    if(a[i]<a[min_pos]){
      min_pos = i;
    }
  }
  int s = a[0];
  a[0] = a[min_pos];
  a[min_pos] = s;
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  }
  return 0;
}