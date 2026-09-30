//week03
/// week03-3.cpp c++°}¦C
#include <iostream>
#include <vector>///vector°}¦C
using namespace std;

int main(){
    vector<int>a;/// c++°}¦C«Å§i
    a.push_back(99);///§â99¶ë¨ì°}¦C«á­±
    a.push_back(88);///§â88¶ë¨ì°}¦C«á­±
    a.push_back(77);///§â77¶ë¨ì°}¦C«á­±
    for (int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout << "\n";
    a.push_back(88);///§â88¶ë¨ì°}¦C«á­±
    a.push_back(77);///§â77¶ë¨ì°}¦C«á­±
    for (int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout << "\n";
}
