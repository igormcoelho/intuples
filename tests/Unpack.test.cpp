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

TEST_CASE("test UNPACK_TUPLE_TO2") {
  std::pair<int, char> p2{0, 'A'};
  int x = 1;
  char y = 'B';
  UNPACK_TUPLE_TO2(p2, x, y);
  REQUIRE(x == 0);
  REQUIRE(y == 'A');
}

// testing tuple unpacking with 'inline static' vars

using P2 = std::pair<int, char>;
class StaticTest {
 public:
  UNPACK_PREFIX_TYPENAMES_VARS2(P2, inline static);
};

TEST_CASE("test UNPACK_PREFIX_TYPENAMES_VARS2") {
  using P2 = std::pair<int, char>;

  REQUIRE(StaticTest::v0 == 0);
  REQUIRE(typeid(StaticTest::v1_t).name() ==
          std::string{"c"});
}