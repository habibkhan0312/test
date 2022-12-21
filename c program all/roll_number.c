#include<stdio.h>
#include<string.h>
int main()
{
    int quan, discount = 10, amountOfDiscount;

    printf("Quantity: ");
    scanf("%d", &quan);

    if (quan >= 1000){
        amountOfDiscount = quan - (discount/100);
        printf("Total cost will be: %d", quan-amountOfDiscount);
    }
    else
        printf("Total cost will be: %d", quan);

}
