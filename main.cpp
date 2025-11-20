#include <iostream>
using namespace std;

// void setToHundred(int** p){
//     **p = 100;
// }
//
//     void swapRef(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }
//     void swapPtr(int* a, int* b) {
//     int temp = *a;
//     *a =*b;
//     *b = temp;
// }
//
//     //problem 3
//     int countValid(int* arr, int size){
//     int count = 0;
//     int** ptr = arr;
//
//     for (int i = 0; i < size; i++, ptr++) {
//     if (*ptr != nullptr)
//         count++;
// }
//
//     return count;
// }

    void fixNeg(int* arr, int size) {
    int* ptr = arr;
    for (int i = 0; i < size; i++, p++) {
        if (*p < 0) {
            *p = 0;
        }
    }
}




int main(){
    //problem 1
    // int x;
    // cin >> x;
    // int* p = &x;
    // setToHundred(&p);
    // cout << x;
    // return 0;

        //problem 2
    // int a , b ;
    // cin >> a >> b;
    // swapPtr(&a,&b);
    // cout << a << " " << b << endl;
    // return 0;

    //problem 3
    //problem 4
    int prob4;
    cin >> prob4;
    int* arr[100];
    for (int i = 0; i < prob4; i++) {
        int a;
        cin >> a;
    }
    return 0;











}