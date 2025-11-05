/* Task description:Inserting strings into strings

This task is similar to the previous ones: the function receives a string, and creates a new one.

This time, however, the task is not to remove/cut something from a string,
but to insert another string to somewhere into the original string.
For instance, the result of insertstring("hello!", 5, ", world") is a new string
containing hello, world!: the second string has been inserted between letters "o" and "!".
*/

#include <stdio.h> //don't forget to include the required libraries
#include <stdlib.h>
#include <string.h>

char* insertstring(char* x,int input, char* y){
  int lenx = strlen(x);
  int leny = strlen(y);
  int newlen = lenx + leny;

  char* p = (char*)malloc((newlen+1)*sizeof(char));
  
}

int main()
{

  return 0;
}
