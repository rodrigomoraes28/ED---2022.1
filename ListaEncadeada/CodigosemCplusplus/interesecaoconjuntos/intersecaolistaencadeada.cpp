#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class ListNode {
    public:

    int val;
    ListNode *next;
    
    ListNode() : val(0), next(nullptr) {
        
    }
    ListNode(int x) : val(x), next(nullptr) {
        
    }
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


ListNode * intersectionList(ListNode * head1, ListNode * head2){
    
    ListNode* aux1 = head1;
    ListNode* aux2 = head2;
    ListNode* head;
    ListNode* A;
    bool first = true;
    bool jump = false;
    while(aux1 != nullptr){
        while(aux2 != nullptr ){
            if(aux1->val == aux2->val){
                //verificar se ja não existe
                ListNode* L = head;
                while(L != nullptr){
                    if(L->val == aux2->val){
                        jump = true;
                        break;
                    }
                    L = L->next;
                }
                if(jump){
                    jump = false;
                    break;
                }

                ListNode* novo = new ListNode(aux1->val);
                if(first){
                    head = novo;
                    A = head;
                    first = false;
                }else{
                    A->next = novo;
                    A = A->next;

                }
            }
            aux2 = aux2->next;
        }
        aux2 = head2;
        aux1 = aux1->next;
    }
    return head;
}

void printList(ListNode * head){
    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
}



int main(){
    
    ListNode * head1 = readList();
    ListNode * head2 = readList();
     
    ListNode * res = intersectionList(head1, head2);


    printList(res);

    return 0;    
}