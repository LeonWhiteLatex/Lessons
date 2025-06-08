#include <iostream>

int main(){
	int seed, A, B, C;
	std::cin>>seed>>A>>B>>C;
	for(unsigned int i=0; i<15; i++){
		seed=(A*seed*seed+B)%C;
		std::cout<<seed<<" ";
	}std::cout<<"\n";
}
