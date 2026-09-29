#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int task1() {
    int num, num2;
    setlocale(LC_ALL, "Russian");
    puts("введите число ј");
    scanf("%d", &num);
    puts("введите число ¬");
    scanf("%d", &num2);
    printf("¬ведено число ј %d \n", num);
    printf("¬ведено число B %d \n", num2);
    printf("—умма %d + %d = %d \n", num, num2, num + num2);
    printf("разность %d - %d = %d\n", num, num2, num - num2);
    printf("ѕроизведение %d * %d = %d\n ", num, num2, num * num2);
    printf("частное  %d/%d = %d\n ", num, num2, num / num2);
    printf("остатон  %d/%d = %d \n", num, num2, num % num2);
}

int task2()
{

    int dym;
    int m;
    float D = 2.54;
    float pl = 2.32166;
    float result;
    float res2;
    puts("введите число\n");
    scanf("%d", &dym);
    result = D * dym;
    res2 = D * 2.32166;
    printf(" % d дюймов Ц это %.1f см\n ", dym, result);
    printf(" % d дюймов Ц это %.1f pulgada \n", dym, res2);
    puts("введите число метров\n");
    scanf("%d", &m);
    printf(" % d метров Ц это %.1f морских миль %d метров Ц это %.1f сухопутных миль \n", m, m * 1.852, m, m * 1.609);
}
int task3() {
    setlocale(LC_ALL, "Russian");
    double a, b;
    printf("¬ведите число a: ");
    scanf("%lf", &a);
    printf("¬ведите число b: ");
    scanf("%lf", &b);
    printf("_________________________________________________________\n");
    printf("| %-20s | %-20s | %-20s |\n", "a * b", "a + b", "a - b");
    printf("---------------------------------------------------------\n");
    printf("| %-8.2f * %-8.2f | %-8.2f + %-8.2f | %-8.2f - %-8.2f |\n", a, b, a, b, a, b);
    printf("---------------------------------------------------------\n");
    printf("| %-20.2f | %-20.2f | %-20.2f |\n", a * b, a + b, a - b);
    printf("---------------------------------------------------------\n");
}

int main() {
    setlocale(LC_ALL, "Russian");
    task2();
    return 0;
}
