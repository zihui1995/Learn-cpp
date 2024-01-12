#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Jane Gustafsson", 30, "Stockholm", "Sweden", "she/her");
  sam.add_hobby("listening to music");
  sam.add_hobby("playing sports");
  sam.add_hobby("writing fiction novel");
  sam.add_hobby("reading");
  std::cout << sam.view_profile();
}
