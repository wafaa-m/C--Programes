#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    float s1,s2,s3,avg;
    char f;
};

int main()
{
    int i,n;

    printf("Enter number of students: ");
    scanf("%d",&n);
    struct student arr[100]; // fetal mistake to create array of n elements in the run time
    for (i=0;i<n;i++)
    {
        printf(" Enter the id No.%d ",i+1);
        scanf("%d",&arr[i].id);

        printf(" Enter the score of three subjects: ");
        scanf(" %f %f %f",&arr[i].s1,&arr[i].s2,&arr[i].s3);
    }
    printf(" \nDisplaying data:\n\n");
    for (i=0;i<n;i++)
    {
        arr[i].avg=(arr[i].s1+arr[i].s2+arr[i].s3)/3;
        if (arr[i].avg<=70)
        {
            arr[i].f='F';
        }
        if (70<arr[i].avg && arr[i].avg<=80)
        {
            arr[i].f='C';
        }
        if (80<arr[i].avg && arr[i].avg<90)
        {
            arr[i].f='B';
        }
        if (arr[i].avg>=90)
        {
            arr[i].f='A';
        }
        if (arr[i].f=='A')
            printf(" For id %d has grade %c, with average score: %.2f \n",arr[i].id,arr[i].f,arr[i].avg);
        if (arr[i].f=='B')
            printf(" For id %d has grade %c, with average score: %.2f \n",arr[i].id,arr[i].f,arr[i].avg);
    }
    return 0;
}
