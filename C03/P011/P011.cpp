// P011.cpp
#include <iostream>

template <typename T>
concept Integral = std::is_integral_v<T>;

Integral auto gcd(Integral auto a, Integral auto b)
{
  if(b == 0) return a;
  return gcd(b, a % b);
}

int main()
{
  std::cout << "Hello World!\n";
}
