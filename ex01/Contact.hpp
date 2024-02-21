/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikwon <shikwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:07:06 by shikwon           #+#    #+#             */
/*   Updated: 2024/02/21 17:44:40 by shikwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Contact
{
    public:
    
    Contact(void);
    ~Contact(void);

    void getFirstName(std::string FirstName);
    void getLastName(std::string LastName);
    void getNickname(std::string Nickname);
    void getPhoneNumber(std::string PhoneNumber);
    void getSecret (std::string Secret);
    void putIndex(int index);
    int giveIndex(void);
    
    void showSearchResult(void);
    
    void printEntry(void);

    private:

    int m_index;
    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickname;
    std::string m_phoneNum;
    std::string m_secret;

};



#endif

// string va prendre des inputs avec getline(cin, variable de string)

// phonebook.ADD 
// phonebook.SEARCH
// phone.EXIT
