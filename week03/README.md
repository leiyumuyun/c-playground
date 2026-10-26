# Week 03 — 循环控制

## 作业内容

本周集中练循环：用 `while` 配合取余取整逆序拆出数字，用 `for` 遍历三位数找水仙花数，用嵌套循环穷举百钱百鸡；另外一题给三点坐标算三边并判断三角形类型，用容差代替浮点相等比较。

| 文件 | 功能 | 输入 → 输出 |
|---|---|---|
| `00100_reverse_digits.c` | `while` 里每次 `a%10` 取末位、`a/=10` 收缩，从低位往高位打印，即逆序输出各位数字 | 整数 → 逆序数字串 |
| `00130_narcissistic_numbers.c` | 遍历 100–999，拆出百十个位后判断是否为水仙花数，逐行输出 | 无输入 → 所有三位水仙花数 |
| `00132_triangle_classify.c` | 输入三个点坐标算出三边长，判断等边 / 等腰 / 等腰直角 / 直角 / 普通三角形，不能构成时输出「非三角形」，浮点比较统一用 `fabs(...) < 0.00001` 容差 | 6 个数 → 三角形类型 |
| `00134_hundred_chickens.c` | 双重 `for` 穷举 x、y、z，满足 `x+y+z=100` 且 `5x+3y+z/3=100` 即输出（百钱百鸡） | 无输入 → 所有解 |

## 涉及知识点

- `while` 循环、`for` 循环、二重嵌套循环穷举
- 取余取整拆位：`n%10`、`n/10`
- 多重 `if` / `else if` 分支
- 浮点误差处理：用 `|a-b| < 0.00001` 代替 `a == b`
- `math.h` 的 `sqrt`，以及用边长平方关系判断直角三角形

## 如何编译运行

```sh
cd /home/lei/projects/c-playground
gcc week03/00100_reverse_digits.c -o /tmp/revdig && /tmp/revdig
gcc week03/00130_narcissistic_numbers.c -o /tmp/narc && /tmp/narc
gcc week03/00132_triangle_classify.c -o /tmp/tricls -lm && /tmp/tricls
gcc week03/00134_hundred_chickens.c -o /tmp/chick && /tmp/chick
```

`00132` 用到 `sqrt`，需要加 `-lm`。

## 遇到的问题 / 收获

TODO: 由作者补充
