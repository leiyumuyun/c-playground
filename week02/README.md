# Week 02 — 分支与数学函数

上课日期：2026-09-17

本周共 3 个作业，每个作业一个子目录，源码统一叫 `main.c`，编译运行方法见各子目录的 `README.md`。

## 作业列表

| 目录 | 作业 | 内容 |
|---|---|---|
| [ex01_absolute_value/](ex01_absolute_value/) | 浮点数绝对值 | 读入一个浮点数，用 `if (a>=0)` 判断：非负直接输出，负数输出它的相反数，结果保留三位小数。 |
| [ex02_point_distance/](ex02_point_distance/) | 两点间距离 | 读入两个点的坐标，用 `sqrt((x2-x1)^2 + (y2-y1)^2)` 求欧氏距离，输出两位小数。 |
| [ex03_triangle_by_heron/](ex03_triangle_by_heron/) | 海伦公式求三角形面积 | 读入三条边，先用三边不等式判断能否构成三角形：能则用海伦公式 `sqrt(l*(l-a)*(l-b)*(l-c))` 算面积，否则输出 `输入错误`。 |

## 本周知识点

- `if` / `else` 双分支，`&&` 组合多个条件
- `math.h` 的 `sqrt`，链接时需要 `-lm`
- 浮点格式化 `%.2f` / `%.3f`
- 用三边不等式做输入合法性校验

## 如何编译运行

```bash
cd weekXX/exNN_xxx
gcc main.c -o main -Wall -Wextra
./main
```

## 遇到的问题 / 收获

TODO: 由作者补充
