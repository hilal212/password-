#include <iostream>
using namespace std;


int main() {

string sys_password="12345";
string sys_username="hilal";

string password;
string username;

cout<<"please enter your username:";
cin>>username;

cout<<"please enter your password:";
cin>>password;

if(sys_username==username&&sys_password==password){
  cout<<"you entered the right password"<<endl;
}

else if(sys_username!=username&&sys_password==password){
  cout<<"you entered an incorrect username"<<endl;
}
else if(sys_username==username&&sys_password!=password){
  cout<<"you entered an incorrect password"<<endl;
}
else if(sys_username!=username&&sys_password!=password){
  cout<<"you entered an incorrect password and username"<<endl;
}


return 0;

}