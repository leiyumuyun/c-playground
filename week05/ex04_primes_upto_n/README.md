# ex04_primes_upto_n — n 以内的素数

## 作业内容

外层遍历 2 到 n，内层用 `j*j<=i` 试除，用 `flag` 标记是否被整除，没被整除的就是素数并输出。

## 涉及知识点

- 试除法的上界写 `j*j<=i`，避免调用 `sqrt`
- `flag` 标记法 + `break` 提前退出
- 每轮循环内重新初始化 `flag=1`
- 每个素数后输出一个空格

## 如何编译运行

```bash
gcc main.c -o main -Wall -Wextra
./main
```


## 遇到的问题 / 收获

TODO: 由作者补充
