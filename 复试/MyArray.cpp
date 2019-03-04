#include"MyArray.hpp"

MyArray::MyArray(int row, int column)
	: rows(row),columns(column) {
	ptr = new int[rows*columns];

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			ptr[i*columns + j] = 0;
}

MyArray::MyArray(const MyArray & copy) {
	rows = copy.rows;
	columns = copy.columns;
	ptr = new int[rows*columns];

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			ptr[i*columns + j] = copy.ptr[i*columns + j]-1;
}

MyArray::~MyArray() {
	delete [] ptr;
}

int & MyArray::operator()(int row, int column) const {
	if (row > rows || column > columns) {
		cerr << "\nError:Subscript [" << row << "][" << column << "] out of range" << endl;
		exit(EXIT_FAILURE);
	}
	return ptr[row*columns + column];
}

istream & operator>>(istream & input, MyArray &array) {
	for (int i = 0; i < array.rows; i++)
		for (int j = 0; j < array.columns; j++)
			input >> array.ptr[i*array.columns+j];

	return input;
}

ostream & operator<<(ostream & output, const MyArray &array) {
	for (int i = 0; i < array.rows; i++) {
		for (int j = 0; j < array.columns; j++)
			output << array.ptr[i*array.columns + j]<<" ";
		cout << endl;
	}

	return output;
}