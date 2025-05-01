/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:32:47 by kamitsui          #+#    #+#             */
/*   Updated: 2025/05/01 23:51:10 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ex0X/Example.cpp
 * @brief Example クラスの実装
 */
#include "Example.hpp"
#include <iostream>

Example::Example() : message("Hello, Example!") {}

Example::Example(const std::string &msg) : message(msg) {}

void Example::setMessage(const std::string &new_msg) { message = new_msg; }

std::string Example::getMessage() const { return message; }

void Example::printMessage() const { std::cout << message << std::endl; }
