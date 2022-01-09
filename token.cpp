#include <iostream>
#include "types.h"

Token::Token(string new_type, char new_text, int new_start_pos) 
  : type(new_type), text(new_text), start_pos(new_start_pos) {}

Token::~Token() {
//   std::cout << "Goodbye ";
}

std::string Token::get_type() {
  return type;
}

char Token::get_text() {
  return text;
}

