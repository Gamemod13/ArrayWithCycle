#include<iostream>


void printArray(int array[], const int size) {

	for (int i = 0; i < size; ++i) {

		std::cout << "Array's element " << i + 1 << " is: " << array[i] << std::endl;
	}
}
void arrCout(int array[], const int size) {
	std::cout << "Enter the number at 1 to 9." << std::endl;
	int num(0);
	while (true) {
		std::cin >> num;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "You enter wrong variable, try one more time." << std::endl;
		}
		else if (num < 1 || num > 9) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "You enter wrong variable, try one more time." << std::endl;
		}
		else {
			for (int i = 0; i < size; ++i) {
				if (num == array[i]) {
					std::cout << "It's " << i << " element of array" << std::endl;
				}
				
			}
			break;
		}
	}
}


int main() {
	int  array[]{ 7, 5, 6, 4, 9, 8, 2, 1, 3 };
	const int size = sizeof(array) / sizeof(array[0]);
	arrCout(array, size);

	return 0;
}