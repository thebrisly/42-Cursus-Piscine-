/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brisly <brisly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:09:01 by brisly            #+#    #+#             */
/*   Updated: 2023/09/12 21:53:36 by brisly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main()
{
	Array a;
	
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a(arr, 5);
    a.print();
}