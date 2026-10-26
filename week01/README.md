# Week 01 — 基础输入输出与表达式

## 作业内容

本周从最基础的 `scanf` / `printf` 开始：先做格式化输出和星号边框，再用表达式求三角形面积、等差数列和、华氏转摄氏，最后引入自定义函数完成三数比大小。

| 文件 | 功能 | 输入 → 输出 |
|---|---|---|
| `00100_hello_frame.c` | 读入一个名字，用 `strlen` 算出内容宽度后打印上下两条星号边框，中间是 `Hello <name>!` | 名字 → 边框 + 问候 |
| `00101_max_of_three.c` | 定义 `max(a,b,c)` 函数求三个整数中的最大值，输入用逗号分隔 | `x,y,z` → `max=` |
| `00102_triangle_area.c` | 底乘高除以 2 求三角形面积，全程整数运算 | `a b` → 面积 |
| `00103_series_sum.c` | 用等差求和闭式 `sum=a*c+c*(c-1)*b/2` 直接算结果（首项 a、公差 b、项数 c） | `a b c` → `sum` |
| `00106_fahrenheit_to_celsius.c` | 华氏温度转摄氏温度，`5.0/9.0*(a-32.0)` | 华氏 → 摄氏（`%.2f`） |

## 涉及知识点

- `#include <stdio.h>` / `<string.h>`，`strlen` 求字符串长度
- `scanf` 格式串，包括 `"%d,%d,%d"` 这种带字面分隔符的写法
- `printf` 格式化输出：`%d`、`%s`、`%.2f`、`%.3f`
- 变量类型 `int` / `float`，以及整数除法陷阱（`5/9` 与 `5.0/9.0` 的区别）
- `for` 循环做定次重复输出
- 自定义函数 `int max(int a,int b,int c)` 的定义与调用、`return` 返回值

## 如何编译运行

```sh
cd /home/lei/projects/c-playground
gcc week01/00100_hello_frame.c -o /tmp/hello_frame && /tmp/hello_frame
gcc week01/00101_max_of_three.c -o /tmp/max3 && /tmp/max3
gcc week01/00102_triangle_area.c -o /tmp/tri_area && /tmp/tri_area
gcc week01/00103_series_sum.c -o /tmp/series && /tmp/series
gcc week01/00106_fahrenheit_to_celsius.c -o /tmp/f2c && /tmp/f2c
```

本目录不依赖 `math.h`，无需 `-lm`。

## 遇到的问题 / 收获

TODO: 由作者补充
