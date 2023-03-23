#include <iostream>
using namespace  std;
int main() {
    /*wykonaj program rakie jak w if else*/
    int x ;
    int y;
    int z;
    float c;
    cout<<"podaj x: ";
    cin>>x;
    cout<<"podaj y: ";
    cin>>y;
    cout<<"1 mnozenie 2dzielenie 3dodawanie 4odejmowanie\n";
    cout<<"podaj z: ";
    cin>>z;

    switch (z) {
        case 1:
         c=x * y ;
         cout<<c;
          break;
        case 2:
            c=x / y ;
            cout<<c;
            break;
        case 3:
            c=x + y ;
            cout<<c;
            break;
        case 4:
            c=x - y ;
            cout<<c;
            break;
        default:
            break;
    }
    return 0;
}
