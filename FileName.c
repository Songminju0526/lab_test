#include <stdio.h>

#define STUDENTS 50
#define SUBJECTS 4

int main() {
    int scores[STUDENTS][SUBJECTS];
    int* ptr_scores = &scores[0][0]; 

    int i, j;

 
    for (i = 0; i < STUDENTS; i++) {
        printf("�л� %d�� ������ �Է��ϼ���:\n", i + 1);
        for (j = 0; j < SUBJECTS; j++) {
            do {
                printf("%d��° ���� ����: ", j + 1);
                scanf_s("%d", ptr_scores + i * SUBJECTS + j);
                if (*(ptr_scores + i * SUBJECTS + j) < 0 || *(ptr_scores + i * SUBJECTS + j) > 100) {
                    printf("������ 0���� 100������ ���� ������ �Է����ּ���.\n");
                }
            } while (*(ptr_scores + i * SUBJECTS + j) < 0 || *(ptr_scores + i * SUBJECTS + j) > 100);
        }
    }

 
    for (i = 0; i < STUDENTS; i++) {
        int total = 0;
        for (j = 0; j < SUBJECTS; j++) {
            total += *(ptr_scores + i * SUBJECTS + j);
        }
        float average = (float)total / SUBJECTS;
        printf("�л� %d�� ����: %d, ���: %.2f\n", i + 1, total, average);
    }

    return 0;
}
