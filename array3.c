#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("How many elements=");
    scanf("%d",&n);
    printf("Enter array elements=");
    for (i=0;i<=n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("\n Reverse array elements=");
    for (i=n-1;i>=0;i--)
    {
        printf("\n %d \n",a[i]);
    }
    return 0;

}
