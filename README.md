# intuples

C++ library for Inline Tuples

## General Idea

This project aims to be simple Header Only library, where Tuple types
can be easily converted into simple variable declarations.

This is a simple example:

```{.cpp}
#include<intuples/Unpack.hpp>

int main() {
  using MyTup = std::tuple<int, char, float>;
  UNPACK_TYPEDEFS_VARS3(MyTup);
  // check if v2 exists
  v2 = 5.0;
  assert(v2 == 5.0);
  // check if type v2_t exists
  assert(typeid(v2_t).name() == std::string{"f"});
}
```

## License

MIT or LGPLv2, at your choice

Copyleft 2023
