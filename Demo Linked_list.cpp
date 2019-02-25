#include<iostream>

using namespace std;

struct Node{
    int Data;
    Node *pNext;
};

struct List{
    Node *Head;
    Node *Tail;
};

void Init(List &l)
{
    l.Head = l.Tail = NULL;
}

Node *getNode(int data)
{
    Node *p = new Node;
    if (p == NULL) return NULL;
    p->Data = data;
    p->pNext = NULL;
    return p;
}

void addTail(List &l, Node *p)
{
    if (l.Head == NULL){
        l.Head = l.Tail = p;
    }else{
        l.Tail->pNext = p;
        l.Tail = p;
    }
}

void input(List &l)
{
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    Init(l);
    for (int i =0; i<n; i++){
        int data;
        cout << "Nhap data phan tu thu " << i+1 <<" : ";
        cin >> data;
        Node *p = getNode(data);
        addTail(l, p);
    }
}

void output(List l)
{
    for (Node *p = l.Head; p != NULL; p = p->pNext){
        cout << p->Data << " ";
        cout << endl;
    }
}

int main()
{
    input(l);
    output(l);
    return 0;
}
