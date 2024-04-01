#include <stdio.h>

#define STUDENTS 50
#define SUBJECTS 4

int main() {
    int scores[STUDENTS][SUBJECTS];
    int* ptr_scores = &scores[0][0]; 

    int i, j;

 
    for (i = 0; i < STUDENTS; i++) {
        printf("학생 %d의 성적을 입력하세요:\n", i + 1);
        for (j = 0; j < SUBJECTS; j++) {
            do {
                printf("%d번째 과목 성적: ", j + 1);
                scanf_s("%d", ptr_scores + i * SUBJECTS + j);
                if (*(ptr_scores + i * SUBJECTS + j) < 0 || *(ptr_scores + i * SUBJECTS + j) > 100) {
                    printf("성적은 0부터 100까지의 범위 내에서 입력해주세요.\n");
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
        printf("학생 %d의 총점: %d, 평균: %.2f\n", i + 1, total, average);
    }

    return 0;
}
