#include<iostream>
using namespace std;
int main(){
	int mark;
	while(true){
		cin >> mark;
		if(mark <= 100 && mark >= 90){
			cout << " You got an A!" << endl;
		}else if(mark < 90 && mark >= 80){
			cout << "You got a B!" << endl;
		}else if(mark < 80 && mark >= 70){
			cout << "You got a C!" << endl;
		}else if(mark < 70 && mark >= 60){
			cout << "You got a D!" << endl;
		}else if(mark < 60 && mark >= 0){
			cout << "You got an F!" << endl;
		}


	}









}
