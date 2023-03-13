// #include <stdio.h>
// void main()
// {   int a[3][3]={{2},{4},{6}};
// int j,*p=&a[0][0];
// printf("%d",*(p+6));// 6
// }

#include <stdio.h>

struct student
{
    char name[10];
    int  score;
} s[4] = {{"wang", 90}, {"li", 99}, {"zhang", 100}, {"yu", 98}};
void function(struct student s[4]);
void main()
{
    int i;
    function(s);
    for (i = 0; i < 4; i++)
        printf("%s  %d\n", s->name, s[i].score); //从小到大排列输出
}
void function(struct student s[4])
{
    int i, j, k;
    struct student temp;
    for (i = 0; i < 3; i++)
    {
        k = i;
        for (j = i + 1; j < 4; j++)
        {
            if (s[j].score < s[k].score)
                k = j;
        }
        if (k != i)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
}