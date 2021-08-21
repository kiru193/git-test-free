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
}