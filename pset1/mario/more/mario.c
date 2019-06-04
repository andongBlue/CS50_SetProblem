#include<stdio.h>
#include<cs50.h>
/**
 * wihle死循环的结束
 * 注意变量的定义，先定义变量，再使用变量
 * */
void repeat(char c,int times)
{
    while(times>0)
    {
        printf("%c",c);
        times-=1;
    }

}
int main(void)
{
    int height,weith;
   do
   {
       height = get_int("height:");
       weith = height+1;
    }while(height<0 || height>23);


    for(int i=0;i<height;i++)
    {
        int c_num=i+1;
        int s_num=weith-c_num;
        repeat(' ',s_num);
        repeat('#',c_num);
        repeat(' ',1);
        repeat('#',c_num);
        printf("\n");
    }
}