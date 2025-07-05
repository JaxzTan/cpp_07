/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaxztan <jaxztan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:08:57 by chtan             #+#    #+#             */
/*   Updated: 2025/07/05 15:11:31 by jaxztan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include<iostream>
# include<cstdlib>

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


