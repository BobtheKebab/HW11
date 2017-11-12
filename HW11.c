#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args (char * line) {
  char ** args = calloc(10, sizeof(char *));
  int count = 0;
  while (line) {
    args[count] = strsep(&line, " ");
    count++;
  }
  args[count] = NULL;
  return args;
}

int main () {

  char line[50] = "echo IT WORKS YAY";
  char ** args = parse_args(line);
  execvp(args[0], args);
  return 0;
  
}
