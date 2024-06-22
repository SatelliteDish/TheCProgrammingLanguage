#include <stdio.h>

int main(int argc, char* argv[]) {
  if(argc > 2) {
    printf("Too many inputs, only give the text to count the whitespace in.");
    return 1;
  } else if(argc < 2) {
    printf("Too few arguments, please provide the text to count.");
    return 1;
  }
  int spaceCount, tabCount, lineCount;
  spaceCount = tabCount = 0;
  lineCount = 1; //To account for first line

  char *input = argv[1];
  while(*input != '\0') {
    if(*input == ' ') {
      spaceCount++;
    } else if(*input == '\t') {
      tabCount++;
    } else if(*input == '\n') {
      lineCount++;
    }
    input++;
  }

  printf("Tabs\tSpaces\tLines\n%i\t%i\t%i\n",tabCount, spaceCount, lineCount);
}
