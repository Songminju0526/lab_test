#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score[5];
	int sum = 0;
	double ave =1;

	for (int i = 0; i < 5; i++) {
		printf("%d��° �л� ���� �Է� :",i + 1);
		scanf("%d", &score[i]);
		if (score[i] < 0 || score[i]>100) {
			printf("�߸� �Է��ѵ� �ٽ� ����\n");
			i--;
		}
		else {
			sum += score[i];
		}

	}
	ave = sum / 5;
	printf("5�� ����� %.2f", ave);

	return 0;
	
}