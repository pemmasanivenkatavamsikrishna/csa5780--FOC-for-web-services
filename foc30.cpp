#include <stdio.h>

int main() {
    int arr[10] = {5, 2, 7, 1, 8, 4, 6, 9, 3, 0};
    int target, i, found = 0;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    for (i = 0; i < 10; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d found at position %d.", target, i + 1);
    } else {
        printf("%d not found in the array.", target);
    }

    return 0;
}

