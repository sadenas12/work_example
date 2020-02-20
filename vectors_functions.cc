// use vectors and functions to determine the consecutive number of primes.

#include <iostream>
using namespace std;
struct vector{int nop; int num;};

vector nextprime(struct vector seq){
  for (int a=1;a<=10;a++){
    int count = 0;
    for (int j=2; j<20;j++){
      if (j==seq.num){
	continue;
      }
      if (seq.num%j==0){
	count++;
      }
    }
    if (count ==0){
      seq.nop++;
      return seq;
      break;
    }
    else {
      seq.num++;
    }
  }
}

int main(){
  struct vector seq;
  cout << "type number: "<<endl;
  int nprimes; cin>> nprimes;
  seq.nop=0;
  seq.num=2;
  while (seq.nop < nprimes){
    seq=nextprime(seq);
    cout << "number "<< seq.num << " is prime." <<endl;
    seq.num++;
  }
  return 0;
}
