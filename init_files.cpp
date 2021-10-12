#include "init_files.h"


void File_Management::make_dir()
{
	this->filename[i] = "dict" + std::to_string(i);
	std::filesystem::create_directories(this->filename[i]);
	std::filesystem::path p = (std::filesystem::current_path() / this->filename[i]);
	std::filesystem::current_path(p);
}

void File_Management::make_files(int n) 
{	
	for (i = 1; i <= n; i++, ++this->directories_amount)
	{	
		File_Management::make_dir();  //create recursive directory in the loop by changing the current path
		this->filename[i] = "file" + std::to_string(i) + ".txt";  //convert int to str before creating a file of his NAME
		this->file[i].open(this->filename[i]);
		++this->files_amount;
		File_Management::counting_func();
	}
}
							
void File_Management::counting_func()
{
	std::cout <<"FILE: " << i << " - Enter some text: \n";
	while (this->letter = std::getchar()) 
	{
		while (this->letter != '\n')
		{
			++this->letter_amount;
			break;
		}
		this->file[i] << this->letter;

		if (this->letter == '\n')
			++this->lines_amount;

		else if (this->letter == 'q')
		{
			++this->letter_amount;
			break;
		}
	}
}			 			

void File_Management::show_statistics()
{
	std::cout << "\tNumber of files: " << this->files_amount << std::endl;
	std::cout << "\tNumber of directories: " << this->directories_amount << std::endl;
	std::cout << "\tNumber of lines: " << this->lines_amount << std::endl;
	std::cout << "\tNumber of words: " << this->letter_amount << std::endl;
}

File_Management::File_Management()
{
	std::cout << " Manage application by creating files and write something into them\n";
}

File_Management::~File_Management()
{
	while(!this->file->eof())
		this->file[i].close();
}


