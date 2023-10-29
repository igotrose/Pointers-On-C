// 计数一个值中值为1的位的个数


// 把指定的位设置为1
value |= 1 << bit_number;
// 把指定的位清0
value &= ~ (1 << bit_number);
// 这个函数返回参数值中值位1的位的个数
int count_one_bits( unsigned value )
{
    int ones;
    // 当这个值还有一些值位1的位时
    for (ones = 0; value != 0; value >>= 1)
    {
        // 如果最低位的值位1，计数增1
        if (value % 2 != 0)
        {
            ones += 1;
        }
    }
    return ones;
}

// 对指定的位进行测试，弱国改为已被设置为1，结果为非零值
// value & 1 << bit_number