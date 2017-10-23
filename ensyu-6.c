#include <stdio.h>
#define S0 0
#define S1 1
#define S2 2
int main(){
  int i=0,State=S0;
  char str[256];
  scanf("%s",str);
  while(str[i]!='\0'){
    switch(State){
      case S0:
        if(str[i]=='0')
          State=S0;
        else
          State=S1;
        break;
      case S1:
        if(str[i]=='0')
          State=S2;
        else
          State=S1;
        break;
      case S1:
        if(str[i]=='0')
          State=S0;
        else
          State=S3;
        break;
      case S3:
        break;
    }
    i++;
  }
  if(State==S3)
    printf("accept\n");
  else
    printf("reject\n");
  return 0;
}