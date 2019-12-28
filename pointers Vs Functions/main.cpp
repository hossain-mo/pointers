#include <iostream>

using namespace std;

using namespace std;
void getSeconds(unsigned long *par);
double getAverage(int *arr, int size);
int * getArray();
int main () {
   unsigned long sec;
   getSeconds( &sec );

   // print the actual value
   cout << "Number of seconds :" << sec << endl;
   // an int array with 5 elements.
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   // pass pointer to the array as an argument.
   avg = getAverage( balance, 5 ) ;

   // output the returned value
   cout << "Average value is: " << avg << endl;
   //get pointer from a function
   int *PtrFromFun ;
   PtrFromFun = getArray();
   for(int i=0;i<5;i++){
    cout<< "value at "<<i<<" is "<<  *(PtrFromFun + i)<<endl;
   }
   return 0;
}

void getSeconds(unsigned long *par) {
   // get the current number of seconds
   *par = time( NULL );

   return;
}
double getAverage(int *arr, int size){
    double avg = 0;
    for (int i=0 ; i<size ; i++){
        avg += arr[i];
    }    return avg;
}
int * getArray(){
    static int arr[5] = {5,10,15,20,25};
    return arr;
}

