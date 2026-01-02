#include <stdio.h>

#define MAX_STUDENTS 50
#define MAX_SUBJECTS 5

int main() {
    int n, i, j;
    int marks[MAX_STUDENTS][MAX_SUBJECTS];
    int total[MAX_STUDENTS];
    float percentage[MAX_STUDENTS];
    int roll[MAX_STUDENTS];
    int topper[MAX_SUBJECTS];
    int temp;

    
    printf("Enter number of students: ");
    scanf("%d", &n);

   
    for (i = 0; i < n; i++) {
        roll[i] = i + 1;
        total[i] = 0;

        printf("\nEnter marks for Student %d:\n", roll[i]);
        for (j = 0; j < MAX_SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        percentage[i] = total[i] / (float)MAX_SUBJECTS;
    }

    for (j = 0; j < MAX_SUBJECTS; j++) {
        topper[j] = 0;
        for (i = 1; i < n; i++) {
            if (marks[i][j] > marks[topper[j]][j]) {
                topper[j] = i;
            }
        }
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (total[i] < total[j]) {
                temp = total[i];
                total[i] = total[j];
                total[j] = temp;

                temp = roll[i];
                roll[i] = roll[j];
                roll[j] = temp;
            }
        }
    }

 
    printf("\n===MARKSHEETS ===\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        for (j = 0; j < MAX_SUBJECTS; j++) {
            printf("Subject %d: %d\n", j + 1, marks[i][j]);
        }
        printf("Total: %d\n", total[i]);
        printf("Percentage: %.2f\n", percentage[i]);
    }

    printf("\n===CLASS RANK LIST ===\n");
    printf("Rank\tRoll No\tTotal Marks\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t%d\n", i + 1, roll[i], total[i]);
    }

   
    printf("\n=== SUBJECT TOPPERS ===\n");
    for (j = 0; j < MAX_SUBJECTS; j++) {
        printf("Subject %d Topper: Student %d (Marks: %d)\n",
               j + 1, topper[j] + 1, marks[topper[j]][j]);
    }

    return 0;
}