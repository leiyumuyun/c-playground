# Week 05 — 数组

## 作业内容

本周进入数组：冒泡排序、保序去重、统计最长连续相等段、枚举素数，以及两道用「数组下标当指数」的题——多项式相加和大整数加法。

| 文件 | 功能 | 输入 → 输出 |
|---|---|---|
| `00141_bubble_sort.c` | 双重循环相邻交换的冒泡排序，升序，空格分隔输出 | n 与 n 个数 → 排序结果 |
| `00142_dedup_array.c` | 用辅助数组 `b[]` 保存首次出现的元素，边扫边查重，保持原顺序去重 | n 个数 → 去重结果 |
| `00143_longest_run.c` | 一次遍历统计最长连续相同元素的个数 | n 个数 → 最长连续长度 |
| `00144_primes_upto_n.c` | 对 2..n 每个数用 `j*j<=i` 试除判断是否为素数并输出 | n → 2..n 内所有素数 |
| `00145_polynomial_add.c` | 两轮读入 `指数 系数` 对（读到 `-1` 结束），数组下标当指数累加系数，最后按降序还原多项式，处理好 `+` 号、系数 1、系数 -1 和常数项 | 两组多项式 → 和 |
| `0x02_big_number_add.c` | 两个最长 501 位的十进制字符串倒序存入 `int` 数组，逐位相加并处理进位，输出高精度和 | 两个大数 → 和 |

## 涉及知识点

- 一维数组定义与初始化 `int a[101]={0}`
- 变长数组 VLA：`int a[n]`（n 运行时才确定）
- 数组下标作为数据的语义载体（下标 = 指数，元素 = 系数）
- 嵌套循环排序、保序去重、单遍扫描求最长连续段
- 字符串与数字互转：`str_a[len-1-i] - '0'` 取数位
- 高精度加法：逆序存数、`c[i] >= 10` 时向高位进位
- 输出格式的边界处理（多项式首项不加 `+`、系数省略 1）

## 如何编译运行

```sh
cd /home/lei/projects/c-playground
gcc week05/00141_bubble_sort.c -o /tmp/bubble && /tmp/bubble
gcc week05/00142_dedup_array.c -o /tmp/dedup && /tmp/dedup
gcc week05/00143_longest_run.c -o /tmp/run && /tmp/run
gcc week05/00144_primes_upto_n.c -o /tmp/primes && /tmp/primes
gcc week05/00145_polynomial_add.c -o /tmp/poly && /tmp/poly
gcc week05/0x02_big_number_add.c -o /tmp/bignum && /tmp/bignum
```

本目录不依赖 `math.h`，无需 `-lm`。

## 遇到的问题 / 收获

TODO: 由作者补充
