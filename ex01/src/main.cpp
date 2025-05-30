/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:10:03 by chtan             #+#    #+#             */
/*   Updated: 2025/05/30 12:11:41 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

void print(int value)
{
    std::cout << value << " ";
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    size_t length = sizeof(array) / sizeof(array[0]);

    std::cout << "Array elements: ";
    iter(array, length, print);
    std::cout << std::endl;

    return 0;
}
