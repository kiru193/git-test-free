#include <iostream>

int main() {
	int m=true;

	printf("hello world!");
	for (int i = 0; i < 100; i++) {
		printf("%d\n", i);
		if (i < 60 && i>50) {
			printf("%d", rand());
		}
	}

	if (m == true) {
		printf("true\n");
	}
	else {
		printf("false\n");
	}

	for (int m = 0; m < 100; m += 4) {
		printf("%d\n", m);
	}
}