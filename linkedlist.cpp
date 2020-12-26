#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode *next;
}*head;
class List{
    public:
    List(){
        head = NULL;
    }
    void addNode(int val){
        ListNode *newnode = new ListNode;
        newnode->val = val;
        newnode->next = NULL;
        if(!head){
            head = newnode;
            return;
        }
        ListNode *temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newnode;
        return;
    }
    void showList(){
        if(!head)cout<<"empty list";
        ListNode *temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        return;
    }
    
};

int main(){
    List ob;
    ob.addNode(1);
    ob.addNode(2);
    ob.showList();
    cout<<"\n";
    ob.addNode(3);
    ob.showList();
    cout<<endl;
    return 0;
}

