#include<stdio.h>
int main()
{
  char str[1000]="reymysterio",ch='e';
  int count=0;
  int i;
  for( i=0;str[i]!='\0';++i){
    if(ch==str[i])
      ++count;
  }
  printf("frequency of %c is =%d",ch,count);
  return 0;
}
