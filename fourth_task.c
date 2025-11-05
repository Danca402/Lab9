/* Task description:Removing parts from strings
Visit HP too!

Write the inverse of the previous function: the part delimited 
by the start and end indices should be removed from the original 
text, and the rest is kept! 
The function should not modify the source string received as a 
parameter, a brand new string should be created dynamically, and 
returned by the function.

Write a C program to demonstrate the usage of the function. 
Don't forget to release the memory at the end.


*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* removingString(char* original, int start, int end){
  int len = strlen(original);
  if(start < 0){
    printf("Invalid starting address.");
    return NULL;
  }
  if(end>len){
    printf("Invalid ending address.");
    return NULL;
  }
  int newlen = len - (end - start);     //int newlen = len + start - end;

  char* p = (char*)malloc((newlen+1)*sizeof(char));

  for(int i=0; i<start; i++){
    p[i]=original[i];
  }
  for(int i=end; i<len;i++){
    p[start+i-end] = original[i];
  }
  p[newlen] = '\0';
  return p;
}

int main(){
  char str[] = "hello, world";
  char *y = removingString(str,4,8);
  printf("\n%s\n",y);
  free(y);
  return 0;
}
