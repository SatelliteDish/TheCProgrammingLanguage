#include <stdio.h>

int validateArgs(int count);
void removeExtraSpace(char* text, char* buffer);
int textLength(char* text);

int main(int argc, char* argv[]) {
  if(validateArgs(argc)) {
    char textBuff[textLength(argv[1])];
    removeExtraSpace(argv[1],textBuff);
    printf("%s\n", textBuff);
  } else {
    return 1;
  }
  return 0;
}

int validateArgs(int count) {
  if(count > 2) {
    printf("Too many arguments! Only supply input text.\n");
    return 0;
  } else if(count < 2) {
    printf("Too few arguments! Please supply input text.\n");
    return 0;
  }
  return 1;
}

int textLength(char* text) {
  int i = 1;//because I want to count the '\0' as well
  while(*text != '\0') {
    i++;
    text++;
  }
  text++;
  return i;
}

void removeExtraSpace(char *text, char *buffer) {
  int i = 0;
  int isInSpace = 0;
  while(*text != '\0') {
    char current = *text;
    int currentlySpace = current == ' ';
    text++;
    if (!currentlySpace && isInSpace) {
      isInSpace = 0;
    } else if(currentlySpace) {
      if(isInSpace) {
        continue;
      } else {
        isInSpace = 1;
      }
    }
    buffer[i] = current;
    i++;
  }
  buffer[i] = '\0';
}
