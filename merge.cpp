//merge a two sorted array

#include <iostream>
#include<vector>
using namespace std;
template <typename E>
vector <E> merge(const vector<E> &A, const vector<E> &B){
	int x = A.size()+B.size();
	vector<E> answer(x);
	int i=0,j=0,count=0;
	while(i<A.size()&&j<B.size()){
		if(A[i]<B[j]){
			answer[count]=A[i];
			i++;
			count++;
		}
		else{
			answer[count]=B[j];
			j++;
			count++;
		}
	}
	while(i<A.size()){
		answer[count]=A[i];
		i++;
		count++;
	}
	while(j<B.size()){
		answer[count]=B[j];
		j++;
		count++;
	}
	return answer;
}

int main(){

	int my[3] = {2,6,9};
	int ano[5] = { 1,5,7,8,11};
	vector<int> A(my,my+3);
	vector<int> B(ano,ano+5);
	vector<int> C;
	C= merge(A,B);
	for(vector<int>::iterator it = C.begin(); it != C.end(); ++it){
		cout<<*it<<endl;
	}
	return 0;
}

