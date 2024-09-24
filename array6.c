#include<stdio.h>
int main(){
    int a[100],n,i,j,x,count=0;
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
    printf("x=");
    scanf("%d",&x);
    for (i=0;i<n;i++)
    {
        if(a[i]==x)
        {
           count++;
           break;

        }
        if (count >0){
            printf("%d occurs %d times\n",x,count);
        }

        else
       {
        printf("%d not found",x);
       }
    }
    return 0;
}

