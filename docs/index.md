# C++ Module 0X {#mainpage}

## Overview

EX00では、AAAを学びます。

EX01では、BBB

EX02では、CCC

EX03では、DDD 

まとめると、AAAから始まり、うんぬんカンヌンがあって、ZZZに繋がります。FOO HOGE

## Project Links

* [Intra - CPP02](https://projects.intra.42.fr/cpp-module-02/kamitsui)
* [GitHub - CPP02](https://github.com/kamitsui/cpp02/) (非公開)
* My Documents : [CPP02](https://kamitsui.github.io/cpp02) / [CPP_Modules](https://kamitsui.github.io/CPP_Modules/)

> Doxygenで作成されたソースコードドキュメントです。
>
> クラスの連携図やソースコードの説明に関する情報がまとめられています。

***

## 課題を始める前に

この課題で学ぶ機能や実装がなぜ必要なのか？その仕組みを使うとどうなるのか？歴史的な経緯やその効果に関する情報をまとめる。

---

## ex0X "Example"

Class : @ref Example

#### Files :
> @link ex0X/Example.hpp Example.hpp @endlink, 
> @link ex0X/Example.cpp Example.cpp @endlink, 
> 
> @ref useExampleClass.cpp, 
> 
> @link ex0X/main.cpp main.cpp @endlink, 
> @link ex0X/Makefile Makefile @endlink,

#### 内容：

> * どんなクラスを実装するか？
> * そのクラス、オブジェクトを使うとどうなのか？
> * クラス設計にどんな機能を使っていくのか？

#### キーワード、メモ：

> * クラスのコンストラクターやメソッドや実装した外部関数などをまとめる。

#### 動作結果

<details>
  <summary>main.cpp</summary>
  @snippet ex0X/main.cpp main
</details>

<details>
  <summary>出力</summary>
  @include docs/result_ex0X.log
</details>

@note
その他
* AAA
* BBB
* std::cout

## Other

* ブランチの使い方
> `main`: 安定版
>
> `feature/ex00`: 各課題の機能開発を行う。
>
> `docs`: ここにpushすると、GitHub Actions workflowが動作してドキュメントが公開されます。

* ドキュメントページ
> C++ Moduleのプロジェクト毎にDoxygenを使ったドキュメントをまとめています。
>
> doxygen用のcssテーマは、[Doxygen Awesome](https://jothepro.github.io/doxygen-awesome-css/)を使用。
