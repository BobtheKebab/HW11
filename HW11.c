#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args (char * line) {
  char args[16];
  int count = 0;
  while (delim) {
    if (count = 0) {
      char * temp = strsep(line, " ");
      args[0] = temp;
      args[1] = temp;
    } else {
      args[count] = strsep(line, " ");
    }
    count++;
  }
  args[count] = NULL;
}

int main () {

  char ** args = parse_args("ls");
  execvp(args[0], args);
  
}
