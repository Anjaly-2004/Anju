#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j, k, choice;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Transpose of A");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            if (r1 != r2 || c1 != c2) {
                printf("Addition not possible.\n");
                break;
            }

            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    result[i][j] = a[i][j] + b[i][j];

            printf("Matrix Addition:\n");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c1; j++)
                    printf("%d ", result[i][j]);
                printf("\n");
            }
            break;

        case 2:
            if (r1 != r2 || c1 != c2) {
                printf("Subtraction not possible.\n");
                break;
            }

            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    result[i][j] = a[i][j] - b[i][j];

            printf("Matrix Subtraction:\n");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c1; j++)
                    printf("%d ", result[i][j]);
                printf("\n");
            }
            break;

        case 3:
            if (c1 != r2) {
                printf("Multiplication not possible.\n");
                break;
            }

            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++) {
                    result[i][j] = 0;
                    for (k = 0; k < c1; k++)
                        result[i][j] += a[i][k] * b[k][j];
                }
            }

            printf("Matrix Multiplication:\n");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++)
                    printf("%d ", result[i][j]);
                printf("\n");
            }
            break;

        case 4:
            printf("Transpose of Matrix A:\n");
            for (j = 0; j < c1; j++) {
                for (i = 0; i < r1; i++)
                    printf("%d ", a[i][j]);
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
