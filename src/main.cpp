// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho
//

#include <intuples/Unpack.hpp>

int main() {
  // Generate typedefs
  // GENERATE_TYPEDEFS(myTuple);

  using MyTup = std::tuple<int, char, float>;

  // Generate typedefs
  UNPACK_TYPEDEFS_VARS3(MyTup);

  // Access and print the types
  std::cout << "Type v2: " << typeid(v2_t).name()
            << std::endl;
  v2 = 5.0;

  //
  return 0;
}
