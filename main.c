#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    
    printf("Write 4 numbers: ");       //Выводится комментарий к действию, ожидается ввод с клавиатуры 4 чисел
    scanf("%d, %d, %d, %d", &a, &b, &c, &d); // происходит ввод чисел с клавиатуры


    int min1, min2, min3; //создание переменных для нахождения 3х минимальных чисел

    min1 = a; // присваивание значений для инициализации переменных
    min2 = b;
    min3 = c;

    if (b < min1) {
        min3 = min2;
        min2 = min1;
        min1 = b;
    }
    else {
        min2 = b;
        min3 = a;
    }

    if (c < min1) {
        min3 = min2;
        min2 = min1;
        min1 = c;
    }
    else if (c < min2) {
        min3 = min2;
        min2 = c;
    }
    else {
        min3 = c;
    }

    if (d < min1) {
        min3 = min2;
        min2 = min1;
        min1 = d;
    }
    else if (d < min2) {
        min3 = min2;
        min2 = d;
    }
    else if (d < min3) {
        min3 = d;
    }

    printf("3 min numbers: %d, %d, %d\n", min1, min2, min3);

    int min_sum = min1 + min2 + min3;
    
    printf("Min sum: %d\n", min_sum);

    return 0;
}