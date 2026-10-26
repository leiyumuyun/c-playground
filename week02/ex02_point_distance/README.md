# ex02_point_distance — 两点间距离

## 作业内容

读入两个点的坐标，用 `sqrt((x2-x1)^2 + (y2-y1)^2)` 求欧氏距离，输出两位小数。

## 涉及知识点

- `#include <math.h>` 与 `sqrt`
- 链接阶段需要 `-lm`，否则报 `undefined reference to sqrt`
- 用乘法代替 `pow(x,2)`，省一次函数调用
- `%.2f` 输出

## 如何编译运行

```bash
gcc main.c -o main -Wall -Wextra -lm
./main
```

本例调用了 `math.h` 的 `sqrt` / `fabs`，必须加 `-lm`，否则链接阶段会报 `undefined reference to sqrt`。


## 遇到的问题 / 收获

TODO: 由作者补充
