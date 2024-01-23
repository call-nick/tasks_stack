# Tasks stack
The project uses C++20 feautures, such as format. So you need to use relevant compiler. In gcc you may need to precompile headers with

```console
callnick-asus% g++ -std=c++20 -fmodules-ts -xc++-system-header string
callnick-asus% g++ -std=c++20 -fmodules-ts -xc++-system-header filesystem
callnick-asus% g++ -std=c++20 -fmodules-ts -xc++-system-header stack
callnick-asus% g++ -std=c++20 -fmodules-ts -xc++-system-header fstream
```
