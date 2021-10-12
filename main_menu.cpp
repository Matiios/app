#include "main_menu.h"



main_menu::main_menu()
{
	std::cout << "1. Write to files\n";
	std::cout << "2. show statistics to files\n";
	std::cout << "3. Quit the application\n";
}

main_menu::~main_menu()
{

}

void main_menu::menu_loop()
{
	do{																	//      APPLICATION REMARKS
		std::cin.clear();												// (1)	While running 2nd loop of menu_loop(), new directories are going to be created, while .txt files not, and text is going to overwrite.
		this->choice = std::getchar();									//		The reason is that, the current path is going to reset.
		switch (this->choice)											// (2)  While writing to file, firstly getchar creates a '\n' space on the first line of the each file.
		{																
			case '1':
				std::cout << "How many files do you want to create: ";
				std::cin >> n;
				this->manage.make_files(n);
				break;
			case '2':
				this->manage.show_statistics();
				break;
			case '3':
				exit(EXIT_SUCCESS);
				break;
			case '\n':
				std::cout << "Choose an option: ";
				break;
			default:
				std::cout << "Wrong key input\n";
		}
	} while (this->choice != '3');

}
