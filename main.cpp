#include <iostream>
#include "Generator/Generator.h"

int main() {
	std::cout << "WPS Pin Generator - by Bertof" << std::endl;

	Generator g = Generator();
	g.generatePin("test");

	std::cout << "END MAIN" << std::endl;

	return 0;
}