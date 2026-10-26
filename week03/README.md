# Week 03 — 循环控制

上课日期：2026-09-24

本周共 4 个作业，每个作业一个子目录，源码统一叫 `main.c`，编译运行方法见各子目录的 `README.md`。

## 作业列表

| 目录 | 作业 | 内容 |
|---|---|---|
| [ex01_reverse_digits/](ex01_reverse_digits/) | 逆序输出各位数字 | 读入一个整数，循环里每次取末位打印、再整除 10 把末位去掉，于是数字从低位到高位被打印出来，实现逆序。 |
| [ex02_narcissistic_numbers/](ex02_narcissistic_numbers/) | 三位水仙花数 | 遍历 100 到 999，把每个数拆出个位、十位、百位，若 `n == a³+b³+c³` 就输出，得到所有三位水仙花数。 |
| [ex03_triangle_classify/](ex03_triangle_classify/) | 三点坐标判定三角形类型 | 读入三个点的坐标算出三条边长，先判断能否构成三角形；能则依次判断等边、等腰直角、等腰、直角、普通。 |
| [ex04_hundred_chickens/](ex04_hundred_chickens/) | 百钱百鸡 | 公鸡 5 钱、母鸡 3 钱、小鸡 1 钱 3 只，100 钱买 100 只。 |

## 本周知识点

- `for` / `while` 循环与循环变量的更新
- 取余取整拆位：`n%10`、`n/10`
- 二重循环穷举
- 浮点容差比较 `fabs(a-b) < 1e-5`
- 标志变量与分支嵌套

## 如何编译运行

```bash
cd weekXX/exNN_xxx
gcc main.c -o main -Wall -Wextra
./main
```

## 遇到的问题 / 收获

TODO: 由作者补充
