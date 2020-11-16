
// selection sort algorithm
#include <iostream>
using namespace std;

void swap (int &a , int &b ) {
    int temp = a ;
    a=b;
    b=temp;
}
void selectionSort(int arr[],int n ){

    for (int i = 0 ; i <n-1 ; i++) {

            for (int j = i+1; j<n ; j++) {
                if (arr[j] < arr[i]) {

                        swap( arr[j] , arr[i]);
                }

            }

    }
}
void printAarry(int arr[] , int n ){
    for(int i = 0 ;i<n;i++){
        cout <<arr[i]<< " " ;
    }
}

int main()
{
  int a[5] = { 7,3,1,20 ,4};

  selectionSort(a,5);
  printAarry(a,5);
}
