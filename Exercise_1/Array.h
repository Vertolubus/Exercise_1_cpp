#pragma once
#include <iostream>

class Array {
private:
	int *arr;
	int size;

public:
	Array();  //����������� �� ��������� (������� ������ ��������� ����� �� ���������)
	Array(int& size);  //����������� �� ������� (�������� ���������������� 0)
	Array(int& size, int num);  //����������� �� ������� � ����� n (�������� ���������������� ������ n)
	Array(const Array& a);  //����������� �����������
	Array(const Array&& a);  //����������� �����������
	~Array();  //���������� 


};