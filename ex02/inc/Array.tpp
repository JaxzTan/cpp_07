/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:32:23 by jaxztan           #+#    #+#             */
/*   Updated: 2025/07/05 13:03:05 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(nullptr), _size(0)
{}

template <typename T>
Array<T>::Array( unsigned int size) : _size(size)
{
    this->_array = new T[size];
}

template <typename T>
Array<T>::Array(const Array &other) : _size(other._size)
{
    if (_size > 0)
		_array = new T[_size];
	else
		_array = NULL;
    for (unsigned int i = 0; i < other._size; i++)
        this->_array[i] = other._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this == &other)
        return (*this);
    return (*this);
}


template<class T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= this->_size)
		throw (Array::OutOfBounds());
	return (this->_array[n]);
}

template <typename T>
Array<T>::~Array()
{
    if (this->_size > 0)
        delete[] this->_array;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (this->_size);
}

template <typename T>
const char *Array<T>::OutOfBounds::what() const throw()
{
    return ("Array: Out of bounds access");
}
