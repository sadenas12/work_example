/* for 0<i,j<10, prints first pair that satisfies i*j>N
   then pair that satisfies condition bu smalles i+j value*/
#include <iostream>
using namespace std;

int main(){
  cout <<"Type a number: "<<endl;
  int var; cin >> var;
  int prod, sum, is, js, small;
  for (int i =0; i<10; i++){
    for (int j=0; j<10;j++){
	prod = i*j;
	if (prod > var){
	  cout << i << "," <<j <<endl;
	  break;
	}
      }
    if (prod>var) break;
  }

  small =100 ;sum =200;
  for(int i=0;i<10;i++){
    for (int j=0;j<10;j++){
      prod =i*j;
      if (prod>var){
	sum = i+j;
      }
      if (small>sum){
	small =sum;
	is=i;
	js=j;
      }
    }
  }
  cout<< is <<","<< js<< endl;
  return 0;
}
