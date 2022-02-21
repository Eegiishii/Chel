#include <stdio.h>

int main() {
	
	int a, b, c, d, e;
	
	scanf("%d", &a);
	
	b = a / 1000;
	c = a / 100 % 10;
	d = a % 100 / 10;
	e = a % 10;
	
	if(b == e && c == d) {
		printf("1");
	} else {
		printf("0");
	}

	return 0;
}
