/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikwon <shikwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:07:16 by shikwon           #+#    #+#             */
/*   Updated: 2024/02/21 17:46:59 by shikwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void)
{
    std::cout << "Destructor called" << std::endl;
}

void Contact::putIndex(int index)
{
    m_index = index;
}

int Contact::giveIndex(void)
{
    return m_index;
}

void Contact::getFirstName(std::string FirstName)
{
    m_firstName = FirstName;
}

void Contact::getLastName(std::string LastName)
{
    m_lastName = LastName;
}

void Contact::getNickname(std::string Nickname)
{
    m_nickname = Nickname;
}

void Contact::getPhoneNumber(std::string PhoneNumber)
{
    m_phoneNum = PhoneNumber;
}

void Contact::getSecret (std::string Secret)
{
    m_secret = Secret;
}

void Contact::printEntry(void)
{
    std::cout << "First Name: " << m_firstName << std::endl;
    std::cout << "Last Name: " << m_lastName << std::endl;
    std::cout << "Nickname: " << m_nickname << std::endl;
    std::cout << "Phone Number: " << m_phoneNum << std::endl;
    std::cout << "Darkest Secret: " << m_secret << std::endl;
}



void Contact::showSearchResult(void)
{
    std::cout << "|        ";

    std::cout << m_index + 1;
    std::cout << "       | ";
    if (m_firstName.size() <= 10)
    {
        for (long unsigned int i = 0; i < m_firstName.size(); i++)
            std::cout << m_firstName[i];
        if (m_firstName.size() < 10)
        {
            for (long unsigned int i = m_firstName.size(); i < 10; i++)
            std::cout << " ";
        }
    }
    else
    {
        for (int i = 0; i < 9; i++)
            std::cout << m_firstName[i];
        std::cout << ".";
    }
    std::cout << "              | ";

    if (m_lastName.size() <= 10)
    {
        for (long unsigned int i = 0; i < m_lastName.size(); i++)
            std::cout << m_lastName[i];
        if (m_lastName.size() < 10)
        {
            for (long unsigned int i = m_lastName.size(); i < 10; i++)
            std::cout << " ";
        }
    }
    else
    {
        for (int i = 0; i < 9; i++)
            std::cout << m_lastName[i];
        std::cout << ".";
    }
    std::cout << "             | ";

    if (m_nickname.size() <= 10)
    {
        for (long unsigned int i = 0; i < m_nickname.size(); i++)
            std::cout << m_nickname[i];
        if (m_nickname.size() < 10)
        {
            for (long unsigned int i = m_nickname.size(); i < 10; i++)
            std::cout << " ";
        }
    }
    else
    {
        for (int i = 0; i < 9; i++)
            std::cout << m_nickname[i];
        std::cout << ".";
    }
    std::cout << "           |\n";
    std::cout << "--------------------------------------------------------------------------------------------\n";
}


