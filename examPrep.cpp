#include <iostream>

int main()
{
  int *pItems;
  pItems = new int[5]();
  std::cout << long(&pItems[0]) << std::endl;
  std::cout << long(&pItems[1]) << std::endl;
  std::cout << long(&pItems[2]) << std::endl;
  std::cout << long(&pItems[3]) << std::endl;
  std::cout << long(&pItems[4]) << std::endl;

  std::cout << "Actual item: " << pItems[0] << std::endl;
  //std::cout << "Actual item: " << pItems[1] << std::endl;
  //std::cout << "Actual item: " << pItems[2] << std::endl;
  //std::cout << "Actual item: " << pItems[3] << std::endl;
  //std::cout << "Actual item: " << pItems[4] << std::endl;

  pItems[0] = 12;
  std::cout << "Actual item: " << pItems[0] << std::endl;


  //std::cout << &*pItems << std::endl;
  int x = 3;
  int *ptr;
  ptr = &x;
  std::cout << *ptr << " is located at " << ptr << std::endl;
  std::cout << &x << std::endl;
  
  

  //Arrays and pointers
  int number[]={1,22,35};
  std::cout << *number << std::endl;
  std::cout << *(number + 1) << std::endl;
  std::cout << *(number + 2) << std::endl;
  

  ptr = number;
  for (int i = 0; i < 3; ++i)
  {
    std::cout << *ptr << std::endl;
    ptr++;
  }

  int *ptrToInt = &x;
  std::cout << *ptrToInt << std::endl;
  ptrToInt = nullptr;

  if (ptrToInt == 0)
  {
    std::cout << "Pointer is null." << std::endl;
  }

  
  

 

  


}