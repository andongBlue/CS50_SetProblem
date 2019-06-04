#include<stdio.h>
#include<cs50.h>
/**考察C语言函数
 * 掌握将一个特殊的重复步骤用函数来实现
 *      比如我们如果不调用cs50的输入语句，那么我们的为了让逻辑清晰，也应该写一个函数来支持输入
 * 考虑while语句需要注意死循环的bug
 * for循环的起始于终点
 * */


//遇到whlie考虑死循环的问题
void repeat(char c,int times)
{
    while(times>0)
    {
        printf("%c",c);
        times-=1;
    }

}


int main()
{
    int height;
    int weith;
    do
    {
        height=get_int("Height:");
        weith = height+1;
    }
    while(height<0||height>23);
    for(int i=1;i<=height;i++)
    {
        weith-=1;
        repeat(' ',weith);
        repeat('#',i+1);
        printf("\n");
    }

}