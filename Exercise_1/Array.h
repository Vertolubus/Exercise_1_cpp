#pragma once
#include <iostream>

class Array {
private:
	int *arr;
	int size;
	int buf;

public:
	Array();  //Конструктор по умолчанию (создает массив некоторой длины по умолчанию)
	Array(const int size);  //Конструктор по размеру (элементы инициализируются 0)
	Array(const int size, const int& num);  //Конструктор по размеру и числу n (элементы инициализируются числом n)
	Array(const Array& a);  //Конструктор копирования
	Array(Array&& a);  //Конструктор перемещения
	~Array();  //Деструктор 

	int getSize() const; //Длинна массива
	int& operator[](int i); //Оператор []
	const int& operator[](int i) const;
	void newSize(const int newSize); //Изменение размера 
	Array& operator=(const Array& arr); //Опрератор присваивания 
	Array& operator=(Array&& arr); //Оператор перемещения 
	bool operator==(const Array& arr) const; //Оператор ==
	bool operator!=(const Array& arr) const; //Оператор !=
	bool operator<(const Array& arr) const; //Оператор <
	bool operator<=(const Array& arr) const; //Оператор <=
	bool operator>(const Array& arr) const; //Оператор >
	bool operator>=(const Array& arr) const; //Оператор >=
	friend Array operator+(const Array& arr1, const Array& arr2); //Оператор +
};

std::istream& operator>>(std::istream in, Array& arr); //Оператор ввода
std::ostream& operator<<(std::ostream& out, const Array& arr); //Оператор вывода