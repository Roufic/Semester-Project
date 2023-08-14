#include <iostream>
#include <fstream>
#include <string>
using namespace std;

	struct User 
	{
    	string username;
    	string password;
	};
	bool registerUser( string username,  string password) 
	{
		User newUser;
		newUser.username = username ;
    	newUser.password = password ;
	    ofstream file("New User.txt");
	    

	    if (!file.is_open()) 
		{
        	cout << "Error creating user file!" << endl;
        	return false;
		}
		
		file << "Username: " << username << endl;
	    file << "Password: " << password << endl;
	    file.close();
	    cout << "User registered successfully!" << endl;
    	return true;
    
	}





int main ()
{
	string username, password;
	cout << "Enter your username: ";
	cin >> username;
	cout << "Enter your password: ";
	cin >> password;
	
	bool registerUser( string username,  string password);
	if (registerUser(username, password)) 
	{
        cout << "Registration successful." << endl;
    } 
	else 
	{
        cout << "Registration failed." << endl;
    }


	
	return 0;
}
