/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Writer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:03:36 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/17 15:12:39 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Writer.hpp"

Writer::Writer(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2) {}

Writer::~Writer() {}

void	Writer::readFile(void)
{
}