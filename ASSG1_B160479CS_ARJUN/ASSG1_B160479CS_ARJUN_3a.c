#include<stdio.h>
#include<stdlib.h>

void reverse(char string[],int len,int i);

int main()
{
  char *string1 = (char*) malloc(1000*sizeof(char));
  int i,len=0;
  //printf("Enter the string:");
  gets(string1);
  for(i=0;string1[i]!='\0';i++)
    len++;
  reverse(string1,len-1+(len%2),0);
  for(i=1;i<=len;i++)
    printf("%c",string1[i]);
  printf("\n");
  return 0;
}

void reverse(char string[],int len,int i)
{
  if(i>len/2)
    return;
  else
    {
     string[i]+=string[len-i];
     string[len-i]=string[i]-string[len-i];
     string[i]-=string[len-i];
     reverse(string,len,++i);
    }
}
