#include <iostream>
using namespace std;

struct Person
{
	char* Name;
	short Age;
};

int main()
{
	// Обьявление обьекта Person
	Person myFriend;

	// Обьявление ссылки на обьект
	Person& rFriend = myFriend;
	
	myFriend.Name = "Bill";
	rFriend.Age = 40;

	cout << rFriend.Name << " is " << myFriend.Age << endl;

	//Bill is 40
}
