# 第九章 字符串、字符和字节

## 9.1 字符串基础
字符串就是一串零个或者多个字符，并且以'\0'结尾  
头文件***string.h***包含了使用字符串函数所需的原型和声明    
## 9.2 字符串长度
***strlen***用于计算字符串长度，即字符个数

    size_t strlen( const char* string )；
    
## 9.3 不受限制的字符串函数
最常用的字符串函数都是不受限制的，所以我们使用的需要注意使用边界，保证不会溢出。 
### 9.3.1 复制字符串
***strcpy***用于复制字符串。把参数**src**字符串复制到**dst**参数

    char *strcpy( char *dst, const char *src );
### 9.3.2 连接字符串
***strcat***用于连接字符串。传入**dst**参数，找到该字符串的末尾，添加**src**字符串

    char * strcat( char* dst, const char* src );
### 9.3.3 函数的返回值
在绝大多数的字符串函数调用中，他们的返回值只是被简单地忽略
### 9.3.4 字符串比较 
***strcmp***用于比较字符串，该函数将通过ACSII码值逐个比较字符串，直到不匹配
    
    int strcmp( const char* s1, const char* s2 );
## 9.4 长度受限的字符串函数

    char* strncpy( char* dst, const char* src, size_t len );
    char* strncat( char* dst, const char* src, size_t len );
    int strncmp( const char* s1, const char* s2, size_t len );

## 9.5 字符串查找基础
### 9.5.1 查找一个子字符
***strchr***和***strrchr***都用于查找字符，都会返回第一次出现的目标字符的指针，一个从左一个从右

    char* strchr( const char* str, int ch);
    char* strrchr( const char* str, int ch);
### 9.5.2 查找任何几个字符
***strpbrk***用于查找任何一组字符第一次在字符串中出现的位置，返回一个指向**str**中第1个匹配**group**中任意字符的字符位置

    char* strpbrk( const char* str, const char* group ); 

### 9.5.3 查找一个子串
***strstr***函数，在**s1**中查找整个**s2**第一次出现的起始位置

    char* strstr( const char* s1, const char* s2 );

## 9.6 高级字符串查找
### 9.6.1 查找一个字符串前缀
***strspn***函数用于检索**str**中第一个不在**group**中出现的字符的下标  
***strcspn***函数用于检索**str**中第一个在**group**中出现的字符的下标

    size_t strspn( const char* str, const char* group );
    size_t strcspn( const char* str, const char* group );
### 9.6.2 查找标记 
***strtok***函数用于记录分割下标, **seq**是分割标记字符集，**str**是将被分割标记的对象

    char *strtok( char* str, const char* seq );