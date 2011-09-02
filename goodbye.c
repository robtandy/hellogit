#include <stdio.h>

int main (int argc, char **argv) {
  
  char line [128];

  while (fgets (line, sizeof(line), stdin) != NULL) {
    printf ("%s", line);
    printf (" Goodbye!\n");
  }
}
