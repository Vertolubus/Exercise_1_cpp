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
	int& operator[](int i) const;
	void newSize(const int newSize); //Изменение размера 
	Array& operator=(const Array& arr); //Опрератор присваивания 
	//Оператор перемещения 
	bool operator==(const Array& arr) const; //Оператор ==
	bool operator!=(const Array& arr) const; //Оператор !=
};