#include <iostream>
using namespace std;

int main() {
    float a, b, c=0;
    float quad, rect,tri,trap;
    cin >> a >> b >> c;
    tri=(a*b)/2;
    quad=(a*a);
    rect=(a*b);
    trap=((a+b)*c)/2;
    cout <<  tri<<endl ;
    cout <<  quad <<endl;
    cout <<  rect<<endl ;
    cout <<  trap<< endl;
    return 0;
}
