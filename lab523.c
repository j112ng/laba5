#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    // Задание 2
    double c = 1.3;
    double x;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    double a = pow(c, 3) + log(fabs(x));
    double b = pow(a, 2) + sqrt(c);
    double y = exp(x) + pow(5.8, -b);

    printf("\nЗначение x = %.1f\n", x);
    printf("Значение y = %.1f\n", y);

    // Задание 3
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    int cond_a = (A % 2 == 0) != (B % 2 == 0);
    printf("\nа) только одно из A и B четное: условие выполнено (1 - да, 0 - нет): %d\n", cond_a);

    int cond_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("б) каждое из A, B, C кратно трем: условие выполнено (1 - да, 0 - нет): %d\n", cond_b);

    return 0;
}