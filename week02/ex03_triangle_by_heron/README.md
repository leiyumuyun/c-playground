# ex03_triangle_by_heron — 海伦公式求三角形面积

## 作业内容

读入三条边，先用三边不等式判断能否构成三角形：能则用海伦公式 `sqrt(l*(l-a)*(l-b)*(l-c))` 算面积，否则输出 `输入错误`。

## 涉及知识点

- `&&` 组合三个不等式做合法性校验
- 半周长 `l=(a+b+c)/2` 与海伦公式
- `math.h` + `-lm`
- `if` / `else` 两个分支输出不同内容

## 如何编译运行

```bash
gcc main.c -o main -Wall -Wextra -lm
./main
```

本例调用了 `math.h` 的 `sqrt` / `fabs`，必须加 `-lm`，否则链接阶段会报 `undefined reference to sqrt`。


## 遇到的问题 / 收获

TODO: 由作者补充
