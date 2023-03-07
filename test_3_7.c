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
// #include <stdio.h>
// int func(int n, int k)
// {
//     int sum1 = 1, sum2 = 1, sum3 = 1, i = 0;
//     for (i = 1; i <= n; i++)//计算出n的阶乘
//         sum1 *= i;
//     for (i = 1; i <= k; i++)//计算出k的阶乘
//         sum2 *= i;
//     for (i = 1; i <= n - k; i++)//计算出n-k的阶乘
//         sum3 *= i;
//         return sum1/(sum2*sum3);//将n阶乘减去k阶乘与n-k阶乘之积返回
// }
// int main()
// {
//     int n = 0, k = 0;
//     printf("请输入n与k:\n");
//     scanf("%d%d", &n, &k);
//     int ret = func(n, k);
//     printf("计算出来的值为:%d", ret);
//     return 0;
// }

//如果某字符是否是空白字符、空格、回车或者tab键时，返回真
// #include <stdio.h>
// int isspace(int c)
// {
//     if (c == ' ' || c == '\n' || c == '\t')
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     char c = '0';
//     printf("请输入一个字符:\n");
//     scanf("%c", &c);
//     int ret = isspace(c);
//     if (1 == ret)
//     {
//         printf("输入的字符时空格、回车或者tab\n");
//     }
//     else
//     {

//             printf("输入的字符是其他字符\n");
//     }
//     return 0;
// }

//对给定的字符串进行升序排列
// #include <stdio.h>
// #include <string.h>
// void uplist(char a[4][10],char b[4][10]){
//     int i =0;int j =0;
//     for(i=0;i<3;i++){
//         int k=i;
//         for(j=i+1;j<4;j++){
//             if(strcmp(a[k][10],a[j][10])>0){
//                 b[1][10]=a[j][10];
//                 a[j][10]=a[k][10];
//                 a[k][10]=b[1][10];
//                 k=j;
//             }
//         }
//     }
// }
// int main()
// {
//     int i = 0;
//     char a[] = "Pascal";
//     char b[]="Fortran";
//     // char b[4][10] = {"0"};
//     // uplist(a,b);
//     if(strcmp(a,b)>0){
//         printf("%s   %s",b,a);
//     }else{
//         printf("%s    %s",a,b);
//     }
//     // for (i = 0; i < 4; i++)
//     // {
//     //     printf("%s", a[i][10]);
//     // }
//     return 0;
// }




