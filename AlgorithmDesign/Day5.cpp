/*在链表中删除指定值https://mp.weixin.qq.com/s/zkGRfaCXFi9Ket77cXKQzw
题目：设计一个算法，删除递增有序链表中值大于mink且小于maxk的所有元素（mink和maxk是给定的两个参数，其值可以和表中的元素相同，也可以不同）
*/

#include<iostream>
using namespace std;

//单链表节点
typedef struct  LNode{
	int data;
	struct LNode* next;
}LNode, *LinkList;

//建立单链表
LinkList HeadInsert(LinkList &L){
    LNode *s; int x;
    L = (LinkList)malloc(sizeof(LNode)); //创建头节点
    L->next = NULL;
    for(int i=0; i<10; i++){
        s = (LNode*)malloc(sizeof(LNode)); //创建新节点
        s->data = i;
        s->next = L->next;
        L->next = s;
    }
    return L;
}

LinkList DeleteNode(LinkList &L, int mink, int maxk){
    LNode *p = L->next;
    LNode *q; // 存放待删除的节点
    while(p->next){
        if(p->next->data <= maxk && p->next->data >= mink){
            q = p->next;
            p->next = q->next;
            free(q);
        }
        else{
            p = p->next;
        } 
    }
    return L;
}

LinkList OutputList(LinkList &L){
    LNode *p = L->next;
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
    return 0;
}

int main(){
    LinkList list;
    HeadInsert(list);
    OutputList(list);
    DeleteNode(list, 4, 6);
    OutputList(list);
	return 0;
}
