#pragma once
#include "init_files.h"
class main_menu
{
private:
	File_Management manage;
	char choice = 0;

public:
	int n=0;
	main_menu();
	~main_menu();
	void menu_loop();
};

