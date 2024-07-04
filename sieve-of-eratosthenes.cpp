#include <iostream>
#include <vector>

void sieveOfEratosthenes(int n) {
	std::vector<bool> isPrime(n + 1, true);

	for (int p = 2; p * p <= n; ++p) {
		if (isPrime[p]) {
			for (int i = p * p; i <= n; i += p) {
				isPrime[i] = false;
			}
		}
	}

	std::cout << "Простые числа от 2 до " << n << ": ";
	for (int p = 2; p <= n; ++p) {
		if (isPrime[p]) {
			std::cout << p << " ";
		}
	}
	std::cout << std::endl;
}

int main() {
	int n;
	std::cout << "Введите верхнюю границу диапозона: ";
	std::cin >> n;

	sieveOfEratosthenes(n);
	return 0;
}
