#include <iostream>
using namespace std;

int main() {
    int n=0, a=0, b=1, risultato=0;
   cin >> n;
   for (int i=1; i>0; i++){
       risultato= a+b;
       if (risultato<=n){
           b=a;
           a=risultato;
           cout << risultato << endl;
       }else{
           break;
       }
   }
   return 0;
}
