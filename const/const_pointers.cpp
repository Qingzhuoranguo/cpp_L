#include <iostream>


int main () {

    // 1. constant pointer:  pointer value cannot change, can change de-referenced value 
    int num1 = 10, num2 = 30;
    int* const ptr = &num1;  // address can't be changed
    std::cout << *ptr << std::endl;


    /*   Wrong: ptr is constant, cannot be assigned to other addresses
    ptr = &num2;
    std::cout << *ptr << std::endl;
    */
   *ptr = *ptr + 20;
   std::cout << *ptr << std::endl;


   // 2. pointer to constant:  pointer value is changable, but the value it points to (dereferenced value) cannot
   int num3 = 10, num4 = 30;
   const int *ptr2 = &num3;
   std::cout << *ptr2 << std::endl;

    ptr2 = &num4;
    std::cout << *ptr2 << std::endl;

    /* Wrong: *ptr is constant this case,  (*ptr): the de-referenced value cannot be changed
    *ptr2 = *ptr + 20;
    std::cout << *ptr2 << std::endl;
    */


   //3. const pointer to const:  neither the pointer value (addredss), nor the value it points to (de-reference value) can be changed. 
   const int *const ptr3 = &num1;

   /*  both wrong:  
    ptr3 = &num2;
    *ptr3 = *ptr3+10;
   */

}