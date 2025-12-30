// Sum of diagnol elements of 2d array

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int a[10][10];

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if(i == j)
                sum += a[i][j];
        }
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
