/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:08:57 by chtan             #+#    #+#             */
/*   Updated: 2025/05/30 12:09:50 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include<iostream>

template<typename T_array, typename T_function>
void iter(T_array *array, size_t length, T_function function)
{
	for (size_t i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

