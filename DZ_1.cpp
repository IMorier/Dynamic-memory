#include <iostream>

void fill_arr(int* arr, const int size);


int main() {
	int size{};
	std::cout << "Write your array size: ";
	if (!(std::cin >> size) || size <= 0) {
		std::cout << "\nERROR: Impossible array size!\n\n\n";
		return 1;
	}
	int* arr{ new int[size] };
	fill_arr(arr, size);

	std::cout << "Your array: ";
	for (int i = 0; i < size - 1; ++i) {
		std::cout << arr[i] << ", ";
	}
	std::cout << arr[size - 1];

	delete[] arr;
	std::cout << "\n\n\n";
	return 0;
}


void fill_arr(int* arr, const int size) {
	int i{ 0 };
	std::cout << "Fill your array:\n";
	while (i < size) {
		std::cout << "arr[" << i << "] = ";
		if (!(std::cin >> arr[i])) {
			std::cin.clear();
			while (std::cin.get() != '\n') continue;
			std::cout << "ERROR: Wrong input!\nTry again: ";
			continue;
		}
		++i;
	}
}