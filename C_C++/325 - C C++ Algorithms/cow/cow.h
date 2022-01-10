#include <iostream>
using namespace std ; 

class cow {
		private: 
				int hunger ;
		public: 
				int weight ;
				int set_hunger(int h );
				void express() ; 
			

};


int	cow::set_hunger(int h ){
			hunger = h ;
		}

void cow::express (){
	if (hunger > 10 ){
		cout<<"mmmmmmmm" ; 
	}
	else {
		cout<<"chill bro" ; 
	}
}