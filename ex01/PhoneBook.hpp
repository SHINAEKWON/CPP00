/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikwon <shikwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:44:19 by shikwon           #+#    #+#             */
/*   Updated: 2024/02/21 17:56:46 by shikwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cctype> //isdigit
#include <cstdlib>
#include "Contact.hpp"

class Phonebook
{
    private:
    
    static int m_num;
    bool m_entryRegistered;

    Contact m_Entry[8];
    
    public:
    
    Phonebook(void);
    ~Phonebook(void);
    
    void printNum(void);
    void searchHeader(void);
    void ADD(void);
    void SEARCH(void);
    bool checkEntryRegister(void);
    
};



#endif