#include <iostream>

using namespace std;

int summation(int num){
	return ((num*(num+1)/2));
}

int main(){
  int num;
  int sum;
  cout << "Enter Num" << endl;
  cin >> num;
  sum = summation(num);
  cout << "SUMMATION FOR:" << num << " = " << sum << endl;

  return 0;
}
