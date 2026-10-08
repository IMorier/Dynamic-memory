#include <iostream>

double* create_arr(const int size);


int main() {
	int size{};
	std::cout << "Write your array size: ";
	if (!(std::cin >> size) || size <= 0) {
		std::cout << "\nERROR: Impossible array size!\n\n\n";
		return 1;
	}
	double* arr{ create_arr(size) };
	
	std::cout << "Your array: ";
	for (int i = 0; i < size - 1; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << arr[size - 1];

	delete[] arr;
	std::cout << "\n\n\n";
	return 0;
}


double* create_arr(const int size) {
	double* arr{ new double[size]()};
	return arr;
}