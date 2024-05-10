#include <sstream>
#include <iostream>

using namespace std;

int main(){
 ostringstream oss("Ito En Green Tea ");
 
 oss << 16.9;
 cout << oss.str() << endl;

 fpos pos = oss.tellp() + streamoff(3);
 oss.seekp(pos);
 oss << "Black";

 cout << oss.str() << endl;

 return 0;
}
