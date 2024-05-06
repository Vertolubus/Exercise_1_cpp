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
	int& operator[](const int i); //�������� []
	void newSize(const int newSize); //��������� ������� 

};