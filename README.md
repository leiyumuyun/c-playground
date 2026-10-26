# C Playground

C 语言入门课程的作业代码合集：按上课日期归档为六周，每周一个目录，周目录内的 `README.md` 说明当周每道题做什么、用到哪些 C 特性、以及怎么编译运行。

## 每周目录

| 周 | 主题 | 上课日期 | 目录 |
|---|---|---|---|
| Week 01 | 基础输入输出与表达式 | 2026-09-10 | [week01/](week01/README.md) |
| Week 02 | 分支与数学函数 | 2026-09-17 | [week02/](week02/README.md) |
| Week 03 | 循环控制 | 2026-09-24 | [week03/](week03/README.md) |
| Week 04 | 循环进阶与函数 | 2026-10-08 | [week04/](week04/README.md) |
| Week 05 | 数组 | 2026-10-15 | [week05/](week05/README.md) |
| Week 06 | 字符串与二维数组 | 2026-10-22 | [week06/](week06/README.md) |

## 命名约定

`weekXX/` 下文件名为 `<原题号>_<功能英文短语>.c`，题号保留自原始作业文件，便于回溯。

## 编译

每个文件都是独立的单文件程序，例如：

```sh
gcc week01/00100_hello_frame.c -o /tmp/a.out && /tmp/a.out
```

- 用到 `math.h`（如 `sqrt`）的文件需要额外加 `-lm`，各周 README 内已注明。
- 全部 30 个文件在 gcc 15 / glibc 2.44 下用 `gcc -Wall -Wextra` 即可零警告编译（用到 `sqrt` 的加 `-lm`），不需要额外的 `-std=` 参数。
