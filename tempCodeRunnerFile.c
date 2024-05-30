#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);

    // DP table to store solutions to subproblems
    bool dp[n + 1][target + 1];

    // Initialize the DP table
    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;  // A sum of 0 can always be achieved with an empty subset
    }
    for (int j = 1; j <= target; j++) {
        dp[0][j] = false; // No sum > 0 can be achieved with 0 elements
    }

    // Fill the DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= target; j++) {
            if (arr[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // Print the DP table
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= target; j++) {
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }

    // Result
    if (dp[n][target]) {
        printf("There is a subset with the given sum.\n");
    } else {
        printf("There is no subset with the given sum.\n");
    }

    return 0;
}
