// #include<stdio.h>
// int func(int a,int b)
// {   static int m,i=2; //static修饰的局部变量以及所有的全局变量初值都自动赋值0
//  i+=m+1;
//  m=i+a+b;
//  return(m);
// }
// void main()
// {   int k=4,m=1,p;
//  p=func(k,m);
//  printf("%d\n",p);//8
//  p=func(k,m);
//  printf("%d\n",p);//17
// }

// #include <stdio.h>
// float *search(float (*p)[4],int n);
// void main()
// {   float s[][4]={{60,70,80,90},{89,83,67,50},
//                {43,78,97,66},{65,74,92,87}};
//     float *p;
//     int i,j;
//     for(i=0;i<4;i++)
//     {   p=search(s+i,4);
//      if(p==*(s+i))
//         {   printf("No. %d scores:\n",i);
//             for(j=0;j<4;j++)
//                 printf("%5.2f ",*(p+j));//输出组里有成绩不合格的组
// //输入结果为89.00 83.00 67.00 50.00
// //           43.00 78.00 97.00 66.00 
//             printf("\n");
//         }
//     }
// }
// float *search(float (*p)[4],int n)
// {   float *pt=*(p+1);
//     int i;
//     for(i=0;i<n;i++)
// 	    if(*(*p+i)<60)
//             pt=*p;
//     return(pt);
// }


// #include <stdio.h>
// #include <string.h>
// #define N 60
// void main()
// {   int i,len,m=0;
//     char a[N];
//     float p;
//     printf("Input a string: ");
//     scanf("%s",a);   /*输入abcdstring↙*/
//     len=strlen(a);
//     for(i=0;a[i]!='\0'&&i<N-1;i++)
//         if(a[i]==a[i+1]+1||a[i]+1==a[i+1])
//             m++; 
//     p=(float)m/len*100; 
//     printf("len=%d,m=%d,p=%6.2f%%\n",len,m,p);//len= 10,m=4,p=40.00%
// }


// #include <stdio.h>
// #include <string.h>
// void fun(char *w,int n);
// void main()
// {   char *p="1234567";
//     fun(p,strlen(p));
//     puts(p);//7654321
//     }
// void fun(char *w,int n)
// {   char t,*s1,*s2;
//     s1=w; 
//     s2=w+n-1;//
//     while(s1<s2)
//     {   t=*s1++;
//         *s1=*s2--;
//         *s2=t;
//     }
// }

#include <stdio.h>
#include <math.h>
void fun(int n);
void main()
{   int n ; 
    scanf("%d",&n);       /* 输入一个至少3位的负数*/
    printf("%d=",n);
    if (n<0)
        printf("-");
    n = fabs(n);
    fun(n);
}
void fun(int n)
{   int k,r ;
    for (k=2; k<=sqrt(n); k++)
    {   r = n % k ;
        while(!r)
        {   printf("%d",k); 
            n=n/k;
            if(n>1)
                printf("*");
            r = n % k ;
        }
    }//如果输入-131，则输出-131=-131；如果输入-120，则输出-120=-2*2*2*3*5
    if(n!=1)
        printf("%d\n",n); 
}