# Week 06 — 字符串与二维数组

## 作业内容

本周处理字符数组和二维数组：整行读入后做大小写转换、压缩连续空格，用二维数组按四个方向螺旋填数，以及原地求下一个字典序排列。

| 文件 | 功能 | 输入 → 输出 |
|---|---|---|
| `00146_title_case.c` | `fgets` 读整行并去掉行尾换行，遇到空格后置标志位，让每个单词首字母大写、其余字母小写 | 一行文本 → 转换后的文本 |
| `00147_spiral_matrix.c` | `n×n` 二维数组用 `memset` 清零，按右→下→左→上的顺序螺旋填入 `1..n²`，用 `turn` 变量切换方向，`%4d` 对齐输出 | n → 螺旋矩阵 |
| `00148_next_permutation.c` | 原地求下一个字典序排列：从后往前找降序拐点 i，再从后找第一个大于 `a[i]` 的位置交换，最后反转后缀 | n 与 n 个数 → 下一个排列 |
| `00150_trim_spaces.c` | 双指针原地压缩：`r` 读、`w` 写，连续空格只保留一个 | 一行文本 → 去多余空格后的文本 |

## 涉及知识点

- `char` 数组与 `'\0'` 结尾字符串，`fgets` 读整行（含空格）后手动去掉 `'\n'`
- 字符范围判断与大小写转换：`str[i]-'a'+'A'`、`str[i]-'A'+'a'`
- 用标志位记录「上一个字符是不是空格」的状态
- 二维数组 `int a[n][n]`、`memset(a,0,sizeof a)` 清零、`%4d` 对齐
- 方向状态机：用 `turn` 在四个方向间轮转并做边界/已填检查
- 原地算法：双指针覆盖写、区间反转，不额外开数组

## 如何编译运行

```sh
cd /home/lei/projects/c-playground

gcc week06/00146_title_case.c -o /tmp/title -Wall -Wextra && printf 'hello world\n' | /tmp/title
gcc week06/00150_trim_spaces.c -o /tmp/trim -Wall -Wextra && printf 'a   b\n' | /tmp/trim

gcc week06/00147_spiral_matrix.c -o /tmp/spiral && echo 4 | /tmp/spiral
gcc week06/00148_next_permutation.c -o /tmp/nextperm && printf '3\n1 2 3\n' | /tmp/nextperm
```

`00147` 读 n 后按 `%4d` 输出 `n×n` 矩阵；`00148` 先读 n 再读 n 个数，输出下一个字典序排列。本目录不依赖 `math.h`，无需 `-lm`。

## 遇到的问题 / 收获

TODO: 由作者补充
