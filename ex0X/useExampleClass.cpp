/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useExampleClass.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:45:00 by kamitsui          #+#    #+#             */
/*   Updated: 2025/05/01 23:51:32 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ex0X/useExampleClass.cpp
 * @brief Example クラスを使用する関数を定義
 */
#include "Example.hpp"
#include <iostream>
#include <string>

void useExampleClass(Example &exampleObj, const std::string &newMessage) {
    exampleObj.setMessage(newMessage);
    std::cout << "useExampleClass: ";
    exampleObj.printMessage();
}
