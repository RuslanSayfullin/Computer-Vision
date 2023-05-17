#include <iostream>
#include <chrono>

int main()
{
	auto mow = std::chrono::system_clock::now();
	std::time_t end_time = std::chrono::system_clock::to_time_t(now);

	std::cout << "Настоящяя дата и время: " << std::ctime(&end_time) << std::endl;

	return 0;
}

//Настоящяя дата и время 
