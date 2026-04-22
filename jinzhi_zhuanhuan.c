#include <stdio.h>

int main()
{
    int n;           //存放十进制数
    int bnary[16] = {0};//定义一个数组存放二进制，16位二进制数
    int i = 0;         

    printf("输入十进制数：");
    if(scanf("%d",&n) != 1) return 1;

    //处理0
    if(n == 0)
    {
        printf("0");
        return 0;
    }

    //除2取余
    
    while(n > 0 && i < 16)
    {
        bnary[i] = n % 2; //%2取余,/2取整
        n /= 2;
        i++;
    }

    printf("二进制为：");
    //逆序输出二进制数
    for(i = i - 1; i >= 0; i--)
    {
        printf("%d",bnary[i]);
    }   
    printf("\n");

    return 0;   
}

//为什么有int bnary[16] = {0}
//这是为了预设一个长度为16的整数数组来存储二进制数的每一位。初始化为0是为了确保在转换过程中，如果某些位没有被赋值（例如输入的十进制数小于16），这些位默认是0。这种方式可以避免未初始化的数组元素导致的错误输出。
//需要注意的是，一开始除的2应该放在答案的最右边，只有多除几次，才证明这是大数位


/*
#include <stodio.h>

int main()
{
    int n;
    int bnary[16] = {0};
    int i = 0;

    printf("输入十进制数：");
    if(scanf("%d",&n) != 1) return 1; 

    //处理0 
    if(n == 0)
    {
        printf("0");
        return 0;
    }       

    //除2取余
    while(n > 0 && i < 16)
    {
        bnary[i] = n % 2; //%2取余,/2取整
        n /= 2;
        i++;
    }

    printf("二进制为：");   
    //逆序输出二进制数
    for(i = i - 1; i >= 0; i--)
    {
        printf("%d",bnary[i]);
    }   
    printf("\n");
    return 0;       

}













*/