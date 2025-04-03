#include<bits/stdc++.h>

using namespace std;

struct Node
{
    public:
        int data;
        Node *next;
    public:
        Node(int data1, Node *next1){
            data=data1;
            next=next1;
        }
};


class LinkedList {
    public:
        struct Node *insertAtEnd(struct Node *head, int data){
            struct Node *newNode = new Node(data,NULL);

            if(head==NULL){
                return newNode;
            }else{
                struct Node *temp = head;

                for(temp=head; temp->next!=NULL; temp=temp->next){
                }
                
                temp->next = newNode;
                return head;
            }
        }
};

int main(){
    vector<int> question{1, 2, 3, 4, 5};
    LinkedList l;
    int size = question.size(), i=0;
    struct Node *head = NULL;

    for(i=0; i<size; i++){
        head = l.insertAtEnd(head,question[i]);
    }

    struct Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        if(temp->next != NULL){
            cout<<" -> ";
        }
        temp=temp->next;
    }
    cout<<endl;

    return 0;
}