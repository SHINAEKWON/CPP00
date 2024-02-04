/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikwon <shikwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 21:21:53 by shikwon           #+#    #+#             */
/*   Updated: 2024/01/29 21:48:29 by shikwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_head(void)
{
    std::cout << "\e[1;38;5;200m"; // bold + color
    std::cout << "\033[3m";    // italic
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "|                                            |" << std::endl;
    std::cout << "|               ";
    std::cout << "\e[1;38;5;219m";
    std::cout << "T      H      E";
    std::cout << "\e[1;38;5;200m";
    std::cout << "              |" << std::endl;
    std::cout << "|                                            |" << std::endl;
    std::cout << "|        ";
    std::cout << "\e[1;38;5;105m";
    std::cout << "P  H  O  N  E     B  O  O  K";
    std::cout << "\e[1;38;5;200m";
    std::cout << "        |" << std::endl;
    std::cout << "|                                            |" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "\033[1;0m";
}


int main(void)
{
    print_head();


    return(0);
}