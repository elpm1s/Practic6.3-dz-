#include <stdio.h>
#include <locale.h>

int main() 

{
    setlocale(LC_ALL, "RUS");
    
    int a, b, c;

    printf("Введите три цифры: \n");
    scanf("%d%d%d", &a, &b, &c);

    int first, second, third; //определим числа по возрастанию

    if (a >= b && a >= c) {
        first = a;
        if (b >= c) {
            second = b;
            third = c;
        }
        else {
            second = c;
            third = b;
        }
    }
    else if (b >= a && b >= c) {
        first = b;
        if (a >= c) {
            second = a;
            third = c;
        }
        else {
            second = c;
            third = a;
        }
    }
    else {
        first = c;
        if (a >= b) {
            second = a;
            third = b;
        }
        else {
            second = b;
            third = a;
        }
    }

    printf("Наибольшее число из данных цифр: %d%d%d\n", first, second, third);

    return 0;
}
