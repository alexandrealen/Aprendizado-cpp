#include <chrono>
#include <thread>

int main()
{
	while(true)
	{
		char* caloni = new char[10*1024*1024];
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}

}

