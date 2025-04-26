/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useExampleClass.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:45:00 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/26 17:01:13 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ex00/useExampleClass.cpp
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
