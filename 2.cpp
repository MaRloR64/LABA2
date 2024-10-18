#include <iostream>

int main() {
    // Таблица умножения на 7
    std::cout << "Таблица умножения на 7:" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " x 7 = " << i * 7 << std::endl;
    }

    // Ввод числа N с клавиатуры
    int N;
    std::cout << "Введите число N: ";
    std::cin >> N;

    // Таблица умножения на N
    std::cout << "Таблица умножения на " << N << ":" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " x " << N << " = " << i * N << std::endl;
    }

    return 0;
}