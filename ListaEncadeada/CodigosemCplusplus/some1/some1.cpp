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

 
ListNode* readList(){
    int n;
    cin >> n;
    ListNode * head;
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

void print_list(ListNode * head){

    for(auto ptr = head; ptr != nullptr; ptr = ptr->next){
        cout << ptr->val << endl;
    }

}
 

ListNode* someUm(ListNode *head){
    
    
    ListNode* aux = head;
    int cont = 0;
    while(aux->next != nullptr){
            aux = aux->next;
            cont++;
    }
    
    ListNode* nodes[1000];
    ListNode* current_node = head;

    for (int i = 0; current_node != nullptr; i++) {
        nodes[i] = current_node;
        current_node = current_node->next;
    }
    
    
    for (int i = cont; i >= 0; i--) {
        if(nodes[i]->val < 9){
            nodes[i]->val += 1;
            break;
        }
        else{
            nodes[i]->val = 0;
        }
    }
    
    if(head->val == 0){
        ListNode* new_head = new ListNode(1);
        new_head->next = head;
        return new_head;
    }
    
    return head;
} 




int main(){
    
    ListNode * head = readList();
    head = someUm(head);
    print_list(head);
    return 0;    
}
