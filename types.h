#include <string>
using namespace std;

class Token { 
    string type;
    char text;
    int start_pos;

    public: 
        Token(string new_type, char new_text, int new_start_pos);
     
        ~Token();

        string get_type ();
        char get_text ();
    
}; 
 