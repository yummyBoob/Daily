// 100-999内的水仙花数
//  #include <stdio.h>
//  int main()
//  {
//      int i = 0;
//      int sum = 0;
//      int n = 0;
//      int c = 0;
//      int j = 0;
//      int count =0;
//      for (i = 100; i < 1000; i++)
//      {
//          sum = 0;
//          n = i;
//          for (j = 0; j < 3; j++)
//          {
//              c= 0;
//              c = n % 10;
//              n = n / 10;
//              sum+=c*c*c;
//          }
//          if(sum==i){
//              count++;
//              printf("%d ",sum);
//          }
//      }
//      printf("\n");
//      printf("100-999内共有%d个水仙花数",count);
//      return 0;
//  }

//大赛统分问题
// #include <stdio.h>
// void sort1(int (*p)[5], int m)
// {
//     int i = 0, j = 0, temp = 0;
//     for (i = 0; i < m - 1; i++)
//     {
//         for (j = i; j < m; j++)
//         {
//             if ((*p)[i] < (*p)[j])
//             {
//                 temp = (*p)[i];
//                (*p)[i] = (*p)[j];
//                 (*p)[j] = temp;
//             }
//         }
//     }
// }
// void aver(int a[6][5], int b[6], int n, int m)
// {
//     int i = 0,j=0,sum=0;
//     for(i = 0;i<n;i++){
//         sum =0;
//         for(j =1;j<m-1;j++){
//            sum+= *(*(a+i)+j);
//         }
//         b[i]=sum/(m-2);
//     }
// }
// void sort2(int b[6],int n){
//     int i =0,j=0,temp=0;
//     for(i = 0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(b[i]<b[j]){
//                 temp=b[i];
//                 b[i]=b[j];
//                 b[j]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int n = 6, m = 5, i = 0;
//     int b[6] = {0};
//     int a[6][5] = {{1, 2, 3, 4, 5}, {4, 5, 5, 7,6}, {3, 3, 6, 6, 8}, {9, 2, 1, 7, 8}, {2, 4, 7, 3, 5}, {5, 4, 6, 9, 7}};
//     for (i = 0; i < n; i++)
//         sort1(a+i, m);
//     aver(a, b, n, m);
//       for (i = 0; i < 6; i++)
//     {
//         printf("%d ", b[i]);
//     }
//     sort2(b, n);
//     printf("成绩从高到底依次为:\n");
//     for (i = 0; i < 6; i++)
//     {
//         printf("%d ", b[i]);
//     }
//     return 0;
// }

//求三名的成绩

#include <stdio.h>
struct Aelete
{
    int num;
    double score;
};
void sort(struct Aelete ale[], int n)
{
    int i = 0, j = 0, temp = 0,k=0;;
    for (i = 0; i < n - 1; i++)
    {
        k=i;
        for (j = i + 1; j < n; j++)
        {
            if (ale[k].score < ale[j].score)
            // {
            //     temp = ale[i].score;
            //     ale[i].score = ale[j].score;
            //     ale[j].score = temp;
            //     temp = ale[i].num;
            //     ale[i].num = ale[j].num;
            //     ale[j].num = temp;
            // }
            k=j;
            
        }
        if(k!=i){
                temp = ale[i].score;
                ale[i].score = ale[k].score;
                ale[k].score = temp;
                temp = ale[i].num;
                ale[i].num = ale[k].num;
                ale[k].num = temp;
            }
    }
}
int main()
{
   
    int n = 15, m = 3;
    struct Aelete ale[15] = {
        {207, 14.5},
        {231, 14.7},
        {153, 15.1},
        {278, 15.5},
        {88, 15.3},
        {321, 14.5},
        {207, 14.8},
        {166, 14.2},
        {302, 14.5},
        {96, 15.7},
        {339, 14.9},
        {77, 15.1},
        {276, 13.9},
        {296, 14.3},
        {122, 13.7},
    };
  
    sort(ale, n);
    printf("前三名的成绩分别为:\n");
    for (int i = 0; i < m; i++)
    {
        printf("运动员号码:%d,成绩:%lf\n", ale[i].num, ale[i].score);
    }
}