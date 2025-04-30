//#pragma once
//#include <iostream> 
//#include <fstream> 
//#include <ios> 
//#include <stdio.h> 
//#include <string.h> 
//using namespace std;
//
//class MARSH {
//public:
//    char nazv_nach[20] = { '\0' };  // ???????? ?????????? ?????? ????????
//    char nazv_kon[20] = { '\0' };   // ???????? ????????? ?????? ????????
//    int number_marsh; // ????? ????????
//
//    MARSH();
//    MARSH(const char* n, const char* s, int z);
//    MARSH(MARSH& m);
//
//    friend ostream& operator<<(ostream& os, const MARSH& m);
//    friend istream& operator>>(istream& is, MARSH& m);
//
//    // ???????? ????????? ??? ?????????? ?? ?????? ????????
//    bool operator<(MARSH& z);
//
//    static bool compMARSH(MARSH& z, MARSH& z1);
//};
//#pragma once
//#include <iostream>
//#include <fstream>
//#include <ios>
//#include <cstdio>
//#include <cstring>
//
//class MARSH {
//private:  // Сделал поля приватными для лучшей инкапсуляции
//    char nazv_nach[20];  // Начальный пункт маршрута
//    char nazv_kon[20];   // Конечный пункт маршрута
//    int number_marsh;    // Номер маршрута
//
//public:
//    // Конструкторы
//    MARSH() : nazv_nach{}, nazv_kon{}, number_marsh(0) {}  // Инициализация в списке инициализации
//
//    MARSH(const char* start, const char* end, int num) : number_marsh(num) {
//        strncpy(nazv_nach, start, sizeof(nazv_nach) - 1);
//        strncpy(nazv_kon, end, sizeof(nazv_kon) - 1);
//        nazv_nach[sizeof(nazv_nach) - 1] = '\0';
//        nazv_kon[sizeof(nazv_kon) - 1] = '\0';
//    }
//
//    MARSH(const MARSH& other) : number_marsh(other.number_marsh) {  // Конструктор копирования
//        strncpy(nazv_nach, other.nazv_nach, sizeof(nazv_nach));
//        strncpy(nazv_kon, other.nazv_kon, sizeof(nazv_kon));
//    }
//
//    // Операторы сравнения
//    bool operator<(const MARSH& other) const {  // Добавил const
//        return number_marsh < other.number_marsh;
//    }
//
//    static bool compMARSH(const MARSH& a, const MARSH& b) {  // Добавил const
//        return a.number_marsh < b.number_marsh;
//    }
//
//    // Операторы ввода/вывода
//    friend std::ostream& operator<<(std::ostream& os, const MARSH& m) {
//        os << "Маршрут №" << m.number_marsh << ": "
//            << m.nazv_nach << " - " << m.nazv_kon;
//        return os;
//    }
//
//    friend std::istream& operator>>(std::istream& is, MARSH& m) {
//        is >> m.nazv_nach >> m.nazv_kon >> m.number_marsh;
//        return is;
//    }
//};
//#pragma once
//#include <iostream>
//#include <fstream>
//#include <cstring>
//
//class MARSH {
//private:
//    char nazv_nach[20];
//    char nazv_kon[20];
//    int number_marsh;
//
//public:
//    MARSH();
//    MARSH(const char* start, const char* end, int num);
//    MARSH(const MARSH& other);
//
//    // Для доступа к полям (вместо public полей)
//    const char* getNazvNach() const { return nazv_nach; }
//    const char* getNazvKon() const { return nazv_kon; }
//    int getNumber() const { return number_marsh; }
//
//    bool operator<(const MARSH& other) const;
//    static bool compMARSH(const MARSH& a, const MARSH& b);
//
//    friend std::ostream& operator<<(std::ostream& os, const MARSH& m);
//    friend std::istream& operator>>(std::istream& is, MARSH& m);
//};
#pragma once
#include <iostream>
#include <fstream>
#include <cstring>

class MARSH {
private:
    char nazv_nach[20];
    char nazv_kon[20];
    int number_marsh;

public:
    MARSH();
    MARSH(const char* start, const char* end, int num);
    MARSH(const MARSH& other);

    // Методы доступа к полям
    int getNumber() const { return number_marsh; }
    const char* getStart() const { return nazv_nach; }
    const char* getEnd() const { return nazv_kon; }

    bool operator<(const MARSH& other) const;
    static bool compMARSH(const MARSH& a, const MARSH& b);

    friend std::ostream& operator<<(std::ostream& os, const MARSH& m);
    friend std::istream& operator>>(std::istream& is, MARSH& m);
};