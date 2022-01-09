#include <iostream>
#include "types.h"
#include <vector>

using namespace std;


void print_tokens (vector<Token> tokens) {
    for( int i = 0; i < tokens.size(); i++ ) {
        cout << tokens[i].get_text() << endl; 
    };
}


class Lexer {
    public: 
        vector<Token> lex(string input){

           vector<Token> tokens;

            for( int i = 0; i < input.length(); i++ ) {

                char currentElem = input[i];
                  
                if(isspace(currentElem)) {
                    //skip it
                    // cout << "is space" << currentElem;
                }
                else if (isdigit(currentElem))  {
                   
                    tokens.push_back(Token("digit", currentElem, i));
                }
                else if(currentElem == '+' ) {
                    tokens.push_back(Token("plus", currentElem, i));
                }
                else if(currentElem == '-' ) {
                    tokens.push_back(Token("minus", currentElem, i));
                }
            
                   
            };

            return tokens;

        }
};




int main() {
    Lexer lexer;  
    vector<Token> t = lexer.lex("1 + 2 + 3"); 
    vector<Token> ttt = lexer.lex("5 - 2 + 3"); 
    print_tokens(t);
    print_tokens(ttt);
    return 0;
}

