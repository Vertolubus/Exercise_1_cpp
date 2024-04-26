#pragma once
#include <iostream>

class Array {
private:
	int *arr;
	int size;

public:
	Array();  //Конструктор по умолчанию (создает массив некоторой длины по умолчанию)
	Array(int& size);  //Конструктор по размеру (элементы инициализируются 0)
	Array(int& size, int num);  //Конструктор по размеру и числу n (элементы инициализируются числом n)
	Array(const Array& a);  //Конструктор копирования
	Array(const Array&& a);  //Конструктор перемещения
	~Array();  //Деструктор 


};