#include <iostream>
using namespace std;
int main(){
  float arr[3][3];
  float det;
  cout << "9 adad baraye araye vared konid :" << endl;
  for(int i=0; i<3; i++) {
    for(int j=0; j<3; j++) {
      cin >> arr[i][j];
    }
  }

  det = arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2])-arr[0][1]*(arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
  cout << "Determinal araye : " << det << endl;

  return 0;
}