#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int ArrayFilling(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand()%10;
    }
    for (int i = 0; i < size; i++) {
        printf("%3d", arr[i]);
    }
    return 0;
}

int main()
{
    int first_arr[50]{};
    int second_arr[50]{};
    int sizeoffirstarr, sizeofsecondarr;
    printf("Enter the size of the first array: ");
    scanf_s("%d", &sizeoffirstarr);
    printf("Elements of the first array: ");
    ArrayFilling(first_arr, sizeoffirstarr);
    printf("\n");
    printf("Enter the size of the second array: ");
    scanf_s("%d", &sizeofsecondarr);
    printf("Elements of the second array: ");
    ArrayFilling(second_arr, sizeofsecondarr);
    return 0;
}