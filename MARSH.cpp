	//#include "MARSH.h" 
	//#include <iostream> 
	//
	//MARSH::MARSH() {}
	//
	//MARSH::MARSH(const char* n, const char* s, int z) {
	//    strcpy_s(nazv_nach, s);
	//    strcpy_s(nazv_kon, n);
	//    number_marsh = z;
	//}
	//
	//MARSH::MARSH(MARSH& m) {
	//    strcpy_s(nazv_nach, m.nazv_nach);
	//    strcpy_s(nazv_kon, m.nazv_kon);
	//    number_marsh = m.number_marsh;
	//}
	//
	//bool MARSH::operator<(MARSH& z)
	//{
	//    return this->number_marsh < z.number_marsh;
	//}
	//
	//bool MARSH::compMARSH(MARSH& z, MARSH& z1)
	//{
	//    return z.number_marsh < z1.number_marsh;
	//}
	//
	//
	//
	//ostream& operator<<(ostream& os, const MARSH& m) {
	//    setlocale(LC_ALL, "Russian");
	//    return os << "Маршрут №" << m.number_marsh << ": "
	//        << m.nazv_nach << " - " << m.nazv_kon;
	//}
	//
	//istream& operator>>(istream& is, MARSH& m) {
	//    is >> m.nazv_nach >> m.nazv_kon >> m.number_marsh;
	//    return is;
	//}
	//
//#include "MARSH.h"
//#include <iostream>
//#include <clocale>
//
//// Конструктор по умолчанию
//MARSH::MARSH() : number_marsh(0) {
//	nazv_nach[0] = '\0';
//	nazv_kon[0] = '\0';
//}
//
//// Параметризованный конструктор
//MARSH::MARSH(const char* start, const char* end, int num) : number_marsh(num) {
//	strncpy_s(nazv_nach, start, sizeof(nazv_nach) - 1);
//	strncpy_s(nazv_kon, end, sizeof(nazv_kon) - 1);
//	nazv_nach[sizeof(nazv_nach) - 1] = '\0';
//	nazv_kon[sizeof(nazv_kon) - 1] = '\0';
//}
//
//// Конструктор копирования
//MARSH::MARSH(const MARSH& other) : number_marsh(other.number_marsh) {
//	strncpy_s(nazv_nach, other.nazv_nach, sizeof(nazv_nach));
//	strncpy_s(nazv_kon, other.nazv_kon, sizeof(nazv_kon));
//}
//
//// Оператор сравнения для сортировки
//bool MARSH::operator<(const MARSH& other) const {
//	return number_marsh < other.number_marsh;
//}
//
//// Статический метод сравнения
//bool MARSH::compMARSH(const MARSH& a, const MARSH& b) {
//	return a.number_marsh < b.number_marsh;
//}
//
//// Вывод в поток (с поддержкой русского языка)
//std::ostream& operator<<(std::ostream& os, const MARSH& m) {
//	setlocale(LC_ALL, "Russian");  // Для корректного отображения кириллицы
//	os << "Маршрут №" << m.number_marsh << ": "
//		<< m.nazv_nach << " → " << m.nazv_kon;
//	return os;
//}
//
//// Ввод из потока
//std::istream& operator>>(std::istream& is, MARSH& m) {
//	is >> m.nazv_nach >> m.nazv_kon >> m.number_marsh;
//	return is;
//}
//#include "MARSH.h"
//#include <clocale>
//
//MARSH::MARSH() : number_marsh(0) {
//	nazv_nach[0] = '\0';
//	nazv_kon[0] = '\0';
//}
//
//MARSH::MARSH(const char* start, const char* end, int num) : number_marsh(num) {
//	strncpy(nazv_nach, start, 19);
//	strncpy(nazv_kon, end, 19);
//	nazv_nach[19] = '\0';
//	nazv_kon[19] = '\0';
//}
//
//MARSH::MARSH(const MARSH& other) : number_marsh(other.number_marsh) {
//	strncpy(nazv_nach, other.nazv_nach, 19);
//	strncpy(nazv_kon, other.nazv_kon, 19);
//	nazv_nach[19] = '\0';
//	nazv_kon[19] = '\0';
//}
//
//bool MARSH::operator<(const MARSH& other) const {
//	return number_marsh < other.number_marsh;
//}
//
//bool MARSH::compMARSH(const MARSH& a, const MARSH& b) {
//	return a.number_marsh < b.number_marsh;
//}
//
//std::ostream& operator<<(std::ostream& os, const MARSH& m) {
//	setlocale(LC_ALL, "Russian");
//	os << "Маршрут №" << m.number_marsh << ": "
//		<< m.nazv_nach << " → " << m.nazv_kon;
//	return os;
//}
//
//std::istream& operator>>(std::istream& is, MARSH& m) {
//	is >> m.nazv_nach >> m.nazv_kon >> m.number_marsh;
//	return is;
//}

#include "MARSH.h"
//#include <clocale>

MARSH::MARSH() : number_marsh(0) {
	nazv_nach[0] = '\0';
	nazv_kon[0] = '\0';
}

MARSH::MARSH(const char* start, const char* end, int num) : number_marsh(num) {
	strncpy(nazv_nach, start, 19);
	strncpy(nazv_kon, end, 19);
	nazv_nach[19] = '\0';
	nazv_kon[19] = '\0';
}

MARSH::MARSH(const MARSH& other) : number_marsh(other.number_marsh) {
	strncpy(nazv_nach, other.nazv_nach, 19);
	strncpy(nazv_kon, other.nazv_kon, 19);
	nazv_nach[19] = '\0';
	nazv_kon[19] = '\0';
}

bool MARSH::operator<(const MARSH& other) const {
	return number_marsh < other.number_marsh;
}

bool MARSH::compMARSH(const MARSH& a, const MARSH& b) {
	return a.number_marsh < b.number_marsh;
}

std::ostream& operator<<(std::ostream& os, const MARSH& m) {
	setlocale(LC_ALL, "Russian");
	os << "Маршрут №" << m.number_marsh << ": "
		<< m.nazv_nach << " → " << m.nazv_kon;
	return os;
}

std::istream& operator>>(std::istream& is, MARSH& m) {
	is >> m.nazv_nach >> m.nazv_kon >> m.number_marsh;
	return is;
}