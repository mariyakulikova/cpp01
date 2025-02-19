/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:30:10 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/19 10:30:18 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(const string& fileName, const string& s1, const string& s2)
	: fileName(fileName)
	, s1(s1)
	, s2(s2)
{}

Replacer::~Replacer()
{}
