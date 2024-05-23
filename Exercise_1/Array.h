#pragma once
#include <iostream>

class Array {
private:
	int *arr;
	int size;
	int buf;

public:
	Array();  //����������� �� ��������� (������� ������ ��������� ����� �� ���������)
	Array(const int size);  //����������� �� ������� (�������� ���������������� 0)
	Array(const int size, const int& num);  //����������� �� ������� � ����� n (�������� ���������������� ������ n)
	Array(const Array& a);  //����������� �����������
	Array(Array&& a);  //����������� �����������
	~Array();  //���������� 

	int getSize() const; //������ �������
	int& operator[](int i); //�������� []
	const int& operator[](int i) const;
	void newSize(const int newSize); //��������� ������� 
	Array& operator=(const Array& arr); //��������� ������������ 
	Array& operator=(Array&& arr); //�������� ����������� 
	bool operator==(const Array& arr) const; //�������� ==
	bool operator!=(const Array& arr) const; //�������� !=
	bool operator<(const Array& arr) const; //�������� <
	bool operator<=(const Array& arr) const; //�������� <=
	bool operator>(const Array& arr) const; //�������� >
	bool operator>=(const Array& arr) const; //�������� >=
	friend Array operator+(const Array& arr1, const Array& arr2); //�������� +
};

std::istream& operator>>(std::istream in, Array& arr); //�������� �����
std::ostream& operator<<(std::ostream& out, const Array& arr); //�������� ������