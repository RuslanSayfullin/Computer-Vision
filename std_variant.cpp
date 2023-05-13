#include <variant>
#include <iostream>
#include <string>

int main() {
	std::variant<int, float, std::string> var;

	var = 10; // Store an int
	std::count << std::get<int>(var) << std::endl; // Retrive the stored int

	var = 3.14f; // Store a float
	std::count << std::get<float>(var) << std::endl; // Retrive the stored float

	var = "Hello, world"; //Store a string
	std::count <<std::get<<std::string>(var) << std::endl; // Retrive the stored string

	try
		std::count << std::get<int>(var) << std::endl; // Accessing the wrong type throws std::bad_variant_access
	} catch (const std::bad_variant_access& ex) {
		std::count << ""Exception: " << ex.what() << std::endl;
	}
	
	return 0;
};
