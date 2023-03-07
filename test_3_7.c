//指针s的赋值考查
// #include <stdio.h>
// int main()
// {
//     int a[]={1,2,3,4,5,6,7,8},*s;
//     s=a+3;
//     printf("%d\n",s[0]);
//     printf("值是多少:%d",s[2]);
// return 0;
// }

//将字符串中各单词首字母转换成大写
// #include <stdio.h>
// void Change(char arr[], int sz)
// {
//     int flag = 0, i;//flag的作用是检测空格，如果有空格，则下一个字母大写
//     for (i = 0; i < sz; i++)
//     {
//         if (i == 0 && arr[i] != ' ')
//         {
//             arr[i] =arr[i]- 32;
//         }
//         if (1 == flag)
//         {
//             flag = 0;
//             arr[i] = arr[i] - 32;
//         }
//         if (arr[i] == ' ')
//         {
//             flag = 1;
//         }
//     }
// }
// int main()
// {
//     char arr[] = "wish you have a good exam";
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     Change(arr, sz);
//     printf("%s", arr);
// return 0;
// }

//判断输入的a,b,c是否能够构成三角形
// #include <stdio.h>
// int IsTran(int a, int b, int c)
// {
//     if ((a + b > c) && (a + c > b) && (b + c > a) && (a - b < c) && (a - c < b) && (b - a < c) && (b - c < a) && (c - a < b) && (c - b < a))
//         return 1;
//     else
//         return 0;
// }
// int main()
// {
//     int a = 0, b = 0, c = 0;
//     printf("请输入三角形的三条边:\n");
//     scanf("%d%d%d", &a, &b, &c);
//     int ret = IsTran(a, b, c);//三角形两边之和大于第三边，两边之差小于第三边
//     if (1 == ret)
//     {
//         printf("输入的三条边能够构成三角形\n");
//     }
//     else
//     {
//         printf("输入的三条边无法构成三角形\n");
//     }
// return 0;
// }

//判断一个函数是否为素数
// #include <stdio.h>
// #include <math.h>
// int Is_SuNum(int n)
// {
//     int i = 0;
//     for (i = 2; i < sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//         else
//         {
//             return 1;
//         }
//     }
// }
// int main()
// {
//     int n = 0;
//     printf("请输入要判断的整数:\n");
//     scanf("%d", &n);
//     int ret = Is_SuNum(n);
//     if (1 == ret)
//     {
//         printf("是素数\n");
//     }
//     else
//     {
//         printf("不是素数\n");
//     }
//     return 0;
// }

//组合公式
#include <stdio.h>
int func(int n, int k)
{
    int sum1 = 1, sum2 = 1, sum3 = 1, i = 0;
    for (i = 1; i <= n; i++)
        sum1 *= i;
    for (i = 1; i <= k; i++)
        sum2 *= i;
    for (i = 1; i <= n - k; i++)
        sum3 *= i;
        return sum1/(sum2*sum3);
}
int main()
{
    int n = 0, k = 0;
    printf("请输入n与k:\n");
    scanf("%d%d", &n, &k);
    int ret = func(n, k);
    printf("计算出来的值为:%d", ret);
    return 0;
}