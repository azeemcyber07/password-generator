#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
srand(time(0));

string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";  
string password = "";  

for (int i = 0; i < 10; i++) {  
    password += chars[rand() % chars.length()];  
}  

cout << "Generated Password: " << password << endl;  

return 0;
}
