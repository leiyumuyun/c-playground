# ex02_dedup_array — 数组去重

## 作业内容

把输入的数字依次和结果数组比较，只有没出现过才追加，保持首次出现的顺序，最后按空格输出。

## 涉及知识点

- 输入数组 `a` 与结果数组 `b` 配合计数器 `count`
- 内层循环 `break` 后用 `j==count` 判断「扫完了都没重复」
- 用 `count` 兼作结果长度和下个写入位置
- 变长数组 `int a[n], b[n]`

## 如何编译运行

```bash
gcc main.c -o main -Wall -Wextra
./main
```


## 遇到的问题 / 收获

TODO: 由作者补充
