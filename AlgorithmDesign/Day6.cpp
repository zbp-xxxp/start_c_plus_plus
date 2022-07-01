/*在双向链表中，将p所指结点与其前驱结点交换。
https://mp.weixin.qq.com/s/vB_I9rCdC4RQac10LCS_dQ
*/

#include<iostream>
using namespace std;

//双向链表节点
typedef struct DNode{ //定义双链表结点类型
    int data; //数据域
    struct DNode *prior, *next; //前驱和后继指针
}DNode, *DLinklist;

//建立双链表
DLinklist InsertData(DLinklist &DL){
    DNode *s; int x;
    DL = (DLinklist)malloc(sizeof(DNode)); //创建头节点
    DL->next = NULL;
    for(int i=0; i<10; i++){
        s = (DNode*)malloc(sizeof(DNode)); //创建新节点
        s->data = i;
        s->next = DL->next;
        DL->next = s;
        s->prior = DL;
    }
    return DL;
}

//交换双链表中的两个节点
DLinklist Exchange(DLinklist &DL, int num){ //将值为num的结点与其前驱结点交换
    DNode *p = DL->next;
    DNode *q; //暂存带交换的节点
    int count = 0;
    while(p->next){
        if (p->next->data == num){
            // cout << p->data << endl;
            // p为q的前驱结点
            q = p->next;
            // cout << q->data << endl;
            /*
            p->prior->next = q; //节点p的前驱的后继指向q
            q->prior = p->prior; //节点q的前驱指向其前驱(节点p)的前驱
            p->next = q->next; //节点p的后继指向节点q的后继
            p->prior = q; //节点p的前驱指向节点q
            q->next->prior = p; //节点q的后继(节点p)的前驱指向p
            q->next = p;// 节点q的后继指向节点p
            */

            //step1：q的前驱指向p的前驱
            q->prior = p->prior;
            //step2：q的后继节点的前驱指向p
            q->next->prior = p;
            //step3：p的前驱指向q
            p->prior = q;
            //step4：p的后继指向q的后继
            p->next = q->next;
            //step5：p的前驱节点的后继指向q
            p->prior->next = q;
            //step6：q的后继指向p
            q->next = p;

            p = p->next;
        }
        else{
            p = p->next;
        }
    }
    return DL;
    
}

//遍历双链表
DLinklist OutputDList(DLinklist &DL){
    DNode *p = DL->next;
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
    return 0;
}

int main(){
    DLinklist dlist;
    InsertData(dlist);
    OutputDList(dlist);
    Exchange(dlist, 6);
    OutputDList(dlist);
    return 0;
}
