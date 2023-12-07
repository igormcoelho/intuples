// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho
//
#pragma once

#include <iostream>
#include <tuple>
#include <type_traits>

namespace intuples {

// Generates typenames and declares variables from Tuple
// Pattern is: v0, v1, v2, ... v0_t, v1_t, ...
// #define UNPACK_TYPENAMES_VARSX(TupleType)

#define UNPACK_TYPENAMES_VARS1(TT)                       \
  using v0_t = typename std::tuple_element<0, TT>::type; \
  v0_t v0;
#define UNPACK_TYPENAMES_VARS2(TT)                       \
  UNPACK_TYPENAMES_VARS1(TT)                             \
  using v1_t = typename std::tuple_element<1, TT>::type; \
  v1_t v1;
#define UNPACK_TYPENAMES_VARS3(TT)                       \
  UNPACK_TYPENAMES_VARS2(TT)                             \
  using v2_t = typename std::tuple_element<2, TT>::type; \
  v2_t v2;

#define UNPACK_STORAGE_TYPENAMES_VARS1(TT, PRE)          \
  using v0_t = typename std::tuple_element<0, TT>::type; \
  PRE v0_t v0;
#define UNPACK_STORAGE_TYPENAMES_VARS2(TT, PRE)          \
  UNPACK_STORAGE_TYPENAMES_VARS1(TT, PRE)                \
  using v1_t = typename std::tuple_element<1, TT>::type; \
  PRE v1_t v1;
#define UNPACK_STORAGE_TYPENAMES_VARS3(TT, PRE)          \
  UNPACK_STORAGE_TYPENAMES_VARS2(TT, PRE)                \
  using v2_t = typename std::tuple_element<2, TT>::type; \
  PRE v2_t v2;

// Given Tuple object (TObj), unpack into existing variables
// UNPACK_TUPLE_TOX

#define UNPACK_TUPLE_TO1(TObj, VAR0) \
  VAR0 = std::get<0>(TObj);
#define UNPACK_TUPLE_TO2(TObj, VAR0, VAR1) \
  VAR0 = std::get<0>(TObj);                \
  VAR1 = std::get<1>(TObj);
#define UNPACK_TUPLE_TO3(TObj, VAR0, VAR1, VAR2) \
  VAR0 = std::get<0>(TObj);                      \
  VAR1 = std::get<1>(TObj);                      \
  VAR2 = std::get<2>(TObj);

}  // namespace intuples
