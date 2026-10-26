# Week 01 — 基础输入输出与表达式

上课日期：2026-09-10

本周共 5 个作业，每个作业一个子目录，源码统一叫 `main.c`，编译运行方法见各子目录的 `README.md`。

## 作业列表

| 目录 | 作业 | 内容 |
|---|---|---|
| [ex01_hello_frame/](ex01_hello_frame/) | 星号边框问候 | 读入一个名字，用 `strlen` 算出边框需要多长，先打一行 `*`，再打居中的 `Hello <name>!`，最后再打一行 `*`。 |
| [ex02_max_of_three/](ex02_max_of_three/) | 三数最大值（自定义函数） | 定义 `max(a,b,c)` 用 `if` / `else if` 比较出三者最大值，`main` 读入三个整数后调用它并打印 `max=...`。 |
| [ex03_triangle_area/](ex03_triangle_area/) | 直角三角形面积 | 读入两个整数作为直角边，用 `a*b/2` 求面积并输出。 |
| [ex04_series_sum/](ex04_series_sum/) | 等差数列求和 | 输入首项、公差、项数，直接套公式 `a*c + c*(c-1)*b/2` 算出前 c 项之和，不写循环。 |
| [ex05_fahrenheit_to_celsius/](ex05_fahrenheit_to_celsius/) | 华氏转摄氏 | 读入华氏温度，按 `5.0/9.0*(a-32.0)` 换算成摄氏温度，保留两位小数输出。 |

## 本周知识点

- `char` 数组与 `scanf("%s")` 读一个不含空格的字符串
- `string.h` 的 `strlen` 求长度
- `float` 与 `%f` / `%.2f`，以及用 `5.0/9.0` 避免整数除法
- 自定义函数定义、调用与值传递
- 整数除法截断，以及用公式代替循环求和

## 如何编译运行

```bash
cd weekXX/exNN_xxx
gcc main.c -o main -Wall -Wextra
./main
```

## 遇到的问题 / 收获

TODO: 由作者补充
