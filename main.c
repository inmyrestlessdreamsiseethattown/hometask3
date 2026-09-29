#include <stdio.h>

int main()
{
    int years;
    int months;
    int days;

    printf("Введите количество прожитых лет: ");
    scanf("%d", &years);

    months = years * 12;
    days = years * 365;

    printf("Количество прожитых месяцев = %d\n", months);
    printf("Количество прожитых дней = %d\n", days);

    return 0;
}
