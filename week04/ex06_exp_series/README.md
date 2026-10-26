# ex06_exp_series — 级数求 e^x

## 作业内容

读入 x，从 1 开始累加 `x^n/n!`，用 `tmp=tmp*x/n` 递推每一项，当 `tmp < 1e-6` 时停止。

## 涉及知识点

- 递推式 `tmp=tmp*x/n` 同时处理分子和分母
- 整数 `n` 与浮点 `tmp` 混合运算时的类型提升
- `while` 条件依赖上一轮计算出的值
- `%.3f` 输出

## 如何编译运行

```bash
gcc main.c -o main -Wall -Wextra
./main
```


## 遇到的问题 / 收获

TODO: 由作者补充
