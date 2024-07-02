#include <iostream>
#include <sys/shm.h>

int main() {
	// Создаём сегмент shared_memory размером 100 байтов.
	int shm_id = shmget(IPC_PRIVATE, 100, IPC_CREAT | 0666);

	// Получаем указатель на сегмент shared memory.
	char *shm_ptr = (char *)shmat(shm_id, NULL, 0);

	// Инициализируем данные в сегменте shared memory.
	for (int i = 0; i < 100; i++) {
		shm_ptr[i] = 'A' + i;
	}

	// Отсоединяем сегмент shared memory от процесса.
	shmdt(shm_ptr);
	
	return 0;
}
		
