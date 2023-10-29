# 第四章  语句
## 4.1 空语句
## 4.2 表达式语句
## 4.3 代码块
代码块就是位于一对花括号之内的可选的声明和语句列表。
## 4.4 if语句
### 语法格式：
    if( expression )
        statement;
    else  
        statement;
***else***子句遵循就近原则，将匹配与它最近的if语句
## 4.5 while语句
### 语法格式：
    while(expression)
        statement;
### 4.5.1   break和continue语句
break语句用于终止循环，continue语句用于跳过当前循环。
### 4.5.2   while语句的循环过程
## 4.6 for语句
### 语法格式：
    for ( expression1; expression2; expression3 )
        statement;
其中***statement***是循环体；***expression1***是初始化部分，***expression2s***是条件部分，***expression3***是调整部分。
## 4.7 do语句
### 语法格式：
    do
        statement;
    while( expression );
do语句至少执行一次循环！
## 4.8 switch语句
### 语法格式:
    switch (expression)
    {
        case constant-expression:
            statement;
            break;
        default:
            statement;
            break;
    }
expression必须是整型变量
#### 4.8.1   switch语句中的break语句
#### 4.8.2   default子句
建议在每个switch语句末尾都加上default子句。
#### 4.8.3   switch语句的执行流程
## 4.9 goto语句
### 语法结构：
    goto 语句标签；
在多层循环嵌套中使用goto语句可以跳出多层循环。