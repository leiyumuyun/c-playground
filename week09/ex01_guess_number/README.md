# ex01_guess_number — 猜数大小提示

## 作业内容

读入种子 `s` 和猜测值 `n`，用 `srand(s)` 初始化随机数，`rand() % 100 + 1` 生成 1 到 100 的目标数，比较后输出“猜得太大”“猜得太小”或“猜对了”。

## 涉及知识点

- `scanf("%d%d", &s, &n)` 读入两个整数
- `srand(s)` 设定随机数种子，`rand() % 100 + 1` 生成 1～100 的随机数
- `if` / `else if` / `else` 互斥分支判断
- `printf` 输出中文提示

## 如何编译运行

```bash
gcc main.c -o main -Wall -Wextra
./main
