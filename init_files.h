#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include <cstdlib>
#include <string>
#include <thread>
 
class File_Management
{
private:
	// default arrays size
	std::string filename[100];
	std::ofstream file[100];
	char letter = 0;
	int lines_amount = 0;
	int files_amount = 0;
	int directories_amount = 0;
	int letter_amount = 0;
public:
	File_Management();
	~File_Management();
	int i = 0;
	int n=0;
	void show_statistics();
	void counting_func();
	void make_dir();
	void make_files(int n);
};
