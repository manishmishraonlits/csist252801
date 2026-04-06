#include <stdio.h>
int main(void)
{
    float rupees, paise;

    printf("Enter price of item in rupees: ");
    scanf("%f", &rupees);

    paise = rupees * 100;

    printf("Price in paise: %1.0f\n", paise);
    return 0;
}