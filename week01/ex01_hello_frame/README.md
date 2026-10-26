# ex01_hello_frame — 星号边框问候

## 作业内容

读入一个名字，用 `strlen` 算出边框需要多长，先打一行 `*`，再打居中的 `Hello <name>!`，最后再打一行 `*`。边框长度由名字长度推出来。

## 涉及知识点

- `char name[128]` 存放字符串，`scanf("%s", name)` 读入（注意传数组名而不是 `&name`）
- `strlen` 求字符个数，`#include <string.h>`
- `for` 循环按长度重复输出同一个字符
- `printf` 格式串里嵌入变量：`printf("\n      Hello %s!      \n", name)`

## 如何编译运行

```bash
gcc main.c -o main -Wall -Wextra
./main
```


## 遇到的问题 / 收获

TODO: 由作者补充
