﻿#include <iostream>
#include <clocale>

int main() {
	setlocale(LC_ALL, "rus");

	int res = 10;
	std::cout << res;

	return 0;
}

