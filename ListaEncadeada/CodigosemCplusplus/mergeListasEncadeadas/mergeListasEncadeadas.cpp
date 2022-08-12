#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class ListNode {
    public:

    int val;
    ListNode *next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
    
    ListNode* l3 = new ListNode;
    ListNode* aux = l3;
    
    
    while(l1 != nullptr && l2 != nullptr){
        
        if(l1->val < l2->val){
            aux->val = l1->val;
            l1 = l1->next;
        }
        
        else{
            aux->val = l2->val;
            l2 = l2->next;
        } 
        aux->next = new ListNode;
        aux = aux->next; 
    }
    
    while(l1 != nullptr){
        aux->val = l1->val;
        l1 = l1->next;
        if(l1 != nullptr){
            aux->next = new ListNode;
            aux = aux->next;
        }
    }
    
     while(l2 != nullptr){
        aux->val = l2->val;
        l2 = l2->next;
        if(l2 != nullptr){
            aux->next = new ListNode;
            aux = aux->next;
        }
    }
    
        return l3;
     
    
}

ListNode* readList(){
    int n;
    cin >> n;
    ListNode * head = nullptr;
    for(int i = 0; i < n; i++){
        ListNode * ptr;
        int x;
        cin >> x;
        if( i == 0){
            head = new ListNode(x);
            ptr = head;
        }else{
            ptr->next = new ListNode(x, nullptr);
            ptr = ptr->next;
        }
    }

    return head;

}


int main(){
    
    ListNode * list1 = readList();
    ListNode * list2 = readList();
    ListNode * head = mergeTwoLists(list1, list2);

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}