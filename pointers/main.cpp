#include <iostream>
const int MAX = 3;
using namespace std;

int main()
{
    int value = 10;
    int* ptrToValue = &value;
        cout  <<"variable value : "<< value  << " pointer value : "<< *ptrToValue << endl;
        *ptrToValue = 20;
        cout  <<"variable value : "<< value  << " pointer value after dereferencing: "<< *ptrToValue << endl<<endl;
       //1)pointer arithmetic
       //1.1) Incrementing a Pointer
        int  var[MAX] = {10, 100, 200};
        int  *ptr;

       // let us have array address in pointer.
        ptr = var;
        // var is array its own name itself is a pionter
        cout<< endl << "Incrementing a Pointer" << endl;
        for (int i = 0; i < MAX; i++) {
          cout << "Address of var[" << i << "] = ";
          cout << ptr << endl;

          cout << "Value of var[" << i << "] = ";
          cout << *ptr << endl;

          // point to the next location
          ptr++;
         }
         //1.2) Decrementing a Pointer

        cout<< endl << "Decrementing a Pointer" << endl;
        for (int i = MAX; i >= 0; i--) {
          cout << "Address of var[" << i << "] = ";
          cout << ptr << endl;

          cout << "Value of var[" << i << "] = ";
          cout << *ptr << endl;

          // point to the next location
          ptr--;
         }
         //1.3) Pointer Comparisons
        cout<< endl << "Pointer Comparisons" << endl;
        int i= 0;
        while (ptr <= &var[MAX-1]) {
          cout << "Address of var[" << i << "] = ";
          cout << ptr << endl;

          cout << "Value of var[" << i << "] = ";
          cout << *ptr << endl;

          // point to the next location
          ptr++;
          i++;
         }
        // 2)null pointer always have a default value 0
        int *nullPointer = NULL;
        cout << endl << "Null Pointer" << endl;
        cout << "default value is : " << nullPointer<<endl;
         // 3)poiter vs arrays
          for (int i = 0; i < MAX; i++) {
              *var = i;    // This is a correct syntax
              //var++;       // This is incorrect. so we use pointer
           }
        //4) pointer to pointer
        cout << "Pointers to Pointers" <<endl;
        //A pointer to a pointer is a form of multiple indirection or a chain of pointers. Normally, a pointer contains the address of a variable. When we define a pointer to a pointer, the first pointer contains the address of the second pointer, which points to the location that contains the actual value as shown below.
       int  val;
       int  *valPtr;
       int  **pValPtr;

       val = 3000;

       // take the address of var
       valPtr = &val;

       // take the address of ptr using address of operator &
       pValPtr = &valPtr;

       // take the value using pptr
       cout << "Value of val :" << val << endl;
       cout << "Value available at *valPtr :" << *valPtr << endl;
       cout << "Value available at **pValPtr :" << **pValPtr << endl;

    return 0;
}
