#include <stdio.h>
#include <stdlib.h>

struct room
{
    int l,w,a;
};

int main()
{
    int i,n,j,max=0;
    struct room arr[100];
    printf("\t Program to compare between rooms and display the largest room\n");
    printf(" Enter number of rooms to be compared: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf(" Enter the length then the width of room No.%d: ",i+1);
        scanf("%d %d",&arr[i].l,&arr[i].w);
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf(" The length of room number %d is %d and width is %d\n",i+1,arr[i].l,arr[i].w);
        arr[i].a=arr[i].l*arr[i].w;
        printf(" The area of room No. %d is %d cm2 \n\n",i+1,arr[i].a);
    }
    printf("\n");

     for (j=0;j<n;j++)
    {
        if (arr[j].a>arr[max].a)
        {
            max=j;
        }
    }
    printf(" The largest room is No. %d ,and it's area is: %d cm2\n",max+1,arr[max].a);

    return 0;
}
