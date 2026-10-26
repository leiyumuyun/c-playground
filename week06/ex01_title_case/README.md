# ex01_title_case — 单词首字母大写

## 作业内容

用 `fgets` 读一整行并去掉行尾换行，遍历时遇到空格就置标志位，让每个单词的首字母变大写、其余字母变小写。

## 涉及知识点

- `fgets(str, sizeof str, stdin)` 带长度上限地读整行
- 手动把行尾 `'\n'` 换成 `'\0'`
- 标志位 `flag` 记录「当前位置是不是单词开头」
- 三元表达式做大小写转换：`str[i]-'a'+'A'`
- 字符区间判断 `str[i]>='a'&&str[i]<='z'`

## 如何编译运行

```bash
gcc main.c -o main -Wall -Wextra
./main
```


## 遇到的问题 / 收获

TODO: 由作者补充
