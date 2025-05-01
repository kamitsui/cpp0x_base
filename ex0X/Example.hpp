/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:31:51 by kamitsui          #+#    #+#             */
/*   Updated: 2025/05/01 23:52:23 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ex0X/Example.hpp
 * @brief Example クラスの定義
 *
 * このクラスは、簡単な機能を提供します。
 */
#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

#include <string>

/**
 * @brief Example クラス
 *
 * 簡単なメッセージを保持し、それを出力する機能を提供します。
 */
class Example {
  private:
    std::string message; ///< 保持するメッセージ

  public:
    /**
     * @brief デフォルトコンストラクタ
     *
     * メッセージを "Hello, Example!" で初期化します。
     */
    Example();

    /**
     * @brief コンストラクタ
     *
     * 指定されたメッセージでオブジェクトを初期化します。
     *
     * @param msg 初期化するメッセージ
     */
    Example(const std::string &msg);

    /**
     * @brief メッセージを設定します。
     *
     * @param new_msg 新しいメッセージ
     */
    void setMessage(const std::string &new_msg);

    /**
     * @brief メッセージを取得します。
     *
     * @return 保持しているメッセージ
     */
    std::string getMessage() const;

    /**
     * @brief メッセージを出力します。
     */
    void printMessage() const;
};

/**
 * @brief Example クラスのインスタンスを作成し、メッセージを設定して出力します。
 *
 * @param exampleObj 操作する Example オブジェクトへの参照
 * @param newMessage 設定する新しいメッセージ
 */
void useExampleClass(Example &exampleObj, const std::string &newMessage);

#endif // EXAMPLE_HPP
