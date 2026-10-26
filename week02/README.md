# Week 02 — 分支与数学函数

## 作业内容

本周开始用 `if` / `else` 处理分支：先写浮点数绝对值，再引入 `math.h` 的 `sqrt` 算两点间距离，最后用海伦公式算三角形面积并先判断三边能否构成三角形。

| 文件 | 功能 | 输入 → 输出 |
|---|---|---|
| `00107_absolute_value.c` | `if (a>=0)` 判断后求浮点数绝对值，输出三位小数 | 一个浮点数 → 绝对值 |
| `00108_point_distance.c` | 由两点坐标算欧氏距离，`sqrt((x2-x1)^2+(y2-y1)^2)` | 4 个数 → 距离（`%.2f`） |
| `00109_triangle_by_heron.c` | 先用三边不等式判断能否成三角形，能则用海伦公式算面积，否则输出 `输入错误` | 3 条边 → 面积或提示 |

## 涉及知识点

- `if` / `else` 单分支与双分支，`&&` 逻辑与组合多个判断条件
- `math.h` 的 `sqrt`，链接时需要 `-lm`
- 浮点格式化输出 `%.2f` / `%.3f`
- 用三边不等式 `a+b>c && a+c>b && b+c>a` 做合法性校验
- 中文字符串常量在 `printf` 里直接输出（源文件为 GBK 编码）

## 如何编译运行

```sh
cd /home/lei/projects/c-playground
gcc week02/00107_absolute_value.c -o /tmp/absval && /tmp/absval
gcc week02/00108_point_distance.c -o /tmp/dist -lm && /tmp/dist
gcc week02/00109_triangle_by_heron.c -o /tmp/heron -lm && /tmp/heron
```

`00108`、`00109` 用到 `sqrt`，必须加 `-lm`。

## 遇到的问题 / 收获

TODO: 由作者补充
