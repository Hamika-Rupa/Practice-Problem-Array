#include <stdio.h>

int main() {
    int arr[100],i,num;
    printf("How many elements=");
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    int targetSum = 33;

    int start = 0, currentSum = 0;


    for (int end=0;end<num;end++) {

        currentSum += arr[end];
        while (currentSum>targetSum&&start<=end) {
            currentSum-=arr[start];
            start++;
        }


        if (currentSum == targetSum) {
            printf("Subarray found from index %d to %d\n", start, end);
            return 0;
        }
    }


    printf("No subarray with the given sum exists.\n");

    return 0;
}
