#include "Array.h"
#include "DifferentLengthsException.h"

//Конструктор по умолчанию (создает массив некоторой длины по умолчанию)
Array::Array() : size(1), buf(0) {
	this->arr = new int[1];
	this->arr[0] = 0;
}

//Конструктор по размеру (элементы инициализируются 0)
Array::Array(const int size) : size(size), buf(0) {
	this->arr = new int[size + buf];

	for (int i = 0; i < size + buf; i++) {
		this->arr[i] = 0;
	}

	for (int i = size; i < size + buf; i++) {
		this->arr[i] = 0;
	}
}

//Конструктор по размеру и числу n (элементы инициализируются числом n)
Array::Array(const int size, const int& num) : size(size), buf(0) {
	this->arr = new int[size + buf];

	for (int i = 0; i < size; i++) {
		this->arr[i] = num;
	}

	for (int i = size; i < size + buf; i++) {
		this->arr[i] = 0;
	}
}

//Конструктор копирования
Array::Array(const Array& arr) : size(arr.size), buf(arr.buf) {
	this->arr = new int[size + buf];

	for (int i = 0; i < size; i++) {
		this->arr[i] = arr.arr[i];
	}

	for (int i = size; i < size + buf; i++) {
		this->arr[i] = 0;
	}
}

//Конструктор перемещения
Array::Array(Array&& arr) : size(arr.size), buf(arr.buf) {
	this->arr = new int[size + buf];

	for (int i = 0; i < size; i++) {
		this->arr[i] = arr.arr[i];
	}

	for (int i = size; i < size + buf; i++) {
		this->arr[i] = 0;
	}

	arr.size = 0;
	arr.buf = 0;
	arr.arr = nullptr;
}

//Деструктор 
Array::~Array() {
	delete[] arr;
	arr = nullptr;
}

//Длинна массива
int Array::getSize() const {
	return size;
}

//Оператор []
int& Array::operator[](int i) {
	return arr[i];
}

int& Array::operator[](int i) const{
	return arr[i];
}

//Изменение размера 
void Array::newSize(const int newSize) {
	int* arrCopy = new int[newSize + this->buf];

	if (this->size < newSize) {
		for (int i = 0; i < this->size; i++) {
			arrCopy[i] = this->arr[i];
		}
		for (int i = this->size; i < newSize; i++) {
			arrCopy[i] = 0;
		}
	}

	if (this->size > newSize) {
		for (int i = 0; i < newSize; i++) {
			arrCopy[i] = this->arr[i];
		}
	}

	if (this->size == newSize) {
		for (int i = 0; i < newSize; i++) {
			arrCopy[i] = this->arr[i];
		}
	}

	delete[] this->arr;
	arr = nullptr;
}

//Опрератор присваивания 
Array& Array::operator=(const Array& obj) {
	if (this == &obj) {
		return *this;
	}
	int* arrCopy = new int[this->size + this->buf];
	if (arr) {
		delete[] arr;
	}
	size = obj.size;
	arr = arrCopy;

	for (int i = 0; i < size; i++) {
		arr[i] = obj.arr[i];
	}
	return *this;
}

//Оператор перемещения 


//Оператор ==
bool Array::operator==(const Array& arr) const {
	if () {
		throw DifferentLengthsException("Длины массивов не совпадают");
	}
	for (int i = 0; i < size; i++) {
		if () {
			return false;
		}
	}
	return true;
}

//Оператор !=
bool Array::operator!=(const Array& arr) const {
	if () {
		throw DifferentLengthsException("Длины массивов не совпадают");
	}
	for (int i = 0; i < size; i++) {
		if () {
			return false;
		}
	}
	return true;
}