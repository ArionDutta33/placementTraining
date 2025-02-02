#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3}; // ✅ Corrected array initialization
    int n = sizeof(arr) / sizeof(arr[0]); // ✅ Correct way to get array size

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]); // ✅ Corrected printf statement
    }

    return 0;
}
