#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;
    int max_pos, min_pos;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];
    max_pos = min_pos = 1;

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_pos = i + 1;
        }
        if(arr[i] < min) {
            min = arr[i];
            min_pos = i + 1;
        }
    }
    printf("Maximum number: %d\n", max);
    printf("Position of maximum number: %d\n", max_pos);
    printf("Minimum number: %d\n", min);
    printf("Position of minimum number: %d\n", min_pos);

    return 0;
}
