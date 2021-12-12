#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int withdrowAmount;
	float currentBalance;
	
	std::cin >> withdrowAmount >> currentBalance;
	
	    if(withdrowAmount % 5 == 0 && (withdrowAmount + 0.50) <= currentBalance){
	        std::cout << (currentBalance-withdrowAmount-0.50)<< std::endl;
	    }else {
	    std::cout << currentBalance << std::endl; 
	    }
	return 0;
}
