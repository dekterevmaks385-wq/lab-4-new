#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void zadacha6()
{
    int t;
    float f;
    printf("C\tF\n");
    for (t = 0; t <= 100; t++) {
        f = 9.0 * t / 5 + 32;
        printf("%d\t%.1f\n", t, f);
    }
}

void zadacha13()
{
    int i;
    float k;
    printf("Vvedite kurs USD: ");
    scanf("%f", &k);

    if (k <= 0) {
        printf("Error\n");
        return;
    }

    printf("USD\tUAH\n");
    for (i = 1; i <= 20; i++) {
        printf("%d\t%.2f\n", i, i * k);
    }
}

void zadacha32()
{
    double x, ch = 1, zn = 1;
    printf("Input x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= 6; i++) {
        ch *= (x - (pow(2, i) - 1));
        zn *= (x - pow(2, i));
    }

    if (zn == 0)
        printf("Error: delenie na 0\n");
    else
        printf("Result = %lf\n", ch / zn);
}

void zadacha69()
{
    double s = 10, sum = 10;
    int i;

    printf("a)\n");
    for (i = 2; i <= 10; i++) {
        s = s * 1.1;
        printf("Day %d: %.2f km\n", i, s);
    }

    s = 10;
    for (i = 2; i <= 7; i++) {
        s *= 1.1;
        sum += s;
    }
    printf("b) Sum 7 days = %.2f km\n", sum);

    s = 10;
    i = 1;
    while (s <= 20) {
        s = s + s * 0.1;
        i++;
    }
    printf("c) Day %d (%.2f km)\n", i, s);

    s = 10;
    sum = 10;
    i = 1;
    while (sum <= 100) {
        s *= 1.1;
        sum += s;
        i++;
    }
    printf("d) Day %d (%.2f km)\n", i, sum);
}

void zadacha130()
{
    int n, s, f = 1;
    printf("Input n (2..1000): ");
    scanf("%d", &n);

    if (n < 2 || n > 1000) {
        printf("Error\n");
    }
    else {
        for (int i = 2; i <= n; i += 2) {
            s = i * i * i + 3 * i * i + 2 * i;
            if (s % 24 != 0) {
                f = 0;
                printf("False for %d\n", i);
                break;
            }
        }
        if (f == 1)
            printf("True for all even <= %d\n", n);
    }
}

void zadacha221()
{
    double eps, a;
    int n = 0;

    printf("Input eps: ");
    scanf("%lf", &eps);

    if (eps <= 0) {
        printf("Error\n");
        return;
    }

    do {
        n++;
        a = pow(-1, n) * n / pow(2, n);
        printf("a[%d] = %.7f\n", n, a);
    } while (fabs(a) >= eps);

    printf("Count = %d\n", n);
}

void zadacha68()
{
    double s = 1000, p;
    int m;

    printf("a)\n");
    for (m = 1; m <= 10; m++) {
        p = s * 0.012;
        s += p;
        printf("Month %d: %.2f\n", m, p);
    }

    printf("b)\n");
    s = 1000;
    for (m = 1; m <= 12; m++) {
        s += s * 0.012;
        if (m >= 3)
            printf("Month %d: %.2f\n", m, s);
    }

    s = 1000;
    m = 1;
    p = s * 0.012;
    while (p <= 30) {
        s += p;
        m++;
        p = s * 0.012;
    }
    printf("c) Month %d (%.2f)\n", m, p);

    s = 1000;
    m = 0;
    while (s <= 1200) {
        s = s + s * 0.012;
        m++;
    }
    printf("d) %d months (%.2f)\n", m, s);
}

void zadacha237()
{
    float a, b, h, x, y;
    printf("Input a, b, h: ");
    scanf("%f %f %f", &a, &b, &h);

    if (b < a || h <= 0) {
        printf("Error\n");
        return;
    }

    printf("x\t\ty\n");
    for (x = a; x <= b; x = x + h) {
        y = 2 * tan(x / 2) + 1;
        printf("%.3f\t\t%.4f\n", x, y);
    }
}

void zadacha174()
{
    int a, k = 0, s = 0;
    printf("Input numbers:\n");
    while (1) {
        scanf("%d", &a);
        if (a < 0) break;
        s += a;
        k++;
    }

    if (k > 0)
        printf("Avg = %.3f\n", (double)s / k);
    else
        printf("Empty\n");
}

void zadacha165()
{
    int n, m, s = 0;
    printf("Input n and m: ");
    scanf("%d %d", &n, &m);

    if (n < 1 || m < 1) {
        printf("Error\n");
    }
    else {
        for (int i = 0; i < m; i++) {
            s += n % 10;
            n /= 10;
        }
        printf("Sum = %d\n", s);
    }
}

int main()
{
    int k;
    do {
        printf("\n--- Lab 4 ---\n");
        printf("1 - Task 6\n");
        printf("2 - Task 13\n");
        printf("3 - Task 32\n");
        printf("4 - Task 69\n");
        printf("5 - Task 130\n");
        printf("6 - Task 221\n");
        printf("7 - Task 68\n");
        printf("8 - Task 237\n");
        printf("9 - Task 174\n");
        printf("10 - Task 165\n");
        printf("0 - Exit\n");
        printf("Select: ");
        scanf("%d", &k);
        printf("\n");

        switch (k) {
        case 1: zadacha6(); break;
        case 2: zadacha13(); break;
        case 3: zadacha32(); break;
        case 4: zadacha69(); break;
        case 5: zadacha130(); break;
        case 6: zadacha221(); break;
        case 7: zadacha68(); break;
        case 8: zadacha237(); break;
        case 9: zadacha174(); break;
        case 10: zadacha165(); break;
        case 0: break;
        default: printf("Wrong input\n");
        }
    } while (k != 0);

    return 0;
}