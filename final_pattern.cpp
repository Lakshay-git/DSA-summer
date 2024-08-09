// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>> n;

//     int i = 1 ;
//     int j = 1;
//     while(i <= n){
//         //pehla triangle
//         int j = 1;
//         while(j<=n - i +1){
//             cout<< j;
//             j = j + 1;
//         }
//         //mujhe star print karna hai 
//         int star = i - 1;
//         while(star){
//             cout<<"**";
//             star = star - 1;
//         }
//         //ab dusra triangle
//         int start = j - 1;
//         while(start){
//             cout << start;
//             start = start - 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int i = 1 ;
//     while(i<=n){
//         //pehla triangle (inverted)
//         int j = 1 ;
//         while(j<=n-i+1){
//             cout << j ;
//             j = j + 1;


//         }
//         //chalo ab star bnate hai 
//         int star = i-1;
//         while(star){
//             cout<<"**";
//             star = star - 1;
//         }
//         //dusra triangle(inverted but opposite face )
//         int start = j - 1;
//         while(start){
//             cout << start;
//             start = start - 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int i = 1 ;
    while(i<=n){
        int j = 1;
        while(j<=n- i + 1){
            cout<<j;
            j = j + 1;

        }
        int star = i - 1;
        while(star){
            cout << "**";
            star = star - 1;
        }

        int start = j - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        i = i + 1;

    }
}