/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:40:20 by jaxztan           #+#    #+#             */
/*   Updated: 2025/07/02 13:43:47 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"


int main() {
    try {
        // Default constructor
        Array<int> a;
        std::cout << "a.size(): " << a.size() << std::endl;

        // Parameterized constructor
        Array<int> b(5);
        std::cout << "b.size(): " << b.size() << std::endl;

        // Fill and print
        for (unsigned int i = 0; i < b.size(); i++) {
            b[i] = (i + 1) * 10;
            std::cout << "b[" << i << "] = " << b[i] << std::endl;
        }

        // Copy constructor
        Array<int> c(b);
        std::cout << "c (copied from b):" << std::endl;
        for (unsigned int i = 0; i < c.size(); i++) {
            std::cout << "c[" << i << "] = " << c[i] << std::endl;
        }

        // Assignment operator
        Array<int> d;
        d = b;
        std::cout << "d (assigned from b):" << std::endl;
        for (unsigned int i = 0; i < d.size(); i++) {
            std::cout << "d[" << i << "] = " << d[i] << std::endl;
        }

        // Exception: Out of bounds
        std::cout << "Attempting to access b[10]..." << std::endl;
        std::cout << b[10] << std::endl;  // Should throw your OutOfBoundsException

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
