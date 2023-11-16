#incude <stdio.h>

int main(void) {
	printf("Hello World");
	int notARY[20][20] = {0,};
	for(int i = 0; i < 20; i++) {
		for(int j = 0; j < 20; j++) {
			notARY[i][j] = i*j;
		}
	}
	for(int i = 0; i < 20; i++) {
		for(int j = 0; j < 20; j++) {
			printf("%d ", notARY[i][j]);
		}
		printf("\n");
	}
	return 0;
}
