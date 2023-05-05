#include <stdio.h>

int main() {
    int n, num, zero_count = 0,  plus_count = 0, neg_count = 0; // ввод переменных
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { // считывание одного целого числа и сохранение в переменную num
        scanf("%d", &num);
        if (num == 0) { // если num = 0
            zero_count++; // переменная zero_count увеличиваается на 1
        } else if (num > 0) { // если num > 0 
            plus_count++; // переменная plus_count увеличиваеся на 1
        } else { // если num < 0 
            neg_count++; // переменная neg_count увеличивается на 1
        }
    }
    printf("%d %d %d", zero_count, plus_count, neg_count); // вывод значений переменных
    return 0;
}