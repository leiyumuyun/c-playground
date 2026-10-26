# ex04_simple_calculator — 简易四则运算器

## 作业内容

读入「数 运算符 数」，按运算符分支做加减乘除，除法前检查除数是否为 0，运算符不认识或除零都输出 `Wrong input`。

## 涉及知识点

- `scanf("%f %c %f")` 在同一次调用里混合读入浮点和字符
- 字符常量比较 `n=='+'`
- 用 `if` 链代替 `switch`
- 除零保护：先判断 `y==0` 再算
- `%.2f` 输出结果

## 如何编译运行

```bash
gcc main.c -o main -Wall -Wextra
./main
```


## 遇到的问题 / 收获

TODO: 由作者补充
