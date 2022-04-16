#include <stdio.h>

int main()
{
    int price = 0, money = 0;

    printf("물건 값을 입력하시오: ");
    scanf_s("%d", &price);
    printf("사용자가 낸 돈을 입력하시오: ");
    scanf_s("%d", &money);

    money -= price;
    
    printf("오만원권: %d장\n", money / 50000);
    money %= 50000;
    printf("만원권: %d장\n", money / 10000);
    money %= 10000;
    printf("오천원권: %d장\n", money / 5000);
    money %= 5000;
    printf("천원권: %d장\n", money / 1000);
    money %= 1000;
    printf("500원 동전: %d개\n", money / 500);
    money %= 500;
    printf("100원 동전: %d개\n", money / 100);

    return 0;
}
