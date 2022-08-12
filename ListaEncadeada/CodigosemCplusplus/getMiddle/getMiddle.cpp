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
        ListNode(int x, ListNode *next) : val(x), next(next) {
            
        } 
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


    int getMiddle(ListNode *head)
    {
        
        
        ListNode* aux = head;
        int cont = 1;
        while(aux->next != nullptr){
            aux = aux->next;
            cont++;
        }
        
        aux = head; 
        if(cont % 2 == 0){
            for(int i = 1 ; i < (cont/2) + 1 ; i++){
                aux = aux->next;
            }
        }
        else{
            for(int i = 1 ; i < cont/2 ; i++){
                aux = aux->next;
            }
        }
        
        return aux->val;
        
    }    



    int main(){
        
        ListNode * head = readList();
        
        cout << getMiddle(head) << endl;

        
        return 0;    
    }

