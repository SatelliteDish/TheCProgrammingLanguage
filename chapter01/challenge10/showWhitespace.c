#include <stdio.h>

/*
  The book says to make tabs and backspaces(?) visible?
  I don't know what it means by that, so I'm just going to make
  it show tabs, spaces, and escaped backslashes instead
*/

int validateInput(int count);
int textLength(char* text);
void showWhitespace(char* text, char* buffer);

int main(int argc, char* argv[]) {
  if(validateInput(argc)) {
    char buffer[textLength(argv[1])*2];
    showWhitespace(argv[1],buffer);
    printf("%s\n",buffer);
  } else {
    return 1;
  }
  return 0;
}

int validateInput(int count) {
  if(count > 2) {
    printf("Too many arguments, please only give the input text!\n");
    return 0;
  } else if(count < 2) {
    printf("Too few arguments, please give the input text!\n");
    return 0;
  }
  return 1;
}

int textLength(char* text) {
  int i = 1;
  while(*text != '\0') {
    i++;
    text++;
  }
  return i;
}

void showWhitespace(char* text, char* buffer) {
  int i = 0;
  while (*text != '\0') {
    switch (*text) {
      case ' ':
        buffer[i] = '\\';
        buffer[i+1] = 's';
        i++;
        break;
      case '\t':
        buffer[i] = '\\';
        buffer[i+1] = 't';
        i++;
        break;
      case '\\':
        buffer[i] = '\\';
        buffer[i+1] ='\\';
        i++;
        break;
      default:
        buffer[i] = *text;
    }
    i++;
    text++;
  }
}
