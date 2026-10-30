# C Playground

C 语言入门课程的作业代码合集：按上课日期归档为六周，每周一个目录，**每周里每个作业一个子目录**（`exNN_简述/`），源码统一命名为 `main.c`，配一份说明这道题做什么、用到哪些 C 特性、以及怎么编译运行的 `README.md`。

## 每周目录

| 周 | 主题 | 上课日期 | 目录 |
|---|---|---|---|
| Week 01 | 基础输入输出与表达式 | 2026-09-10 | [week01/](week01/README.md) |
| Week 02 | 分支与数学函数 | 2026-09-17 | [week02/](week02/README.md) |
| Week 03 | 循环控制 | 2026-09-24 | [week03/](week03/README.md) |
| Week 04 | 循环进阶与函数 | 2026-10-08 | [week04/](week04/README.md) |
| Week 05 | 数组 | 2026-10-15 | [week05/](week05/README.md) |
| Week 06 | 字符串与二维数组 | 2026-10-22 | [week06/](week06/README.md) |
| Week 08 | 二维数组与动态规划 | 2026-10-29 | [week08/](week08/README.md) |

## 目录结构

```
weekXX/
├── README.md            # 本周索引：作业列表 + 知识点
└── exNN_简述/
    ├── README.md        # 这道题的说明
    └── main.c           # 源码
```

目录名 `exNN_简述` 里的 `NN` 是本周内的序号（按原始题号升序），`简述` 是这道题做的事。原始题号仍保留在各作业 README 的标题和内容里，便于回溯到当时的作业文件。

## 编译

每个作业目录都是独立可编译的单文件程序，先 `cd` 进去再编译：

```bash
cd week01/ex01_hello_frame
gcc main.c -o main -Wall -Wextra
./main
```

- 用到 `math.h`（如 `sqrt`）的三个作业需要额外加 `-lm`：`week02/ex02_point_distance`、`week02/ex03_triangle_by_heron`、`week03/ex03_triangle_classify`。
- 全部 30 个作业在 gcc 15 / glibc 2.44 下用 `-Wall -Wextra` 零警告编译通过。
- 编译产物 `main` 已在 `.gitignore` 里，不会误提交。
