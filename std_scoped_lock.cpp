#include <iostream>
#include <mutex>

int main() {
	std::mutex mtx1;
	std::mutex mtx2;

	{
		// Захват mtx1 && mtx2
		std::scoped_lock lock(mtx1, mtx2);

		// Работа с mtx1 и mtx2
		std::cout << "mtx1 и mtx2 захвачены" << std::endl;
	}

	// mtx1 и mtx2 освобождены
	return 0;
}
