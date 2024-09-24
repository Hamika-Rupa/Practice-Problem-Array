#include<stdio.h>
int main(){
    int a[100],n,i,j,K;
    printf("How many elements=");
    scanf("%d",&n);
    printf("Enter array elements=");
    for (i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i]= a[j];
                a[j]=temp;
            }
        }
    }
    printf("K=");
    scanf("%d",&K);
    if (K>0 && K<=n){
        printf("The %dth smallest element is=%d\n",K,a[K-1]);
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}

