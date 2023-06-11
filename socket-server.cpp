// Сервер
#include <iostream>
#include <cstring>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
	int serverSocket = socket(AF_INET, SOCK_STREAM, 0); // Создание сокета

	struct sockaddr_in serverAddress{};
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.s_addr = INADDR_ANY;
	serverAddress.sin_port = htons(12345);

	bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));	// Привязка сокеа к адресу и порту

	listen(serverSocket, 1); // Ожидание входящегоподключения 
	int clientSocket = accept(serverSocket, nullptr, nullptr);	// Принятие подключения

	char buffer[256];
	std::memset(buffer, 0, sizeof(buffer));

	read(clientSocket, buffer, sizeof(buffer));	// Чтение данных от клиента

	std::cout << "Сообщение от клиента: "  << buffer << std::endl;

	close(clientSocket);	// Закрытие сокета
	close(serverSocket);

	return 0;
}

