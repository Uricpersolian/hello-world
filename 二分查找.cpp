#include <stdio.h>
int binsearch(int x,int v[],int n) //�Զ��庯��binsearch()
{
    int low,high,mid,MID,count1=0;
    low=0;
    high=n-1;
    while(low<high)    //���ҷ�Χ��Ϊ0ʱִ��ѭ�������
    {
        mid=(low+high)/2;    //���м�λ��
        if(x<v[mid])    //xС���м�ֵʱ
            high=mid-1;    //ȷ�����ӱ�Χ
        else if(x>v[mid])    //x �����м�ֵʱ
            low=mid+1;    //ȷ�����ӱ�Χ
        else if(x==v[mid])    //��x�����м�ֵʱ��֤�����ҳɹ�
        {   MID=mid+1;
            printf("v[%d]=%d",MID,x);    //���������Ԫ���������е�λ��
            count1++;    //count1��¼���ҳɹ�����
            break;
        }
    }
    if(count1==0)    //�ж��Ƿ����ʧ�� 
        printf("-1");    //����ʧ�����-1
    return 0;
}
int main()
{
    int i,x,v[100],n;
    printf("����������ĳ��ȣ�\n");
    scanf("%d",&n);    //��������Ԫ�ظ���
    printf("����������Ԫ�أ�\n");
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);    //�����������е�����v��
    printf("������������ҵ�Ԫ�أ�\n");
    scanf("%d",&x);    //����Ҫ�ҵĹؼ���
    binsearch(x,v,n);    //�����Զ��庯��
    printf("\n");
    return 0;
}
