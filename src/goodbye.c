#include <stdio.h>

int main (int argc, char **argv) {
  
  char line [128];

  while (fgets (line, sizeof(line), stdin) != NULL) {
    printf ("%s%s", line, line);
    printf (" Arrivederci!\n");
  }
}
