// #include<iostream>
// using namespace std;

// int main(){
//     int marks[100] = {0};

//     int n;
//     cout<<"Enter the no. of students";
//     cin >> n;

//     //asign a value
//     marks[0] = -1;

//     //input
//     for(int i = 0; i<n; i++){
//         cin>> marks[i];

//         marks[i] = marks[i]*2;
//     }

//     //output
//     for(int i = 0; i<n; i++){
//         cout<< marks[i] << " , ";
//     }
//     cout<<endl;
// }

#include<iostream>
using namespace std;

void printArray(int arr[]){
    cout<<"in function "<<sizeof(arr)<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6}

    int n = sizeof(arr)/sizeof(int);

    // cout <<"In main" <<sizeof(arr)<<endl;
    printArray(arr);

    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<endl;
    }

}