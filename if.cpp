// #include<iostream>
// using namespace std;

// // int main() {
// //     int a;

// //     cout << "Please enter a number: ";
// //     cin >> a;

// //     cout << "Value of a is: " << a << endl;

// //     if (a>0){
// //         cout<< "value of a is positive" << endl;
// //     }
// //     else {
// //         cout<< "value is negative "<<endl;
// //     }

// //     return 0;
// // }

// int main (){

//     char ch;

//     cout <<" enter the character :"<< endl;

//     cin >> ch;

//     if (ch >= 'A' && ch <= 'Z'){
//         cout<< "then it will lie in upper case" << endl;
//     }
//     else if(ch >= 'a' && ch <= 'z'){
//         cout<<"then it will lie in lower case "<<endl;
//     }
//     else {
//         cout<< "it is numeric" << endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i= 1;
//     int sum = 0;

//     while(i<=n){
        
//         sum = sum + i ;
//         i = i + 1;

//     }

//     cout << "value of sum is : " << sum << endl;

//     // while(i<=n){
//     //     cout<< i << endl;
//     //     i = i+1;
//     // }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin >> n;
//     int i = 1;
//     int sum = 0 ;

//     while(i <= n){
//         if(n%2==0){
//             cout << "sum of even no. is " << endl;
//         }
//         sum = sum +i;
//         i = i +1;
//     }
//     cout << "sum of even no. is" << sum << endl;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;

    while(i <= n){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i = i + 1;
    }
    cout << "Sum of even numbers up to " << n << " is " << sum << endl;
    return 0;
}
