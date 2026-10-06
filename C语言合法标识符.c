#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<iostream.h>

int isVaild(char s[]){
  int len = strlen(s);
  if(len == 0) return 0;
  if(！(isalpha(s[0]) || s[0] == '_'))return 0;
  int i
    for (i=1;i<len;i++){
      if(!(isalnum(s[i]) || s[i] == '_'))return 0;
    }
  return 1;
}

int main(){
  int n , i;
  scanf("%d",&n);
  getchar();
  for(i=0;i<n;i++){
    char s[50];
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = '\0';
    if (isValid(s))printf("yes\n");
    else printf("no\n");
  }
  return 0;
}