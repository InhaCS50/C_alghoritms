#include <stdio.h>

int linear_search(int arr[], int length, int target) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {10, 4, 6, 8, 2, 12,5};
    int target = 6;

    int result = linear_search(array, sizeof(array) / sizeof(array[0]), target);

    if (result != -1) {
        printf("Massivda %d elem topildi %d-indexda.\n", target, result);
    } else {
        printf("Massivda %d chi elem topilmadi.\n", target);
    }

    return 0;
}
