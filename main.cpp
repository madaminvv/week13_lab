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

//     void fixNeg(int* arr, int size) {
//     int* ptr = arr;
//     for (int i = 0; i < size; i++, ptr++) {
//         if (*ptr < 0) {
//             *ptr = 0;
//         }
//     }
// }

int sum2D(int** m,int r, int c){
        int sum = 0;
        for(int i=0;i<r;i++){
            int* row = *(m + i);
            for(int j=0;j<c;j++){
                sum +=*(row +j);
            }
        }
        return sum;
    }


    void printIfValid(int* p){
    if(p == nullptr) cout << "null";
    else cout << *p;
}

int* findMax(int* arr,int size){
    int* p= arr;
    int* maxp = arr;
    for(int i=1;i<size;i++){
        p++;
        if(*p >*maxp) maxp= p;
    }
    return maxp;
}

void reverseArr(int** arr,int size){
    int* base = *arr;
    int *left = base;
    int *right = base+ size- 1;
    while(left< right){
        int tmp= *left;
        *left =*right;
        *right= tmp;
        left++;right--;
    }
}


void avg(const double*arr, int size, double*result){
    double s = 0;
    const double* p =arr;
    for(int i=0;i<size;i++){
        s +=*p;
        p++;
    }
    *result= s /size;
}

int removeValue(int* arr,int size,int val){
    int* write = arr;
    int* read = arr;
    for(int i=0;i<size;i++){
        if(*read!= val){
            *write= *read;
            write++;
        }
        read++;
    }
    return(int)(write-arr);
}


bool identical(const int*a, int**bptr, int size){
    const int* p =a;
    int* qb = *bptr;
    for(int i=0;i<size;i++){
        if(*p != *(qb +i)) return false;
        p++;
    }
    return true;
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
        // int n;cin >>n;
        // int a[n];
        // for(int i=0;i<n;i++) cin>> a[i];
        // fixNeg(a,n);
        // for(int i=0;i<n;i++) cout<< a[i]<< (i+1==n?"":" ");
        // return 0;

        //problem 5
    // int r,c;
    // cin >>r >>c;
    // int**mat = new int*[r];
    // for(int i=0;i<r;i++){
    //     mat[i]= new int[c];
    //     for(int j=0;j<c;j++) cin>> mat[i][j];
    // }
    // cout << sum2D(mat,r, c);
    // for(int i=0;i<r;i++) delete[] mat[i];
    // delete[] mat;
    // return 0;

    //problem 6
//     string s;
//     cin >>s;
//     if(s == "n") {
//         printIfValid(nullptr);
//     } else{
//         int val= stoi(s);
//         printIfValid(&val);
//     }
//     return 0;
// }

    //problem 7
//
//     int n;cin >>n;
//     int a[n];
//     for(int i=0;i<n;i++) cin>> a[i];
//     int* mp = findMax(a,n);
//     cout << *mp;
//     return 0;
// }

    //problem 8
//     int n;cin >>n;
//     int a[n];
//     for(int i=0;i<n;i++) cin>> a[i];
//     int* p= a;
//     reverseArr(&p,n);
//     for(int i=0;i<n;i++) cout<< a[i]<< (i+1==n?"":" ");
//     return 0;
// }


    //problem 9
// int n;
// cin >>n;
// double a[n];
// for(int i=0;i<n;i++) {
//     cin>> a[i];
// }
//     double res;
//     avg(a,n, &res);
//     cout << res;
//
// return 0;
//  }


    //problem 10

    //problem 11
    // int n;cin >>n;
    // int a[n];
    // for(int i=0;i<n;i++) cin>> a[i];
    // int val; cin >>val;
    // int newSize = removeValue(a, n,val);
    // for(int i=0;i<newSize;i++) cout<< a[i]<< (i+1==newSize?"":" ");
    // return 0;

    //problem 12

    int n;cin >>n;
    int a[n];
    for(int i=0;i<n;i++) cin>> a[i];
    int b[n];
    for(int i=0;i<n;i++) cin>> b[i];
    int* pb = b;
    cout << identical(a,&pb, n);
    return 0;

}