// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho

#include <catch2/catch_all.hpp>
//
#include <intuples/UnpackTuple.hpp>

TEST_CASE("test UNPACK_TYPENAMES_VARS3") {
  using MyTup = std::tuple<int, char, float>;
  UNPACK_TYPENAMES_VARS3(MyTup);
  // check if v2 exists
  v2 = 5.0;
  REQUIRE(v2 == 5.0);
  // check if type v2_t exists
  REQUIRE(typeid(v2_t).name() == std::string{"f"});
}

TEST_CASE("test UNPACK_TYPENAMES_VARS2") {
  using MyTup = std::pair<int, char>;
  UNPACK_TYPENAMES_VARS2(MyTup);
  // check if v1 exists
  v1 = 'A';
  REQUIRE(v1 == 'A');
  // check if type v2_t exists
  REQUIRE(typeid(v1_t).name() == std::string{"c"});
}
