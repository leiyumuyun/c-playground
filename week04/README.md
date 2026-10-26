# Week 04 — 循环进阶与函数

## 作业内容

本周作业量最大，覆盖位运算打印二进制、宽度占位符画图案、四则运算计算器，以及四个数值计算题：级数求 e、泰勒级数求 e^x、质因数分解、二分法求方程根。数值题都靠循环里的精度判断或递推来收敛。

| 文件 | 功能 | 输入 → 输出 |
|---|---|---|
| `00111_char_to_binary.c` | 读入一个字符，用 `(c>>i)&1` 从高位到低位打印它的 8 位二进制 | 字符 → 8 位 0/1 |
| `00122_asterisk_hourglass.c` | 用 `printf("%*c", n, ' ')` 的宽度占位符控制空格数，打印星号沙漏/菱形轮廓 | 边长 n → 星号图案 |
| `00131_digits_breakdown.c` | 取余取整把十进制数逐位分离，每位以 `d*` 形式输出 | 整数 → 各位数字 |
| `00133_simple_calculator.c` | 读 `数 运算符 数`，按 `+ - * /` 计算，校验非法运算符与除数为 0，结果保留两位小数 | 表达式 → 结果或 `Wrong input` |
| `00136_e_series.c` | 级数求 `e = Σ 1/n!`，当项小于 `1e-6` 时停止累加 | 无输入 → e（`%.3f`） |
| `00137_exp_series.c` | 用泰勒级数求 `e^x`，递推项 `tmp = tmp*x/n`，项小于 `1e-6` 停止 | x → e^x（`%.3f`） |
| `00138_prime_factorization.c` | 从 2 起试除做质因数分解，按 `n=a*b*c` 的形式输出 | 整数 → 分解式 |
| `00139_bisection_root.c` | 定义 `double f(double x)`，用二分法求 `x^3-x^2-1=0` 在 [0,3] 的根，区间小于 `0.00001` 停止 | 无输入 → 根的近似值（`%.5f`） |

## 涉及知识点

- 位运算：右移 `>>` 与按位与 `&` 提取二进制位
- `printf` 宽度占位符 `%*c`（宽度由参数给出）
- `while` 循环 + 精度阈值 `1e-6` 控制级数收敛
- 级数项的递推构造（`q=q/n`、`tmp=tmp*x/n`），`double` 精度
- 函数定义与调用：`double f(double x)` 把被求根的函数独立出来
- 二分法：靠 `f(low)*f(mid) < 0` 判断根在哪半边
- 试除法求质因数、除零保护、`%.2f` / `%.3f` / `%.5f` 输出

## 如何编译运行

```sh
cd /home/lei/projects/c-playground
gcc week04/00111_char_to_binary.c -o /tmp/c2bin && /tmp/c2bin
gcc week04/00122_asterisk_hourglass.c -o /tmp/hourglass && /tmp/hourglass
gcc week04/00131_digits_breakdown.c -o /tmp/digits && /tmp/digits
gcc week04/00133_simple_calculator.c -o /tmp/calc && /tmp/calc
gcc week04/00136_e_series.c -o /tmp/eseries && /tmp/eseries
gcc week04/00137_exp_series.c -o /tmp/exp && /tmp/exp
gcc week04/00138_prime_factorization.c -o /tmp/factor && /tmp/factor
gcc week04/00139_bisection_root.c -o /tmp/bisect && /tmp/bisect
```

本目录不依赖 `math.h`，无需 `-lm`。

## 遇到的问题 / 收获

TODO: 由作者补充
