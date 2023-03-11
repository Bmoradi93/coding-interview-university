#include <iostream>
#include <stack>

int main() {
  std::stack<int> my_stack;

  my_stack.push(10);
  my_stack.push(20);
  my_stack.push(30);

  std::cout << "The top element of the stack is: " << my_stack.top() << std::endl;

  my_stack.pop();

  std::cout << "The top element of the stack is now: " << my_stack.top() << std::endl;

  std::cout << "The size of the stack is: " << my_stack.size() << std::endl;

  return 0;
}