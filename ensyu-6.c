#include <stdio.h>
#define S0 '0'
#define S1 '1'

int main(){
  int i=0;
  char str[256];
  scanf("%s",str);
  while(str[i+2]!='\0'){
    if(str[i]==S0)
      i++;
    else if(str[i+1]==S0 && str[i+2]==S1){
      printf("accept\n");
      return 0;
    }else
      i++;
  }
  printf("reject\n");
  return 0;
}