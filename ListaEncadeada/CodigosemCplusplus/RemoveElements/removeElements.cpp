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


ListNode* remove_first(ListNode* head){
    ListNode* aux = head;

    if(head != nullptr){
        head = head->next;

        delete(aux);
    }
    return head;
}



ListNode* removeElements(ListNode* head, int val) {
        
    ListNode* aux = head;
    
    if(aux->val == head->val && aux->val == val){ //se o valor ae for o msm do q a gente ta procurando dentro da lista node
            ListNode * pointer = aux;  //ai recebe o valor de aux
            head = remove_first(aux); //ae remove ele
    }
        
    while(aux->next != nullptr){
        if(aux->next->val == val){  //penultimo elemento da lista
            ListNode * pointer = aux;
            pointer = pointer->next;
            aux->next = pointer->next;
            delete(pointer);
        }else aux = aux->next;
    }
        return head;
}



int main(){
    int n, val;
    ListNode * head= nullptr;
    cin >> n >> val;
    
    
    for(int i = 0; i < n; i++){
        
        ListNode * ptr;
        int x;
        cin >> x; //>> val;
        if( i == 0){
            head = new ListNode(x);
            ptr = head;
        }else{
            ptr->next = new ListNode(x, nullptr);
            ptr = ptr->next;
        }
    }

    head = removeElements(head, val );

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}

