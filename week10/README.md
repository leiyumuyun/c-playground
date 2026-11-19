# Week 10 — 完数、素数判定与矩阵快速幂

上课日期：2026-11-19

本周共 3 个作业，每个作业一个子目录，源码统一叫 `main.c`，编译运行方法见各子目录的 `README.md`。

## 作业列表

| 目录 | 作业 | 内容 |
|---|---|---|
| [ex01_perfect_number/](ex01_perfect_number/) | 完数 | 枚举 2 到 n-1，试除求因子和，和等于自身时输出。 |
| [ex02_print_primes/](ex02_print_primes/) | 输出素数 | 枚举 2 到 n，试除到 √i，没有因子就输出。 |
| [ex03_fib_matrix_pow/](ex03_fib_matrix_pow/) | 斐波那契取模 | 2×2 矩阵二进制快速幂，求 F(n) mod 9999。 |

## 本周知识点

- 试除法求因子 / 判断素数，循环只需试到 √n
- 完数的定义：真因子之和等于自身
- 自定义函数封装单个数的判定
- 二进制快速幂：用 `n & 1` 和 `n >>= 1` 逐位处理
- 2×2 矩阵乘法与对称矩阵的三元素压缩表示
- `long long`、`#define` 常量与取模防溢出

## 如何编译运行

```bash
cd weekXX/exNN_xxx
gcc main.c -o main -Wall -Wextra
./main
```

## 遇到的问题 / 收获

TODO: 由作者补充
