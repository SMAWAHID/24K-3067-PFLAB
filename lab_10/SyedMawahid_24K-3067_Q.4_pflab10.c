#include <stdio.h>

int sumcheck(int arr[], int target, int n, int len)
{
    if (target == 0) {
        return 1;
    }
    if (n == len || target < 0) {
        return 0;
    }

    int include_current = sumcheck(arr, target - arr[n], n + 1, len);
    int exclude_current = sumcheck(arr, target, n + 1, len);

    return include_current || exclude_current;
}

int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter a target: ");
    scanf("%d", &target);

	int result = sumcheck(arr, target, 0, len);
    if (result != 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
