#include "agenda.h"

int	main(void)
{
	std::string	option;
	/* Contact hola;
	hola._firstName = "qwewqe";
	Contact *holaPtr = new Contact();  */
	option = initMenu();
	typeOption(option);
	return (0);
}

std::string	initMenu()
{
	std::string option;

	clearConsole();
	std::cout << std::endl;
	std::cout << "Welcome to the Contact Book" << std::endl;
	std::cout << std::endl;
	std::cout << "Choose an option" << std::endl;
	std::cout << " - type 'ADD' to enter a contact" << std::endl;
	std::cout << " - type 'SEARCH' to search a contact" << std::endl;
	std::cout << " - type 'EXIT' to exit program" << std::endl;
	std::cin >> option;
	return (option);
}

void	typeOption(std::string option)
{
	PhoneBook	*agenda = new PhoneBook();
	while (option != "EXIT") 
	{
		if (option == "ADD" || option == "add")
		{
			clearConsole();
			addContact(agenda);
			option = "";
		}
		else if (option == "SEARCH" || option == "search")
		{
			std::cout << "escribiste ADD" << std::endl;
			//std::string	searchContact*agenda);
		}
		else if (option == "EXIT" || option == "exit")
			exit (0);
		else
		{
			clearConsole();
			typeOption(initMenu());
		}
	}
}

void	clearConsole()
{
	std::system("clear");
}