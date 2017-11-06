

// Stos
//Tomasz Skrzypiec

#include <iostream>
using namespace std;

struct Stack
{
    Stack(int size)
    {
        items = new int[size]();
        maxsize = size; //maksymalna wilkość tablicy
        top = 0; //wierzchołek stosu
    }
    
    ~Stack()
    {
        delete[] items;
    }
    
    int push(int x) //wrzucam liczbę na stos
    {
        int result = 0;
        if (top == maxsize)
        {
            cout << "overflow error" << endl; //stos przeładowany
            result = 1;
        }
        else
        {
            items[top] = x;
            top = top + 1;
        }
        return result;
    }
    
    int pop() //zdejmuję liczbę ze stosu
    {
        int result = 0;
        if (top == 0)
        {
            cout << "underflow error" << endl; //za dużo chcesz zabrać ze stosu
            result = 1;
            
        }
        else
        {
            top = top - 1;
            cout << "popped: " << items[top] << endl;
            items[top] = 0; // czyścimy tablice
        }
        return result;
    }
    
    int maxsize;
    int top; // zapamiętuje liczbę przedmiotów wrzuconych na stos do tej pory
    int *items;
};

void printStackItems(Stack *stk)
{
    for (int i = 0; i < stk->maxsize; ++i)
    {
        cout << stk->items[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int myStackSize = 3;
    Stack mystack(myStackSize);
    cout << "Testing myStack:" << endl;
    cout << "- size " << mystack.maxsize << endl;
    cout << "- push 1, 2, 3" << endl;
    printStackItems(&mystack);
    mystack.push(1);
    printStackItems(&mystack);
    mystack.push(2);
    printStackItems(&mystack);
    mystack.push(3);
    printStackItems(&mystack);
    cout << "- pop 2 times:" << endl;
    printStackItems(&mystack);
    mystack.pop();
    printStackItems(&mystack);
    mystack.pop();
    printStackItems(&mystack);
    cout << "- make overflow, push 4, 5, 6" << endl;
    printStackItems(&mystack);
    mystack.push(4);
    printStackItems(&mystack);
    mystack.push(5);
    printStackItems(&mystack);
    mystack.push(6);
    printStackItems(&mystack);
    cout << "- make underflow, pop 4 times:" << endl;
    printStackItems(&mystack);
    mystack.pop();
    printStackItems(&mystack);
    mystack.pop();
    printStackItems(&mystack);
    mystack.pop();
    printStackItems(&mystack);
    mystack.pop();
    printStackItems(&mystack);
    return 0;
}
