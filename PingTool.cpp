#include <iostream>
#include <cstdlib>
int main()
{
	std::cout << "\033[33m" << std::endl;
	std::cout << "  _____   ____   _____ " << std::endl;
	std::cout << " / ____| |  _ \\ |  __ \\ " << std::endl;
	std::cout << "| |      | |_) | | |  | |" << std::endl;
	std::cout << "| |      |  _ <  | |  | |" << std::endl;
	std::cout << "| |____  | |_) | | |__| |" << std::endl;
	std::cout << " \\_____| |____/  |_____/ " << std::endl;
	std::cout << "       DEVELOPER BY.  SILENT_REAPER_64\n";
	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	std::cout << "__________________________________\n";
	std::string ip;
	std::cout << " Enter ip address you want to ping  : ";
	std::cin >> ip;
	std::string command = "ping " + ip + " -c4";
	system(command.c_str());
	return 0;
}
