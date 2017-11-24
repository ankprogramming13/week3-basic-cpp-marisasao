#include <iostream>

using namespace std;

int main() {
  // เขียนโปรแกรมเพิ่ม เพื่อหาขนาดตัวแปรที่กำหนด
   const float pi = 3.14315926536;
    float r;
    float h=15;

    cin >> r;

    cout << "Area : " << pi * r * r;

    cout << "Area : " << 2 * pi * r;

    cout << "Area : " << pi * r * r * h;

  return 0;
}
}
