#include <iostream>
#include <memory>

class MyClass {
public:
	MyClass() { std::cout << "Constructor called\n"; }
	~MyClass() { std::cout << "Destructor called\n"; }
	void display() const { std::cout << "Display method called\n"; }
};

int main() {
	std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
	{
		std::shared_ptr<MyClass> ptr2 = ptr1;	// ptr1 и ptr2 теперь совместно владеют обьектом MyClass
		ptr2->display();
		std::cout << "Use count: " << ptr2.use_count() << std::endl;
	}
	// ptr2 выходит из области и удаляется, но обьект MyClass еще жив, так как ptr1 все еще им владеет
	std::cout << "Use count after ptr2 is out of scope " << ptr1.use_count() << std::endl;
	return 0;
}
