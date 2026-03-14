// Inspired by https://www.thenet.sk/blog0011

#include <tuple>
#include <cstdint>

struct T {}; // True
struct F {}; // False

template <typename A, typename B>
struct BitPair {};

struct B00 {}; struct B10 {}; struct B20 {}; struct B30 {}; struct B40 {}; struct B50 {}; struct B60 {}; struct B70 {}; struct B80 {}; struct B90 {}; struct BA0 {}; struct BB0 {}; struct BC0 {}; struct BD0 {}; struct BE0 {}; struct BF0 {};
struct B01 {}; struct B11 {}; struct B21 {}; struct B31 {}; struct B41 {}; struct B51 {}; struct B61 {}; struct B71 {}; struct B81 {}; struct B91 {}; struct BA1 {}; struct BB1 {}; struct BC1 {}; struct BD1 {}; struct BE1 {}; struct BF1 {};
struct B02 {}; struct B12 {}; struct B22 {}; struct B32 {}; struct B42 {}; struct B52 {}; struct B62 {}; struct B72 {}; struct B82 {}; struct B92 {}; struct BA2 {}; struct BB2 {}; struct BC2 {}; struct BD2 {}; struct BE2 {}; struct BF2 {};
struct B03 {}; struct B13 {}; struct B23 {}; struct B33 {}; struct B43 {}; struct B53 {}; struct B63 {}; struct B73 {}; struct B83 {}; struct B93 {}; struct BA3 {}; struct BB3 {}; struct BC3 {}; struct BD3 {}; struct BE3 {}; struct BF3 {};
struct B04 {}; struct B14 {}; struct B24 {}; struct B34 {}; struct B44 {}; struct B54 {}; struct B64 {}; struct B74 {}; struct B84 {}; struct B94 {}; struct BA4 {}; struct BB4 {}; struct BC4 {}; struct BD4 {}; struct BE4 {}; struct BF4 {};
struct B05 {}; struct B15 {}; struct B25 {}; struct B35 {}; struct B45 {}; struct B55 {}; struct B65 {}; struct B75 {}; struct B85 {}; struct B95 {}; struct BA5 {}; struct BB5 {}; struct BC5 {}; struct BD5 {}; struct BE5 {}; struct BF5 {};
struct B06 {}; struct B16 {}; struct B26 {}; struct B36 {}; struct B46 {}; struct B56 {}; struct B66 {}; struct B76 {}; struct B86 {}; struct B96 {}; struct BA6 {}; struct BB6 {}; struct BC6 {}; struct BD6 {}; struct BE6 {}; struct BF6 {};
struct B07 {}; struct B17 {}; struct B27 {}; struct B37 {}; struct B47 {}; struct B57 {}; struct B67 {}; struct B77 {}; struct B87 {}; struct B97 {}; struct BA7 {}; struct BB7 {}; struct BC7 {}; struct BD7 {}; struct BE7 {}; struct BF7 {};
struct B08 {}; struct B18 {}; struct B28 {}; struct B38 {}; struct B48 {}; struct B58 {}; struct B68 {}; struct B78 {}; struct B88 {}; struct B98 {}; struct BA8 {}; struct BB8 {}; struct BC8 {}; struct BD8 {}; struct BE8 {}; struct BF8 {};
struct B09 {}; struct B19 {}; struct B29 {}; struct B39 {}; struct B49 {}; struct B59 {}; struct B69 {}; struct B79 {}; struct B89 {}; struct B99 {}; struct BA9 {}; struct BB9 {}; struct BC9 {}; struct BD9 {}; struct BE9 {}; struct BF9 {};
struct B0A {}; struct B1A {}; struct B2A {}; struct B3A {}; struct B4A {}; struct B5A {}; struct B6A {}; struct B7A {}; struct B8A {}; struct B9A {}; struct BAA {}; struct BBA {}; struct BCA {}; struct BDA {}; struct BEA {}; struct BFA {};
struct B0B {}; struct B1B {}; struct B2B {}; struct B3B {}; struct B4B {}; struct B5B {}; struct B6B {}; struct B7B {}; struct B8B {}; struct B9B {}; struct BAB {}; struct BBB {}; struct BCB {}; struct BDB {}; struct BEB {}; struct BFB {};
struct B0C {}; struct B1C {}; struct B2C {}; struct B3C {}; struct B4C {}; struct B5C {}; struct B6C {}; struct B7C {}; struct B8C {}; struct B9C {}; struct BAC {}; struct BBC {}; struct BCC {}; struct BDC {}; struct BEC {}; struct BFC {};
struct B0D {}; struct B1D {}; struct B2D {}; struct B3D {}; struct B4D {}; struct B5D {}; struct B6D {}; struct B7D {}; struct B8D {}; struct B9D {}; struct BAD {}; struct BBD {}; struct BCD {}; struct BDD {}; struct BED {}; struct BFD {};
struct B0E {}; struct B1E {}; struct B2E {}; struct B3E {}; struct B4E {}; struct B5E {}; struct B6E {}; struct B7E {}; struct B8E {}; struct B9E {}; struct BAE {}; struct BBE {}; struct BCE {}; struct BDE {}; struct BEE {}; struct BFE {};
struct B0F {}; struct B1F {}; struct B2F {}; struct B3F {}; struct B4F {}; struct B5F {}; struct B6F {}; struct B7F {}; struct B8F {}; struct B9F {}; struct BAF {}; struct BBF {}; struct BCF {}; struct BDF {}; struct BEF {}; struct BFF {};

template <typename A, typename B>
struct BytePair {};

template<typename T> struct Convert;
template<> struct Convert<B00> { using Result = std::tuple<F, F, F, F, F, F, F, F>; };
template<> struct Convert<B01> { using Result = std::tuple<F, F, F, F, F, F, F, T>; };
template<> struct Convert<B02> { using Result = std::tuple<F, F, F, F, F, F, T, F>; };
template<> struct Convert<B03> { using Result = std::tuple<F, F, F, F, F, F, T, T>; };
template<> struct Convert<B04> { using Result = std::tuple<F, F, F, F, F, T, F, F>; };
template<> struct Convert<B05> { using Result = std::tuple<F, F, F, F, F, T, F, T>; };
template<> struct Convert<B06> { using Result = std::tuple<F, F, F, F, F, T, T, F>; };
template<> struct Convert<B07> { using Result = std::tuple<F, F, F, F, F, T, T, T>; };
template<> struct Convert<B08> { using Result = std::tuple<F, F, F, F, T, F, F, F>; };
template<> struct Convert<B09> { using Result = std::tuple<F, F, F, F, T, F, F, T>; };
template<> struct Convert<B0A> { using Result = std::tuple<F, F, F, F, T, F, T, F>; };
template<> struct Convert<B0B> { using Result = std::tuple<F, F, F, F, T, F, T, T>; };
template<> struct Convert<B0C> { using Result = std::tuple<F, F, F, F, T, T, F, F>; };
template<> struct Convert<B0D> { using Result = std::tuple<F, F, F, F, T, T, F, T>; };
template<> struct Convert<B0E> { using Result = std::tuple<F, F, F, F, T, T, T, F>; };
template<> struct Convert<B0F> { using Result = std::tuple<F, F, F, F, T, T, T, T>; };
template<> struct Convert<B10> { using Result = std::tuple<F, F, F, T, F, F, F, F>; };
template<> struct Convert<B11> { using Result = std::tuple<F, F, F, T, F, F, F, T>; };
template<> struct Convert<B12> { using Result = std::tuple<F, F, F, T, F, F, T, F>; };
template<> struct Convert<B13> { using Result = std::tuple<F, F, F, T, F, F, T, T>; };
template<> struct Convert<B14> { using Result = std::tuple<F, F, F, T, F, T, F, F>; };
template<> struct Convert<B15> { using Result = std::tuple<F, F, F, T, F, T, F, T>; };
template<> struct Convert<B16> { using Result = std::tuple<F, F, F, T, F, T, T, F>; };
template<> struct Convert<B17> { using Result = std::tuple<F, F, F, T, F, T, T, T>; };
template<> struct Convert<B18> { using Result = std::tuple<F, F, F, T, T, F, F, F>; };
template<> struct Convert<B19> { using Result = std::tuple<F, F, F, T, T, F, F, T>; };
template<> struct Convert<B1A> { using Result = std::tuple<F, F, F, T, T, F, T, F>; };
template<> struct Convert<B1B> { using Result = std::tuple<F, F, F, T, T, F, T, T>; };
template<> struct Convert<B1C> { using Result = std::tuple<F, F, F, T, T, T, F, F>; };
template<> struct Convert<B1D> { using Result = std::tuple<F, F, F, T, T, T, F, T>; };
template<> struct Convert<B1E> { using Result = std::tuple<F, F, F, T, T, T, T, F>; };
template<> struct Convert<B1F> { using Result = std::tuple<F, F, F, T, T, T, T, T>; };
template<> struct Convert<B20> { using Result = std::tuple<F, F, T, F, F, F, F, F>; };
template<> struct Convert<B21> { using Result = std::tuple<F, F, T, F, F, F, F, T>; };
template<> struct Convert<B22> { using Result = std::tuple<F, F, T, F, F, F, T, F>; };
template<> struct Convert<B23> { using Result = std::tuple<F, F, T, F, F, F, T, T>; };
template<> struct Convert<B24> { using Result = std::tuple<F, F, T, F, F, T, F, F>; };
template<> struct Convert<B25> { using Result = std::tuple<F, F, T, F, F, T, F, T>; };
template<> struct Convert<B26> { using Result = std::tuple<F, F, T, F, F, T, T, F>; };
template<> struct Convert<B27> { using Result = std::tuple<F, F, T, F, F, T, T, T>; };
template<> struct Convert<B28> { using Result = std::tuple<F, F, T, F, T, F, F, F>; };
template<> struct Convert<B29> { using Result = std::tuple<F, F, T, F, T, F, F, T>; };
template<> struct Convert<B2A> { using Result = std::tuple<F, F, T, F, T, F, T, F>; };
template<> struct Convert<B2B> { using Result = std::tuple<F, F, T, F, T, F, T, T>; };
template<> struct Convert<B2C> { using Result = std::tuple<F, F, T, F, T, T, F, F>; };
template<> struct Convert<B2D> { using Result = std::tuple<F, F, T, F, T, T, F, T>; };
template<> struct Convert<B2E> { using Result = std::tuple<F, F, T, F, T, T, T, F>; };
template<> struct Convert<B2F> { using Result = std::tuple<F, F, T, F, T, T, T, T>; };
template<> struct Convert<B30> { using Result = std::tuple<F, F, T, T, F, F, F, F>; };
template<> struct Convert<B31> { using Result = std::tuple<F, F, T, T, F, F, F, T>; };
template<> struct Convert<B32> { using Result = std::tuple<F, F, T, T, F, F, T, F>; };
template<> struct Convert<B33> { using Result = std::tuple<F, F, T, T, F, F, T, T>; };
template<> struct Convert<B34> { using Result = std::tuple<F, F, T, T, F, T, F, F>; };
template<> struct Convert<B35> { using Result = std::tuple<F, F, T, T, F, T, F, T>; };
template<> struct Convert<B36> { using Result = std::tuple<F, F, T, T, F, T, T, F>; };
template<> struct Convert<B37> { using Result = std::tuple<F, F, T, T, F, T, T, T>; };
template<> struct Convert<B38> { using Result = std::tuple<F, F, T, T, T, F, F, F>; };
template<> struct Convert<B39> { using Result = std::tuple<F, F, T, T, T, F, F, T>; };
template<> struct Convert<B3A> { using Result = std::tuple<F, F, T, T, T, F, T, F>; };
template<> struct Convert<B3B> { using Result = std::tuple<F, F, T, T, T, F, T, T>; };
template<> struct Convert<B3C> { using Result = std::tuple<F, F, T, T, T, T, F, F>; };
template<> struct Convert<B3D> { using Result = std::tuple<F, F, T, T, T, T, F, T>; };
template<> struct Convert<B3E> { using Result = std::tuple<F, F, T, T, T, T, T, F>; };
template<> struct Convert<B3F> { using Result = std::tuple<F, F, T, T, T, T, T, T>; };
template<> struct Convert<B40> { using Result = std::tuple<F, T, F, F, F, F, F, F>; };
template<> struct Convert<B41> { using Result = std::tuple<F, T, F, F, F, F, F, T>; };
template<> struct Convert<B42> { using Result = std::tuple<F, T, F, F, F, F, T, F>; };
template<> struct Convert<B43> { using Result = std::tuple<F, T, F, F, F, F, T, T>; };
template<> struct Convert<B44> { using Result = std::tuple<F, T, F, F, F, T, F, F>; };
template<> struct Convert<B45> { using Result = std::tuple<F, T, F, F, F, T, F, T>; };
template<> struct Convert<B46> { using Result = std::tuple<F, T, F, F, F, T, T, F>; };
template<> struct Convert<B47> { using Result = std::tuple<F, T, F, F, F, T, T, T>; };
template<> struct Convert<B48> { using Result = std::tuple<F, T, F, F, T, F, F, F>; };
template<> struct Convert<B49> { using Result = std::tuple<F, T, F, F, T, F, F, T>; };
template<> struct Convert<B4A> { using Result = std::tuple<F, T, F, F, T, F, T, F>; };
template<> struct Convert<B4B> { using Result = std::tuple<F, T, F, F, T, F, T, T>; };
template<> struct Convert<B4C> { using Result = std::tuple<F, T, F, F, T, T, F, F>; };
template<> struct Convert<B4D> { using Result = std::tuple<F, T, F, F, T, T, F, T>; };
template<> struct Convert<B4E> { using Result = std::tuple<F, T, F, F, T, T, T, F>; };
template<> struct Convert<B4F> { using Result = std::tuple<F, T, F, F, T, T, T, T>; };
template<> struct Convert<B50> { using Result = std::tuple<F, T, F, T, F, F, F, F>; };
template<> struct Convert<B51> { using Result = std::tuple<F, T, F, T, F, F, F, T>; };
template<> struct Convert<B52> { using Result = std::tuple<F, T, F, T, F, F, T, F>; };
template<> struct Convert<B53> { using Result = std::tuple<F, T, F, T, F, F, T, T>; };
template<> struct Convert<B54> { using Result = std::tuple<F, T, F, T, F, T, F, F>; };
template<> struct Convert<B55> { using Result = std::tuple<F, T, F, T, F, T, F, T>; };
template<> struct Convert<B56> { using Result = std::tuple<F, T, F, T, F, T, T, F>; };
template<> struct Convert<B57> { using Result = std::tuple<F, T, F, T, F, T, T, T>; };
template<> struct Convert<B58> { using Result = std::tuple<F, T, F, T, T, F, F, F>; };
template<> struct Convert<B59> { using Result = std::tuple<F, T, F, T, T, F, F, T>; };
template<> struct Convert<B5A> { using Result = std::tuple<F, T, F, T, T, F, T, F>; };
template<> struct Convert<B5B> { using Result = std::tuple<F, T, F, T, T, F, T, T>; };
template<> struct Convert<B5C> { using Result = std::tuple<F, T, F, T, T, T, F, F>; };
template<> struct Convert<B5D> { using Result = std::tuple<F, T, F, T, T, T, F, T>; };
template<> struct Convert<B5E> { using Result = std::tuple<F, T, F, T, T, T, T, F>; };
template<> struct Convert<B5F> { using Result = std::tuple<F, T, F, T, T, T, T, T>; };
template<> struct Convert<B60> { using Result = std::tuple<F, T, T, F, F, F, F, F>; };
template<> struct Convert<B61> { using Result = std::tuple<F, T, T, F, F, F, F, T>; };
template<> struct Convert<B62> { using Result = std::tuple<F, T, T, F, F, F, T, F>; };
template<> struct Convert<B63> { using Result = std::tuple<F, T, T, F, F, F, T, T>; };
template<> struct Convert<B64> { using Result = std::tuple<F, T, T, F, F, T, F, F>; };
template<> struct Convert<B65> { using Result = std::tuple<F, T, T, F, F, T, F, T>; };
template<> struct Convert<B66> { using Result = std::tuple<F, T, T, F, F, T, T, F>; };
template<> struct Convert<B67> { using Result = std::tuple<F, T, T, F, F, T, T, T>; };
template<> struct Convert<B68> { using Result = std::tuple<F, T, T, F, T, F, F, F>; };
template<> struct Convert<B69> { using Result = std::tuple<F, T, T, F, T, F, F, T>; };
template<> struct Convert<B6A> { using Result = std::tuple<F, T, T, F, T, F, T, F>; };
template<> struct Convert<B6B> { using Result = std::tuple<F, T, T, F, T, F, T, T>; };
template<> struct Convert<B6C> { using Result = std::tuple<F, T, T, F, T, T, F, F>; };
template<> struct Convert<B6D> { using Result = std::tuple<F, T, T, F, T, T, F, T>; };
template<> struct Convert<B6E> { using Result = std::tuple<F, T, T, F, T, T, T, F>; };
template<> struct Convert<B6F> { using Result = std::tuple<F, T, T, F, T, T, T, T>; };
template<> struct Convert<B70> { using Result = std::tuple<F, T, T, T, F, F, F, F>; };
template<> struct Convert<B71> { using Result = std::tuple<F, T, T, T, F, F, F, T>; };
template<> struct Convert<B72> { using Result = std::tuple<F, T, T, T, F, F, T, F>; };
template<> struct Convert<B73> { using Result = std::tuple<F, T, T, T, F, F, T, T>; };
template<> struct Convert<B74> { using Result = std::tuple<F, T, T, T, F, T, F, F>; };
template<> struct Convert<B75> { using Result = std::tuple<F, T, T, T, F, T, F, T>; };
template<> struct Convert<B76> { using Result = std::tuple<F, T, T, T, F, T, T, F>; };
template<> struct Convert<B77> { using Result = std::tuple<F, T, T, T, F, T, T, T>; };
template<> struct Convert<B78> { using Result = std::tuple<F, T, T, T, T, F, F, F>; };
template<> struct Convert<B79> { using Result = std::tuple<F, T, T, T, T, F, F, T>; };
template<> struct Convert<B7A> { using Result = std::tuple<F, T, T, T, T, F, T, F>; };
template<> struct Convert<B7B> { using Result = std::tuple<F, T, T, T, T, F, T, T>; };
template<> struct Convert<B7C> { using Result = std::tuple<F, T, T, T, T, T, F, F>; };
template<> struct Convert<B7D> { using Result = std::tuple<F, T, T, T, T, T, F, T>; };
template<> struct Convert<B7E> { using Result = std::tuple<F, T, T, T, T, T, T, F>; };
template<> struct Convert<B7F> { using Result = std::tuple<F, T, T, T, T, T, T, T>; };
template<> struct Convert<B80> { using Result = std::tuple<T, F, F, F, F, F, F, F>; };
template<> struct Convert<B81> { using Result = std::tuple<T, F, F, F, F, F, F, T>; };
template<> struct Convert<B82> { using Result = std::tuple<T, F, F, F, F, F, T, F>; };
template<> struct Convert<B83> { using Result = std::tuple<T, F, F, F, F, F, T, T>; };
template<> struct Convert<B84> { using Result = std::tuple<T, F, F, F, F, T, F, F>; };
template<> struct Convert<B85> { using Result = std::tuple<T, F, F, F, F, T, F, T>; };
template<> struct Convert<B86> { using Result = std::tuple<T, F, F, F, F, T, T, F>; };
template<> struct Convert<B87> { using Result = std::tuple<T, F, F, F, F, T, T, T>; };
template<> struct Convert<B88> { using Result = std::tuple<T, F, F, F, T, F, F, F>; };
template<> struct Convert<B89> { using Result = std::tuple<T, F, F, F, T, F, F, T>; };
template<> struct Convert<B8A> { using Result = std::tuple<T, F, F, F, T, F, T, F>; };
template<> struct Convert<B8B> { using Result = std::tuple<T, F, F, F, T, F, T, T>; };
template<> struct Convert<B8C> { using Result = std::tuple<T, F, F, F, T, T, F, F>; };
template<> struct Convert<B8D> { using Result = std::tuple<T, F, F, F, T, T, F, T>; };
template<> struct Convert<B8E> { using Result = std::tuple<T, F, F, F, T, T, T, F>; };
template<> struct Convert<B8F> { using Result = std::tuple<T, F, F, F, T, T, T, T>; };
template<> struct Convert<B90> { using Result = std::tuple<T, F, F, T, F, F, F, F>; };
template<> struct Convert<B91> { using Result = std::tuple<T, F, F, T, F, F, F, T>; };
template<> struct Convert<B92> { using Result = std::tuple<T, F, F, T, F, F, T, F>; };
template<> struct Convert<B93> { using Result = std::tuple<T, F, F, T, F, F, T, T>; };
template<> struct Convert<B94> { using Result = std::tuple<T, F, F, T, F, T, F, F>; };
template<> struct Convert<B95> { using Result = std::tuple<T, F, F, T, F, T, F, T>; };
template<> struct Convert<B96> { using Result = std::tuple<T, F, F, T, F, T, T, F>; };
template<> struct Convert<B97> { using Result = std::tuple<T, F, F, T, F, T, T, T>; };
template<> struct Convert<B98> { using Result = std::tuple<T, F, F, T, T, F, F, F>; };
template<> struct Convert<B99> { using Result = std::tuple<T, F, F, T, T, F, F, T>; };
template<> struct Convert<B9A> { using Result = std::tuple<T, F, F, T, T, F, T, F>; };
template<> struct Convert<B9B> { using Result = std::tuple<T, F, F, T, T, F, T, T>; };
template<> struct Convert<B9C> { using Result = std::tuple<T, F, F, T, T, T, F, F>; };
template<> struct Convert<B9D> { using Result = std::tuple<T, F, F, T, T, T, F, T>; };
template<> struct Convert<B9E> { using Result = std::tuple<T, F, F, T, T, T, T, F>; };
template<> struct Convert<B9F> { using Result = std::tuple<T, F, F, T, T, T, T, T>; };
template<> struct Convert<BA0> { using Result = std::tuple<T, F, T, F, F, F, F, F>; };
template<> struct Convert<BA1> { using Result = std::tuple<T, F, T, F, F, F, F, T>; };
template<> struct Convert<BA2> { using Result = std::tuple<T, F, T, F, F, F, T, F>; };
template<> struct Convert<BA3> { using Result = std::tuple<T, F, T, F, F, F, T, T>; };
template<> struct Convert<BA4> { using Result = std::tuple<T, F, T, F, F, T, F, F>; };
template<> struct Convert<BA5> { using Result = std::tuple<T, F, T, F, F, T, F, T>; };
template<> struct Convert<BA6> { using Result = std::tuple<T, F, T, F, F, T, T, F>; };
template<> struct Convert<BA7> { using Result = std::tuple<T, F, T, F, F, T, T, T>; };
template<> struct Convert<BA8> { using Result = std::tuple<T, F, T, F, T, F, F, F>; };
template<> struct Convert<BA9> { using Result = std::tuple<T, F, T, F, T, F, F, T>; };
template<> struct Convert<BAA> { using Result = std::tuple<T, F, T, F, T, F, T, F>; };
template<> struct Convert<BAB> { using Result = std::tuple<T, F, T, F, T, F, T, T>; };
template<> struct Convert<BAC> { using Result = std::tuple<T, F, T, F, T, T, F, F>; };
template<> struct Convert<BAD> { using Result = std::tuple<T, F, T, F, T, T, F, T>; };
template<> struct Convert<BAE> { using Result = std::tuple<T, F, T, F, T, T, T, F>; };
template<> struct Convert<BAF> { using Result = std::tuple<T, F, T, F, T, T, T, T>; };
template<> struct Convert<BB0> { using Result = std::tuple<T, F, T, T, F, F, F, F>; };
template<> struct Convert<BB1> { using Result = std::tuple<T, F, T, T, F, F, F, T>; };
template<> struct Convert<BB2> { using Result = std::tuple<T, F, T, T, F, F, T, F>; };
template<> struct Convert<BB3> { using Result = std::tuple<T, F, T, T, F, F, T, T>; };
template<> struct Convert<BB4> { using Result = std::tuple<T, F, T, T, F, T, F, F>; };
template<> struct Convert<BB5> { using Result = std::tuple<T, F, T, T, F, T, F, T>; };
template<> struct Convert<BB6> { using Result = std::tuple<T, F, T, T, F, T, T, F>; };
template<> struct Convert<BB7> { using Result = std::tuple<T, F, T, T, F, T, T, T>; };
template<> struct Convert<BB8> { using Result = std::tuple<T, F, T, T, T, F, F, F>; };
template<> struct Convert<BB9> { using Result = std::tuple<T, F, T, T, T, F, F, T>; };
template<> struct Convert<BBA> { using Result = std::tuple<T, F, T, T, T, F, T, F>; };
template<> struct Convert<BBB> { using Result = std::tuple<T, F, T, T, T, F, T, T>; };
template<> struct Convert<BBC> { using Result = std::tuple<T, F, T, T, T, T, F, F>; };
template<> struct Convert<BBD> { using Result = std::tuple<T, F, T, T, T, T, F, T>; };
template<> struct Convert<BBE> { using Result = std::tuple<T, F, T, T, T, T, T, F>; };
template<> struct Convert<BBF> { using Result = std::tuple<T, F, T, T, T, T, T, T>; };
template<> struct Convert<BC0> { using Result = std::tuple<T, T, F, F, F, F, F, F>; };
template<> struct Convert<BC1> { using Result = std::tuple<T, T, F, F, F, F, F, T>; };
template<> struct Convert<BC2> { using Result = std::tuple<T, T, F, F, F, F, T, F>; };
template<> struct Convert<BC3> { using Result = std::tuple<T, T, F, F, F, F, T, T>; };
template<> struct Convert<BC4> { using Result = std::tuple<T, T, F, F, F, T, F, F>; };
template<> struct Convert<BC5> { using Result = std::tuple<T, T, F, F, F, T, F, T>; };
template<> struct Convert<BC6> { using Result = std::tuple<T, T, F, F, F, T, T, F>; };
template<> struct Convert<BC7> { using Result = std::tuple<T, T, F, F, F, T, T, T>; };
template<> struct Convert<BC8> { using Result = std::tuple<T, T, F, F, T, F, F, F>; };
template<> struct Convert<BC9> { using Result = std::tuple<T, T, F, F, T, F, F, T>; };
template<> struct Convert<BCA> { using Result = std::tuple<T, T, F, F, T, F, T, F>; };
template<> struct Convert<BCB> { using Result = std::tuple<T, T, F, F, T, F, T, T>; };
template<> struct Convert<BCC> { using Result = std::tuple<T, T, F, F, T, T, F, F>; };
template<> struct Convert<BCD> { using Result = std::tuple<T, T, F, F, T, T, F, T>; };
template<> struct Convert<BCE> { using Result = std::tuple<T, T, F, F, T, T, T, F>; };
template<> struct Convert<BCF> { using Result = std::tuple<T, T, F, F, T, T, T, T>; };
template<> struct Convert<BD0> { using Result = std::tuple<T, T, F, T, F, F, F, F>; };
template<> struct Convert<BD1> { using Result = std::tuple<T, T, F, T, F, F, F, T>; };
template<> struct Convert<BD2> { using Result = std::tuple<T, T, F, T, F, F, T, F>; };
template<> struct Convert<BD3> { using Result = std::tuple<T, T, F, T, F, F, T, T>; };
template<> struct Convert<BD4> { using Result = std::tuple<T, T, F, T, F, T, F, F>; };
template<> struct Convert<BD5> { using Result = std::tuple<T, T, F, T, F, T, F, T>; };
template<> struct Convert<BD6> { using Result = std::tuple<T, T, F, T, F, T, T, F>; };
template<> struct Convert<BD7> { using Result = std::tuple<T, T, F, T, F, T, T, T>; };
template<> struct Convert<BD8> { using Result = std::tuple<T, T, F, T, T, F, F, F>; };
template<> struct Convert<BD9> { using Result = std::tuple<T, T, F, T, T, F, F, T>; };
template<> struct Convert<BDA> { using Result = std::tuple<T, T, F, T, T, F, T, F>; };
template<> struct Convert<BDB> { using Result = std::tuple<T, T, F, T, T, F, T, T>; };
template<> struct Convert<BDC> { using Result = std::tuple<T, T, F, T, T, T, F, F>; };
template<> struct Convert<BDD> { using Result = std::tuple<T, T, F, T, T, T, F, T>; };
template<> struct Convert<BDE> { using Result = std::tuple<T, T, F, T, T, T, T, F>; };
template<> struct Convert<BDF> { using Result = std::tuple<T, T, F, T, T, T, T, T>; };
template<> struct Convert<BE0> { using Result = std::tuple<T, T, T, F, F, F, F, F>; };
template<> struct Convert<BE1> { using Result = std::tuple<T, T, T, F, F, F, F, T>; };
template<> struct Convert<BE2> { using Result = std::tuple<T, T, T, F, F, F, T, F>; };
template<> struct Convert<BE3> { using Result = std::tuple<T, T, T, F, F, F, T, T>; };
template<> struct Convert<BE4> { using Result = std::tuple<T, T, T, F, F, T, F, F>; };
template<> struct Convert<BE5> { using Result = std::tuple<T, T, T, F, F, T, F, T>; };
template<> struct Convert<BE6> { using Result = std::tuple<T, T, T, F, F, T, T, F>; };
template<> struct Convert<BE7> { using Result = std::tuple<T, T, T, F, F, T, T, T>; };
template<> struct Convert<BE8> { using Result = std::tuple<T, T, T, F, T, F, F, F>; };
template<> struct Convert<BE9> { using Result = std::tuple<T, T, T, F, T, F, F, T>; };
template<> struct Convert<BEA> { using Result = std::tuple<T, T, T, F, T, F, T, F>; };
template<> struct Convert<BEB> { using Result = std::tuple<T, T, T, F, T, F, T, T>; };
template<> struct Convert<BEC> { using Result = std::tuple<T, T, T, F, T, T, F, F>; };
template<> struct Convert<BED> { using Result = std::tuple<T, T, T, F, T, T, F, T>; };
template<> struct Convert<BEE> { using Result = std::tuple<T, T, T, F, T, T, T, F>; };
template<> struct Convert<BEF> { using Result = std::tuple<T, T, T, F, T, T, T, T>; };
template<> struct Convert<BF0> { using Result = std::tuple<T, T, T, T, F, F, F, F>; };
template<> struct Convert<BF1> { using Result = std::tuple<T, T, T, T, F, F, F, T>; };
template<> struct Convert<BF2> { using Result = std::tuple<T, T, T, T, F, F, T, F>; };
template<> struct Convert<BF3> { using Result = std::tuple<T, T, T, T, F, F, T, T>; };
template<> struct Convert<BF4> { using Result = std::tuple<T, T, T, T, F, T, F, F>; };
template<> struct Convert<BF5> { using Result = std::tuple<T, T, T, T, F, T, F, T>; };
template<> struct Convert<BF6> { using Result = std::tuple<T, T, T, T, F, T, T, F>; };
template<> struct Convert<BF7> { using Result = std::tuple<T, T, T, T, F, T, T, T>; };
template<> struct Convert<BF8> { using Result = std::tuple<T, T, T, T, T, F, F, F>; };
template<> struct Convert<BF9> { using Result = std::tuple<T, T, T, T, T, F, F, T>; };
template<> struct Convert<BFA> { using Result = std::tuple<T, T, T, T, T, F, T, F>; };
template<> struct Convert<BFB> { using Result = std::tuple<T, T, T, T, T, F, T, T>; };
template<> struct Convert<BFC> { using Result = std::tuple<T, T, T, T, T, T, F, F>; };
template<> struct Convert<BFD> { using Result = std::tuple<T, T, T, T, T, T, F, T>; };
template<> struct Convert<BFE> { using Result = std::tuple<T, T, T, T, T, T, T, F>; };
template<> struct Convert<BFF> { using Result = std::tuple<T, T, T, T, T, T, T, T>; };
template<> struct Convert<std::tuple<F, F, F, F, F, F, F, F>> { using Result = B00; };
template<> struct Convert<std::tuple<F, F, F, F, F, F, F, T>> { using Result = B01; };
template<> struct Convert<std::tuple<F, F, F, F, F, F, T, F>> { using Result = B02; };
template<> struct Convert<std::tuple<F, F, F, F, F, F, T, T>> { using Result = B03; };
template<> struct Convert<std::tuple<F, F, F, F, F, T, F, F>> { using Result = B04; };
template<> struct Convert<std::tuple<F, F, F, F, F, T, F, T>> { using Result = B05; };
template<> struct Convert<std::tuple<F, F, F, F, F, T, T, F>> { using Result = B06; };
template<> struct Convert<std::tuple<F, F, F, F, F, T, T, T>> { using Result = B07; };
template<> struct Convert<std::tuple<F, F, F, F, T, F, F, F>> { using Result = B08; };
template<> struct Convert<std::tuple<F, F, F, F, T, F, F, T>> { using Result = B09; };
template<> struct Convert<std::tuple<F, F, F, F, T, F, T, F>> { using Result = B0A; };
template<> struct Convert<std::tuple<F, F, F, F, T, F, T, T>> { using Result = B0B; };
template<> struct Convert<std::tuple<F, F, F, F, T, T, F, F>> { using Result = B0C; };
template<> struct Convert<std::tuple<F, F, F, F, T, T, F, T>> { using Result = B0D; };
template<> struct Convert<std::tuple<F, F, F, F, T, T, T, F>> { using Result = B0E; };
template<> struct Convert<std::tuple<F, F, F, F, T, T, T, T>> { using Result = B0F; };
template<> struct Convert<std::tuple<F, F, F, T, F, F, F, F>> { using Result = B10; };
template<> struct Convert<std::tuple<F, F, F, T, F, F, F, T>> { using Result = B11; };
template<> struct Convert<std::tuple<F, F, F, T, F, F, T, F>> { using Result = B12; };
template<> struct Convert<std::tuple<F, F, F, T, F, F, T, T>> { using Result = B13; };
template<> struct Convert<std::tuple<F, F, F, T, F, T, F, F>> { using Result = B14; };
template<> struct Convert<std::tuple<F, F, F, T, F, T, F, T>> { using Result = B15; };
template<> struct Convert<std::tuple<F, F, F, T, F, T, T, F>> { using Result = B16; };
template<> struct Convert<std::tuple<F, F, F, T, F, T, T, T>> { using Result = B17; };
template<> struct Convert<std::tuple<F, F, F, T, T, F, F, F>> { using Result = B18; };
template<> struct Convert<std::tuple<F, F, F, T, T, F, F, T>> { using Result = B19; };
template<> struct Convert<std::tuple<F, F, F, T, T, F, T, F>> { using Result = B1A; };
template<> struct Convert<std::tuple<F, F, F, T, T, F, T, T>> { using Result = B1B; };
template<> struct Convert<std::tuple<F, F, F, T, T, T, F, F>> { using Result = B1C; };
template<> struct Convert<std::tuple<F, F, F, T, T, T, F, T>> { using Result = B1D; };
template<> struct Convert<std::tuple<F, F, F, T, T, T, T, F>> { using Result = B1E; };
template<> struct Convert<std::tuple<F, F, F, T, T, T, T, T>> { using Result = B1F; };
template<> struct Convert<std::tuple<F, F, T, F, F, F, F, F>> { using Result = B20; };
template<> struct Convert<std::tuple<F, F, T, F, F, F, F, T>> { using Result = B21; };
template<> struct Convert<std::tuple<F, F, T, F, F, F, T, F>> { using Result = B22; };
template<> struct Convert<std::tuple<F, F, T, F, F, F, T, T>> { using Result = B23; };
template<> struct Convert<std::tuple<F, F, T, F, F, T, F, F>> { using Result = B24; };
template<> struct Convert<std::tuple<F, F, T, F, F, T, F, T>> { using Result = B25; };
template<> struct Convert<std::tuple<F, F, T, F, F, T, T, F>> { using Result = B26; };
template<> struct Convert<std::tuple<F, F, T, F, F, T, T, T>> { using Result = B27; };
template<> struct Convert<std::tuple<F, F, T, F, T, F, F, F>> { using Result = B28; };
template<> struct Convert<std::tuple<F, F, T, F, T, F, F, T>> { using Result = B29; };
template<> struct Convert<std::tuple<F, F, T, F, T, F, T, F>> { using Result = B2A; };
template<> struct Convert<std::tuple<F, F, T, F, T, F, T, T>> { using Result = B2B; };
template<> struct Convert<std::tuple<F, F, T, F, T, T, F, F>> { using Result = B2C; };
template<> struct Convert<std::tuple<F, F, T, F, T, T, F, T>> { using Result = B2D; };
template<> struct Convert<std::tuple<F, F, T, F, T, T, T, F>> { using Result = B2E; };
template<> struct Convert<std::tuple<F, F, T, F, T, T, T, T>> { using Result = B2F; };
template<> struct Convert<std::tuple<F, F, T, T, F, F, F, F>> { using Result = B30; };
template<> struct Convert<std::tuple<F, F, T, T, F, F, F, T>> { using Result = B31; };
template<> struct Convert<std::tuple<F, F, T, T, F, F, T, F>> { using Result = B32; };
template<> struct Convert<std::tuple<F, F, T, T, F, F, T, T>> { using Result = B33; };
template<> struct Convert<std::tuple<F, F, T, T, F, T, F, F>> { using Result = B34; };
template<> struct Convert<std::tuple<F, F, T, T, F, T, F, T>> { using Result = B35; };
template<> struct Convert<std::tuple<F, F, T, T, F, T, T, F>> { using Result = B36; };
template<> struct Convert<std::tuple<F, F, T, T, F, T, T, T>> { using Result = B37; };
template<> struct Convert<std::tuple<F, F, T, T, T, F, F, F>> { using Result = B38; };
template<> struct Convert<std::tuple<F, F, T, T, T, F, F, T>> { using Result = B39; };
template<> struct Convert<std::tuple<F, F, T, T, T, F, T, F>> { using Result = B3A; };
template<> struct Convert<std::tuple<F, F, T, T, T, F, T, T>> { using Result = B3B; };
template<> struct Convert<std::tuple<F, F, T, T, T, T, F, F>> { using Result = B3C; };
template<> struct Convert<std::tuple<F, F, T, T, T, T, F, T>> { using Result = B3D; };
template<> struct Convert<std::tuple<F, F, T, T, T, T, T, F>> { using Result = B3E; };
template<> struct Convert<std::tuple<F, F, T, T, T, T, T, T>> { using Result = B3F; };
template<> struct Convert<std::tuple<F, T, F, F, F, F, F, F>> { using Result = B40; };
template<> struct Convert<std::tuple<F, T, F, F, F, F, F, T>> { using Result = B41; };
template<> struct Convert<std::tuple<F, T, F, F, F, F, T, F>> { using Result = B42; };
template<> struct Convert<std::tuple<F, T, F, F, F, F, T, T>> { using Result = B43; };
template<> struct Convert<std::tuple<F, T, F, F, F, T, F, F>> { using Result = B44; };
template<> struct Convert<std::tuple<F, T, F, F, F, T, F, T>> { using Result = B45; };
template<> struct Convert<std::tuple<F, T, F, F, F, T, T, F>> { using Result = B46; };
template<> struct Convert<std::tuple<F, T, F, F, F, T, T, T>> { using Result = B47; };
template<> struct Convert<std::tuple<F, T, F, F, T, F, F, F>> { using Result = B48; };
template<> struct Convert<std::tuple<F, T, F, F, T, F, F, T>> { using Result = B49; };
template<> struct Convert<std::tuple<F, T, F, F, T, F, T, F>> { using Result = B4A; };
template<> struct Convert<std::tuple<F, T, F, F, T, F, T, T>> { using Result = B4B; };
template<> struct Convert<std::tuple<F, T, F, F, T, T, F, F>> { using Result = B4C; };
template<> struct Convert<std::tuple<F, T, F, F, T, T, F, T>> { using Result = B4D; };
template<> struct Convert<std::tuple<F, T, F, F, T, T, T, F>> { using Result = B4E; };
template<> struct Convert<std::tuple<F, T, F, F, T, T, T, T>> { using Result = B4F; };
template<> struct Convert<std::tuple<F, T, F, T, F, F, F, F>> { using Result = B50; };
template<> struct Convert<std::tuple<F, T, F, T, F, F, F, T>> { using Result = B51; };
template<> struct Convert<std::tuple<F, T, F, T, F, F, T, F>> { using Result = B52; };
template<> struct Convert<std::tuple<F, T, F, T, F, F, T, T>> { using Result = B53; };
template<> struct Convert<std::tuple<F, T, F, T, F, T, F, F>> { using Result = B54; };
template<> struct Convert<std::tuple<F, T, F, T, F, T, F, T>> { using Result = B55; };
template<> struct Convert<std::tuple<F, T, F, T, F, T, T, F>> { using Result = B56; };
template<> struct Convert<std::tuple<F, T, F, T, F, T, T, T>> { using Result = B57; };
template<> struct Convert<std::tuple<F, T, F, T, T, F, F, F>> { using Result = B58; };
template<> struct Convert<std::tuple<F, T, F, T, T, F, F, T>> { using Result = B59; };
template<> struct Convert<std::tuple<F, T, F, T, T, F, T, F>> { using Result = B5A; };
template<> struct Convert<std::tuple<F, T, F, T, T, F, T, T>> { using Result = B5B; };
template<> struct Convert<std::tuple<F, T, F, T, T, T, F, F>> { using Result = B5C; };
template<> struct Convert<std::tuple<F, T, F, T, T, T, F, T>> { using Result = B5D; };
template<> struct Convert<std::tuple<F, T, F, T, T, T, T, F>> { using Result = B5E; };
template<> struct Convert<std::tuple<F, T, F, T, T, T, T, T>> { using Result = B5F; };
template<> struct Convert<std::tuple<F, T, T, F, F, F, F, F>> { using Result = B60; };
template<> struct Convert<std::tuple<F, T, T, F, F, F, F, T>> { using Result = B61; };
template<> struct Convert<std::tuple<F, T, T, F, F, F, T, F>> { using Result = B62; };
template<> struct Convert<std::tuple<F, T, T, F, F, F, T, T>> { using Result = B63; };
template<> struct Convert<std::tuple<F, T, T, F, F, T, F, F>> { using Result = B64; };
template<> struct Convert<std::tuple<F, T, T, F, F, T, F, T>> { using Result = B65; };
template<> struct Convert<std::tuple<F, T, T, F, F, T, T, F>> { using Result = B66; };
template<> struct Convert<std::tuple<F, T, T, F, F, T, T, T>> { using Result = B67; };
template<> struct Convert<std::tuple<F, T, T, F, T, F, F, F>> { using Result = B68; };
template<> struct Convert<std::tuple<F, T, T, F, T, F, F, T>> { using Result = B69; };
template<> struct Convert<std::tuple<F, T, T, F, T, F, T, F>> { using Result = B6A; };
template<> struct Convert<std::tuple<F, T, T, F, T, F, T, T>> { using Result = B6B; };
template<> struct Convert<std::tuple<F, T, T, F, T, T, F, F>> { using Result = B6C; };
template<> struct Convert<std::tuple<F, T, T, F, T, T, F, T>> { using Result = B6D; };
template<> struct Convert<std::tuple<F, T, T, F, T, T, T, F>> { using Result = B6E; };
template<> struct Convert<std::tuple<F, T, T, F, T, T, T, T>> { using Result = B6F; };
template<> struct Convert<std::tuple<F, T, T, T, F, F, F, F>> { using Result = B70; };
template<> struct Convert<std::tuple<F, T, T, T, F, F, F, T>> { using Result = B71; };
template<> struct Convert<std::tuple<F, T, T, T, F, F, T, F>> { using Result = B72; };
template<> struct Convert<std::tuple<F, T, T, T, F, F, T, T>> { using Result = B73; };
template<> struct Convert<std::tuple<F, T, T, T, F, T, F, F>> { using Result = B74; };
template<> struct Convert<std::tuple<F, T, T, T, F, T, F, T>> { using Result = B75; };
template<> struct Convert<std::tuple<F, T, T, T, F, T, T, F>> { using Result = B76; };
template<> struct Convert<std::tuple<F, T, T, T, F, T, T, T>> { using Result = B77; };
template<> struct Convert<std::tuple<F, T, T, T, T, F, F, F>> { using Result = B78; };
template<> struct Convert<std::tuple<F, T, T, T, T, F, F, T>> { using Result = B79; };
template<> struct Convert<std::tuple<F, T, T, T, T, F, T, F>> { using Result = B7A; };
template<> struct Convert<std::tuple<F, T, T, T, T, F, T, T>> { using Result = B7B; };
template<> struct Convert<std::tuple<F, T, T, T, T, T, F, F>> { using Result = B7C; };
template<> struct Convert<std::tuple<F, T, T, T, T, T, F, T>> { using Result = B7D; };
template<> struct Convert<std::tuple<F, T, T, T, T, T, T, F>> { using Result = B7E; };
template<> struct Convert<std::tuple<F, T, T, T, T, T, T, T>> { using Result = B7F; };
template<> struct Convert<std::tuple<T, F, F, F, F, F, F, F>> { using Result = B80; };
template<> struct Convert<std::tuple<T, F, F, F, F, F, F, T>> { using Result = B81; };
template<> struct Convert<std::tuple<T, F, F, F, F, F, T, F>> { using Result = B82; };
template<> struct Convert<std::tuple<T, F, F, F, F, F, T, T>> { using Result = B83; };
template<> struct Convert<std::tuple<T, F, F, F, F, T, F, F>> { using Result = B84; };
template<> struct Convert<std::tuple<T, F, F, F, F, T, F, T>> { using Result = B85; };
template<> struct Convert<std::tuple<T, F, F, F, F, T, T, F>> { using Result = B86; };
template<> struct Convert<std::tuple<T, F, F, F, F, T, T, T>> { using Result = B87; };
template<> struct Convert<std::tuple<T, F, F, F, T, F, F, F>> { using Result = B88; };
template<> struct Convert<std::tuple<T, F, F, F, T, F, F, T>> { using Result = B89; };
template<> struct Convert<std::tuple<T, F, F, F, T, F, T, F>> { using Result = B8A; };
template<> struct Convert<std::tuple<T, F, F, F, T, F, T, T>> { using Result = B8B; };
template<> struct Convert<std::tuple<T, F, F, F, T, T, F, F>> { using Result = B8C; };
template<> struct Convert<std::tuple<T, F, F, F, T, T, F, T>> { using Result = B8D; };
template<> struct Convert<std::tuple<T, F, F, F, T, T, T, F>> { using Result = B8E; };
template<> struct Convert<std::tuple<T, F, F, F, T, T, T, T>> { using Result = B8F; };
template<> struct Convert<std::tuple<T, F, F, T, F, F, F, F>> { using Result = B90; };
template<> struct Convert<std::tuple<T, F, F, T, F, F, F, T>> { using Result = B91; };
template<> struct Convert<std::tuple<T, F, F, T, F, F, T, F>> { using Result = B92; };
template<> struct Convert<std::tuple<T, F, F, T, F, F, T, T>> { using Result = B93; };
template<> struct Convert<std::tuple<T, F, F, T, F, T, F, F>> { using Result = B94; };
template<> struct Convert<std::tuple<T, F, F, T, F, T, F, T>> { using Result = B95; };
template<> struct Convert<std::tuple<T, F, F, T, F, T, T, F>> { using Result = B96; };
template<> struct Convert<std::tuple<T, F, F, T, F, T, T, T>> { using Result = B97; };
template<> struct Convert<std::tuple<T, F, F, T, T, F, F, F>> { using Result = B98; };
template<> struct Convert<std::tuple<T, F, F, T, T, F, F, T>> { using Result = B99; };
template<> struct Convert<std::tuple<T, F, F, T, T, F, T, F>> { using Result = B9A; };
template<> struct Convert<std::tuple<T, F, F, T, T, F, T, T>> { using Result = B9B; };
template<> struct Convert<std::tuple<T, F, F, T, T, T, F, F>> { using Result = B9C; };
template<> struct Convert<std::tuple<T, F, F, T, T, T, F, T>> { using Result = B9D; };
template<> struct Convert<std::tuple<T, F, F, T, T, T, T, F>> { using Result = B9E; };
template<> struct Convert<std::tuple<T, F, F, T, T, T, T, T>> { using Result = B9F; };
template<> struct Convert<std::tuple<T, F, T, F, F, F, F, F>> { using Result = BA0; };
template<> struct Convert<std::tuple<T, F, T, F, F, F, F, T>> { using Result = BA1; };
template<> struct Convert<std::tuple<T, F, T, F, F, F, T, F>> { using Result = BA2; };
template<> struct Convert<std::tuple<T, F, T, F, F, F, T, T>> { using Result = BA3; };
template<> struct Convert<std::tuple<T, F, T, F, F, T, F, F>> { using Result = BA4; };
template<> struct Convert<std::tuple<T, F, T, F, F, T, F, T>> { using Result = BA5; };
template<> struct Convert<std::tuple<T, F, T, F, F, T, T, F>> { using Result = BA6; };
template<> struct Convert<std::tuple<T, F, T, F, F, T, T, T>> { using Result = BA7; };
template<> struct Convert<std::tuple<T, F, T, F, T, F, F, F>> { using Result = BA8; };
template<> struct Convert<std::tuple<T, F, T, F, T, F, F, T>> { using Result = BA9; };
template<> struct Convert<std::tuple<T, F, T, F, T, F, T, F>> { using Result = BAA; };
template<> struct Convert<std::tuple<T, F, T, F, T, F, T, T>> { using Result = BAB; };
template<> struct Convert<std::tuple<T, F, T, F, T, T, F, F>> { using Result = BAC; };
template<> struct Convert<std::tuple<T, F, T, F, T, T, F, T>> { using Result = BAD; };
template<> struct Convert<std::tuple<T, F, T, F, T, T, T, F>> { using Result = BAE; };
template<> struct Convert<std::tuple<T, F, T, F, T, T, T, T>> { using Result = BAF; };
template<> struct Convert<std::tuple<T, F, T, T, F, F, F, F>> { using Result = BB0; };
template<> struct Convert<std::tuple<T, F, T, T, F, F, F, T>> { using Result = BB1; };
template<> struct Convert<std::tuple<T, F, T, T, F, F, T, F>> { using Result = BB2; };
template<> struct Convert<std::tuple<T, F, T, T, F, F, T, T>> { using Result = BB3; };
template<> struct Convert<std::tuple<T, F, T, T, F, T, F, F>> { using Result = BB4; };
template<> struct Convert<std::tuple<T, F, T, T, F, T, F, T>> { using Result = BB5; };
template<> struct Convert<std::tuple<T, F, T, T, F, T, T, F>> { using Result = BB6; };
template<> struct Convert<std::tuple<T, F, T, T, F, T, T, T>> { using Result = BB7; };
template<> struct Convert<std::tuple<T, F, T, T, T, F, F, F>> { using Result = BB8; };
template<> struct Convert<std::tuple<T, F, T, T, T, F, F, T>> { using Result = BB9; };
template<> struct Convert<std::tuple<T, F, T, T, T, F, T, F>> { using Result = BBA; };
template<> struct Convert<std::tuple<T, F, T, T, T, F, T, T>> { using Result = BBB; };
template<> struct Convert<std::tuple<T, F, T, T, T, T, F, F>> { using Result = BBC; };
template<> struct Convert<std::tuple<T, F, T, T, T, T, F, T>> { using Result = BBD; };
template<> struct Convert<std::tuple<T, F, T, T, T, T, T, F>> { using Result = BBE; };
template<> struct Convert<std::tuple<T, F, T, T, T, T, T, T>> { using Result = BBF; };
template<> struct Convert<std::tuple<T, T, F, F, F, F, F, F>> { using Result = BC0; };
template<> struct Convert<std::tuple<T, T, F, F, F, F, F, T>> { using Result = BC1; };
template<> struct Convert<std::tuple<T, T, F, F, F, F, T, F>> { using Result = BC2; };
template<> struct Convert<std::tuple<T, T, F, F, F, F, T, T>> { using Result = BC3; };
template<> struct Convert<std::tuple<T, T, F, F, F, T, F, F>> { using Result = BC4; };
template<> struct Convert<std::tuple<T, T, F, F, F, T, F, T>> { using Result = BC5; };
template<> struct Convert<std::tuple<T, T, F, F, F, T, T, F>> { using Result = BC6; };
template<> struct Convert<std::tuple<T, T, F, F, F, T, T, T>> { using Result = BC7; };
template<> struct Convert<std::tuple<T, T, F, F, T, F, F, F>> { using Result = BC8; };
template<> struct Convert<std::tuple<T, T, F, F, T, F, F, T>> { using Result = BC9; };
template<> struct Convert<std::tuple<T, T, F, F, T, F, T, F>> { using Result = BCA; };
template<> struct Convert<std::tuple<T, T, F, F, T, F, T, T>> { using Result = BCB; };
template<> struct Convert<std::tuple<T, T, F, F, T, T, F, F>> { using Result = BCC; };
template<> struct Convert<std::tuple<T, T, F, F, T, T, F, T>> { using Result = BCD; };
template<> struct Convert<std::tuple<T, T, F, F, T, T, T, F>> { using Result = BCE; };
template<> struct Convert<std::tuple<T, T, F, F, T, T, T, T>> { using Result = BCF; };
template<> struct Convert<std::tuple<T, T, F, T, F, F, F, F>> { using Result = BD0; };
template<> struct Convert<std::tuple<T, T, F, T, F, F, F, T>> { using Result = BD1; };
template<> struct Convert<std::tuple<T, T, F, T, F, F, T, F>> { using Result = BD2; };
template<> struct Convert<std::tuple<T, T, F, T, F, F, T, T>> { using Result = BD3; };
template<> struct Convert<std::tuple<T, T, F, T, F, T, F, F>> { using Result = BD4; };
template<> struct Convert<std::tuple<T, T, F, T, F, T, F, T>> { using Result = BD5; };
template<> struct Convert<std::tuple<T, T, F, T, F, T, T, F>> { using Result = BD6; };
template<> struct Convert<std::tuple<T, T, F, T, F, T, T, T>> { using Result = BD7; };
template<> struct Convert<std::tuple<T, T, F, T, T, F, F, F>> { using Result = BD8; };
template<> struct Convert<std::tuple<T, T, F, T, T, F, F, T>> { using Result = BD9; };
template<> struct Convert<std::tuple<T, T, F, T, T, F, T, F>> { using Result = BDA; };
template<> struct Convert<std::tuple<T, T, F, T, T, F, T, T>> { using Result = BDB; };
template<> struct Convert<std::tuple<T, T, F, T, T, T, F, F>> { using Result = BDC; };
template<> struct Convert<std::tuple<T, T, F, T, T, T, F, T>> { using Result = BDD; };
template<> struct Convert<std::tuple<T, T, F, T, T, T, T, F>> { using Result = BDE; };
template<> struct Convert<std::tuple<T, T, F, T, T, T, T, T>> { using Result = BDF; };
template<> struct Convert<std::tuple<T, T, T, F, F, F, F, F>> { using Result = BE0; };
template<> struct Convert<std::tuple<T, T, T, F, F, F, F, T>> { using Result = BE1; };
template<> struct Convert<std::tuple<T, T, T, F, F, F, T, F>> { using Result = BE2; };
template<> struct Convert<std::tuple<T, T, T, F, F, F, T, T>> { using Result = BE3; };
template<> struct Convert<std::tuple<T, T, T, F, F, T, F, F>> { using Result = BE4; };
template<> struct Convert<std::tuple<T, T, T, F, F, T, F, T>> { using Result = BE5; };
template<> struct Convert<std::tuple<T, T, T, F, F, T, T, F>> { using Result = BE6; };
template<> struct Convert<std::tuple<T, T, T, F, F, T, T, T>> { using Result = BE7; };
template<> struct Convert<std::tuple<T, T, T, F, T, F, F, F>> { using Result = BE8; };
template<> struct Convert<std::tuple<T, T, T, F, T, F, F, T>> { using Result = BE9; };
template<> struct Convert<std::tuple<T, T, T, F, T, F, T, F>> { using Result = BEA; };
template<> struct Convert<std::tuple<T, T, T, F, T, F, T, T>> { using Result = BEB; };
template<> struct Convert<std::tuple<T, T, T, F, T, T, F, F>> { using Result = BEC; };
template<> struct Convert<std::tuple<T, T, T, F, T, T, F, T>> { using Result = BED; };
template<> struct Convert<std::tuple<T, T, T, F, T, T, T, F>> { using Result = BEE; };
template<> struct Convert<std::tuple<T, T, T, F, T, T, T, T>> { using Result = BEF; };
template<> struct Convert<std::tuple<T, T, T, T, F, F, F, F>> { using Result = BF0; };
template<> struct Convert<std::tuple<T, T, T, T, F, F, F, T>> { using Result = BF1; };
template<> struct Convert<std::tuple<T, T, T, T, F, F, T, F>> { using Result = BF2; };
template<> struct Convert<std::tuple<T, T, T, T, F, F, T, T>> { using Result = BF3; };
template<> struct Convert<std::tuple<T, T, T, T, F, T, F, F>> { using Result = BF4; };
template<> struct Convert<std::tuple<T, T, T, T, F, T, F, T>> { using Result = BF5; };
template<> struct Convert<std::tuple<T, T, T, T, F, T, T, F>> { using Result = BF6; };
template<> struct Convert<std::tuple<T, T, T, T, F, T, T, T>> { using Result = BF7; };
template<> struct Convert<std::tuple<T, T, T, T, T, F, F, F>> { using Result = BF8; };
template<> struct Convert<std::tuple<T, T, T, T, T, F, F, T>> { using Result = BF9; };
template<> struct Convert<std::tuple<T, T, T, T, T, F, T, F>> { using Result = BFA; };
template<> struct Convert<std::tuple<T, T, T, T, T, F, T, T>> { using Result = BFB; };
template<> struct Convert<std::tuple<T, T, T, T, T, T, F, F>> { using Result = BFC; };
template<> struct Convert<std::tuple<T, T, T, T, T, T, F, T>> { using Result = BFD; };
template<> struct Convert<std::tuple<T, T, T, T, T, T, T, F>> { using Result = BFE; };
template<> struct Convert<std::tuple<T, T, T, T, T, T, T, T>> { using Result = BFF; };

template<typename T> struct Not {
    using Result = typename Convert<std::tuple<
        typename Not<std::tuple_element_t<0, typename Convert<T>::Result>>::Result,
        typename Not<std::tuple_element_t<1, typename Convert<T>::Result>>::Result,
        typename Not<std::tuple_element_t<2, typename Convert<T>::Result>>::Result,
        typename Not<std::tuple_element_t<3, typename Convert<T>::Result>>::Result,
        typename Not<std::tuple_element_t<4, typename Convert<T>::Result>>::Result,
        typename Not<std::tuple_element_t<5, typename Convert<T>::Result>>::Result,
        typename Not<std::tuple_element_t<6, typename Convert<T>::Result>>::Result,
        typename Not<std::tuple_element_t<7, typename Convert<T>::Result>>::Result
    >>::Result;
};
template<> struct Not<T> { using Result = F; };
template<> struct Not<F> { using Result = T; };

template<typename T> struct And;
template<> struct And<BitPair<F, F>> { using Result = F; };
template<> struct And<BitPair<F, T>> { using Result = F; };
template<> struct And<BitPair<T, F>> { using Result = F; };
template<> struct And<BitPair<T, T>> { using Result = T; };

template<typename A, typename B>
struct And<BytePair<A, B>> {
    using Result = typename Convert<std::tuple<
        typename And<BitPair<std::tuple_element_t<0, typename Convert<A>::Result>, std::tuple_element_t<0, typename Convert<B>::Result>>>::Result,
        typename And<BitPair<std::tuple_element_t<1, typename Convert<A>::Result>, std::tuple_element_t<1, typename Convert<B>::Result>>>::Result,
        typename And<BitPair<std::tuple_element_t<2, typename Convert<A>::Result>, std::tuple_element_t<2, typename Convert<B>::Result>>>::Result,
        typename And<BitPair<std::tuple_element_t<3, typename Convert<A>::Result>, std::tuple_element_t<3, typename Convert<B>::Result>>>::Result,
        typename And<BitPair<std::tuple_element_t<4, typename Convert<A>::Result>, std::tuple_element_t<4, typename Convert<B>::Result>>>::Result,
        typename And<BitPair<std::tuple_element_t<5, typename Convert<A>::Result>, std::tuple_element_t<5, typename Convert<B>::Result>>>::Result,
        typename And<BitPair<std::tuple_element_t<6, typename Convert<A>::Result>, std::tuple_element_t<6, typename Convert<B>::Result>>>::Result,
        typename And<BitPair<std::tuple_element_t<7, typename Convert<A>::Result>, std::tuple_element_t<7, typename Convert<B>::Result>>>::Result
    >>::Result;
};

template<typename T> struct Or;
template<> struct Or<BitPair<F, F>> { using Result = F; };
template<> struct Or<BitPair<F, T>> { using Result = T; };
template<> struct Or<BitPair<T, F>> { using Result = T; };
template<> struct Or<BitPair<T, T>> { using Result = T; };

template<typename A, typename B>
struct Or<BytePair<A, B>> {
    using Result = typename Convert<std::tuple<
        typename Or<BitPair<std::tuple_element_t<0, typename Convert<A>::Result>, std::tuple_element_t<0, typename Convert<B>::Result>>>::Result,
        typename Or<BitPair<std::tuple_element_t<1, typename Convert<A>::Result>, std::tuple_element_t<1, typename Convert<B>::Result>>>::Result,
        typename Or<BitPair<std::tuple_element_t<2, typename Convert<A>::Result>, std::tuple_element_t<2, typename Convert<B>::Result>>>::Result,
        typename Or<BitPair<std::tuple_element_t<3, typename Convert<A>::Result>, std::tuple_element_t<3, typename Convert<B>::Result>>>::Result,
        typename Or<BitPair<std::tuple_element_t<4, typename Convert<A>::Result>, std::tuple_element_t<4, typename Convert<B>::Result>>>::Result,
        typename Or<BitPair<std::tuple_element_t<5, typename Convert<A>::Result>, std::tuple_element_t<5, typename Convert<B>::Result>>>::Result,
        typename Or<BitPair<std::tuple_element_t<6, typename Convert<A>::Result>, std::tuple_element_t<6, typename Convert<B>::Result>>>::Result,
        typename Or<BitPair<std::tuple_element_t<7, typename Convert<A>::Result>, std::tuple_element_t<7, typename Convert<B>::Result>>>::Result
    >>::Result;
};

template<typename T> struct Xor;
template<> struct Xor<BitPair<F, F>> { using Result = F; };
template<> struct Xor<BitPair<F, T>> { using Result = T; };
template<> struct Xor<BitPair<T, F>> { using Result = T; };
template<> struct Xor<BitPair<T, T>> { using Result = F; };

template<typename A, typename B>
struct Xor<BytePair<A, B>> {
    using Result = typename Convert<std::tuple<
        typename Xor<BitPair<std::tuple_element_t<0, typename Convert<A>::Result>, std::tuple_element_t<0, typename Convert<B>::Result>>>::Result,
        typename Xor<BitPair<std::tuple_element_t<1, typename Convert<A>::Result>, std::tuple_element_t<1, typename Convert<B>::Result>>>::Result,
        typename Xor<BitPair<std::tuple_element_t<2, typename Convert<A>::Result>, std::tuple_element_t<2, typename Convert<B>::Result>>>::Result,
        typename Xor<BitPair<std::tuple_element_t<3, typename Convert<A>::Result>, std::tuple_element_t<3, typename Convert<B>::Result>>>::Result,
        typename Xor<BitPair<std::tuple_element_t<4, typename Convert<A>::Result>, std::tuple_element_t<4, typename Convert<B>::Result>>>::Result,
        typename Xor<BitPair<std::tuple_element_t<5, typename Convert<A>::Result>, std::tuple_element_t<5, typename Convert<B>::Result>>>::Result,
        typename Xor<BitPair<std::tuple_element_t<6, typename Convert<A>::Result>, std::tuple_element_t<6, typename Convert<B>::Result>>>::Result,
        typename Xor<BitPair<std::tuple_element_t<7, typename Convert<A>::Result>, std::tuple_element_t<7, typename Convert<B>::Result>>>::Result
    >>::Result;
};

template<typename T> struct HalfAdder;
template<> struct HalfAdder<BitPair<F, F>> { using Result = F; using Carry = F; };
template<> struct HalfAdder<BitPair<F, T>> { using Result = T; using Carry = F; };
template<> struct HalfAdder<BitPair<T, F>> { using Result = T; using Carry = F; };
template<> struct HalfAdder<BitPair<T, T>> { using Result = F; using Carry = T; };

template <typename A, typename B, typename C>
struct BitTripple {};

template <typename T> struct FullAdder;
template<> struct FullAdder<BitTripple<F, F, F>> { using Result = F; using Carry = F; };
template<> struct FullAdder<BitTripple<F, F, T>> { using Result = T; using Carry = F; };
template<> struct FullAdder<BitTripple<F, T, F>> { using Result = T; using Carry = F; };
template<> struct FullAdder<BitTripple<F, T, T>> { using Result = T; using Carry = T; };
template<> struct FullAdder<BitTripple<T, F, F>> { using Result = T; using Carry = F; };
template<> struct FullAdder<BitTripple<T, F, T>> { using Result = F; using Carry = T; };
template<> struct FullAdder<BitTripple<T, T, F>> { using Result = F; using Carry = T; };
template<> struct FullAdder<BitTripple<T, T, T>> { using Result = T; using Carry = T; };

template<typename T> struct Add;

// TODO: fix arithmetic ops

// template<typename A, typename B>
// struct Add<BytePair<A, B>> {
//     using Result = 
// };

// instructions
struct NotA {};
struct AndAB {};
struct XorAB {};
struct OrAB {};
struct SwapAB {};
struct PushA {};
struct PushB {};
struct PopA {};
struct PopB {};
struct Pop {};
struct SwapTop {};
struct Nop {};

template <typename RegA, typename RegB, typename Stack, typename Text>
struct ProgramState {};

template <typename T> struct VMStep;

template <typename RegA, typename RegB, typename Stack>
struct VMStep<ProgramState<RegA, RegB, Stack, Nop>> {
    using Next = RegA;
};

template<typename RegA, typename RegB, typename Stack>
struct VMStep<ProgramState<RegA, RegB, Stack, NotA>> {
    using Next = typename VMStep<
        ProgramState<typename Not<RegA>::Result, RegB, Stack, Nop>
    >::Next;
};

template<typename RegA, typename RegB, typename Stack>
struct VMStep<ProgramState<RegA, RegB, Stack, AndAB>> {
    using Next = typename VMStep<
        ProgramState<typename And<BytePair<RegA, RegB>>::Result, RegB, Stack, Nop>
    >::Next;
};

template<typename RegA, typename RegB, typename Stack>
struct VMStep<ProgramState<RegA, RegB, Stack, XorAB>> {
    using Next = typename VMStep<
        ProgramState<typename Xor<BytePair<RegA, RegB>>::Result, RegB, Stack, Nop>
    >::Next;
};

template<typename RegA, typename RegB, typename Stack>
struct VMStep<ProgramState<RegA, RegB, Stack, OrAB>> {
    using Next = typename VMStep<
        ProgramState<typename Or<BytePair<RegA, RegB>>::Result, RegB, Stack, Nop>
    >::Next;
};

template<typename RegA, typename RegB, typename Stack>
struct VMStep<ProgramState<RegA, RegB, Stack, SwapAB>> {
    using Next = typename VMStep<
        ProgramState<RegB, RegA, Stack, Nop>
    >::Next;
};

template<typename RegA, typename RegB, typename Stack>
struct VMStep<ProgramState<RegA, RegB, Stack, PushA>> {
    using Next = typename VMStep<
        ProgramState<RegA, RegB, std::tuple<RegA, Stack>, Nop>
    >::Next;
};

template<typename RegA, typename RegB, typename Stack>
struct VMStep<ProgramState<RegA, RegB, Stack, PushB>> {
    using Next = typename VMStep<
        ProgramState<RegA, RegB, std::tuple<RegB, Stack>, Nop>
    >::Next;
};

template <typename T> struct Valued {};
template<> struct Valued<B00> { static constexpr uint8_t VALUE = 0x00; };
template<> struct Valued<B01> { static constexpr uint8_t VALUE = 0x01; };
template<> struct Valued<B02> { static constexpr uint8_t VALUE = 0x02; };
template<> struct Valued<B03> { static constexpr uint8_t VALUE = 0x03; };
template<> struct Valued<B04> { static constexpr uint8_t VALUE = 0x04; };
template<> struct Valued<B05> { static constexpr uint8_t VALUE = 0x05; };
template<> struct Valued<B06> { static constexpr uint8_t VALUE = 0x06; };
template<> struct Valued<B07> { static constexpr uint8_t VALUE = 0x07; };
template<> struct Valued<B08> { static constexpr uint8_t VALUE = 0x08; };
template<> struct Valued<B09> { static constexpr uint8_t VALUE = 0x09; };
template<> struct Valued<B0A> { static constexpr uint8_t VALUE = 0x0A; };
template<> struct Valued<B0B> { static constexpr uint8_t VALUE = 0x0B; };
template<> struct Valued<B0C> { static constexpr uint8_t VALUE = 0x0C; };
template<> struct Valued<B0D> { static constexpr uint8_t VALUE = 0x0D; };
template<> struct Valued<B0E> { static constexpr uint8_t VALUE = 0x0E; };
template<> struct Valued<B0F> { static constexpr uint8_t VALUE = 0x0F; };
template<> struct Valued<B10> { static constexpr uint8_t VALUE = 0x10; };
template<> struct Valued<B11> { static constexpr uint8_t VALUE = 0x11; };
template<> struct Valued<B12> { static constexpr uint8_t VALUE = 0x12; };
template<> struct Valued<B13> { static constexpr uint8_t VALUE = 0x13; };
template<> struct Valued<B14> { static constexpr uint8_t VALUE = 0x14; };
template<> struct Valued<B15> { static constexpr uint8_t VALUE = 0x15; };
template<> struct Valued<B16> { static constexpr uint8_t VALUE = 0x16; };
template<> struct Valued<B17> { static constexpr uint8_t VALUE = 0x17; };
template<> struct Valued<B18> { static constexpr uint8_t VALUE = 0x18; };
template<> struct Valued<B19> { static constexpr uint8_t VALUE = 0x19; };
template<> struct Valued<B1A> { static constexpr uint8_t VALUE = 0x1A; };
template<> struct Valued<B1B> { static constexpr uint8_t VALUE = 0x1B; };
template<> struct Valued<B1C> { static constexpr uint8_t VALUE = 0x1C; };
template<> struct Valued<B1D> { static constexpr uint8_t VALUE = 0x1D; };
template<> struct Valued<B1E> { static constexpr uint8_t VALUE = 0x1E; };
template<> struct Valued<B1F> { static constexpr uint8_t VALUE = 0x1F; };
template<> struct Valued<B20> { static constexpr uint8_t VALUE = 0x20; };
template<> struct Valued<B21> { static constexpr uint8_t VALUE = 0x21; };
template<> struct Valued<B22> { static constexpr uint8_t VALUE = 0x22; };
template<> struct Valued<B23> { static constexpr uint8_t VALUE = 0x23; };
template<> struct Valued<B24> { static constexpr uint8_t VALUE = 0x24; };
template<> struct Valued<B25> { static constexpr uint8_t VALUE = 0x25; };
template<> struct Valued<B26> { static constexpr uint8_t VALUE = 0x26; };
template<> struct Valued<B27> { static constexpr uint8_t VALUE = 0x27; };
template<> struct Valued<B28> { static constexpr uint8_t VALUE = 0x28; };
template<> struct Valued<B29> { static constexpr uint8_t VALUE = 0x29; };
template<> struct Valued<B2A> { static constexpr uint8_t VALUE = 0x2A; };
template<> struct Valued<B2B> { static constexpr uint8_t VALUE = 0x2B; };
template<> struct Valued<B2C> { static constexpr uint8_t VALUE = 0x2C; };
template<> struct Valued<B2D> { static constexpr uint8_t VALUE = 0x2D; };
template<> struct Valued<B2E> { static constexpr uint8_t VALUE = 0x2E; };
template<> struct Valued<B2F> { static constexpr uint8_t VALUE = 0x2F; };
template<> struct Valued<B30> { static constexpr uint8_t VALUE = 0x30; };
template<> struct Valued<B31> { static constexpr uint8_t VALUE = 0x31; };
template<> struct Valued<B32> { static constexpr uint8_t VALUE = 0x32; };
template<> struct Valued<B33> { static constexpr uint8_t VALUE = 0x33; };
template<> struct Valued<B34> { static constexpr uint8_t VALUE = 0x34; };
template<> struct Valued<B35> { static constexpr uint8_t VALUE = 0x35; };
template<> struct Valued<B36> { static constexpr uint8_t VALUE = 0x36; };
template<> struct Valued<B37> { static constexpr uint8_t VALUE = 0x37; };
template<> struct Valued<B38> { static constexpr uint8_t VALUE = 0x38; };
template<> struct Valued<B39> { static constexpr uint8_t VALUE = 0x39; };
template<> struct Valued<B3A> { static constexpr uint8_t VALUE = 0x3A; };
template<> struct Valued<B3B> { static constexpr uint8_t VALUE = 0x3B; };
template<> struct Valued<B3C> { static constexpr uint8_t VALUE = 0x3C; };
template<> struct Valued<B3D> { static constexpr uint8_t VALUE = 0x3D; };
template<> struct Valued<B3E> { static constexpr uint8_t VALUE = 0x3E; };
template<> struct Valued<B3F> { static constexpr uint8_t VALUE = 0x3F; };
template<> struct Valued<B40> { static constexpr uint8_t VALUE = 0x40; };
template<> struct Valued<B41> { static constexpr uint8_t VALUE = 0x41; };
template<> struct Valued<B42> { static constexpr uint8_t VALUE = 0x42; };
template<> struct Valued<B43> { static constexpr uint8_t VALUE = 0x43; };
template<> struct Valued<B44> { static constexpr uint8_t VALUE = 0x44; };
template<> struct Valued<B45> { static constexpr uint8_t VALUE = 0x45; };
template<> struct Valued<B46> { static constexpr uint8_t VALUE = 0x46; };
template<> struct Valued<B47> { static constexpr uint8_t VALUE = 0x47; };
template<> struct Valued<B48> { static constexpr uint8_t VALUE = 0x48; };
template<> struct Valued<B49> { static constexpr uint8_t VALUE = 0x49; };
template<> struct Valued<B4A> { static constexpr uint8_t VALUE = 0x4A; };
template<> struct Valued<B4B> { static constexpr uint8_t VALUE = 0x4B; };
template<> struct Valued<B4C> { static constexpr uint8_t VALUE = 0x4C; };
template<> struct Valued<B4D> { static constexpr uint8_t VALUE = 0x4D; };
template<> struct Valued<B4E> { static constexpr uint8_t VALUE = 0x4E; };
template<> struct Valued<B4F> { static constexpr uint8_t VALUE = 0x4F; };
template<> struct Valued<B50> { static constexpr uint8_t VALUE = 0x50; };
template<> struct Valued<B51> { static constexpr uint8_t VALUE = 0x51; };
template<> struct Valued<B52> { static constexpr uint8_t VALUE = 0x52; };
template<> struct Valued<B53> { static constexpr uint8_t VALUE = 0x53; };
template<> struct Valued<B54> { static constexpr uint8_t VALUE = 0x54; };
template<> struct Valued<B55> { static constexpr uint8_t VALUE = 0x55; };
template<> struct Valued<B56> { static constexpr uint8_t VALUE = 0x56; };
template<> struct Valued<B57> { static constexpr uint8_t VALUE = 0x57; };
template<> struct Valued<B58> { static constexpr uint8_t VALUE = 0x58; };
template<> struct Valued<B59> { static constexpr uint8_t VALUE = 0x59; };
template<> struct Valued<B5A> { static constexpr uint8_t VALUE = 0x5A; };
template<> struct Valued<B5B> { static constexpr uint8_t VALUE = 0x5B; };
template<> struct Valued<B5C> { static constexpr uint8_t VALUE = 0x5C; };
template<> struct Valued<B5D> { static constexpr uint8_t VALUE = 0x5D; };
template<> struct Valued<B5E> { static constexpr uint8_t VALUE = 0x5E; };
template<> struct Valued<B5F> { static constexpr uint8_t VALUE = 0x5F; };
template<> struct Valued<B60> { static constexpr uint8_t VALUE = 0x60; };
template<> struct Valued<B61> { static constexpr uint8_t VALUE = 0x61; };
template<> struct Valued<B62> { static constexpr uint8_t VALUE = 0x62; };
template<> struct Valued<B63> { static constexpr uint8_t VALUE = 0x63; };
template<> struct Valued<B64> { static constexpr uint8_t VALUE = 0x64; };
template<> struct Valued<B65> { static constexpr uint8_t VALUE = 0x65; };
template<> struct Valued<B66> { static constexpr uint8_t VALUE = 0x66; };
template<> struct Valued<B67> { static constexpr uint8_t VALUE = 0x67; };
template<> struct Valued<B68> { static constexpr uint8_t VALUE = 0x68; };
template<> struct Valued<B69> { static constexpr uint8_t VALUE = 0x69; };
template<> struct Valued<B6A> { static constexpr uint8_t VALUE = 0x6A; };
template<> struct Valued<B6B> { static constexpr uint8_t VALUE = 0x6B; };
template<> struct Valued<B6C> { static constexpr uint8_t VALUE = 0x6C; };
template<> struct Valued<B6D> { static constexpr uint8_t VALUE = 0x6D; };
template<> struct Valued<B6E> { static constexpr uint8_t VALUE = 0x6E; };
template<> struct Valued<B6F> { static constexpr uint8_t VALUE = 0x6F; };
template<> struct Valued<B70> { static constexpr uint8_t VALUE = 0x70; };
template<> struct Valued<B71> { static constexpr uint8_t VALUE = 0x71; };
template<> struct Valued<B72> { static constexpr uint8_t VALUE = 0x72; };
template<> struct Valued<B73> { static constexpr uint8_t VALUE = 0x73; };
template<> struct Valued<B74> { static constexpr uint8_t VALUE = 0x74; };
template<> struct Valued<B75> { static constexpr uint8_t VALUE = 0x75; };
template<> struct Valued<B76> { static constexpr uint8_t VALUE = 0x76; };
template<> struct Valued<B77> { static constexpr uint8_t VALUE = 0x77; };
template<> struct Valued<B78> { static constexpr uint8_t VALUE = 0x78; };
template<> struct Valued<B79> { static constexpr uint8_t VALUE = 0x79; };
template<> struct Valued<B7A> { static constexpr uint8_t VALUE = 0x7A; };
template<> struct Valued<B7B> { static constexpr uint8_t VALUE = 0x7B; };
template<> struct Valued<B7C> { static constexpr uint8_t VALUE = 0x7C; };
template<> struct Valued<B7D> { static constexpr uint8_t VALUE = 0x7D; };
template<> struct Valued<B7E> { static constexpr uint8_t VALUE = 0x7E; };
template<> struct Valued<B7F> { static constexpr uint8_t VALUE = 0x7F; };
template<> struct Valued<B80> { static constexpr uint8_t VALUE = 0x80; };
template<> struct Valued<B81> { static constexpr uint8_t VALUE = 0x81; };
template<> struct Valued<B82> { static constexpr uint8_t VALUE = 0x82; };
template<> struct Valued<B83> { static constexpr uint8_t VALUE = 0x83; };
template<> struct Valued<B84> { static constexpr uint8_t VALUE = 0x84; };
template<> struct Valued<B85> { static constexpr uint8_t VALUE = 0x85; };
template<> struct Valued<B86> { static constexpr uint8_t VALUE = 0x86; };
template<> struct Valued<B87> { static constexpr uint8_t VALUE = 0x87; };
template<> struct Valued<B88> { static constexpr uint8_t VALUE = 0x88; };
template<> struct Valued<B89> { static constexpr uint8_t VALUE = 0x89; };
template<> struct Valued<B8A> { static constexpr uint8_t VALUE = 0x8A; };
template<> struct Valued<B8B> { static constexpr uint8_t VALUE = 0x8B; };
template<> struct Valued<B8C> { static constexpr uint8_t VALUE = 0x8C; };
template<> struct Valued<B8D> { static constexpr uint8_t VALUE = 0x8D; };
template<> struct Valued<B8E> { static constexpr uint8_t VALUE = 0x8E; };
template<> struct Valued<B8F> { static constexpr uint8_t VALUE = 0x8F; };
template<> struct Valued<B90> { static constexpr uint8_t VALUE = 0x90; };
template<> struct Valued<B91> { static constexpr uint8_t VALUE = 0x91; };
template<> struct Valued<B92> { static constexpr uint8_t VALUE = 0x92; };
template<> struct Valued<B93> { static constexpr uint8_t VALUE = 0x93; };
template<> struct Valued<B94> { static constexpr uint8_t VALUE = 0x94; };
template<> struct Valued<B95> { static constexpr uint8_t VALUE = 0x95; };
template<> struct Valued<B96> { static constexpr uint8_t VALUE = 0x96; };
template<> struct Valued<B97> { static constexpr uint8_t VALUE = 0x97; };
template<> struct Valued<B98> { static constexpr uint8_t VALUE = 0x98; };
template<> struct Valued<B99> { static constexpr uint8_t VALUE = 0x99; };
template<> struct Valued<B9A> { static constexpr uint8_t VALUE = 0x9A; };
template<> struct Valued<B9B> { static constexpr uint8_t VALUE = 0x9B; };
template<> struct Valued<B9C> { static constexpr uint8_t VALUE = 0x9C; };
template<> struct Valued<B9D> { static constexpr uint8_t VALUE = 0x9D; };
template<> struct Valued<B9E> { static constexpr uint8_t VALUE = 0x9E; };
template<> struct Valued<B9F> { static constexpr uint8_t VALUE = 0x9F; };
template<> struct Valued<BA0> { static constexpr uint8_t VALUE = 0xA0; };
template<> struct Valued<BA1> { static constexpr uint8_t VALUE = 0xA1; };
template<> struct Valued<BA2> { static constexpr uint8_t VALUE = 0xA2; };
template<> struct Valued<BA3> { static constexpr uint8_t VALUE = 0xA3; };
template<> struct Valued<BA4> { static constexpr uint8_t VALUE = 0xA4; };
template<> struct Valued<BA5> { static constexpr uint8_t VALUE = 0xA5; };
template<> struct Valued<BA6> { static constexpr uint8_t VALUE = 0xA6; };
template<> struct Valued<BA7> { static constexpr uint8_t VALUE = 0xA7; };
template<> struct Valued<BA8> { static constexpr uint8_t VALUE = 0xA8; };
template<> struct Valued<BA9> { static constexpr uint8_t VALUE = 0xA9; };
template<> struct Valued<BAA> { static constexpr uint8_t VALUE = 0xAA; };
template<> struct Valued<BAB> { static constexpr uint8_t VALUE = 0xAB; };
template<> struct Valued<BAC> { static constexpr uint8_t VALUE = 0xAC; };
template<> struct Valued<BAD> { static constexpr uint8_t VALUE = 0xAD; };
template<> struct Valued<BAE> { static constexpr uint8_t VALUE = 0xAE; };
template<> struct Valued<BAF> { static constexpr uint8_t VALUE = 0xAF; };
template<> struct Valued<BB0> { static constexpr uint8_t VALUE = 0xB0; };
template<> struct Valued<BB1> { static constexpr uint8_t VALUE = 0xB1; };
template<> struct Valued<BB2> { static constexpr uint8_t VALUE = 0xB2; };
template<> struct Valued<BB3> { static constexpr uint8_t VALUE = 0xB3; };
template<> struct Valued<BB4> { static constexpr uint8_t VALUE = 0xB4; };
template<> struct Valued<BB5> { static constexpr uint8_t VALUE = 0xB5; };
template<> struct Valued<BB6> { static constexpr uint8_t VALUE = 0xB6; };
template<> struct Valued<BB7> { static constexpr uint8_t VALUE = 0xB7; };
template<> struct Valued<BB8> { static constexpr uint8_t VALUE = 0xB8; };
template<> struct Valued<BB9> { static constexpr uint8_t VALUE = 0xB9; };
template<> struct Valued<BBA> { static constexpr uint8_t VALUE = 0xBA; };
template<> struct Valued<BBB> { static constexpr uint8_t VALUE = 0xBB; };
template<> struct Valued<BBC> { static constexpr uint8_t VALUE = 0xBC; };
template<> struct Valued<BBD> { static constexpr uint8_t VALUE = 0xBD; };
template<> struct Valued<BBE> { static constexpr uint8_t VALUE = 0xBE; };
template<> struct Valued<BBF> { static constexpr uint8_t VALUE = 0xBF; };
template<> struct Valued<BC0> { static constexpr uint8_t VALUE = 0xC0; };
template<> struct Valued<BC1> { static constexpr uint8_t VALUE = 0xC1; };
template<> struct Valued<BC2> { static constexpr uint8_t VALUE = 0xC2; };
template<> struct Valued<BC3> { static constexpr uint8_t VALUE = 0xC3; };
template<> struct Valued<BC4> { static constexpr uint8_t VALUE = 0xC4; };
template<> struct Valued<BC5> { static constexpr uint8_t VALUE = 0xC5; };
template<> struct Valued<BC6> { static constexpr uint8_t VALUE = 0xC6; };
template<> struct Valued<BC7> { static constexpr uint8_t VALUE = 0xC7; };
template<> struct Valued<BC8> { static constexpr uint8_t VALUE = 0xC8; };
template<> struct Valued<BC9> { static constexpr uint8_t VALUE = 0xC9; };
template<> struct Valued<BCA> { static constexpr uint8_t VALUE = 0xCA; };
template<> struct Valued<BCB> { static constexpr uint8_t VALUE = 0xCB; };
template<> struct Valued<BCC> { static constexpr uint8_t VALUE = 0xCC; };
template<> struct Valued<BCD> { static constexpr uint8_t VALUE = 0xCD; };
template<> struct Valued<BCE> { static constexpr uint8_t VALUE = 0xCE; };
template<> struct Valued<BCF> { static constexpr uint8_t VALUE = 0xCF; };
template<> struct Valued<BD0> { static constexpr uint8_t VALUE = 0xD0; };
template<> struct Valued<BD1> { static constexpr uint8_t VALUE = 0xD1; };
template<> struct Valued<BD2> { static constexpr uint8_t VALUE = 0xD2; };
template<> struct Valued<BD3> { static constexpr uint8_t VALUE = 0xD3; };
template<> struct Valued<BD4> { static constexpr uint8_t VALUE = 0xD4; };
template<> struct Valued<BD5> { static constexpr uint8_t VALUE = 0xD5; };
template<> struct Valued<BD6> { static constexpr uint8_t VALUE = 0xD6; };
template<> struct Valued<BD7> { static constexpr uint8_t VALUE = 0xD7; };
template<> struct Valued<BD8> { static constexpr uint8_t VALUE = 0xD8; };
template<> struct Valued<BD9> { static constexpr uint8_t VALUE = 0xD9; };
template<> struct Valued<BDA> { static constexpr uint8_t VALUE = 0xDA; };
template<> struct Valued<BDB> { static constexpr uint8_t VALUE = 0xDB; };
template<> struct Valued<BDC> { static constexpr uint8_t VALUE = 0xDC; };
template<> struct Valued<BDD> { static constexpr uint8_t VALUE = 0xDD; };
template<> struct Valued<BDE> { static constexpr uint8_t VALUE = 0xDE; };
template<> struct Valued<BDF> { static constexpr uint8_t VALUE = 0xDF; };
template<> struct Valued<BE0> { static constexpr uint8_t VALUE = 0xE0; };
template<> struct Valued<BE1> { static constexpr uint8_t VALUE = 0xE1; };
template<> struct Valued<BE2> { static constexpr uint8_t VALUE = 0xE2; };
template<> struct Valued<BE3> { static constexpr uint8_t VALUE = 0xE3; };
template<> struct Valued<BE4> { static constexpr uint8_t VALUE = 0xE4; };
template<> struct Valued<BE5> { static constexpr uint8_t VALUE = 0xE5; };
template<> struct Valued<BE6> { static constexpr uint8_t VALUE = 0xE6; };
template<> struct Valued<BE7> { static constexpr uint8_t VALUE = 0xE7; };
template<> struct Valued<BE8> { static constexpr uint8_t VALUE = 0xE8; };
template<> struct Valued<BE9> { static constexpr uint8_t VALUE = 0xE9; };
template<> struct Valued<BEA> { static constexpr uint8_t VALUE = 0xEA; };
template<> struct Valued<BEB> { static constexpr uint8_t VALUE = 0xEB; };
template<> struct Valued<BEC> { static constexpr uint8_t VALUE = 0xEC; };
template<> struct Valued<BED> { static constexpr uint8_t VALUE = 0xED; };
template<> struct Valued<BEE> { static constexpr uint8_t VALUE = 0xEE; };
template<> struct Valued<BEF> { static constexpr uint8_t VALUE = 0xEF; };
template<> struct Valued<BF0> { static constexpr uint8_t VALUE = 0xF0; };
template<> struct Valued<BF1> { static constexpr uint8_t VALUE = 0xF1; };
template<> struct Valued<BF2> { static constexpr uint8_t VALUE = 0xF2; };
template<> struct Valued<BF3> { static constexpr uint8_t VALUE = 0xF3; };
template<> struct Valued<BF4> { static constexpr uint8_t VALUE = 0xF4; };
template<> struct Valued<BF5> { static constexpr uint8_t VALUE = 0xF5; };
template<> struct Valued<BF6> { static constexpr uint8_t VALUE = 0xF6; };
template<> struct Valued<BF7> { static constexpr uint8_t VALUE = 0xF7; };
template<> struct Valued<BF8> { static constexpr uint8_t VALUE = 0xF8; };
template<> struct Valued<BF9> { static constexpr uint8_t VALUE = 0xF9; };
template<> struct Valued<BFA> { static constexpr uint8_t VALUE = 0xFA; };
template<> struct Valued<BFB> { static constexpr uint8_t VALUE = 0xFB; };
template<> struct Valued<BFC> { static constexpr uint8_t VALUE = 0xFC; };
template<> struct Valued<BFD> { static constexpr uint8_t VALUE = 0xFD; };
template<> struct Valued<BFE> { static constexpr uint8_t VALUE = 0xFE; };
template<> struct Valued<BFF> { static constexpr uint8_t VALUE = 0xFF; };

template <typename RegA, typename RegB, typename Stack, typename Text>
struct Valued<VMStep<ProgramState<RegA, RegB, Stack, Text>>> {
    static constexpr uint8_t VALUE = Valued<typename VMStep<ProgramState<RegA, RegB, Stack, Text>>::Next>::VALUE;
};