#include <iostream>
using namespace std;

class room {
	int size;
	int no_of_rooms;
	
	public:
		
		bool get_room_type(){
			bool room_type;
			string type;
			
			cout<<"enter room type (bedroom or living):"<<endl;
			cin>>type;
			
			room_type = true;
			if(type== "living"){
				cout<<"F";
			}
			else if(type == "bedroom"){
				cout<<"T";
				}
			else{
				cout<<"Please enter correct room type.";
			}
		}
};


int main(){
	room r1;
	r1.get_room_type();
}
