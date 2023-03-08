
//自定义一个My_strcpy实现字符串的复制
// #include <stdio.h>
// void My_strcpy(char a[30],char b[30],int sz){
//     int i = 0;
//     for(i=0;i<=sz;i++){
//         b[i]=a[i];
//     }
// }

// int main(){
//     int i = 0;
//     char a[]="This is just a program";
//     char b[30]={0};
//     int sz = sizeof(a)/sizeof(a[0]);
//     My_strcpy(a,b,sz);
//     // for(i=0;b[i]!='\0';i++){
//     //     printf("%c",b[i]);
//     // }
//     printf("%s",b);
//     return 0;
// }

//输入一个年份，判断它是否是闰年。
// #include <stdio.h>
// int IsRunyear(int n)
// {
//     if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
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
//     int n = 0;
//     printf("请从键盘中输入一个需要判断的年份:\n");
//     scanf("%d", &n);
//     int ret = IsRunyear(n);
//     if (1 == ret)
//     {
//         printf("输入的年份是闰年\n");
//     }
//     else
//     {
//         printf("不是闰年\n");
//     }
//     return 0;
// }

//输出一个数列 1 3 5 10 21 .......
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int num = 0;
//     for (i = 1; i <= 20; i++)
//     {
//         if (i % 2 == 0)
//         {
//             num *= 2;
//         }
//         if (i % 2 == 1)
//         {
//             num = num * 2 + 1;
//         }
//         printf("%d  ", num);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int  a=2,b=3;
//     printf("%lf",pow(a,b));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a =-1,b=2;
//     printf("%lf",fabs(a-b));
//     return 0;

// }

// #include<stdio.h>
// int judge(int m)
// {	int i,num=1;
// 	if(m==1)
// 	    return 0;
// 	else
// 	{	for(i=2;i<=m/2;i++)
// 		{	if(m%i==0)
// 			num=num+i;
// 		}
// 		if(num==m)
// 		{	printf("%d\n",m);
// 		    return 1;
// 		}
// 		else
// 		    return 0;
// 	}
// }
// int main()
// {	int k,count=0;
// 	for(k=1;k<=20;k++)
// 	{	if(judge(k))
// 		count++;
// 	}
// 	printf("From 1 to 20,there are %d numbers.",count);//1
// 	return 0;
// }

//小猴子吃桃子问题
// #include <stdio.h>
// #include <math.h>
// float CatchPeach(float a,float b){
//     if(a<b){
//         return 1;
//     }
//     return 1.0+CatchPeach(a/2,b);
// }
// int main(){
//     float ret = 0.0;
//     float a =1.0;
//     float b=a/pow(2,9);
//     printf("%f",b);
//     ret=CatchPeach(a,b);
//     printf("小猴子第一天共摘了%f个桃子",ret);
//     return 0;
// }

// n个字符串，并且降序排列
//  #include <stdio.h>
//  #include <string.h>
//  void DownList(char *a[10], int n)
//  {
//      int i = 0, j = 0, k;
//      char *temp;
//      for (i = 0; i < n - 1; i++)
//      {
//          k = i;
//          for (j = i + 1; j < n; j++)
//          {
//              if (strcmp(a[k], a[j]) < 0)
//                  k = j;
//          }
//          if (k != i)
//          {
//              temp = a[i];
//              a[i] = a[k];
//              a[k] = temp;
//          }
//      }
//  }
//  void print(char *a[10], int n)
//  {
//      int i = 0;
//      for (i = 0; i < n; i++)
//      {
//          printf("%s  ", a[i]);
//      }
//  }
//  int main()
//  {
//      char *a[] = {"mouse", "bull", "tiger", "rabbit"};
//      int n = 4;
//      DownList(a, n);
//      print(a, n);
//  }

//链表分解
// #include <stdio.h>
// #include <stdlib.h>
// #define LEN sizeof(struct node)
// struct node
// {
//     int data;
//     struct node *next;
// };
// int n;
// struct node *creat(void)
// {
//     struct node *head1;
//     struct node *p1, *p2;
//     n = 0;
//     p1 = p2 = (struct node *)malloc(LEN);
//     printf("请输入数字:\n");
//     scanf("%d", &p1->data);
//     head1 = NULL;
//     while (p1->data != 0)
//     {
//         n = n + 1;
//         if (1 == n)
//             head1 = p1;
//         else
//             p2->next = p1;
//         p2 = p1;
//         p1 = (struct node *)malloc(LEN);
//         printf("请输入数字:\n");
//         scanf("%d", &p1->data);
//     }
//     p2->next = NULL;
//     struct node *head2;
//     struct node *p3;
//     p1 =p2= head1;
//     p2 = p2->next->next;
//     head2 = p3 = p1->next;
//     int i = 0;
//     for (i = 2; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             p1->next = p2;
//             p1 = p2;
//             p2 = p2->next->next;
//         }
//         else
//         {
//             p3 = p1->next;
//             p3 = p1->next;
//         }
//     }
// }
// int main()
// {
//     struct node *pt;
//     pt = creat();
//     return 0;
// }

#include <stdio.h>
#include<malloc.h>
// using namespace std;
typedef struct node{
	int data;
	struct node *next;
}LNode; 
LNode *L;
LNode* create(LNode *L, int arr[], int n){
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	LNode *p = L;
	for(int i = 0; i < n; ++i){
		LNode *newNode = (LNode*)malloc(sizeof(LNode));
		newNode->next = NULL;
		newNode->data = arr[i];
		//头插法
		p->next = newNode;
		p = p->next; 
	}
	return L;
}
 
//分离的方法 
void spilt(LNode *L, LNode *B){
	LNode *p = L;
	B = (LNode*)malloc(sizeof(LNode));
	B->next = NULL;
	LNode *q = B;
	LNode *r;
	while(p->next != NULL){
		if(p->next->data % 2 == 0){
			//下面处理的是取下链表中的偶数节点插入到链表中 
			//偶数的时候取出来插入到链表B中 
			r = p->next;
			p->next = p->next->next;
			//q指针向下移动
			q->next = r;
			r->next = NULL;
			q = q->next;
			
		}else{
			p = p->next;		
		}	
	}
	//输出链表A的内容 
	LNode *s = L;
	while(s->next != NULL){
		printf("%d ", s->next->data);
		s = s->next; 
	} 	
    printf("\n");
	
	// cout << endl;
	//输出链表B的内容 
	s = B;
	while(s->next != NULL){
		printf("%d ", s->next->data);
		s = s->next; 
	} 	
}
 
int main(void){
	int arr[12] = {12, 43, 2, 10, 100, 89, 11, 56, 45, 34, 77, 11};
	LNode *head = create(L, arr, 12);
	LNode *B; 
	spilt(head, B);
	return 0;
}
