#include "PhoneBook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(void)
{
    std::cout << "Constructor called" << std::endl;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Phonebook::m_num = 0;

bool checkPhoneNumber(std::string num)
{
    for (long unsigned int i = 0; i < num.size(); i++)
    {
        if (!(isdigit(num[i])))
            return (false);
    }
    return (true);
}

void    eofCheck(void)
{
    if (std::cin.eof())
    {
        std::cout << "EXIT : NOW QUIT PROGRAM. BYE" << std::endl;
        exit(EXIT_FAILURE);
    }
}

void Phonebook::printNum(void)
{
    std::cout << m_num + 1 << std::endl;
}

bool Phonebook::checkEntryRegister(void)
{
    return (m_entryRegistered);
}

void Phonebook::ADD(void)
{
    std::string info;

    if (m_num == 8)
        m_num = 0;

    m_Entry[m_num].putIndex(m_num);
    while (info.empty())
    {
        std::cout << "First Name: ";
        eofCheck();
        getline (std::cin, info);
        m_Entry[m_num].getFirstName(info);
    }
    info.erase();

    while (info.empty())
    {
        std::cout << "Last Name: ";
        eofCheck();
        getline (std::cin, info);
        m_Entry[m_num].getLastName(info);
    }
    info.erase();

    std::cout << "Nickame: ";
    getline (std::cin, info);
    m_Entry[m_num].getNickname(info);
    info.erase();

    while (1)
    {
        std::cout << "Phone Number: ";
        getline (std::cin, info);
        if (checkPhoneNumber(info))
        {
            m_Entry[m_num].getPhoneNumber(info);
            info.erase();
            break ;
        }
        info.erase();
    }

    std::cout << "Darkest Secret: ";
    getline (std::cin, info);
    m_Entry[m_num].getSecret(info);
    info.erase(0);

    std::cout << "\n- Contact entry registered as below -\n\n";
    std::cout << "Index number #";
    printNum();
    m_Entry[m_num].printEntry();
    std::cout << "\nPress Enter key...\n\n";
    getline (std::cin, info);
    info.erase();

    m_num++;
    if (m_num == 8)
    {
        std::cout << "\e[5m";
        std::cout << "\e[1;38;5;196m";
        std::cout << "WARNING!\n";
        std::cout << "\e[0m";
        std::cout << "\e[1;38;5;196m";
        std::cout << "Program space is full. Next contact input will overwrite the old contact data.\n";
        std::cout << "\e[0m";
        getline (std::cin, info);
    info.erase();
    }
    m_entryRegistered = 1;
    
    return ;
}

void Phonebook::searchHeader(void)
{
    std::cout << "--------------------------------------------------------------------------------------------\n";
    std::cout << "|                |                         |                        |                      |\n";
    std::cout << "|     INDEX      |        FIRST NAME       |       LAST NAME        |        NICKNAME      |\n";
    std::cout << "|                |                         |                        |                      |\n";
    std::cout << "--------------------------------------------------------------------------------------------\n";
}

void Phonebook::SEARCH(void)
{
    std::string button;
    std::cout <<"\n\n";
    
    searchHeader();

    for (int i = 0; i < 8; i++)
    {
        if (m_Entry[i].giveIndex() == i)
            m_Entry[i].showSearchResult();
        else
            break ;
    }

    std::cout << "\nType entry number or press Enter key to quit search menu\n\n";
    getline (std::cin, button);


    //here goes the find entry function

    button.erase();
}