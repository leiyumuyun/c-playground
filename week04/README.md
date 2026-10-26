# Week 04 — 循环进阶与函数

上课日期：2026-10-08

本周共 8 个作业，每个作业一个子目录，源码统一叫 `main.c`，编译运行方法见各子目录的 `README.md`。

## 作业列表

| 目录 | 作业 | 内容 |
|---|---|---|
| [ex01_char_to_binary/](ex01_char_to_binary/) | 字符转 8 位二进制 | 读入一个字符，从第 7 位到第 0 位逐位取出 `(c>>i)&1` 并打印，得到这个字符的 8 位二进制表示。 |
| [ex02_asterisk_hourglass/](ex02_asterisk_hourglass/) | 星号沙漏图形 | 读入 n，先打一行 `2n-1` 个带间隔的星号作为上边缘，再用 n-1 行画出向内收缩的轮廓，靠 `%*c` 按行算出的宽度做缩进。 |
| [ex03_digits_breakdown/](ex03_digits_breakdown/) | 数位分解 | 读入一个整数，用 `while` 从低位开始把每一位存进数组，再从最高位往下、跳过多余的 0，按 `1*2*3*` 的格式打印每一位数字。 |
| [ex04_simple_calculator/](ex04_simple_calculator/) | 简易四则运算器 | 读入「数 运算符 数」，按运算符分支做加减乘除，除法前检查除数是否为 0，运算符不认识或除零都输出 `Wrong input`。 |
| [ex05_e_series/](ex05_e_series/) | 级数求 e | 从 1 开始逐项累加 `1/n!`，用 `q=q/n` 递推下一项（不必每次重算阶乘），当 `q < 1e-6` 时停止，输出 e 的近似值。 |
| [ex06_exp_series/](ex06_exp_series/) | 级数求 e^x | 读入 x，从 1 开始累加 `x^n/n!`，用 `tmp=tmp*x/n` 递推每一项，当 `tmp < 1e-6` 时停止。 |
| [ex07_prime_factorization/](ex07_prime_factorization/) | 质因数分解 | 读入 n，从 2 开始试除，能除尽就把因子收进数组并让 n 除掉它，除不尽才 `i++`；循环条件是 `i*i<=tmp`，最后若 n>1 它本身也是因子。 |
| [ex08_bisection_root/](ex08_bisection_root/) | 二分法求根 | 对 `f(x)=x³-x²-1` 在区间 `[0,3]` 上二分：每次取中点看符号，把区间缩到含根的一半，直到区间长度小于 `1e-5`，输出中点。 |

## 本周知识点

- 位运算 `>>` 与 `&`
- `printf("%*c", w, ch)` 用变量控制字段宽度
- 数组与下标，跳过前导 0
- `scanf` 混合读入浮点与字符
- 递推式求级数（`q=q/n`、`tmp=tmp*x/n`）
- 试除法与 `i*i<=tmp` 边界
- 独立函数 + 二分法求根

## 如何编译运行

```bash
cd weekXX/exNN_xxx
gcc main.c -o main -Wall -Wextra
./main
```

## 遇到的问题 / 收获

TODO: 由作者补充
