#include <stdio.h>
#include <string.h>
void fun(char a[],int n){
int i;
char t;
for(i=0;i<n/2;i++){
    t=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=t;
}
    
}
void main(){
    char *p="i am student";
    fun(p,strlen(p));
    printf("%s",p);

}