#include <stdio.h>

int main() {

  int a, b;

  scanf("%d", & a);
  b = a * 2.85 / 10;
  switch (b) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    	printf("F");
    	break;
    case 6:
    	printf("D");
    	break;
    case 7:
    	printf("C");
    	break;
    case 8:
    	printf("B");
    	break;
    case 9:
    	printf("A");
    	break;
    default:
    	printf("0-35iin hoorond too oruulna uu.");
    break;
  } 

  return 0;
}
