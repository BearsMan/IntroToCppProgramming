#include <iostream>
#include <fstream>


int main(){
  std::cout << "Hello World!\n";
  int width;
  width = 5;
  std::cout << width << "\n" ;
  width = 7;
  std::cout << width;
  if (width > 5)
    enum type {};
  [[maybe_unused]] int newInt = 0;
  [[maybe_unused]]int height(5);
  int number = {6};
  std::cout << number;
  int x;
  int y;
  std::cin >> x >> y;
  std::cout << "You entered" << x << "and" << y << "\n";
  std::cout << "Type a number: "; // Type a number and press enter
  std::cin >> x;
  std::cout << "Your number is: " << x << std::endl;
  std::cout << "Hello" << "World!\n";
  const bool isTrue = true;
  if (isTrue) {}
  std::cout << "My name is" << "Darius" << std::endl;
  return 0;
}