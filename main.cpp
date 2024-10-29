#include <iostream>
using namespace std;

void CountDown(int countInt) {
   if (countInt <= 0) {
      cout << "Go!\n";
   }
   else {
      cout << countInt << endl;
      CountDown(countInt - 1);
      cout << countInt << endl;
   }
}

int main() {
   CountDown(10);
   return 0;
}
