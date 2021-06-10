#include <stdio.h>
#include <stdlib.h>
//function to compare between two numbers
/*void getmax(int a,int b)
{
    if (a>b)
    {
        printf("\n %d is greater than %d\n\n",a,b);
    }
    else
    {
        printf("\n %d is greater than %d\n\n",b,a);
    }
}
int main()
{
    int x,y;
    printf(" Enter two integer numbers to get the max: ");
    scanf("%d %d",&x,&y);
    getmax(x,y);
    return 0;
}*/

// get the max number using function
/*int getmax(int[ ]);
int main()
{
    int x[5],i,max;
    printf(" Enter five integers: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n The entered numbers are: ");
    for (i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
    max=x[getmax(x)];
    printf("\n The maximum number is: %d\n\n",max);
    return 0;
}
int getmax(int a[ ])
{
    int j,maxn=0;
    for (j=0;j<=4;j++)
    {
        if (a[j]>a[maxn])
        {
            maxn=j;
        }
    }
    return maxn;
}*/


//function to find if the number is odd or even
/*int evenodd(int x)
{
    if(x%2==0)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int x,flag;
    printf(" Enter an integer: ");
    scanf("%d",&x);
    flag=evenodd(x);
    if (flag==0)
    {
        printf("\n %d is an even number\n\n",x);
    }
    else
    {
        printf("\n %d is an odd number\n\n",x);
    }
    return 0;
}*/
//function to calculate the power of a number
void power(int a, int b, int res)
{
    int j;
    res=1;
    for(j=1;j<=b;++j)
    {
        res=res*a;
    }
    printf("\n %d^%d=%d\n\n",a,b,res);
}
int main()
{
    int x,y,z=1;
    printf(" Enter two numbers: ");
    scanf("%d %d",&x,&y);
    power(x,y,z);
    return 0;
}
