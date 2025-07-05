/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:10:03 by chtan             #+#    #+#             */
/*   Updated: 2025/07/05 13:37:13 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

template <typename T> void print(T &value)
{
    std::cout << value << " ";
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    size_t length = sizeof(array) / sizeof(array[0]);

    std::cout << "Array elements: ";
    iter(array, length, print<int>);
    std::cout << std::endl;

    return 0;
}
