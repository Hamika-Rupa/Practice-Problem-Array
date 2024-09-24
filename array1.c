#include<stdio.h>

int main() {
    int n , a[100],i;
    printf("How many numbers=");
    scanf("%d",&n);
    for (i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    int  low = 0, high = n - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;


        if ((mid == n - 1 || a[mid] > a[mid + 1]) && (mid == 0 || a[mid] > a[mid - 1])) {
            printf("Peak element = %d\n", a[mid]);
            break;
        }
        else if (a[mid] < a[mid + 1]) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    return 0;
}
