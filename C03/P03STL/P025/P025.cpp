// P025.cpp : std::span as function argument
import std;

void copy_n(const int* src, int* des, int n) {}
void copy(std::span<const int> src, std::span<int> des) {}

int main()
{
  int arr1 [] = { 1, 2, 3 };
  int arr2 [] = { 3, 4, 5 };

  copy_n(arr1, arr2, 3);
  copy(arr1, arr2);
}
