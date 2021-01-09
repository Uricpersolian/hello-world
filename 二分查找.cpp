#include <stdio.h>
int binsearch(int x,int v[],int n) //自定义函数binsearch()
{
    int low,high,mid,MID,count1=0;
    low=0;
    high=n-1;
    while(low<high)    //査找范围不为0时执行循环体语句
    {
        mid=(low+high)/2;    //求中间位置
        if(x<v[mid])    //x小于中间值时
            high=mid-1;    //确定左子表范围
        else if(x>v[mid])    //x 大于中间值时
            low=mid+1;    //确定右子表范围
        else if(x==v[mid])    //当x等于中间值时，证明查找成功
        {   MID=mid+1;
            printf("v[%d]=%d",MID,x);    //输出所査找元素在数组中的位置
            count1++;    //count1记录查找成功次数
            break;
        }
    }
    if(count1==0)    //判断是否查找失败 
        printf("-1");    //査找失败输出-1
    return 0;
}
int main()
{
    int i,x,v[100],n;
    printf("请输入数组的长度：\n");
    scanf("%d",&n);    //输入数组元素个数
    printf("请输入数组元素：\n");
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);    //输入有序数列到数组v中
    printf("请输入你想查找的元素：\n");
    scanf("%d",&x);    //输入要找的关键字
    binsearch(x,v,n);    //调用自定义函数
    printf("\n");
    return 0;
}
