#include <iostream>
#include <vector>
using namespace std;
class Stack
{
    private:
        vector<int> data;
    public:
        bool isEmpty(){return data.empty();}
        int size(){return data.size();}
        void push(int value){data.push_back(value);}
        int peek(){return data.back();}
        int pop(){
            int value_to_return = peek();
            data.pop_back();
            return value_to_return;
        };
    
};

int main(){
    Stack stack;
    stack.push(10);
    for(int i = 0; i < 100; i++){
        stack.push(i);
    }
    cout << "Size of a stack - " << stack.size() << endl;
    cout << "Peeking in stack = " << stack.peek() << endl;

    int size_of_stack = stack.size();
    for(int i = 0; i < size_of_stack; i++){
        cout << "Value from stack = " << stack.pop() << endl;
    }
}