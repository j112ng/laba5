#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    double grad;
    printf("¬ведите угол в градусах: ");
    scanf("%lf", &grad);

    double rad = grad * M_PI / 180.0; // градусы в радианы
    double res = sin(rad);

    printf("—инус угла %.0f градусов = %.6f\n", grad, res);

    return 0;
}