#ifndef STACK_H
#define STACK_H

#include "Node_Stack.h"
#include <iostream>
#include <string>

using namespace std;


class Stack
{
    public:
        Stack();
        virtual ~Stack();

        Node_Stack *head_Stack;
        //Node_Stack *tail_Stack;

        bool is_Empty_S();//done
        void push_Stack(string,string,string,string,int);//done
        void pop_Stack();//done
        void top_Stack();//done
        void search_Word(string);
        void replace_Word(string);
        void display_Stack();

    protected:

    private:
};

#endif // STACK_H
