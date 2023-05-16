#include <iostream>
#include <string>
#include <functional>

int main()
{
	std::string str = "Hello, world";
	std::hash<std::string> str_hash; // Create hash-function object for string

	std::size_t hash_val = str_hash(str); // hash calculation for string

	std::cout << "Хеш-значение для строки '" << str << "' равно " << hash_val << std::endl;

	return 0;
}
