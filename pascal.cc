#include <iostream>
#include <vector>
using namespace std;
class pascal{
private:
  vector<vector<int>> matrix;
public:
  pascal(int n){
    matrix=vector<vector<int>>(n,vector<int>(n,0.));
    matrix.at(0).at(0)=1;
    for (int j=1;j<n;j++){
      matrix.at(j).at(0)=1;
      for (int i=1;i<=j;i++){
	matrix.at(j).at(i)=matrix.at(j-1).at(i-1)+matrix.at(j-1).at(i);
      }
    }
  };
  void print(int m, int n){
    for (int j=0;j<n;j++){
      for (int space=1; space<=(n-j);space++){
       	cout << " ";
      }
      for (int i=0; i<=j;i++){
	if (matrix.at(j).at(i)%m !=0){
	  cout<<"* ";
	}
	else{
	  cout<<"  ";
	}
      }
      cout<<endl;
    }
  };
};

int main(){
  cout << "Type a row number: "; int n; cin>>n; cout<<endl;
  cout << "Type a modulus number: "; int m; cin>> m; cout<<endl;
  pascal triangle(n);
  triangle.print(m,n);
  return 0;
}
