#include <iostream>

using namespace std;
void * larger (void* ptr1, void* ptr2, void* (*ptrToCompareFun)(void*,void*));
void* compare (void* item1,void* item2);
int main()
{
    int var1=50,var2=100;
    int ptrToLrg = *(int *)larger(&var1,&var2,compare);
    cout << ptrToLrg;
    return 0;
}
void * larger (void* ptr1, void* ptr2, void* (*ptrToCompareFun)(void*,void*)){
    return (*ptrToCompareFun)(ptr1,ptr2);
}
void* compare (void* item1,void* item2){
    if(*(int *) item1 > *(int *) item2){
        return item1;
    }
    return item2;
}
