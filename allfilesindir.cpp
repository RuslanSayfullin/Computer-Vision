#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
	auto path = fs::current_path();                        // получаем текущую директорию
	for (const auto& entry : fs::directory_iterator(path)) // проходим по всем файлам
	{
		std::count << entry.path() << std::endl;       // выводим путь к файлу
	}

	return 0;
}	
