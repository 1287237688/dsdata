#include<stdio.h>
#include <stdlib.h> //定义杂项函数及内存分配函数
#include<iostream>
using namespace std;
typedef int elemtype;//将int起别名为 elemtype
typedef struct
{
    elemtype *elem;            //存储空间基址
    int length;                //当前长度
    int listsize;            //当前分配的存储容量
} sqlist;

int compare(elemtype e1, elemtype e2)
{if (e1==e2)
    return 1;
else
    return 0;
}
//查找操作
void locateelem_sq(sqlist l,elemtype e,int (*compare)(elemtype, elemtype))
{
    //在顺序线性表l中查找第一个与元素e满足compare()元素的位置（即返回第一个与e值相等的元素位置）。
    //若存在，返回其在l中的次序。若不存在则返回0
    int i,*p;
    i=1;
    p=l.elem;//p为第一个元素的存储位置
    while(i<=l.length&&!(*compare)(*p++,e))    //比较函数不相等返回1，前面去反，不相等为0
        i++;
    if(i<=l.length)
        cout<<"一个与 "<<e<<" 相同的值，在线性表的第 "<<i<<" 位";
    else cout<<"不存在相同的值";
}
int main()
{
    sqlist l;
    elemtype b[]={1,4,5,6,10};
    l.elem=b;
    l.length=sizeof(b)/sizeof(elemtype);
    l.listsize=sizeof(elemtype)*l.listsize;
    locateelem_sq(l,6,compare);
}
