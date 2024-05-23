#include "Array.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Array arr1 = Array();
	std::cout << arr1 << " (Correct is 0)" << std::endl;

	Array arr2 = Array(3);
	std::cout << arr2 << " (Correct is 0 0 0)" << std::endl;

	Array arr3 = Array(4, 3);
	std::cout << arr3 << " (Correct is 3 3 3 3)" << std::endl;

	Array arr4 = Array(arr3);
	std::cout << arr4 << " (Correct is 3 3 3 3)" << std::endl;

	Array arr13 = Array(Array(4, 3)); //Конструктор перемещения
	std::cout << arr13 << " (Correct is 3 3 3 3)" << std::endl;

	std::cout << arr2.getSize() << " (Correct is 3)" << std::endl;
	/*
	std::cout << "Новые элементы массива 4: " << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cin >> arr4[i];
	}
	std::cout << arr4[0] << " (Correct is \"Первый введенный элемент\")" << std::endl;
	std::cout << arr4[3] << " (Correct is \"Последний введенный элемент\")" << std::endl;
	std::cout << arr4 << " (Correct is \"Введенный массив\")" << std::endl;
	*/
	arr3.newSize(6);
	Array arr5 = Array(6, 5);
	arr5.newSize(2);


	std::cout << arr3 << " (Correct is 3 3 3 3 0 0)" << std::endl;
	std::cout << arr5 << " (Correct is 5 5)" << std::endl;

	Array arr6 = Array(4, 2);
	Array arr7 = Array(4, 5);
	arr6 = arr7;
	std::cout << arr6 << " (Correct is 5 5 5 5)" << std::endl;
	std::cout << arr7 << " (Correct is 5 5 5 5)" << std::endl;
	Array arr8 = Array(4, 0);

	arr5 = Array(2, 2);//Оператор перемещения
	std::cout << arr5 << " (Correct is 2 2)" << std::endl;

	//==
	if (arr6 == arr7) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	//==
	if (arr8 == arr7) {
		std::cout << "Uncorrect";
	}
	else {
		std::cout << "Correct";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	
	arr6 = arr7;
	//!=
	if (arr6 != arr7) {
		std::cout << "Uncorrect";
	}
	else {
		std::cout << "Correct";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	//!=
	if (arr8 != arr7) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;


	////////////////////////////////////////////////
	
	//Проверка операторов <, <=, >, >=
	
	Array arr9 = Array(4, 6);
	Array arr10 = Array(4, 7);
	Array arr11 = Array(2, 4);
	Array arr12 = Array(4, 6);
	
	
	//<
	
	if (arr11 < arr9) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr9 < arr11) {
		std::cout << "Uncorrect";
	}
	else {
		std::cout << "Correct";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr9 < arr10) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr10 < arr9) {
		std::cout << "Uncorrect";
	}
	else {
		std::cout << "Correct";
	}
	std::cout << " (Correct is Correct)" << std::endl;


	//Array arr9 = Array(4, 6);
	//Array arr10 = Array(4, 7);
	//Array arr11 = Array(2, 4);
	//Array arr12 = Array(4, 6);
	
	//<=

	if (arr11 <= arr9) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr9 <= arr11) {
		std::cout << "Uncorrect";
	}
	else {
		std::cout << "Correct";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr9 <= arr10) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr10 <= arr9) {
		std::cout << "Uncorrent";
	}
	else {
		std::cout << "Corrent";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr9 <= arr12) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	//Array arr9 = Array(4, 6);
	//Array arr10 = Array(4, 7);
	//Array arr11 = Array(2, 4);
	//Array arr12 = Array(4, 6);
	
	//<
	if (arr11 > arr9) {
		std::cout << "Uncorrect";
	}
	else {
		std::cout << "Correct";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr9 > arr11) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr9 > arr10) {
		std::cout << "Uncorrect";
	}
	else {
		std::cout << "Correct";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr10 > arr9) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	//Array arr9 = Array(4, 6);
    //Array arr10 = Array(4, 7);
	//Array arr11 = Array(2, 4);
	//Array arr12 = Array(4, 6);
	
	//>=

	if (arr11 >= arr9) {
		std::cout << "Uncorrect";
	}
	else {
		std::cout << "Correct";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr9 >= arr11) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr9 >= arr10) {
		std::cout << "Uncorrect";
	}
	else {
		std::cout << "Correct";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr10 >= arr9) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;

	if (arr9 >= arr12) {
		std::cout << "Correct";
	}
	else {
		std::cout << "Uncorrect";
	}
	std::cout << " (Correct is Correct)" << std::endl;
	
	//////////////////////////////////////////////////

	std::cout << operator+(arr12, arr10) << " (Correct is 6 6 6 6 7 7 7 7)" << std::endl;
}

