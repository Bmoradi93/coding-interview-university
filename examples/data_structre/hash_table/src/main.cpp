#include <iostream>
#include <unordered_map>
#include <hash>

class Person {
public:
  std::string name;
  int age;
};

struct PersonHash {
  std::size_t operator()(const Person& p) const {
    return std::hash<std::string>()(p.name) ^ std::hash<int>()(p.age);
  }
};

int main() {
  std::unordered_map<Person, int, PersonHash> my_map = {{{"Alice", 25}, 100}, {{"Bob", 30}, 200}};

  std::cout << "The value of the age of the person named 'Bob' is: " << my_map[{"Bob", 30}] << std::endl;

  return 0;
}
