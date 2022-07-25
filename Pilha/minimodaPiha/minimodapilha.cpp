#include <iostream>
#include <stack>
using namespace std;

template <class T>
class StackMin{
    private:
        stack <T> data;
        stack <T> min;
    public:

        void push(T x) // adiciona
        {
            data.push(x);
            if(min.empty() == true){
              min.push(x);
            }
            else if(min.empty() != true){
              if(x < min.top()){
                  min.push(x);
              }
              else{
                min.push(min.top());
              }

            }
        }

        bool empty() // diz se ta vazio
        {
            return data.empty();
        }

        T top(){
            return data.top();
        }

        void pop() //remove o elemento do topo
        {
            data.pop();
            min.pop();
        }

        T getmin() // diz o menor elemento
        {
            return min.top();

        }

};


int main()
{
    int n;
    StackMin <int> s;

    cin >> n;

    for(int i = 0; i < n; i++){
        int op, x;
        cin >> op;
        
        if(op==1){
            cin >> x;
            s.push(x);
        }else if(op==2){
            s.pop();
        }else{
            cout << s.getmin() << endl;
        }

    }
}