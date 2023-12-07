// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho

#include <catch2/catch_all.hpp>
//
#include <intuples/UnpackTuple.hpp>

TEST_CASE("test UNPACK_TYPEDEFS_VARS") {
  using MyTup = std::tuple<int, char, float>;
  UNPACK_TYPEDEFS_VARS3(MyTup);
  // check if v2 exists
  v2 = 5.0;
  REQUIRE(v2 == 5.0);
  // check if type v2_t exists
  REQUIRE(typeid(v2_t).name() == std::string{"f"});
}
