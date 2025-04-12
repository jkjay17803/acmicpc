#include <stdio.h>

int main(void) {
	int N, M;

	scanf_s("%d %d", &N, &M);

	if (1 > M || M > N || N > 8) return 1;

	for (int i = 1; N >= i; i++) {
		for (int ii = 1; M+1 >= ii; ii++) {
			if (i == ii) continue;
			printf("%d %d\n", i, ii);
		}
	}
	return 0;
}
