/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:33:16 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/26 16:47:03 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ex00/main.cpp
 * @brief Example クラスの使用例と main 関数
 */
#include "Example.hpp"
#include <iostream>
#include <string>

/**
 * @brief メイン関数
 *
 * Example クラスのオブジェクトを作成し、その機能を使用します。
 *
 * @param argc コマンドライン引数の数
 * @param argv コマンドライン引数の配列
 * @return 0 (正常終了)
 */
int main(int argc, char **argv) {
    Example defaultExample;
    std::cout << "main (default): ";
    defaultExample.printMessage();

    Example customExample("Greetings from main!");
    std::cout << "main (custom): ";
    customExample.printMessage();

    useExampleClass(defaultExample, "Message changed in main!");
    useExampleClass(customExample, "Another message!");

    (void)argc;
    (void)argv;
    return 0;
}
