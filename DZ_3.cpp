#include <iostream>

int** create_two_dim_array(const int row, const int column);
void fill_two_dim_array(int** arr, const int row, const int column);
void print_two_dim_array(int** arr, const int row, const int column);
void delete_two_dim_array(int** arr, const int row, const int column);


int main() {
	int row{}, column{};
	std::cout << "Enter the number of rows: ";
	if (!(std::cin >> row) || row <= 0) {
		std::cout << "\nERROR: Impossible array size!\n\n\n";
		return 1;
	}
	std::cout << "Enter the number of columns: ";
	if (!(std::cin >> column) || column <= 0) {
		std::cout << "\nERROR: Impossible array size!\n\n\n";
		return 1;
	}

	int** arr{ create_two_dim_array(row, column) };
	
	fill_two_dim_array(arr, row, column);
	
	print_two_dim_array(arr, row, column);



	delete_two_dim_array(arr, row, column);
	delete[] arr;
	std::cout << "\n\n\n";
	return 0;
}


int** create_two_dim_array(const int row, const int column) {
	int** arr{ new int* [row]};
	for (int i = 0; i < row; ++i) {
		arr[i] = new int[column];
	}
	return arr;
}


void fill_two_dim_array(int** arr, const int row, const int column) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			arr[i][j] = i + 1;
			arr[i][j] *= j + 1;
		}
	}
}

void print_two_dim_array(int** arr, const int row, const int column) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column - 1; ++j) {
			std::cout << arr[i][j] << "\t";
		}
		std::cout << arr[i][column - 1] << std::endl;
	}
}

void delete_two_dim_array(int** arr, const int row, const int column) {
	for (int i = 0; i < row; ++i) {
		delete[] arr[i];
	}
}


