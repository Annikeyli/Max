//#include <fstream>
//#include <ios>
//#include <string.h>
//#include "MARSH.h"
//#include <iostream>
//#include "MY_ARRAY.h"
//#include "SORT.h"
//
//
//using namespace std;
//void printArr(int* a, int n) {
//    for (int i = 0; i < n; i++)
//        cout << a[i] << " ";
//}
//
//bool compInt(int& a, int& b) {
//    return a < b;
//}
//
//int main()
//{
//    My_Array<MARSH> arr;
//    ifstream in("MARSH.txt.txt");
//    if (!in)cout << "\nfile not open\n";
//    in >> arr;
//    cout << arr;
//
//    arr.sort(MARSH::compMARSH);
//
//    cout << "\nAfter sort\n" << arr;
//    ofstream outbin("a.bin", ios_base::binary);
//    arr.writeBin(outbin);
//    ifstream inbin("a.bin", ios_base::binary);
//
//    int number;
//    cout << "\nEnter number: ";
//    cin >> number;
//    bool found = false;
//    for (int i = 0; i < 8; i++) {
//        if (arr[i].number_marsh == number) {
//            cout << arr[i] << "\n";
//            found = true;
//        }
//    }
//    if (!found) {
//        cout << "No murshrut.\n";
//    }
//    return 0;
//}

//#include <fstream>
//#include <ios>
//#include <string.h>
//#include "MARSH.h"
//#include <iostream>
//#include "MY_ARRAY.h"
//#include "SORT.h"
//
//using namespace std;
//
//void printArr(int* a, int n) {
//    for (int i = 0; i < n; i++)
//        cout << a[i] << " ";
//}
//
//bool compInt(int& a, int& b) {
//    return a < b;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    My_Array<MARSH> arr;
//    ifstream in("MARSH.txt");
//    if (!in) {
//        cout << "\nFile not open\n";
//        return 1;
//    }
//    in >> arr;
//    cout << arr;
//
//    arr.sort(MARSH::compMARSH);
//    cout << "\nПосле сортировки\n" << arr;
//
//    ofstream outbin("a.bin", ios_base::binary);
//    if (!outbin) {
//        cout << "\nFailed to create binary file\n";
//        return 1;
//    }
//    arr.writeBin(outbin);
//    outbin.close();
//
//    ifstream inbin("a.bin", ios_base::binary);
//    if (!inbin) {
//        cout << "\nFailed to open binary file\n";
//        return 1;
//    }
//
//    int number;
//    cout << "\nВведите номер маршрута:   ";
//    cin >> number;
//
//    bool found = false;
//    for (int i = 0; i < 8; i++) {  // Используем arr.size() вместо фиксированного значения 8
//        if (arr[i].number_marsh == number) {
//            cout << arr[i] << "\n";
//            found = true;
//        }
//    }
//
//    if (!found) {
//        cout << "Маршрут не найден  \n";
//    }
//
//    return 0;
//}
//#include <fstream>
//#include <iostream>
//#include "MARSH.h"
//#include "MY_ARRAY.h"
//#include "SORT.h"
//
//void printArr(int* a, int n) {
//    for (int i = 0; i < n; i++)
//        std::cout << a[i] << " ";
//}
//
//bool compInt(int& a, int& b) {
//    return a < b;
//}
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//
//    My_Array<MARSH> arr;
//    std::ifstream in("MARSH.txt");
//    if (!in) {
//        std::cerr << "Ошибка открытия файла MARSH.txt\n";
//        return 1;
//    }
//
//    try {
//        in >> arr;
//        std::cout << "Исходные данные:\n" << arr;
//
//        // Сортировка через ваш класс SORT
//        SORT<MARSH>::sort(arr, MARSH::compMARSH);
//        std::cout << "\nПосле сортировки:\n" << arr;
//
//        // Запись в бинарный файл
//        std::ofstream outbin("a.bin", std::ios::binary);
//        if (!outbin) {
//            std::cerr << "Ошибка создания бинарного файла\n";
//            return 1;
//        }
//        arr.writeBin(outbin);
//        outbin.close();
//
//        // Поиск маршрута
//        int number;
//        std::cout << "\nВведите номер маршрута: ";
//        std::cin >> number;
//
//        bool found = false;
//        for (size_t i = 0; i < arr.size(); i++) {
//            if (arr[i].getNumber() == number) {
//                std::cout << "Найден маршрут: " << arr[i] << "\n";
//                found = true;
//            }
//        }
//
//        if (!found) {
//            std::cout << "Маршрут с номером " << number << " не найден.\n";
//        }
//
//    }
//    catch (const std::exception& e) {
//        std::cerr << "Ошибка: " << e.what() << "\n";
//        return 1;
//    }
//
//    return 0;
//}
// 
//#include <fstream>
//#include <iostream>
//#include "MARSH.h"
//#include "MY_ARRAY.h"
//#include "SORTCOMP.h"
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//
//    My_Array<MARSH> arr;
//    std::ifstream in("MARSH.txt");
//    if (!in) {
//        std::cerr << "Ошибка открытия файла MARSH.txt\n";
//        return 1;
//    }
//
//    try {
//        in >> arr;
//        std::cout << "Исходные данные:\n" << arr;
//
//        // Сортировка
//        /*arr.sort(MARSH::compMARSH);
//        std::cout << "\nПосле сортировки:\n" << arr;*/
//
//        // Запись в бинарный файл
//        std::ofstream outbin("a.bin", std::ios::binary);
//        if (!outbin) {
//            std::cout << "Ошибка создания бинарного файла\n";
//            return 1;
//        }
//        arr.writeBin(outbin);
//        outbin.close();
//
//        // Поиск маршрута
//        int number;
//        std::cout << "\nВведите номер маршрута: ";
//        std::cin >> number;
//
//        bool found = false;
//        for (int i = 0; i < arr.size(); i++) {
//            if (arr[i].getNumber() == number) {
//                std::cout << "Найден маршрут: " << arr[i] << "\n";
//                found = true;
//            }
//        }
//
//        if (!found) {
//            std::cout << "Маршрут с номером " << number << " не найден.\n";
//        }
//
//    }
//    catch (const std::exception& e) {
//        std::cout << "Ошибка: " << "\n";
//        return 1;
//    }
//
//    return 0;
//}
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
        std::cerr << "Ошибка открытия файла MARSH.txt\n";
        return 1;
    }

    // Чтение данных
    in >> arr;
    if (arr.size() == 0) {
        std::cerr << "Ошибка: не удалось прочитать данные или файл пуст\n";
        return 1;
    }

    std::cout << "Исходные данные:\n" << arr;

    //// Сортировка
    //arr.sort(MARSH::compMARSH);
    //std::cout << "\nПосле сортировки:\n" << arr;

    // Запись в бинарный файл
    std::ofstream outbin("a.bin", std::ios::binary);
    if (!outbin) {
        std::cerr << "Ошибка создания бинарного файла\n";
        return 1;
    }
    arr.writeBin(outbin);
    outbin.close();

    // Поиск маршрута
    int number;
    std::cout << "\nВведите номер маршрута: ";
    if (!(std::cin >> number)) {
        std::cerr << "Ошибка ввода номера маршрута\n";
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