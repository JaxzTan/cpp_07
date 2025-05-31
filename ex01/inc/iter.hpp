/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:08:57 by chtan             #+#    #+#             */
/*   Updated: 2025/05/31 09:50:25 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include<iostream>

template <typename T>
void	iter(T* array, size_t length, void(*f)(T&))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	iter(T* array, size_t length, void(*f)(const T&))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}


