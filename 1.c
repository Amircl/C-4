#include <stdio.h>

int main() {
    int red_balls[10]; // Создаем массив на 10 элементов
    
    int size = sizeof(red_balls) / sizeof(red_balls[0]);
    
    printf("В коробке red_balls помещается %d шариков.\n", size);
    
    return 0;
}
