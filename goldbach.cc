//input even number, find two prime numbers that add for each even number until input
//class and objects
#include <iostream>
using namespace std;

class primegenerator{
private:
  int p, q;
public:
  int getp(){
    return p;
  };
  int getq(){
    return q;
  };
  primegenerator(int e){
    for (int P=2;P<e;P++){
      int count =0;
      for (int w=2; w<P;w++){
	if(P%w==0){
	  count++;
	}
      }
      if (count == 0){
	int Q=e-P;
	int Count = 0;
	for (int x=2;x<Q;x++){
	  if (Q%x==0){
	    Count++;
	  }
	}
	if (Count == 0){
	  p=P;
	  q=Q;
	  break;
	}
      }
    }
  };
};
     
int main(){
  int c; cin >> c;
  for (int e=4; e<=c;e=e+2){
    primegenerator v(e);
    int p=v.getp();
    int q=v.getq();
    cout << "The number "<<e<<" = "<< p<<" + "<< q << endl;
  }
  return 0;
}

