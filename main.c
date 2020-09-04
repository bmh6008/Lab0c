//Author: Byongchul Hur Bmh6008@psu.edu 
  #include <stdio.h>
#include <readline/readline.h>

int main(void) {
 char *temp = readline("Enter your name: ");
  printf("Hello, %s!\n",temp);
  return 0;
}