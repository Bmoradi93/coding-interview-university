#include <iostream>
#include <queue>

int main() {
  std::queue<int> my_queue;

  my_queue.push(10);
  my_queue.push(20);
  my_queue.push(30);

  std::cout << "The front element of the queue is: " << my_queue.front() << std::endl;

  my_queue.pop();

  std::cout << "The front element of the queue is now: " << my_queue.front() << std::endl;

  std::cout << "The size of the queue is: " << my_queue.size() << std::endl;

  return 0;
}

