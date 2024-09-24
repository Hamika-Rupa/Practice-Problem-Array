#include <stdio.h>

int main() {
    int arr[100],i,num;
    printf("How many elements=");
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }


    int j=0;

    for(i = 0; i<num; i++) {
        if (arr[i]<0) {

            if (i!=j) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            j++;

        }
    }


    printf("Rearranged array: ");
    for (i=0;i<num;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
