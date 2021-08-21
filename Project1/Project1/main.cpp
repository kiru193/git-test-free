#include <iostream>

int main() {
	printf("hello world!");
	for (int i = 0; i < 100; i++) {
		printf("%d\n", i);
		if (i < 60 && i>50) {
			printf("%d", rand());
		}
	}

	for (int m = 0; m < 100; m += 4) {
		printf("%d\n", m);
	}
}