#include <stdio.h>
#include <stdlib.h>

struct automobile
{
    char manufacturer[30];
    char model[30];
    int year;
    float price;
};
int main()
{
    int i,n;
    char cc;
    printf("\t Automobile Gallery\n");
    printf(" Enter number of cars in the gallery: ");
    scanf("%d",&n);
    printf("\n");
    struct automobile car[100];
    for (i=0;i<n;i++)
    {
        printf(" Enter the manufacturer, model, year of manufacturing, and the price of car No. %d\n",i+1);
        scanf(" %[^\n]%*c %[^\n]%*c %d %f",car[i].manufacturer,car[i].model,&car[i].year,&car[i].price);
    }
    printf("\n\n");
    for (i=0;i<n;i++)
    {
        printf(" The car No.:%d \n manufacturer: %s \n model: %s \n year of manufacturing: %d \n The price: %.2f \n\n",i+1,car[i].manufacturer,car[i].model,car[i].year,car[i].price);
    }
    printf(" To select car by price press 'p' ,or by manufacture year press 'y': ");
    scanf(" %c",&cc);
    switch (cc)
    {
        case 'y':
        printf(" Select a year to display the manufactured cars within: ");
        scanf(" %d",&car[100].year);
        for (int y=0;y<n;y++)
        {
            if (car[y].year==2019)
            {
                printf(" The wanted car is No. %d and it made by %s\n model %s \n price: %.2f LE \n ",y+1,car[y].manufacturer,car[y].model,car[y].price);
            }
            else if (car[y].year==2020)
            {
                printf(" The wanted car is No. %d and it made by %s\n model %s \n price: %.2f LE \n ",y+1,car[y].manufacturer,car[y].model,car[y].price);
            }
            else
                printf("\n You have entered an Invalid year ");
        }
        break;
        case 'p':
        printf(" Select a price to display the manufactured cars within: ");
        scanf(" %f",&car[100].price);
        for (int p=0;p<n;p++)
        {
            if (car[p].price>=50 && car[p].price<=90)
            {
                printf(" The wanted car is No. %d and it made by %s\n model %s \n manufacture year: %d AD \n ",p+1,car[p].manufacturer,car[p].model,car[p].year);
            }
            else if (car[p].price>=90 && car[p].price<=100)
            {
                printf(" The wanted car is No. %d and it made by %s\n model %s \n manufacture year: %d AD \n ",p+1,car[p].manufacturer,car[p].model,car[p].year);
            }
            else
                printf("\n You have entered an Invalid price ");
        }
        break;
    }
    return 0;
}
