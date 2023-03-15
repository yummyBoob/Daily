// #include <stdio.h>
// int Squre(int i){
//     return i*i;
// }
// void main(){
//     int i =0;
//     i=Squre(i);
//     for(;i<4;i++){
//         static int i =1;
//         i+=Squre(i);
//         printf("%d,",i);
//     }
//     printf("%d\n",i);
// }

// #include <stdio.h>
// #include <math.h>
// int invert(int n)
// {
//     int s = 0;
//     if (n < 10)
//     {
//         return n;
//     }
//     if (n >= 10 && n < 100)
//     {
//             s += (n % 10) * 10;
//             n = n / 10;
//             s+=n;
//             return s;
//     }
//     if(n>=100&&n<1000){
//         s+=(n%10)*100;
//         n=n/10;
//         s+=(n%10)*10;
//         n=n/10;
//         s+=n;
//         return s;
//     }
//     if(n>=1000&&n<10000){
//         s+=(n%10)*1000;
//         n=n/10;
//         s+=(n%10)*100;
//         n=n/10;
//         s+=(n%10)*10;
//         n=n/10;
//         s+=n;
//         return s;

//     }
// }
// int prime(int i,int a){
//   int j,k,flag=0;
//   for(j=2;j<i;j++){
//       if(i%j==0){
//           flag=1;
//           return 0;
//       }
//   }
//   if(!flag){
//       for(k=2;k<a;k++){
//           if(a%k==0){
//               return 0;
//           }else{
//               return 1;
//           }
//       }
//   }
// }
// void main()
// {
//     int i, a = 0,ret;
//     for (i = 3; i < 10000; i++)
//     {
//         a = invert(i);
//         int ret=prime(i,a);
//         if(ret==1){
//             printf("%d是逆素数:\n",i);
//         }
//         // else{
//         //     printf("%d不是逆素数:",i);
//         // }
//     }
// }

// #include <stdio.h>
// void Squeeze(char s[],char c,int sz){
//     int i = 0,j=0;
//     for(i=0;i<sz;i++){
//         if(s[i]==c){
//             for(j=i;j<sz;j++){
//                 s[j]=s[j+1];
//             }
//         }
//     }
// }
// void main(){
//     char s[]={"I can take a satisfatory score!"};
//     char c='a';
//     int sz =sizeof(s)/sizeof(s[0]);
//     Squeeze(s,c,sz);
//     printf("%s",s);
// }

#include <stdio.h>
#define N 5
struct Student
{
    int num;
    char name[20];
    float s1;
    float s2;
    float s3;
    float aver;
};
void input(struct Student stu[])
{
    int i;
    printf("请输入学号，姓名，3门课成绩:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].s1, &stu[i].s2, &stu[i].s3);
        stu[i].aver = (stu[i].s1 + stu[i].s2 + stu[i].s3) / 3.0;
    }
}
void sort(struct Student stu[])
{
    int i, j, k;
    struct Student temp;
    for (i = 0; i < N - 1; i++)
    {
        k = i;
        for (j = i + 1; j < N; j++)
        {
            if (stu[k].aver < stu[j].aver)
                k = j;
        }
        temp = stu[i];
        stu[i] = stu[k];
        stu[k] = temp;
    }
}
void print(struct Student stu[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("学号：%d，姓名：%s,三门课成绩：%f %f %f,平均成绩:%f\n", 
        stu[i].num, stu[i].name, stu[i].s1, stu[i].s2, stu[i].s3, stu[i].aver);
    }
}
void main()
{
    struct Student stu[N], *p = stu;
    input(p);
    sort(p);
    print(p);
}