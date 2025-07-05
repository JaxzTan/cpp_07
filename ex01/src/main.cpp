/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:10:03 by chtan             #+#    #+#             */
/*   Updated: 2025/07/05 15:12:28 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

template <typename T> void print(T &value)
{
    std::cout << value << " ";
}

template <typename T> void increment(T &value)
{
    value += 5;
}

int main()
{
	//array
	int arr[] = {1, 2, 3, 4, 5};
	std::cout << "Original int array: ";
	iter(arr, 5, print<int>);
	std::cout << std::endl;

	iter(arr, 5, increment<int>);
	std::cout << "Incremented int array: ";
	iter(arr, 5, print<int>);
	std::cout << std::endl;

	//string array
	std::string strs[] = {"hello", "world", "cpp"};
	std::cout << "String array: ";
	iter(strs, 3, print<std::string>);
	std::cout << std::endl;

	return 0;
}
