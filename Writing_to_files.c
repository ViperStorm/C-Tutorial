#include <stdio.h>

int main() {
  // WRITE A FILE
  FILE *pFile = fopen("output.txt", "w");

  char text[] = "TESTING TESTING 123\nHELL YEAHHHH";

  if (pFile == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  fprintf(pFile, "%s" , text);

  fclose(pFile);

  return 0;
}