#include <fstream>
#include <iostream>
#include "MARSH.h"
#include "MY_ARRAY.h"
#include "SORTCOMP.h"

int main() {
    setlocale(LC_ALL, "Russian");

    My_Array<MARSH> arr;
    std::ifstream in("MARSH.txt");
    if (!in) {
        std::cout << "Ошибка открытия файла MARSH.txt\n";
        return 1;
    }

    // Чтение данных
    in >> arr;
    if (arr.size() == 0) {
        std::cout << "Ошибка: не удалось прочитать данные или файл пуст\n";
        return 1;
    }

    std::cout << "Исходные данные:\n" << arr;

    //// Сортировка
    //arr.sort(MARSH::compMARSH);
    //std::cout << "\nПосле сортировки:\n" << arr;

    // Запись в бинарный файл
    std::ofstream outbin("a.bin", std::ios::binary);
    if (!outbin) {
        std::cout << "Ошибка создания бинарного файла\n";
        return 1;
    }
    arr.writeBin(outbin);
    outbin.close();

    // Поиск маршрута
    int number;
    std::cout << "\nВведите номер маршрута: ";
    if (!(std::cin >> number)) {
        std::cout << "Ошибка ввода номера маршрута\n";
        return 1;
    }

    bool found = false;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].getNumber() == number) {
            std::cout << "Найден маршрут: " << arr[i] << "\n";
            found = true;
        }
    }

    if (!found) {
        std::cout << "Маршрут с номером " << number << " не найден.\n";
    }

    return 0;
}
