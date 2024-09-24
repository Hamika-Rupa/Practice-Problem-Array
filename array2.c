#include<stdio.h>
int main(){
    int a[100],n,i,min,max;
    printf("How many numbers=");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("Invalid");
        return 1;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min = max = a[0];
    for (i=1;i<n;i++)
    {
        if (max < a[i])
        {
        max = a[i];
        }
        else if (a[i]<min)
         max = a[i];
    }
    printf("Maximum=%d\n",max);
    printf("Minimum = %d",min);
    return 0;
}