#include <iostream>
#include<stdlib.h>

int main()
{
	//system("mode 75, 20");

	for (int i = 0; i < 1000000; i++)
	{
		if (i == 0 || i % 5 == 0)
		{
			std::cout << "\t\\/ " << std::endl;
			std::cout << "\t00" << std::endl;
			std::cout << "~000000000" << std::endl;
			system("CLS");
		}


		if (i == 1 || (i - 1) % 5 == 0)
		{
			std::cout << "\t\t\t\\/" << std::endl;
			std::cout << "\t\t     0  00" << std::endl;
			std::cout << "\t\t~0000 0000" << std::endl;
			system("CLS");
		}


		if (i == 2 || (i - 2) % 5 == 0)
		{
			std::cout << "\t\t\t\t\t\\/" << std::endl;
			std::cout << "\t\t\t\t    000 00" << std::endl;
			std::cout << "\t\t\t\t~000   000" << std::endl;
			system("CLS");
		}


		if (i == 3 || (i - 3) % 5 == 0)
		{
			std::cout << "\t\t\t\t\t\t\t\\/" << std::endl;
			std::cout << "\t\t\t\t\t\t     0  00" << std::endl;
			std::cout << "\t\t\t\t\t\t~0000 0000" << std::endl;
			system("CLS");

		}

		if (i == 4 || (i - 4) % 5 == 0)
		{
			std::cout << "\t\t\t\t\t\t\t\t\t\\/" << std::endl;
			std::cout << "\t\t\t\t\t\t\t\t        00" << std::endl;
			std::cout << "\t\t\t\t\t\t\t\t~000000000" << std::endl;
			system("CLS");
		}

	}



	return 0;
}