# intuples

C++ library for Inline Tuples

## General Idea

This project aims to be simple Header Only library, where a C++ Tuple
can be easily converted into simple variable declarations.

On general, only people wanting/needing severe control of variable 
declarations will need this... so, not a common scenario! 
Make sure you really need this!

### Supported Macros

Unfortunately, some features could only be build with macros,
and not beautiful c++ constexpr programming.
If you think you can change these macros into constexpr metaprogramming stuff,
please help us :)

Existing macros are:

- UNPACK_TYPENAMES_VARSX(TT): given a tuple type TT...
   * unpack X variables named v0, v1, v2, ... , vX-1
   * define X types named v0_t, v1_t, v2_t, ... , vX-1_t

## Simple Example

This is a simple example:

```{.cpp}
#include<intuples/UnpackTuple.hpp>

int main() {MyTup
  using MyTupType = std::tuple<int, char, float>;
  UNPACK_TYPEDEFS_VARS3(MyTupType);
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
