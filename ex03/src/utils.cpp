/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:20:51 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 00:24:17 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.hpp"

int ft_count_digits(int n)
{
    int count;

    count = 0;
    if (!n)
        return (0);
    while (n)
    {
        n = n / 10;
        count++;
    }
    return (count);
}
