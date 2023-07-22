#include <stdio.h>

// Declare Functions
void printMessage (void);

int main(void) {

  // Declare variables
  int i;

  // Loop five times
  for (i = 1; i <= 5; i++) {
    printMessage ();
  }
  
  return 0;
}

// Define Functions
void printMesage (void) {
  printf ("Programming is Fun!\n");
}