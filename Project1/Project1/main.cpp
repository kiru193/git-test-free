#include <iostream>

int main() {
	printf("hello world!");
	for (int i = 0; i < 100; i++) {
		printf("%d\n", i);
		if (i < 60 && i>50) {
			printf("%d", 3 * i);
		}
	}
}