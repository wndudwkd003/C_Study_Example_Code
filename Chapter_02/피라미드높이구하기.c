#include <stdio.h>

int main()
{
    float stick_s_lenght = 0.f, pyramid_s_lenght = 0.f;
    float stick_height = 0.f, pyramid_height = 0.f;

    printf("지팡이 그림자의 길이를 입력하시오: ");
    scanf_s("%f", &stick_s_lenght);
    printf("피라미드 그림자의 길이를 입력하시오: ");
    scanf_s("%f", &pyramid_s_lenght);
    printf("지팡이의 높이를 입력하시오: ");
    scanf_s("%f", &stick_height);

    pyramid_height = (pyramid_s_lenght * stick_height) / stick_s_lenght;
    printf("피라미드의 높이는 %.2f입니다.", pyramid_height);

    return 0;
}
