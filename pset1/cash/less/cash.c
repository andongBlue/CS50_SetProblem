#include<cs50.h>
#include<stdio.h>
/**
 * 返回值的函数前面是返回的数据类型
 *
 * */
int greedy(int dol)
{
    int num=0;
    while(dol%25<dol)
    {
        num+=1;
        dol=dol%25;
    }
    while(dol%10<dol)
    {
        num+=1;
        dol=dol%10;
    }
    while(dol%5<dol)
    {
        num+=1;
        dol%=5;
    }
    while(dol%1<dol)
    {
        num+=1;
        dol%=1;
    }
    return num;
}
int main(void)
{
    float n;
    int dol;
    do
    {
        n=get_float("money:");
        dol=n*100;
    }
    while(dol<0 || dol>=100);
    int c;
    c=greedy(dol);
    printf("需要的硬币数：%i\n",c);
}