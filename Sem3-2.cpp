#include <stdio.h>

int main() {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  if (a == 2022) {
    if (b == 3) {
      if (c == 1) {
	  
      } else if (c > 1) {
        printf("Ireedui");
      } else if (c < 1) {
        printf("Ungursun");
      }
    } else if (b < 3) {
      printf("Ungursun");
    } else if (b > 3) {
      printf("Ireedui");
    }
  } else if (a < 2022) {
    	printf("Ungursun");
  } else if (a > 2022) {
    	printf("Ireedui");
  }
  
  return 0;
}
