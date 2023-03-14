// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char a[20] = "abcdefwxy";
//     char s = 'e';
//     int i, j=0, k;
//     while (s >= a[j] && a[j] != '\0')
//         j++;
//     for (i = strlen(a); i >= j; i--)
//     {
//         a[i+1]= a[i];
//     a[j] = s;
// }
// puts(a); // abcdeeewxy
// }

// #include <stdio.h>
// void function(char *p1, char *p2)
// {
//     while (*p2++ = *p1++)
//         ;
// }
// void main()
// {
//     char a1[] = "abcde", a2[] = "1234567";
//     char *p1, *p2;
//     p1 = a1;
//     p2 = a2;
//     function(p1, p2);
//     printf("%s\n%s\n", p1, p2); // abcde 12345
// }

//停车场收费问题

// #include <stdio.h>
// #include <math.h>
// float charge(float n)
// {
//     if(n<3.0){
//         return 2.0;
//     }
//     else if(n>3.0&&n<19.0){
//         return 2.0+ceil(n-3.0);
//     }else{
//         return 10.0;
//     }
// }
// int main()
// {
//     float n = 0;
//     printf("请输入停车时间:\n");
//     scanf("%f", &n);
//     float ret = charge(n);
//     printf("停车%2.2f小时，收费%2.2f元", n, ret);
//     return 0;
// }

//汉诺塔问题
// #include <stdio.h>
// void move(char x, char y)
// {
//     printf("%c-->%c\n", x, y);
// }
// void hanoi(int m, char one, char two, char three)
// {
//     if (m == 1)
//     {
//         move(one, three);
//     }
//     else
//     {
//         hanoi(m - 1, one, three, two);
//         move(one, three);
//         hanoi(m - 1, two, one, three);
//     }
// }
// int main()
// {
//     int m = 0;
//     printf("请输入盘子数量:\n");
//     scanf("%d", &m);
//     printf("移动%d盘子的步骤:\n", m);
//     hanoi(m, 'A', 'B', 'C');
//     return 0;
// }

// #include <stdio.h>
// void sort (int a[],int sz){
//     int i =0,j=0,k,temp;
//     for(i=0;i<sz-1;i++){
//         k=i;
//         for(j=i+1;j<sz;j++){
//             if(a[k]>a[j])
//             k=j;
//         }
//         if(k!=i){
//             temp=a[i];
//             a[i]=a[k];
//             a[k]=temp;
//         }
//     }
// }
// int main(){
//     int sz = 0,i;
//     int a[]={8,6,5,4,1};
//     sz=sizeof(a)/sizeof(a[0]);
//     sort(a,sz);
//     for(i= 0;i<sz;i++)
//     printf("%d ",a[i]);
//     return 0;
// }

// #include <stdio.h>
// void statis(char str[])
// {
//     int letters = 0, numbers = 0, blank = 0, other = 0, i;
//     // char *p=str;
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if ((str[i] >= 'A' && str[i] <= 'Z' )|| (str[i] >= 'a' && str[i] <= 'z'))
//         {
//             letters++;
//         }
//         else if (str[i] == ' ')
//         {
//             blank++;
//         }
//         else if (str[i] >= '0' && str[i] <= '9')
//         {
//             numbers++;
//         }
//         else
//         {
//             other++;
//         }
//     }
//     printf("letters=%d,numbers=%d,blank=%d,other=%d\n", letters, numbers, blank, other);
// }
// int main()
// {
//     char str[20];
//     printf("请输入要统计的字符串:\n");
  
//     scanf("%s", str);
   
//     statis(str);
//     printf("%s", str);
//     return 0;
// }




#include <stdio.h>
unsigned int GetNotRepeatNum(unsigned int lValue){
     int a=0,b=0,temp;
     for(lValue+1;lValue<10000;lValue++){
         temp=lValue;
         while(temp){
             a=temp%10;
             temp/=10;
             b=temp%10;
             temp/=10;
             if(a==b){
                 return lValue;
             }
         }
     }
     
 }
int main(){
    unsigned int GetNotRepeatNum(unsigned int lValue);
    unsigned int value=0;
    printf("请输入一个正整数:\n");
    scanf("%d",&value);
    unsigned int ret=GetNotRepeatNum(value);
    printf("最小的不重复数为:%d",ret);
    return 0;
}
 