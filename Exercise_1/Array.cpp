#include "Array.h"
#include "DifferentLengthsException.h"

//����������� �� ��������� (������� ������ ��������� ����� �� ���������)
Array::Array() : size(1), buf(0) {
	this->arr = new int[1];
	this->arr[0] = 0;
}

//����������� �� ������� (�������� ���������������� 0)
Array::Array(const int size) : size(size), buf(0) {
	this->arr = new int[size + buf];

	for (int i = 0; i < size + buf; i++) {
		this->arr[i] = 0;
	}

	for (int i = size; i < size + buf; i++) {
		this->arr[i] = 0;
	}
}

//����������� �� ������� � ����� n (�������� ���������������� ������ n)
Array::Array(const int size, const int& num) : size(size), buf(0) {
	this->arr = new int[size + buf];

	for (int i = 0; i < size; i++) {
		this->arr[i] = num;
	}

	for (int i = size; i < size + buf; i++) {
		this->arr[i] = 0;
	}
}

//����������� �����������
Array::Array(const Array& arr) : size(arr.size), buf(arr.buf) {
	this->arr = new int[size + buf];

	for (int i = 0; i < size; i++) {
		this->arr[i] = arr.arr[i];
	}

	for (int i = size; i < size + buf; i++) {
		this->arr[i] = 0;
	}
}

//����������� �����������
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

//���������� 
Array::~Array() {
	delete[] arr;
	arr = nullptr;
}

//������ �������
int Array::getSize() const {
	return size;
}

//�������� []
int& Array::operator[](int i) {
	return arr[i];
}

int& Array::operator[](int i) const{
	return arr[i];
}

//��������� ������� 
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

//��������� ������������ 
Array& Array::operator=(const Array& obj) {
	if (this == &obj) {
		return *this;
	}
	Array copy(obj);
	std::swap(size, copy.size);
	std::swap(buf, copy.buf);
	std::swap(arr, copy.arr);
	return *this;

	//int* arrCopy = new int[this->size + this->buf];
	/*if (arr) {
		delete[] arr;
	}
	size = obj.size;
	buf = obj.buf;
	//arr = arrCopy;

	for (int i = 0; i < size + buf; i++) {
		arr[i] = obj.arr[i];
	}

	for (int i = size; i < size + buf; i++) {
		arr[i] = 0;
	}*/
	//return *this;
}

//�������� ����������� 
Array& Array::operator=(Array&& obj) {
	if (this == &obj) {
		return *this;
	}
	std::swap(size, obj.size);
	std::swap(buf, obj.buf);
	std::swap(arr, obj.arr);
	return *this;
}

//�������� ==
bool Array::operator==(const Array& arr) const {
	if (this->size != arr.size) {
		throw DifferentLengthsException("����� �������� �� ���������");
	}

	for (int i = 0; i < size; i++) {
		if (this->arr[i] != arr.arr[i]) {
			return false;
		}
	}

	return true;
}

//�������� !=
bool Array::operator!=(const Array& arr) const {
	if (this->size != arr.size) {
		throw DifferentLengthsException("����� �������� �� ���������");
	}

	for (int i = 0; i < size; i++) {
		if (this->arr[i] == arr.arr[i]) {
			return false;
		}
	}

	return true;
}

//�������� <
bool Array::operator<(const Array& arr) const {

}

//�������� <=
bool Array::operator<=(const Array& arr) const {

}

//�������� >
bool Array::operator>(const Array& arr) const {

}

//�������� >=
bool Array::operator>=(const Array& arr) const {

}

//�������� +
Array& Array::operator+(const Array& arr) {

}

//�������� �����
std::istream& operator>>(std::istream in, Array& arr) {
	int size;
	in >> size;
	arr = Array(size);

	for (int i = 0; i < size; i++) {
		in >> arr[i];
	}

	return in;
}

//�������� ������
std::ostream& operator<<(std::ostream& out, const Array& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		out << arr[i] << " ";
	}
	return out;
}