/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikwon <shikwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 21:21:53 by shikwon           #+#    #+#             */
/*   Updated: 2024/02/21 17:56:03 by shikwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void    printHead(void)
{
    system("clear");
    std::cout << "\n\n";
    std::cout << "\e[1;38;5;200m"; // bold + color
    std::cout << "\033[3m";    // italic
    std::cout << "--------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "|                                                                                          |" << std::endl;
    std::cout << "|                                       ";
    std::cout << "\e[1;38;5;219m";
    std::cout << "T      H      E";
    std::cout << "\e[1;38;5;200m";
    std::cout << "                                    |" << std::endl;
    std::cout << "|                                                                                          |" << std::endl;
    std::cout << "|                                 ";
    std::cout << "\e[1;38;5;105m";
    std::cout << "P  H  O  N  E     B  O  O  K";
    std::cout << "\e[1;38;5;200m";
    std::cout << "                             |" << std::endl;
    std::cout << "|                                                                                          |" << std::endl;
    std::cout << "--------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "\033[1;0m";
}

void    printInstruction(void)
{
    std::cout << std::endl << "                                PLEASE ENTER A COMMAND\n\n";
    std::cout << "                     |     ADD     |    SEARCH     |     EXIT     |\n\n";
}

int main(void)
{
    Phonebook Book;
    
    std::string command;
    
    printHead();
    
    std::cout << "\e[5m";
    if (!Book.checkEntryRegister())
        std::cout << std::endl << "                               -- NO ENTRY REGISTERED --\e[0m\n\n";
    
    printInstruction();
    std::cout << "> ";
    
    getline(std::cin, command);
    command.substr();
    while (!std::cin.eof() || command != "EXIT" || command != "exit")
    {
        if (command == "ADD" || command == "add")
        {
            Book.ADD();
            command.erase();
        }
        else if (command == "SEARCH" || command == "search")
        {
            Book.SEARCH();
            command.erase();
        }
        else if (std::cin.eof() || command == "EXIT" || command == "exit")
            break ;
        else
        {
            printHead();
            printInstruction();
            std::cout << "> ";
            getline(std::cin, command);
        }
    }
    std::cout << "EXIT : NOW QUIT PROGRAM. BYE" << std::endl;
    return(0);
}
