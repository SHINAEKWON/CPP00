/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikwon <shikwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:23:59 by shikwon           #+#    #+#             */
/*   Updated: 2024/01/29 21:20:53 by shikwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
        {
            for (int a = 0; av[i][a] != '\0'; a++)
            {
                std::cout << static_cast<char>(std::toupper(av[i][a]));
            }
            if (i == ac - 1)
                break ;
            else
                std::cout << " ";
        }
    }
    return (0);
}
