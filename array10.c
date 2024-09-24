#include <stdio.h>

int main() {
    int arr1[50], arr2[50], i, j, num1, num2;


    printf("Enter the number of elements in first and second array: ");
    scanf("%d %d", &num1, &num2);


    printf("Enter elements of the first array (sorted):\n");
    for (i = 0; i < num1; i++) {
        scanf("%d", &arr1[i]);
    }


    printf("Enter elements of the second array (sorted):\n");
    for (j = 0; j < num2; j++) {
        scanf("%d", &arr2[j]);
    }


    i = 0;
    j = 0;
    printf("Union: ");
    while (i < num1 && j < num2) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }

    while (i < num1) {
        printf("%d ", arr1[i]);
        i++;
    }


    while (j < num2) {
        printf("%d ", arr2[j]);
        j++;
    }

    printf("\n");

    i = 0;
    j = 0;
    printf("Intersection: ");
    while (i < num1 && j < num2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }

    printf("\n");

    return 0;
}
