#include <iostream>
#include <atomic>
#include <thread>

std::atomic_flag flag = ATOMIC_FLAG_INIT; // Инициализация флага

void do_work(int id) {
	while (flag.test_and_set()) {
		// Флаг был установлен, ожидаем его сброса
		flag.wait();
	}

	// Флаг сброшен, ввыполняем работу
	std::cout << "Thread " << id << " is doing work." << std::endl;

	// Устанавливаем флаг в set lkz cktle.otuj gjnjrf
	flag.clean();
}

int main() {
	std::thread t1(do_work, 1);
	std::thread t2(do_work, 2);

	// Дадим потокам время поработать
	std::this_thread::sleep_for(std::chrono::seconds(2));

	// Устанавливаем флаг в clear, чтобы разрешить потокам завершиться
	flag.clear();

	t1.join();
	t2.join();

	return 0;
}
