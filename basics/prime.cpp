// #include<iostream>
// using  namespace std;
// int main(){
//     int n;
//     cout<<"enter the no till which you want the prime no";
//     cin>>n;
  
//     for (int  i = 2; i <=n; i++)
//     {
//         bool prime =true;
//         for(int  j = 2; j*j <n; j++){
//         if(i%j==0){
//        prime =false;
       
//         }
//         }
//         if(prime){
//             cout<<i<<" ";
//         }
//     }
    
// return 0;

// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number till which you want prime numbers: ";
    cin >> n;

    for (int i = 2; i <= n; i++) { // Iterate through numbers from 2 to n
        bool prime = true; 

        for (int j = 2; j * j <= i; j++) { // Check divisibility up to sqrt(i)
            if (i % j == 0) { 
                prime = false; // If divisible, it's not a prime
                break;
            }
        }

        if (prime) {
            cout << i << " "; // Print the prime number
        }
    }
    
    cout << endl;
    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Prime numbers from 2 to " << n << " are:\n";

//     for (int num = 2; num <= n; num++) { // Iterate through numbers from 2 to n
//         bool isPrime = true;

//         // Check if num is prime
//         for (int i = 2; i * i <= num; i++) { 
//             if (num % i == 0) { // If divisible, it's not prime
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime) {
//             cout << num << " "; // Print the prime number
//         }
//     }
//     cout << endl;
//     return 0;
// }
