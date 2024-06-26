#ifndef STACK_H
#define STACK_H

#include "nodes.h"
#include <iostream>

template <class type>
class Stack {
private:
  node<type> *head;

public:
  Stack(); // constructor

  ~Stack(); // deconstructor

  Stack(const Stack &obj); // copy constructor

  Stack(Stack &&obj); // move constructor

  Stack<type> &operator=(const Stack &obj); // assignment operator 

  Stack<type> &operator=(Stack &&obj); // move assignment operator

  type &top() const;

  type pop();

  void push(type n);

  void makeNull();

  bool empty() const;

  template <class T>
  friend std::ostream &operator<<(std::ostream &stream, const Stack<T> &obj);
};

#endif
