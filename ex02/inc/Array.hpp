/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:13:22 by jaxztan           #+#    #+#             */
/*   Updated: 2025/07/05 12:21:24 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <typename T> class Array
{
    private:
        T      *_array;
        int    _size;

    public:
        Array<T>();
        Array<T>(int size);
        Array<T>(const Array &other);
        Array<T> &operator=(const Array &other);
        T &operator[](int n);
        ~Array<T>();

        unsigned int size() const;

        class OutOfBounds : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};
#include "Array.tpp"
