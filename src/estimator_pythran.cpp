#include <pythonic/core.hpp>
#include <pythonic/python/core.hpp>
#include <pythonic/types/bool.hpp>
#include <pythonic/types/int.hpp>
#ifdef _OPENMP
#include <omp.h>
#endif
#include <pythonic/include/__builtin__/False.hpp>
#include <pythonic/include/__builtin__/None.hpp>
#include <pythonic/include/__builtin__/True.hpp>
#include <pythonic/include/__builtin__/abs.hpp>
#include <pythonic/include/__builtin__/assert.hpp>
#include <pythonic/include/__builtin__/enumerate.hpp>
#include <pythonic/include/__builtin__/getattr.hpp>
#include <pythonic/include/__builtin__/id.hpp>
#include <pythonic/include/__builtin__/len.hpp>
#include <pythonic/include/__builtin__/list.hpp>
#include <pythonic/include/__builtin__/list/append.hpp>
#include <pythonic/include/__builtin__/max.hpp>
#include <pythonic/include/__builtin__/pow.hpp>
#include <pythonic/include/__builtin__/pythran/and_.hpp>
#include <pythonic/include/__builtin__/pythran/is_none.hpp>
#include <pythonic/include/__builtin__/pythran/make_shape.hpp>
#include <pythonic/include/__builtin__/pythran/static_if_.hpp>
#include <pythonic/include/__builtin__/range.hpp>
#include <pythonic/include/__builtin__/str.hpp>
#include <pythonic/include/__builtin__/tuple.hpp>
#include <pythonic/include/__dispatch__/pop.hpp>
#include <pythonic/include/functools/partial.hpp>
#include <pythonic/include/math/cos.hpp>
#include <pythonic/include/math/sin.hpp>
#include <pythonic/include/numpy/absolute.hpp>
#include <pythonic/include/numpy/all.hpp>
#include <pythonic/include/numpy/allclose.hpp>
#include <pythonic/include/numpy/arctan2.hpp>
#include <pythonic/include/numpy/argmax.hpp>
#include <pythonic/include/numpy/argmin.hpp>
#include <pythonic/include/numpy/array.hpp>
#include <pythonic/include/numpy/concatenate.hpp>
#include <pythonic/include/numpy/cos.hpp>
#include <pythonic/include/numpy/dot.hpp>
#include <pythonic/include/numpy/float64.hpp>
#include <pythonic/include/numpy/hstack.hpp>
#include <pythonic/include/numpy/isclose.hpp>
#include <pythonic/include/numpy/isnan.hpp>
#include <pythonic/include/numpy/linalg/norm.hpp>
#include <pythonic/include/numpy/logical_or.hpp>
#include <pythonic/include/numpy/ndarray/reshape.hpp>
#include <pythonic/include/numpy/ones.hpp>
#include <pythonic/include/numpy/sin.hpp>
#include <pythonic/include/numpy/square.hpp>
#include <pythonic/include/numpy/zeros.hpp>
#include <pythonic/include/operator_/add.hpp>
#include <pythonic/include/operator_/div.hpp>
#include <pythonic/include/operator_/eq.hpp>
#include <pythonic/include/operator_/gt.hpp>
#include <pythonic/include/operator_/idiv.hpp>
#include <pythonic/include/operator_/ipow.hpp>
#include <pythonic/include/operator_/lt.hpp>
#include <pythonic/include/operator_/mul.hpp>
#include <pythonic/include/types/slice.hpp>
#include <pythonic/include/types/str.hpp>
#include <pythonic/__builtin__/False.hpp>
#include <pythonic/__builtin__/None.hpp>
#include <pythonic/__builtin__/True.hpp>
#include <pythonic/__builtin__/abs.hpp>
#include <pythonic/__builtin__/assert.hpp>
#include <pythonic/__builtin__/enumerate.hpp>
#include <pythonic/__builtin__/getattr.hpp>
#include <pythonic/__builtin__/id.hpp>
#include <pythonic/__builtin__/len.hpp>
#include <pythonic/__builtin__/list.hpp>
#include <pythonic/__builtin__/list/append.hpp>
#include <pythonic/__builtin__/max.hpp>
#include <pythonic/__builtin__/pow.hpp>
#include <pythonic/__builtin__/pythran/and_.hpp>
#include <pythonic/__builtin__/pythran/is_none.hpp>
#include <pythonic/__builtin__/pythran/make_shape.hpp>
#include <pythonic/__builtin__/pythran/static_if_.hpp>
#include <pythonic/__builtin__/range.hpp>
#include <pythonic/__builtin__/str.hpp>
#include <pythonic/__builtin__/tuple.hpp>
#include <pythonic/__dispatch__/pop.hpp>
#include <pythonic/functools/partial.hpp>
#include <pythonic/math/cos.hpp>
#include <pythonic/math/sin.hpp>
#include <pythonic/numpy/absolute.hpp>
#include <pythonic/numpy/all.hpp>
#include <pythonic/numpy/allclose.hpp>
#include <pythonic/numpy/arctan2.hpp>
#include <pythonic/numpy/argmax.hpp>
#include <pythonic/numpy/argmin.hpp>
#include <pythonic/numpy/array.hpp>
#include <pythonic/numpy/concatenate.hpp>
#include <pythonic/numpy/cos.hpp>
#include <pythonic/numpy/dot.hpp>
#include <pythonic/numpy/float64.hpp>
#include <pythonic/numpy/hstack.hpp>
#include <pythonic/numpy/isclose.hpp>
#include <pythonic/numpy/isnan.hpp>
#include <pythonic/numpy/linalg/norm.hpp>
#include <pythonic/numpy/logical_or.hpp>
#include <pythonic/numpy/ndarray/reshape.hpp>
#include <pythonic/numpy/ones.hpp>
#include <pythonic/numpy/sin.hpp>
#include <pythonic/numpy/square.hpp>
#include <pythonic/numpy/zeros.hpp>
#include <pythonic/operator_/add.hpp>
#include <pythonic/operator_/div.hpp>
#include <pythonic/operator_/eq.hpp>
#include <pythonic/operator_/gt.hpp>
#include <pythonic/operator_/idiv.hpp>
#include <pythonic/operator_/ipow.hpp>
#include <pythonic/operator_/lt.hpp>
#include <pythonic/operator_/mul.hpp>
#include <pythonic/types/slice.hpp>
#include <pythonic/types/str.hpp>
namespace __pythran_estimator_pythran
{
  struct pythran_lmda_t2
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
      typedef pythonic::types::list<typename std::remove_reference<__type1>::type> __type2;
      typedef pythonic::types::list<typename std::remove_reference<__type2>::type> __type3;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type4;
      typedef pythonic::types::list<typename std::remove_reference<__type4>::type> __type5;
      typedef pythonic::types::list<typename std::remove_reference<__type5>::type> __type6;
      typedef typename __combined<__type3,__type6>::type __type7;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::max{})>::type>::type __type8;
      typedef long __type9;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::square{})>::type>::type __type10;
      typedef decltype(std::declval<__type10>()(std::declval<__type1>())) __type11;
      typedef decltype((std::declval<__type9>() - std::declval<__type11>())) __type12;
      typedef decltype(std::declval<__type10>()(std::declval<__type4>())) __type13;
      typedef decltype((std::declval<__type12>() - std::declval<__type13>())) __type14;
      typedef double __type15;
      typedef decltype(std::declval<__type8>()(std::declval<__type14>(), std::declval<__type15>())) __type16;
      typedef decltype((pythonic::__builtin__::pow(std::declval<__type16>(), std::declval<__type15>()))) __type17;
      typedef pythonic::types::list<typename std::remove_reference<__type17>::type> __type18;
      typedef pythonic::types::list<typename std::remove_reference<__type18>::type> __type19;
      typedef typename __combined<__type7,__type19>::type __type20;
      typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type20>()))>::type __type21;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type22;
      typedef decltype(std::declval<__type22>()(std::declval<__type21>())) __type23;
      typedef typename pythonic::returnable<decltype((pythonic::operator_::div(std::declval<__type21>(), std::declval<__type23>())))>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 >
    typename type<argument_type0, argument_type1>::result_type operator()(argument_type0&& m, argument_type1&& n) const
    ;
  }  ;
  struct pythran_lmda_t1
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
      typedef pythonic::types::list<typename std::remove_reference<__type1>::type> __type2;
      typedef pythonic::types::list<typename std::remove_reference<__type2>::type> __type3;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::max{})>::type>::type __type4;
      typedef long __type5;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::square{})>::type>::type __type6;
      typedef decltype(std::declval<__type6>()(std::declval<__type1>())) __type7;
      typedef decltype((std::declval<__type5>() - std::declval<__type7>())) __type8;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type9;
      typedef decltype(std::declval<__type6>()(std::declval<__type9>())) __type10;
      typedef decltype((std::declval<__type8>() - std::declval<__type10>())) __type11;
      typedef double __type12;
      typedef decltype(std::declval<__type4>()(std::declval<__type11>(), std::declval<__type12>())) __type13;
      typedef decltype((pythonic::__builtin__::pow(std::declval<__type13>(), std::declval<__type12>()))) __type14;
      typedef pythonic::types::list<typename std::remove_reference<__type14>::type> __type15;
      typedef pythonic::types::list<typename std::remove_reference<__type15>::type> __type16;
      typedef typename __combined<__type3,__type16>::type __type17;
      typedef pythonic::types::list<typename std::remove_reference<__type9>::type> __type18;
      typedef pythonic::types::list<typename std::remove_reference<__type18>::type> __type19;
      typedef typename __combined<__type17,__type19>::type __type20;
      typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type20>()))>::type __type21;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type22;
      typedef decltype(std::declval<__type22>()(std::declval<__type21>())) __type23;
      typedef typename pythonic::returnable<decltype((pythonic::operator_::div(std::declval<__type21>(), std::declval<__type23>())))>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 >
    typename type<argument_type0, argument_type1>::result_type operator()(argument_type0&& m, argument_type1&& n) const
    ;
  }  ;
  struct pythran_lmda_t0
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::max{})>::type>::type __type1;
      typedef long __type2;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::square{})>::type>::type __type3;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type4;
      typedef decltype(std::declval<__type3>()(std::declval<__type4>())) __type5;
      typedef decltype((std::declval<__type2>() - std::declval<__type5>())) __type6;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type7;
      typedef decltype(std::declval<__type3>()(std::declval<__type7>())) __type8;
      typedef decltype((std::declval<__type6>() - std::declval<__type8>())) __type9;
      typedef double __type10;
      typedef decltype(std::declval<__type1>()(std::declval<__type9>(), std::declval<__type10>())) __type11;
      typedef decltype((pythonic::__builtin__::pow(std::declval<__type11>(), std::declval<__type10>()))) __type12;
      typedef pythonic::types::list<typename std::remove_reference<__type12>::type> __type13;
      typedef pythonic::types::list<typename std::remove_reference<__type13>::type> __type14;
      typedef pythonic::types::list<typename std::remove_reference<__type4>::type> __type15;
      typedef pythonic::types::list<typename std::remove_reference<__type15>::type> __type16;
      typedef typename __combined<__type14,__type16>::type __type17;
      typedef pythonic::types::list<typename std::remove_reference<__type7>::type> __type18;
      typedef pythonic::types::list<typename std::remove_reference<__type18>::type> __type19;
      typedef typename __combined<__type17,__type19>::type __type20;
      typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type20>()))>::type __type21;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type22;
      typedef decltype(std::declval<__type22>()(std::declval<__type21>())) __type23;
      typedef typename pythonic::returnable<decltype((pythonic::operator_::div(std::declval<__type21>(), std::declval<__type23>())))>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 >
    typename type<argument_type0, argument_type1>::result_type operator()(argument_type0&& m, argument_type1&& n) const
    ;
  }  ;
  struct $isstatic5
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    struct type
    {
      typedef typename pythonic::returnable<decltype(pythonic::types::make_tuple())>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    typename type<argument_type0, argument_type1, argument_type2>::result_type operator()(argument_type0&& S_u, argument_type1&& S_w, argument_type2&& last_singularity) const
    ;
  }  ;
  struct $isstatic4
  {
    typedef void callable;
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    struct type
    {
      typedef long __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type1;
      typedef __type0 __ptype0;
      typedef __type1 __ptype1;
      typedef typename pythonic::returnable<decltype(pythonic::types::make_tuple())>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    typename type<argument_type0, argument_type1, argument_type2>::result_type operator()(argument_type0&& S_u, argument_type1&& S_w, argument_type2&& last_singularity) const
    ;
  }  ;
  struct $isstatic3
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    struct type
    {
      typedef typename pythonic::returnable<decltype(pythonic::types::make_tuple())>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    typename type<argument_type0, argument_type1, argument_type2>::result_type operator()(argument_type0&& S_u, argument_type1&& S_v, argument_type2&& last_singularity) const
    ;
  }  ;
  struct $isstatic2
  {
    typedef void callable;
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    struct type
    {
      typedef long __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type1;
      typedef __type0 __ptype4;
      typedef __type1 __ptype5;
      typedef typename pythonic::returnable<decltype(pythonic::types::make_tuple())>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    typename type<argument_type0, argument_type1, argument_type2>::result_type operator()(argument_type0&& S_u, argument_type1&& S_v, argument_type2&& last_singularity) const
    ;
  }  ;
  struct $isstatic1
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 >
    struct type
    {
      typedef typename pythonic::returnable<decltype(pythonic::types::make_tuple())>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 >
    typename type<argument_type0, argument_type1>::result_type operator()(argument_type0&& S_u, argument_type1&& last_singularity) const
    ;
  }  ;
  struct $isstatic0
  {
    typedef void callable;
    ;
    template <typename argument_type0 , typename argument_type1 >
    struct type
    {
      typedef long __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type1;
      typedef __type0 __ptype8;
      typedef __type1 __ptype9;
      typedef typename pythonic::returnable<decltype(pythonic::types::make_tuple())>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 >
    typename type<argument_type0, argument_type1>::result_type operator()(argument_type0&& S_u, argument_type1&& last_singularity) const
    ;
  }  ;
  struct constrain_angle
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::arctan2{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::sin{})>::type>::type __type1;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type2;
      typedef decltype(std::declval<__type1>()(std::declval<__type2>())) __type3;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::cos{})>::type>::type __type4;
      typedef decltype(std::declval<__type4>()(std::declval<__type2>())) __type5;
      typedef typename pythonic::returnable<decltype(std::declval<__type0>()(std::declval<__type3>(), std::declval<__type5>()))>::type result_type;
    }  
    ;
    template <typename argument_type0 >
    typename type<argument_type0>::result_type operator()(argument_type0&& angle) const
    ;
  }  ;
  struct getTwoSquareMatrixInverse
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type1>::type>::type __type2;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type2>::type>::type __type3;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type1>::type>::type __type4;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type4>::type>::type __type5;
      typedef decltype((pythonic::operator_::mul(std::declval<__type5>(), std::declval<__type3>()))) __type6;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type4>::type>::type __type7;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type2>::type>::type __type8;
      typedef decltype((pythonic::operator_::mul(std::declval<__type7>(), std::declval<__type8>()))) __type9;
      typedef typename pythonic::assignable<decltype((std::declval<__type6>() - std::declval<__type9>()))>::type __type10;
      typedef decltype((pythonic::operator_::div(std::declval<__type3>(), std::declval<__type10>()))) __type11;
      typedef pythonic::types::list<typename std::remove_reference<__type11>::type> __type12;
      typedef long __type13;
      typedef decltype((pythonic::operator_::mul(std::declval<__type13>(), std::declval<__type7>()))) __type14;
      typedef decltype((pythonic::operator_::div(std::declval<__type14>(), std::declval<__type10>()))) __type15;
      typedef pythonic::types::list<typename std::remove_reference<__type15>::type> __type16;
      typedef typename __combined<__type12,__type16>::type __type17;
      typedef pythonic::types::list<typename std::remove_reference<__type17>::type> __type18;
      typedef decltype((pythonic::operator_::mul(std::declval<__type13>(), std::declval<__type8>()))) __type19;
      typedef decltype((pythonic::operator_::div(std::declval<__type19>(), std::declval<__type10>()))) __type20;
      typedef pythonic::types::list<typename std::remove_reference<__type20>::type> __type21;
      typedef decltype((pythonic::operator_::div(std::declval<__type5>(), std::declval<__type10>()))) __type22;
      typedef pythonic::types::list<typename std::remove_reference<__type22>::type> __type23;
      typedef typename __combined<__type21,__type23>::type __type24;
      typedef pythonic::types::list<typename std::remove_reference<__type24>::type> __type25;
      typedef typename __combined<__type18,__type25>::type __type26;
      typedef typename pythonic::returnable<decltype(std::declval<__type0>()(std::declval<__type26>()))>::type result_type;
    }  
    ;
    template <typename argument_type0 >
    typename type<argument_type0>::result_type operator()(argument_type0&& m) const
    ;
  }  ;
  struct cross
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type1>::type>::type __type2;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type3;
      typedef typename std::tuple_element<2,typename std::remove_reference<__type3>::type>::type __type4;
      typedef decltype((pythonic::operator_::mul(std::declval<__type2>(), std::declval<__type4>()))) __type5;
      typedef typename std::tuple_element<2,typename std::remove_reference<__type1>::type>::type __type6;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type3>::type>::type __type7;
      typedef decltype((pythonic::operator_::mul(std::declval<__type6>(), std::declval<__type7>()))) __type8;
      typedef decltype((std::declval<__type5>() - std::declval<__type8>())) __type9;
      typedef pythonic::types::list<typename std::remove_reference<__type9>::type> __type10;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type3>::type>::type __type11;
      typedef decltype((pythonic::operator_::mul(std::declval<__type6>(), std::declval<__type11>()))) __type12;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type1>::type>::type __type13;
      typedef decltype((pythonic::operator_::mul(std::declval<__type13>(), std::declval<__type4>()))) __type14;
      typedef decltype((std::declval<__type12>() - std::declval<__type14>())) __type15;
      typedef pythonic::types::list<typename std::remove_reference<__type15>::type> __type16;
      typedef typename __combined<__type10,__type16>::type __type17;
      typedef decltype((pythonic::operator_::mul(std::declval<__type13>(), std::declval<__type7>()))) __type18;
      typedef decltype((pythonic::operator_::mul(std::declval<__type2>(), std::declval<__type11>()))) __type19;
      typedef decltype((std::declval<__type18>() - std::declval<__type19>())) __type20;
      typedef pythonic::types::list<typename std::remove_reference<__type20>::type> __type21;
      typedef typename __combined<__type17,__type21>::type __type22;
      typedef typename pythonic::returnable<decltype(std::declval<__type0>()(std::declval<__type22>()))>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 >
    typename type<argument_type0, argument_type1>::result_type operator()(argument_type0&& a, argument_type1&& b) const
    ;
  }  ;
  struct column
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
      typedef pythonic::types::contiguous_slice __type1;
      typedef typename pythonic::returnable<decltype(std::declval<__type0>()(std::declval<__type1>(), std::declval<__type1>()))>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 >
    typename type<argument_type0, argument_type1>::result_type operator()(argument_type0&& mat, argument_type1&& row_i) const
    ;
  }  ;
  struct S
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::arctan2{})>::type>::type __type1;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::dot{})>::type>::type __type2;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type3;
      typedef typename pythonic::assignable<decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type3>()))>::type __type4;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type5;
      typedef decltype(std::declval<__type2>()(std::declval<__type4>(), std::declval<__type5>())) __type6;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type7;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type8;
      typedef decltype((std::declval<__type7>() - std::declval<__type8>())) __type9;
      typedef decltype(std::declval<__type2>()(std::declval<__type4>(), std::declval<__type9>())) __type10;
      typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type6>(), std::declval<__type10>()))>::type __type11;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::isnan{})>::type>::type __type12;
      typedef double __type13;
      typedef container<typename std::remove_reference<__type13>::type> __type14;
      typedef typename __combined<__type11,__type14>::type __type15;
      typedef decltype(std::declval<__type12>()(std::declval<__type15>())) __type16;
      typedef indexable<__type16> __type17;
      typedef typename __combined<__type11,__type17>::type __type18;
      typedef typename __combined<__type18,__type14>::type __type19;
      typedef typename __combined<__type19,__type17>::type __type20;
      typedef typename __combined<__type20,__type14>::type __type21;
      typedef long __type22;
      typedef typename pythonic::returnable<decltype(std::declval<__type0>()(std::declval<__type21>(), std::declval<__type22>(), std::declval<__type22>()))>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
    typename type<argument_type0, argument_type1, argument_type2, argument_type3>::result_type operator()(argument_type0&& lmda, argument_type1&& a, argument_type2&& a_orth, argument_type3&& l_v) const
    ;
  }  ;
  struct handle_singularities
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::pythran::functor::is_none{})>::type>::type __type0;
      typedef typename pythonic::assignable<pythonic::types::none_type>::type __type1;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::range{})>::type>::type __type2;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type3;
      typedef decltype(std::declval<__type2>()(std::declval<__type3>())) __type4;
      typedef typename pythonic::assignable<typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type4>::type::iterator>::value_type>::type>::type __type5;
      typedef typename __combined<__type1,__type5>::type __type6;
      typedef decltype(std::declval<__type0>()(std::declval<__type6>())) __type7;
      typedef decltype((! std::declval<__type7>())) __type8;
      typedef typename pythonic::returnable<decltype(pythonic::types::make_tuple(std::declval<__type8>(), std::declval<__type6>()))>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    typename type<argument_type0, argument_type1, argument_type2>::result_type operator()(argument_type0&& lmda, argument_type1&& s, argument_type2&& n) const
    ;
  }  ;
  struct compute_derivatives
  {
    typedef void callable;
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type1;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::dot{})>::type>::type __type2;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type3;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type4;
      typedef long __type5;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type5>(), std::declval<__type5>())) __type6;
      typedef decltype(std::declval<__type4>()[std::declval<__type6>()]) __type7;
      typedef decltype((-std::declval<__type7>())) __type8;
      typedef decltype((pythonic::operator_::div(std::declval<__type8>(), std::declval<__type7>()))) __type9;
      typedef pythonic::types::list<typename std::remove_reference<__type9>::type> __type10;
      typedef pythonic::types::list<typename std::remove_reference<__type5>::type> __type11;
      typedef typename __combined<__type10,__type11>::type __type12;
      typedef pythonic::types::list<typename std::remove_reference<__type12>::type> __type13;
      typedef decltype(std::declval<__type3>()(std::declval<__type13>())) __type14;
      typedef typename pythonic::lazy<__type14>::type __type15;
      typedef typename __combined<__type11,__type10>::type __type16;
      typedef pythonic::types::list<typename std::remove_reference<__type16>::type> __type17;
      typedef decltype(std::declval<__type3>()(std::declval<__type17>())) __type18;
      typedef typename pythonic::lazy<__type18>::type __type19;
      typedef typename __combined<__type15,__type19>::type __type20;
      typedef typename pythonic::assignable<decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type4>()))>::type __type21;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type22;
      typedef typename pythonic::assignable<decltype(std::declval<__type2>()(std::declval<__type21>(), std::declval<__type22>()))>::type __type23;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type24;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type25;
      typedef typename pythonic::assignable<decltype((std::declval<__type24>() - std::declval<__type25>()))>::type __type26;
      typedef decltype((pythonic::operator_::mul(std::declval<__type23>(), std::declval<__type26>()))) __type27;
      typedef typename pythonic::assignable<decltype(std::declval<__type2>()(std::declval<__type21>(), std::declval<__type26>()))>::type __type28;
      typedef decltype((pythonic::operator_::mul(std::declval<__type28>(), std::declval<__type22>()))) __type29;
      typedef typename pythonic::assignable<decltype((pythonic::operator_::add(std::declval<__type27>(), std::declval<__type29>())))>::type __type30;
      typedef typename pythonic::assignable<decltype(std::declval<__type2>()(std::declval<__type20>(), std::declval<__type30>()))>::type __type31;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::enumerate{})>::type>::type __type32;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::logical_or{})>::type>::type __type33;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::all{})>::type>::type __type34;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::isclose{})>::type>::type __type35;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::concatenate{})>::type>::type __type36;
      typedef pythonic::types::list<typename std::remove_reference<__type21>::type> __type37;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type38;
      typedef decltype((pythonic::operator_::mul(std::declval<__type37>(), std::declval<__type38>()))) __type39;
      typedef typename pythonic::assignable<decltype(std::declval<__type36>()(std::declval<__type39>()))>::type __type40;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type41;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type42;
      typedef pythonic::types::none_type __type43;
      typedef decltype(std::declval<__type42>()(std::declval<__type41>(), std::declval<__type43>(), std::declval<__type5>())) __type44;
      typedef decltype((pythonic::operator_::div(std::declval<__type41>(), std::declval<__type44>()))) __type45;
      typedef typename pythonic::assignable<decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type45>()))>::type __type46;
      typedef double __type47;
      typedef decltype(std::declval<__type35>()(std::declval<__type40>(), std::declval<__type46>(), std::declval<__type47>(), std::declval<__type47>())) __type48;
      typedef decltype(std::declval<__type34>()(std::declval<__type48>(), std::declval<__type5>())) __type49;
      typedef decltype((-std::declval<__type46>())) __type50;
      typedef decltype(std::declval<__type35>()(std::declval<__type40>(), std::declval<__type50>(), std::declval<__type47>(), std::declval<__type47>())) __type51;
      typedef decltype(std::declval<__type34>()(std::declval<__type51>(), std::declval<__type5>())) __type52;
      typedef decltype(std::declval<__type33>()(std::declval<__type49>(), std::declval<__type52>())) __type53;
      typedef typename pythonic::lazy<__type53>::type __type54;
      typedef decltype(std::declval<__type32>()(std::declval<__type54>())) __type55;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type55>::type::iterator>::value_type>::type __type56;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type56>::type>::type __type57;
      typedef typename pythonic::lazy<__type57>::type __type58;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type5>(), std::declval<__type58>())) __type59;
      typedef indexable<__type59> __type60;
      typedef typename __combined<__type31,__type60>::type __type61;
      typedef container<typename std::remove_reference<__type5>::type> __type62;
      typedef typename __combined<__type61,__type62>::type __type63;
      typedef typename __combined<__type63,__type60>::type __type64;
      typedef typename __combined<__type64,__type62>::type __type65;
      typedef decltype((pythonic::operator_::mul(std::declval<__type28>(), std::declval<__type26>()))) __type66;
      typedef decltype((pythonic::operator_::mul(std::declval<__type23>(), std::declval<__type22>()))) __type67;
      typedef decltype((std::declval<__type66>() - std::declval<__type67>())) __type68;
      typedef typename pythonic::assignable<decltype(std::declval<__type2>()(std::declval<__type21>(), std::declval<__type68>()))>::type __type69;
      typedef typename __combined<__type69,__type60>::type __type70;
      typedef typename __combined<__type70,__type62>::type __type71;
      typedef typename __combined<__type71,__type60>::type __type72;
      typedef typename __combined<__type72,__type62>::type __type73;
      typedef decltype((pythonic::operator_::div(std::declval<__type65>(), std::declval<__type73>()))) __type74;
      typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type74>(), std::declval<__type5>(), std::declval<__type5>()))>::type __type75;
      typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type75>())) __type76;
      typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type76>()))>::type __type77;
      typedef decltype(std::declval<__type2>()(std::declval<__type20>(), std::declval<__type30>())) __type78;
      typedef decltype((pythonic::operator_::div(std::declval<__type78>(), std::declval<__type73>()))) __type79;
      typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type79>(), std::declval<__type5>(), std::declval<__type5>()))>::type __type80;
      typedef pythonic::types::str __type81;
      typedef pythonic::types::list<typename std::remove_reference<__type81>::type> __type82;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::argmax{})>::type>::type __type83;
      typedef decltype(std::declval<__type1>()(std::declval<__type4>(), std::declval<__type5>())) __type84;
      typedef decltype(std::declval<__type83>()(std::declval<__type84>())) __type85;
      typedef typename pythonic::assignable<decltype(std::declval<__type82>()[std::declval<__type85>()])>::type __type86;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type77>(), std::declval<__type75>(), std::declval<__type80>(), std::declval<__type86>())) __type87;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type75>(), std::declval<__type77>(), std::declval<__type80>(), std::declval<__type86>())) __type88;
      typedef typename __combined<__type87,__type88>::type __type89;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type75>(), std::declval<__type80>(), std::declval<__type77>(), std::declval<__type86>())) __type90;
      typedef typename __combined<__type89,__type90>::type __type91;
      typedef typename pythonic::returnable<typename __combined<__type91,__type43>::type>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 >
    typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5>::result_type operator()(argument_type0&& lmda, argument_type1&& a, argument_type2&& a_orth, argument_type3&& s, argument_type4&& l_v, argument_type5&& n) const
    ;
  }  ;
  struct make_vectors
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::pythran::functor::make_shape{})>::type>::type __type1;
      typedef std::integral_constant<long, 3> __type2;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type3;
      typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type3>())) __type4;
      typedef typename pythonic::assignable<typename std::tuple_element<0,typename std::remove_reference<__type4>::type>::type>::type __type5;
      typedef decltype(std::declval<__type1>()(std::declval<__type2>(), std::declval<__type5>())) __type6;
      typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type6>()))>::type __type7;
      typedef long __type8;
      typedef indexable<__type8> __type9;
      typedef typename __combined<__type7,__type9>::type __type10;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::cos{})>::type>::type __type11;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type12;
      typedef typename pythonic::assignable<decltype(std::declval<__type12>()(std::declval<__type3>(), std::declval<__type8>()))>::type __type13;
      typedef typename pythonic::assignable<decltype(std::declval<__type11>()(std::declval<__type13>()))>::type __type14;
      typedef container<typename std::remove_reference<__type14>::type> __type15;
      typedef typename __combined<__type10,__type15>::type __type16;
      typedef typename __combined<__type16,__type9>::type __type17;
      typedef typename __combined<__type17,__type15>::type __type18;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::sin{})>::type>::type __type19;
      typedef typename pythonic::assignable<decltype(std::declval<__type19>()(std::declval<__type13>()))>::type __type20;
      typedef container<typename std::remove_reference<__type20>::type> __type21;
      typedef typename __combined<__type18,__type21>::type __type22;
      typedef typename __combined<__type22,__type9>::type __type23;
      typedef typename __combined<__type23,__type21>::type __type24;
      typedef decltype((-std::declval<__type20>())) __type25;
      typedef container<typename std::remove_reference<__type25>::type> __type26;
      typedef typename __combined<__type10,__type26>::type __type27;
      typedef typename __combined<__type27,__type9>::type __type28;
      typedef typename __combined<__type28,__type26>::type __type29;
      typedef typename __combined<__type29,__type15>::type __type30;
      typedef typename __combined<__type30,__type9>::type __type31;
      typedef typename __combined<__type31,__type15>::type __type32;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type33;
      typedef typename pythonic::assignable<decltype(std::declval<__type12>()(std::declval<__type33>(), std::declval<__type8>()))>::type __type34;
      typedef decltype((pythonic::operator_::mul(std::declval<__type34>(), std::declval<__type14>()))) __type35;
      typedef container<typename std::remove_reference<__type35>::type> __type36;
      typedef typename __combined<__type10,__type36>::type __type37;
      typedef typename __combined<__type37,__type9>::type __type38;
      typedef typename __combined<__type38,__type36>::type __type39;
      typedef decltype((pythonic::operator_::mul(std::declval<__type34>(), std::declval<__type20>()))) __type40;
      typedef container<typename std::remove_reference<__type40>::type> __type41;
      typedef typename __combined<__type39,__type41>::type __type42;
      typedef typename __combined<__type42,__type9>::type __type43;
      typedef typename __combined<__type43,__type41>::type __type44;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::ones{})>::type>::type __type45;
      typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type13>())) __type46;
      typedef decltype(std::declval<__type45>()(std::declval<__type46>())) __type47;
      typedef container<typename std::remove_reference<__type47>::type> __type48;
      typedef typename __combined<__type44,__type48>::type __type49;
      typedef typename __combined<__type49,__type9>::type __type50;
      typedef typename __combined<__type50,__type48>::type __type51;
      typedef container<typename std::remove_reference<__type34>::type> __type52;
      typedef typename __combined<__type10,__type52>::type __type53;
      typedef typename __combined<__type53,__type9>::type __type54;
      typedef typename __combined<__type54,__type52>::type __type55;
      typedef typename pythonic::returnable<decltype(pythonic::types::make_tuple(std::declval<__type24>(), std::declval<__type32>(), std::declval<__type51>(), std::declval<__type55>()))>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 >
    typename type<argument_type0, argument_type1>::result_type operator()(argument_type0&& alpha, argument_type1&& l) const
    ;
  }  ;
  struct tolerance
  {
    typedef void callable;
    typedef void pure;
    struct type
    {
      typedef typename pythonic::returnable<double>::type result_type;
    }  ;
    typename type::result_type operator()() const;
    ;
  }  ;
  struct max_iter
  {
    typedef void callable;
    typedef void pure;
    struct type
    {
      typedef typename pythonic::returnable<long>::type result_type;
    }  ;
    typename type::result_type operator()() const;
    ;
  }  ;
  struct min_delta_size
  {
    typedef void callable;
    typedef void pure;
    struct type
    {
      typedef typename pythonic::returnable<double>::type result_type;
    }  ;
    typename type::result_type operator()() const;
    ;
  }  ;
  struct eta_delta
  {
    typedef void callable;
    typedef void pure;
    struct type
    {
      typedef typename pythonic::returnable<double>::type result_type;
    }  ;
    typename type::result_type operator()() const;
    ;
  }  ;
  struct eta_lmda
  {
    typedef void callable;
    typedef void pure;
    struct type
    {
      typedef typename pythonic::returnable<double>::type result_type;
    }  ;
    typename type::result_type operator()() const;
    ;
  }  ;
  struct pythran_get_p0
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type1;
      typedef column __type2;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type3;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type4;
      typedef decltype(std::declval<__type2>()(std::declval<__type3>(), std::declval<__type4>())) __type5;
      typedef long __type6;
      typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type5>(), std::declval<__type6>()))>::type __type7;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type7>::type>::type __type8;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::math::functor::cos{})>::type>::type __type9;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type10;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type4>(), std::declval<__type6>())) __type11;
      typedef decltype(std::declval<__type10>()[std::declval<__type11>()]) __type12;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type13;
      typedef decltype(std::declval<__type13>()[std::declval<__type11>()]) __type14;
      typedef decltype((pythonic::operator_::add(std::declval<__type12>(), std::declval<__type14>()))) __type15;
      typedef decltype(std::declval<__type9>()(std::declval<__type15>())) __type16;
      typedef pythonic::types::list<typename std::remove_reference<__type16>::type> __type17;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::math::functor::sin{})>::type>::type __type18;
      typedef decltype(std::declval<__type18>()(std::declval<__type15>())) __type19;
      typedef pythonic::types::list<typename std::remove_reference<__type19>::type> __type20;
      typedef typename __combined<__type17,__type20>::type __type21;
      typedef pythonic::types::list<typename std::remove_reference<__type6>::type> __type22;
      typedef typename __combined<__type21,__type22>::type __type23;
      typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type23>()))>::type __type24;
      typedef typename std::tuple_element<2,typename std::remove_reference<__type24>::type>::type __type25;
      typedef decltype((pythonic::operator_::mul(std::declval<__type8>(), std::declval<__type25>()))) __type26;
      typedef typename std::tuple_element<2,typename std::remove_reference<__type7>::type>::type __type27;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type24>::type>::type __type28;
      typedef decltype((pythonic::operator_::mul(std::declval<__type27>(), std::declval<__type28>()))) __type29;
      typedef decltype((std::declval<__type26>() - std::declval<__type29>())) __type30;
      typedef pythonic::types::list<typename std::remove_reference<__type30>::type> __type31;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type24>::type>::type __type32;
      typedef decltype((pythonic::operator_::mul(std::declval<__type27>(), std::declval<__type32>()))) __type33;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type7>::type>::type __type34;
      typedef decltype((pythonic::operator_::mul(std::declval<__type34>(), std::declval<__type25>()))) __type35;
      typedef decltype((std::declval<__type33>() - std::declval<__type35>())) __type36;
      typedef pythonic::types::list<typename std::remove_reference<__type36>::type> __type37;
      typedef typename __combined<__type31,__type37>::type __type38;
      typedef decltype((pythonic::operator_::mul(std::declval<__type34>(), std::declval<__type28>()))) __type39;
      typedef decltype((pythonic::operator_::mul(std::declval<__type8>(), std::declval<__type32>()))) __type40;
      typedef decltype((std::declval<__type39>() - std::declval<__type40>())) __type41;
      typedef pythonic::types::list<typename std::remove_reference<__type41>::type> __type42;
      typedef typename __combined<__type38,__type42>::type __type43;
      typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type43>()))>::type __type44;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type45;
      typedef decltype(std::declval<__type45>()(std::declval<__type44>())) __type46;
      typedef decltype((pythonic::operator_::div(std::declval<__type44>(), std::declval<__type46>()))) __type47;
      typedef typename __combined<__type44,__type47>::type __type48;
      typedef typename pythonic::returnable<typename __combined<__type48,__type46>::type>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
    typename type<argument_type0, argument_type1, argument_type2, argument_type3>::result_type operator()(argument_type0&& alpha, argument_type1&& q, argument_type2&& s, argument_type3&& i) const
    ;
  }  ;
  struct shortest_distance
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
      typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type1>())) __type2;
      typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type2>()))>::type __type3;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::enumerate{})>::type>::type __type4;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type5;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::argmin{})>::type>::type __type6;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::absolute{})>::type>::type __type7;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::hstack{})>::type>::type __type8;
      typedef constrain_angle __type9;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type10;
      typedef decltype((std::declval<__type10>() - std::declval<__type1>())) __type11;
      typedef decltype(std::declval<__type9>()(std::declval<__type11>())) __type12;
      typedef double __type13;
      typedef decltype((pythonic::operator_::add(std::declval<__type10>(), std::declval<__type13>()))) __type14;
      typedef decltype((std::declval<__type14>() - std::declval<__type1>())) __type15;
      typedef decltype(std::declval<__type9>()(std::declval<__type15>())) __type16;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type12>(), std::declval<__type16>())) __type17;
      typedef typename pythonic::assignable<decltype(std::declval<__type8>()(std::declval<__type17>()))>::type __type18;
      typedef decltype(std::declval<__type7>()(std::declval<__type18>())) __type19;
      typedef long __type20;
      typedef decltype(std::declval<__type6>()(std::declval<__type19>(), std::declval<__type20>())) __type21;
      typedef decltype(std::declval<__type5>()(std::declval<__type21>(), std::declval<__type20>())) __type22;
      typedef typename pythonic::lazy<__type22>::type __type23;
      typedef decltype(std::declval<__type4>()(std::declval<__type23>())) __type24;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type24>::type::iterator>::value_type>::type __type25;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type25>::type>::type __type26;
      typedef typename pythonic::lazy<__type26>::type __type27;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type27>(), std::declval<__type20>())) __type28;
      typedef indexable<__type28> __type29;
      typedef typename __combined<__type3,__type29>::type __type30;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type25>::type>::type __type31;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type27>(), std::declval<__type31>())) __type32;
      typedef decltype(std::declval<__type18>()[std::declval<__type32>()]) __type33;
      typedef container<typename std::remove_reference<__type33>::type> __type34;
      typedef typename __combined<__type30,__type34>::type __type35;
      typedef typename __combined<__type35,__type29>::type __type36;
      typedef typename pythonic::returnable<typename __combined<__type36,__type34>::type>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 >
    typename type<argument_type0, argument_type1>::result_type operator()(argument_type0&& q_e, argument_type1&& q_d) const
    ;
  }  ;
  struct solve
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 >
    struct type
    {
      typedef pythonic::types::none_type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::dot{})>::type>::type __type1;
      typedef getTwoSquareMatrixInverse __type2;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type3;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type4;
      typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type4>())) __type5;
      typedef decltype(std::declval<__type1>()(std::declval<__type5>(), std::declval<__type4>())) __type6;
      typedef typename pythonic::lazy<__type6>::type __type7;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type8;
      typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type8>())) __type9;
      typedef decltype(std::declval<__type1>()(std::declval<__type9>(), std::declval<__type8>())) __type10;
      typedef typename pythonic::lazy<__type10>::type __type11;
      typedef typename __combined<__type7,__type11>::type __type12;
      typedef long __type13;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type13>(), std::declval<__type13>())) __type14;
      typedef decltype(std::declval<__type12>()[std::declval<__type14>()]) __type15;
      typedef pythonic::types::list<typename std::remove_reference<__type15>::type> __type16;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type17;
      typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type5>(), std::declval<__type17>()))>::type __type18;
      typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type9>(), std::declval<__type17>()))>::type __type19;
      typedef typename __combined<__type18,__type19>::type __type20;
      typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type9>(), std::declval<__type4>()))>::type __type21;
      typedef typename __combined<__type20,__type21>::type __type22;
      typedef decltype(std::declval<__type22>()[std::declval<__type14>()]) __type23;
      typedef pythonic::types::list<typename std::remove_reference<__type23>::type> __type24;
      typedef typename __combined<__type16,__type24>::type __type25;
      typedef pythonic::types::list<typename std::remove_reference<__type25>::type> __type26;
      typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type17>())) __type27;
      typedef decltype(std::declval<__type1>()(std::declval<__type27>(), std::declval<__type17>())) __type28;
      typedef typename pythonic::lazy<__type28>::type __type29;
      typedef typename __combined<__type29,__type7>::type __type30;
      typedef decltype(std::declval<__type30>()[std::declval<__type14>()]) __type31;
      typedef pythonic::types::list<typename std::remove_reference<__type31>::type> __type32;
      typedef typename __combined<__type24,__type32>::type __type33;
      typedef pythonic::types::list<typename std::remove_reference<__type33>::type> __type34;
      typedef typename __combined<__type26,__type34>::type __type35;
      typedef decltype(std::declval<__type3>()(std::declval<__type35>())) __type36;
      typedef decltype(std::declval<__type2>()(std::declval<__type36>())) __type37;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::concatenate{})>::type>::type __type38;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type39;
      typedef S __type40;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type41;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type42;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type43;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type8>::type>::type __type44;
      typedef decltype(std::declval<__type40>()(std::declval<__type41>(), std::declval<__type42>(), std::declval<__type43>(), std::declval<__type44>())) __type45;
      typedef typename pythonic::assignable<decltype((std::declval<__type39>() - std::declval<__type45>()))>::type __type46;
      typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type46>())) __type47;
      typedef decltype(std::declval<__type1>()(std::declval<__type47>(), std::declval<__type4>())) __type48;
      typedef decltype(std::declval<__type1>()(std::declval<__type47>(), std::declval<__type17>())) __type49;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type48>(), std::declval<__type49>())) __type50;
      typedef decltype(std::declval<__type38>()(std::declval<__type50>())) __type51;
      typedef typename pythonic::lazy<__type51>::type __type52;
      typedef decltype(std::declval<__type1>()(std::declval<__type47>(), std::declval<__type8>())) __type53;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type53>(), std::declval<__type49>())) __type54;
      typedef decltype(std::declval<__type38>()(std::declval<__type54>())) __type55;
      typedef typename pythonic::lazy<__type55>::type __type56;
      typedef typename __combined<__type52,__type56>::type __type57;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type53>(), std::declval<__type48>())) __type58;
      typedef decltype(std::declval<__type38>()(std::declval<__type58>())) __type59;
      typedef typename pythonic::lazy<__type59>::type __type60;
      typedef typename __combined<__type57,__type60>::type __type61;
      typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type37>(), std::declval<__type61>()))>::type __type62;
      typedef decltype(std::declval<__type62>()[std::declval<__type14>()]) __type63;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type0>(), std::declval<__type63>(), std::declval<__type63>())) __type64;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type63>(), std::declval<__type0>(), std::declval<__type63>())) __type65;
      typedef typename __combined<__type64,__type65>::type __type66;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type63>(), std::declval<__type63>(), std::declval<__type0>())) __type67;
      typedef typename pythonic::returnable<typename __combined<__type66,__type67>::type>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 >
    typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8, argument_type9>::result_type operator()(argument_type0&& S_u, argument_type1&& S_v, argument_type2&& S_w, argument_type3&& none_axis, argument_type4&& q, argument_type5&& lmda, argument_type6&& a, argument_type7&& a_orth, argument_type8&& l_v, argument_type9&& n) const
    ;
  }  ;
  struct update_parameters
  {
    typedef void callable;
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
      typedef long __type1;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type1>(), std::declval<__type1>())) __type2;
      typedef decltype(std::declval<__type0>()[std::declval<__type2>()]) __type3;
      typedef container<typename std::remove_reference<__type3>::type> __type4;
      typedef typename __combined<__type0,__type4>::type __type5;
      typedef decltype(std::declval<__type5>()[std::declval<__type2>()]) __type6;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::functools::functor::partial{})>::type>::type __type7;
      typedef pythran_lmda_t0 __type8;
      typedef typename pythonic::assignable<decltype(std::declval<__type7>()(std::declval<__type8>()))>::type __type9;
      typedef pythran_lmda_t1 __type10;
      typedef typename pythonic::assignable<decltype(std::declval<__type7>()(std::declval<__type10>()))>::type __type11;
      typedef typename __combined<__type9,__type11>::type __type12;
      typedef pythran_lmda_t2 __type13;
      typedef typename pythonic::assignable<decltype(std::declval<__type7>()(std::declval<__type13>()))>::type __type14;
      typedef typename __combined<__type12,__type14>::type __type15;
      typedef typename pythonic::assignable<decltype(std::declval<__type0>()[std::declval<__type2>()])>::type __type16;
      typedef container<typename std::remove_reference<__type6>::type> __type17;
      typedef typename __combined<__type5,__type17>::type __type18;
      typedef typename pythonic::assignable<decltype(std::declval<__type18>()[std::declval<__type2>()])>::type __type19;
      typedef typename __combined<__type16,__type19>::type __type20;
      typedef decltype(std::declval<__type18>()[std::declval<__type2>()]) __type21;
      typedef container<typename std::remove_reference<__type21>::type> __type22;
      typedef typename __combined<__type18,__type22>::type __type23;
      typedef decltype(std::declval<__type23>()[std::declval<__type2>()]) __type24;
      typedef container<typename std::remove_reference<__type24>::type> __type25;
      typedef typename __combined<__type23,__type25>::type __type26;
      typedef typename pythonic::assignable<decltype(std::declval<__type26>()[std::declval<__type2>()])>::type __type27;
      typedef typename pythonic::assignable<typename __combined<__type20,__type27>::type>::type __type28;
      typedef typename pythonic::assignable<decltype(std::declval<__type5>()[std::declval<__type2>()])>::type __type29;
      typedef typename pythonic::assignable<decltype(std::declval<__type23>()[std::declval<__type2>()])>::type __type30;
      typedef typename __combined<__type29,__type30>::type __type31;
      typedef decltype(std::declval<__type26>()[std::declval<__type2>()]) __type32;
      typedef container<typename std::remove_reference<__type32>::type> __type33;
      typedef typename __combined<__type26,__type33>::type __type34;
      typedef typename pythonic::assignable<decltype(std::declval<__type34>()[std::declval<__type2>()])>::type __type35;
      typedef typename pythonic::assignable<typename __combined<__type31,__type35>::type>::type __type36;
      typedef decltype(std::declval<__type15>()(std::declval<__type28>(), std::declval<__type36>())) __type37;
      typedef bool __type38;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type37>(), std::declval<__type38>())) __type39;
      typedef typename __combined<__type20,__type27>::type __type40;
      typedef typename pythonic::assignable<typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type>::type __type41;
      typedef typename pythonic::assignable<typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type>::type __type42;
      typedef typename __combined<__type41,__type42>::type __type43;
      typedef typename pythonic::assignable<decltype((pythonic::operator_::add(std::declval<__type40>(), std::declval<__type43>())))>::type __type44;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type45;
      typedef pythonic::types::list<typename std::remove_reference<__type44>::type> __type46;
      typedef typename __combined<__type31,__type35>::type __type47;
      typedef typename pythonic::assignable<typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type>::type __type48;
      typedef typename __combined<__type48,__type41>::type __type49;
      typedef typename pythonic::assignable<decltype((pythonic::operator_::add(std::declval<__type47>(), std::declval<__type49>())))>::type __type50;
      typedef pythonic::types::list<typename std::remove_reference<__type50>::type> __type51;
      typedef typename __combined<__type46,__type51>::type __type52;
      typedef typename pythonic::assignable<decltype(std::declval<__type45>()(std::declval<__type52>()))>::type __type53;
      typedef decltype((pythonic::operator_::div(std::declval<__type44>(), std::declval<__type53>()))) __type54;
      typedef typename __combined<__type44,__type54>::type __type55;
      typedef typename __combined<__type55,__type53>::type __type56;
      typedef typename __combined<__type55,__type56>::type __type57;
      typedef typename __combined<__type57,__type53>::type __type58;
      typedef decltype((pythonic::operator_::div(std::declval<__type50>(), std::declval<__type53>()))) __type59;
      typedef typename __combined<__type50,__type59>::type __type60;
      typedef typename __combined<__type60,__type53>::type __type61;
      typedef typename __combined<__type60,__type61>::type __type62;
      typedef typename __combined<__type62,__type53>::type __type63;
      typedef decltype(std::declval<__type15>()(std::declval<__type58>(), std::declval<__type63>())) __type64;
      typedef decltype(pythonic::types::make_tuple(std::declval<__type64>(), std::declval<__type38>())) __type65;
      typedef __type3 __ptype12;
      typedef __type6 __ptype13;
      typedef typename pythonic::returnable<typename __combined<__type39,__type65>::type>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 >
    typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8, argument_type9>::result_type operator()(argument_type0&& lmda, argument_type1&& delta_u, argument_type2&& delta_v, argument_type3&& delta_w, argument_type4&& none_axis, argument_type5&& q, argument_type6&& a, argument_type7&& a_orth, argument_type8&& l_v, argument_type9&& n) const
    ;
  }  ;
  struct select_starting_points
  {
    typedef void callable;
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 >
    struct type
    {
      typedef typename pythonic::assignable<pythonic::types::empty_list>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type1;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__dispatch__::functor::pop{})>::type>::type __type2;
      typedef cross __type3;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::functools::functor::partial{})>::type>::type __type4;
      typedef pythran_get_p0 __type5;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type6;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type7;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type8;
      typedef typename pythonic::assignable<decltype(std::declval<__type4>()(std::declval<__type5>(), std::declval<__type6>(), std::declval<__type7>(), std::declval<__type8>()))>::type __type9;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::range{})>::type>::type __type10;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type11;
      typedef decltype(std::declval<__type10>()(std::declval<__type11>())) __type12;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type12>::type::iterator>::value_type>::type __type13;
      typedef typename pythonic::assignable<decltype(std::declval<__type9>()(std::declval<__type13>()))>::type __type14;
      typedef decltype(std::declval<__type3>()(std::declval<__type14>(), std::declval<__type14>())) __type15;
      typedef long __type16;
      typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type15>(), std::declval<__type16>(), std::declval<__type16>()))>::type __type17;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type18;
      typedef decltype(std::declval<__type18>()(std::declval<__type17>())) __type19;
      typedef decltype((pythonic::operator_::div(std::declval<__type17>(), std::declval<__type19>()))) __type20;
      typedef typename __combined<__type17,__type20>::type __type21;
      typedef typename __combined<__type21,__type19>::type __type22;
      typedef typename pythonic::assignable<decltype((-std::declval<__type22>()))>::type __type23;
      typedef typename __combined<__type22,__type23>::type __type24;
      typedef pythonic::types::list<typename std::remove_reference<__type24>::type> __type25;
      typedef typename __combined<__type0,__type25>::type __type26;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::argmin{})>::type>::type __type27;
      typedef shortest_distance __type28;
      typedef S __type29;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type30;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type31;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type32;
      typedef decltype(std::declval<__type29>()(std::declval<__type24>(), std::declval<__type30>(), std::declval<__type31>(), std::declval<__type32>())) __type33;
      typedef decltype(std::declval<__type28>()(std::declval<__type7>(), std::declval<__type33>())) __type34;
      typedef typename pythonic::assignable<decltype(std::declval<__type18>()(std::declval<__type34>()))>::type __type35;
      typedef pythonic::types::list<typename std::remove_reference<__type35>::type> __type36;
      typedef typename __combined<__type0,__type36>::type __type37;
      typedef typename pythonic::assignable<decltype(std::declval<__type27>()(std::declval<__type37>()))>::type __type38;
      typedef decltype(std::declval<__type2>()(std::declval<__type26>(), std::declval<__type38>())) __type39;
      typedef decltype(std::declval<__type1>()(std::declval<__type39>(), std::declval<__type16>(), std::declval<__type16>())) __type40;
      typedef pythonic::types::list<typename std::remove_reference<__type40>::type> __type41;
      typedef typename pythonic::returnable<typename __combined<__type0,__type41>::type>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 >
    typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6>::result_type operator()(argument_type0&& q, argument_type1&& alpha, argument_type2&& a, argument_type3&& a_orth, argument_type4&& s, argument_type5&& l_v, argument_type6&& n) const
    ;
  }  ;
  struct estimate_lmda
  {
    typedef void callable;
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 >
    struct type
    {
      typedef select_starting_points __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type2;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type3;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type4;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type5;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type6;
      typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type1>())) __type7;
      typedef typename pythonic::assignable<typename std::tuple_element<0,typename std::remove_reference<__type7>::type>::type>::type __type8;
      typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type1>(), std::declval<__type2>(), std::declval<__type3>(), std::declval<__type4>(), std::declval<__type5>(), std::declval<__type6>(), std::declval<__type8>()))>::type __type9;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type9>::type>::type __type10;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type11;
      typedef typename pythonic::assignable<typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type9>::type::iterator>::value_type>::type>::type __type12;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type9>::type::iterator>::value_type>::type __type13;
      typedef typename __combined<__type12,__type13>::type __type14;
      typedef solve __type15;
      typedef compute_derivatives __type16;
      typedef typename pythonic::assignable<decltype(std::declval<__type16>()(std::declval<__type14>(), std::declval<__type3>(), std::declval<__type4>(), std::declval<__type5>(), std::declval<__type6>(), std::declval<__type8>()))>::type __type17;
      typedef typename pythonic::assignable<typename std::tuple_element<0,typename std::remove_reference<__type17>::type>::type>::type __type18;
      typedef typename pythonic::assignable<typename std::tuple_element<1,typename std::remove_reference<__type17>::type>::type>::type __type19;
      typedef typename pythonic::assignable<typename std::tuple_element<2,typename std::remove_reference<__type17>::type>::type>::type __type20;
      typedef typename pythonic::assignable<typename std::tuple_element<3,typename std::remove_reference<__type17>::type>::type>::type __type21;
      typedef typename pythonic::assignable<decltype(std::declval<__type15>()(std::declval<__type18>(), std::declval<__type19>(), std::declval<__type20>(), std::declval<__type21>(), std::declval<__type1>(), std::declval<__type14>(), std::declval<__type3>(), std::declval<__type4>(), std::declval<__type6>(), std::declval<__type8>()))>::type __type22;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type22>::type>::type __type23;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type22>::type>::type __type24;
      typedef typename std::tuple_element<2,typename std::remove_reference<__type22>::type>::type __type25;
      typedef typename update_parameters::type<__type14, __type23, __type24, __type25, __type21, __type1, __type3, __type4, __type6, __type8>::__ptype12 __type26;
      typedef container<typename std::remove_reference<__type26>::type> __type27;
      typedef typename __combined<__type14,__type27>::type __type28;
      typedef typename update_parameters::type<__type28, __type23, __type24, __type25, __type21, __type1, __type3, __type4, __type6, __type8>::__ptype13 __type29;
      typedef container<typename std::remove_reference<__type29>::type> __type30;
      typedef typename __combined<__type28,__type30>::type __type31;
      typedef typename __combined<__type14,__type31>::type __type32;
      typedef typename __combined<__type27,__type30>::type __type33;
      typedef update_parameters __type34;
      typedef typename pythonic::assignable<decltype(std::declval<__type34>()(std::declval<__type31>(), std::declval<__type23>(), std::declval<__type24>(), std::declval<__type25>(), std::declval<__type21>(), std::declval<__type1>(), std::declval<__type3>(), std::declval<__type4>(), std::declval<__type6>(), std::declval<__type8>()))>::type __type35;
      typedef typename std::tuple_element<0,typename std::remove_reference<__type35>::type>::type __type36;
      typedef typename pythonic::assignable<typename pythonic::assignable<typename __combined<__type33,__type36>::type>::type>::type __type37;
      typedef typename __combined<__type32,__type37>::type __type38;
      typedef long __type39;
      typedef typename pythonic::assignable<decltype(std::declval<__type11>()(std::declval<__type38>(), std::declval<__type39>(), std::declval<__type39>()))>::type __type40;
      typedef typename pythonic::assignable<decltype((-std::declval<__type40>()))>::type __type41;
      typedef typename __combined<__type40,__type41>::type __type42;
      typedef typename __combined<__type10,__type42>::type __type43;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type44;
      typedef double __type45;
      typedef pythonic::types::list<typename std::remove_reference<__type45>::type> __type46;
      typedef pythonic::types::list<typename std::remove_reference<__type46>::type> __type47;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::float64{})>::type>::type __type48;
      typedef typename pythonic::assignable<decltype(std::declval<__type44>()(std::declval<__type47>(), std::declval<__type48>()))>::type __type49;
      typedef typename __combined<__type49,__type12>::type __type50;
      typedef typename pythonic::assignable<typename __combined<__type33,__type36>::type>::type __type51;
      typedef typename pythonic::assignable<typename __combined<__type33,__type51>::type>::type __type52;
      typedef typename __combined<__type52,__type51>::type __type53;
      typedef typename __combined<__type50,__type53>::type __type54;
      typedef typename pythonic::assignable<decltype(std::declval<__type11>()(std::declval<__type54>(), std::declval<__type39>(), std::declval<__type39>()))>::type __type55;
      typedef typename pythonic::assignable<decltype((-std::declval<__type55>()))>::type __type56;
      typedef typename __combined<__type55,__type56>::type __type57;
      typedef typename pythonic::returnable<typename __combined<__type43,__type57>::type>::type result_type;
    }  
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 >
    typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5>::result_type operator()(argument_type0&& q, argument_type1&& alpha, argument_type2&& a, argument_type3&& a_orth, argument_type4&& s, argument_type5&& l_v) const
    ;
  }  ;
  template <typename argument_type0 , typename argument_type1 >
  typename pythran_lmda_t2::type<argument_type0, argument_type1>::result_type pythran_lmda_t2::operator()(argument_type0&& m, argument_type1&& n) const
  {
    ;
    typename pythonic::assignable<decltype(pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()}))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()}))>::type>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()})})))>::type unnormed = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()}))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()}))>::type>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()})}));
    return (pythonic::operator_::div(unnormed, pythonic::numpy::linalg::functor::norm{}(unnormed)));
  }
  template <typename argument_type0 , typename argument_type1 >
  typename pythran_lmda_t1::type<argument_type0, argument_type1>::result_type pythran_lmda_t1::operator()(argument_type0&& m, argument_type1&& n) const
  {
    ;
    typename pythonic::assignable<decltype(pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()}))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()}))>::type>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()})})))>::type unnormed = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()}))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()}))>::type>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()})}));
    return (pythonic::operator_::div(unnormed, pythonic::numpy::linalg::functor::norm{}(unnormed)));
  }
  template <typename argument_type0 , typename argument_type1 >
  typename pythran_lmda_t0::type<argument_type0, argument_type1>::result_type pythran_lmda_t0::operator()(argument_type0&& m, argument_type1&& n) const
  {
    ;
    typename pythonic::assignable<decltype(pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()}))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()}))>::type>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()})})))>::type unnormed = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()}))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()}))>::type>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)))>::type>::type>::type>>::type({(pythonic::__builtin__::pow(pythonic::__builtin__::functor::max{}(((1L - pythonic::numpy::functor::square{}(m)) - pythonic::numpy::functor::square{}(n)), 0.0), 0.5)), pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(m)>::type>::type>::type>>::type({m, pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(n)>::type>::type>::type>>::type({n, pythonic::types::single_value()})}));
    return (pythonic::operator_::div(unnormed, pythonic::numpy::linalg::functor::norm{}(unnormed)));
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
  typename $isstatic5::type<argument_type0, argument_type1, argument_type2>::result_type $isstatic5::operator()(argument_type0&& S_u, argument_type1&& S_w, argument_type2&& last_singularity) const
  {
    return pythonic::types::make_tuple();
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
  typename $isstatic4::type<argument_type0, argument_type1, argument_type2>::result_type $isstatic4::operator()(argument_type0&& S_u, argument_type1&& S_w, argument_type2&& last_singularity) const
  {
    S_w[last_singularity] = 0L;
    return pythonic::types::make_tuple();
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
  typename $isstatic3::type<argument_type0, argument_type1, argument_type2>::result_type $isstatic3::operator()(argument_type0&& S_u, argument_type1&& S_v, argument_type2&& last_singularity) const
  {
    return pythonic::types::make_tuple();
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
  typename $isstatic2::type<argument_type0, argument_type1, argument_type2>::result_type $isstatic2::operator()(argument_type0&& S_u, argument_type1&& S_v, argument_type2&& last_singularity) const
  {
    S_v[last_singularity] = 0L;
    return pythonic::types::make_tuple();
  }
  template <typename argument_type0 , typename argument_type1 >
  typename $isstatic1::type<argument_type0, argument_type1>::result_type $isstatic1::operator()(argument_type0&& S_u, argument_type1&& last_singularity) const
  {
    return pythonic::types::make_tuple();
  }
  template <typename argument_type0 , typename argument_type1 >
  typename $isstatic0::type<argument_type0, argument_type1>::result_type $isstatic0::operator()(argument_type0&& S_u, argument_type1&& last_singularity) const
  {
    S_u[last_singularity] = 0L;
    return pythonic::types::make_tuple();
  }
  template <typename argument_type0 >
  typename constrain_angle::type<argument_type0>::result_type constrain_angle::operator()(argument_type0&& angle) const
  {
    return pythonic::numpy::functor::arctan2{}(pythonic::numpy::functor::sin{}(angle), pythonic::numpy::functor::cos{}(angle));
  }
  template <typename argument_type0 >
  typename getTwoSquareMatrixInverse::type<argument_type0>::result_type getTwoSquareMatrixInverse::operator()(argument_type0&& m) const
  {
    typename pythonic::assignable<decltype(((pythonic::operator_::mul(std::get<0>(std::get<0>(m)), std::get<1>(std::get<1>(m)))) - (pythonic::operator_::mul(std::get<1>(std::get<0>(m)), std::get<0>(std::get<1>(m))))))>::type determinant = ((pythonic::operator_::mul(std::get<0>(std::get<0>(m)), std::get<1>(std::get<1>(m)))) - (pythonic::operator_::mul(std::get<1>(std::get<0>(m)), std::get<0>(std::get<1>(m)))));
    return pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div(std::get<1>(std::get<1>(m)), determinant)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((pythonic::operator_::mul(-1L, std::get<1>(std::get<0>(m)))), determinant)))>::type>::type>::type>::type>>::type({(pythonic::operator_::div(std::get<1>(std::get<1>(m)), determinant)), (pythonic::operator_::div((pythonic::operator_::mul(-1L, std::get<1>(std::get<0>(m)))), determinant))}))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((pythonic::operator_::mul(-1L, std::get<0>(std::get<1>(m)))), determinant)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div(std::get<0>(std::get<0>(m)), determinant)))>::type>::type>::type>::type>>::type({(pythonic::operator_::div((pythonic::operator_::mul(-1L, std::get<0>(std::get<1>(m)))), determinant)), (pythonic::operator_::div(std::get<0>(std::get<0>(m)), determinant))}))>::type>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div(std::get<1>(std::get<1>(m)), determinant)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((pythonic::operator_::mul(-1L, std::get<1>(std::get<0>(m)))), determinant)))>::type>::type>::type>::type>>::type({(pythonic::operator_::div(std::get<1>(std::get<1>(m)), determinant)), (pythonic::operator_::div((pythonic::operator_::mul(-1L, std::get<1>(std::get<0>(m)))), determinant))}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((pythonic::operator_::mul(-1L, std::get<0>(std::get<1>(m)))), determinant)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div(std::get<0>(std::get<0>(m)), determinant)))>::type>::type>::type>::type>>::type({(pythonic::operator_::div((pythonic::operator_::mul(-1L, std::get<0>(std::get<1>(m)))), determinant)), (pythonic::operator_::div(std::get<0>(std::get<0>(m)), determinant))})}));
  }
  template <typename argument_type0 , typename argument_type1 >
  typename cross::type<argument_type0, argument_type1>::result_type cross::operator()(argument_type0&& a, argument_type1&& b) const
  {
    return pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(((pythonic::operator_::mul(std::get<2>(a), std::get<0>(b))) - (pythonic::operator_::mul(std::get<0>(a), std::get<2>(b)))))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(((pythonic::operator_::mul(std::get<0>(a), std::get<1>(b))) - (pythonic::operator_::mul(std::get<1>(a), std::get<0>(b)))))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(((pythonic::operator_::mul(std::get<1>(a), std::get<2>(b))) - (pythonic::operator_::mul(std::get<2>(a), std::get<1>(b)))))>::type>::type>::type>::type>>::type({((pythonic::operator_::mul(std::get<1>(a), std::get<2>(b))) - (pythonic::operator_::mul(std::get<2>(a), std::get<1>(b)))), ((pythonic::operator_::mul(std::get<2>(a), std::get<0>(b))) - (pythonic::operator_::mul(std::get<0>(a), std::get<2>(b)))), ((pythonic::operator_::mul(std::get<0>(a), std::get<1>(b))) - (pythonic::operator_::mul(std::get<1>(a), std::get<0>(b))))}));
  }
  template <typename argument_type0 , typename argument_type1 >
  typename column::type<argument_type0, argument_type1>::result_type column::operator()(argument_type0&& mat, argument_type1&& row_i) const
  {
    return mat(pythonic::types::contiguous_slice(pythonic::__builtin__::None,pythonic::__builtin__::None),pythonic::types::contiguous_slice(row_i,(pythonic::operator_::add(row_i, 1L))));
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
  typename S::type<argument_type0, argument_type1, argument_type2, argument_type3>::result_type S::operator()(argument_type0&& lmda, argument_type1&& a, argument_type2&& a_orth, argument_type3&& l_v) const
  {
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::arctan2{})>::type>::type __type0;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::dot{})>::type>::type __type1;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type2;
    typedef typename pythonic::assignable<decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type2>()))>::type __type3;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type4;
    typedef decltype(std::declval<__type1>()(std::declval<__type3>(), std::declval<__type4>())) __type5;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type6;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type7;
    typedef decltype((std::declval<__type6>() - std::declval<__type7>())) __type8;
    typedef decltype(std::declval<__type1>()(std::declval<__type3>(), std::declval<__type8>())) __type9;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type5>(), std::declval<__type9>()))>::type __type10;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::isnan{})>::type>::type __type11;
    typedef double __type12;
    typedef container<typename std::remove_reference<__type12>::type> __type13;
    typedef typename __combined<__type10,__type13>::type __type14;
    typedef decltype(std::declval<__type11>()(std::declval<__type14>())) __type15;
    typedef indexable<__type15> __type16;
    typedef typename __combined<__type10,__type16>::type __type17;
    typedef typename __combined<__type17,__type13>::type __type18;
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, lmda)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, lmda)), 1L)); }), pythonic::__builtin__::functor::str{}(lmda));
    typename pythonic::assignable<decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, lmda))>::type lmda_T = pythonic::__builtin__::getattr(pythonic::types::attr::T{}, lmda);
    typename pythonic::assignable<typename __combined<__type18,__type16>::type>::type S = pythonic::numpy::functor::arctan2{}(pythonic::numpy::functor::dot{}(lmda_T, a_orth), pythonic::numpy::functor::dot{}(lmda_T, (a - l_v)));
    S[pythonic::numpy::functor::isnan{}(S)] = 1.5707963267948966;
    return pythonic::numpy::ndarray::functor::reshape{}(S, -1L, 1L);
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
  typename handle_singularities::type<argument_type0, argument_type1, argument_type2>::result_type handle_singularities::operator()(argument_type0&& lmda, argument_type1&& s, argument_type2&& n) const
  {
    typedef typename pythonic::assignable<pythonic::types::none_type>::type __type0;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::range{})>::type>::type __type1;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type2;
    typedef decltype(std::declval<__type1>()(std::declval<__type2>())) __type3;
    typedef typename pythonic::assignable<typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type3>::type::iterator>::value_type>::type>::type __type4;
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, lmda)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, lmda)), 1L)); }), pythonic::__builtin__::functor::str{}(lmda));
    typename pythonic::assignable<typename __combined<__type0,__type4>::type>::type wheel_number = pythonic::__builtin__::None;
    {
      long  __target140606222742752 = n;
      for (long  i=0L; i < __target140606222742752; i += 1L)
      {
        ;
        typename pythonic::assignable<decltype(i)>::type __pythran_inlinecolumnrow_i3 = i;
        typename pythonic::assignable<decltype(s(pythonic::types::contiguous_slice(pythonic::__builtin__::None,pythonic::__builtin__::None),pythonic::types::contiguous_slice(__pythran_inlinecolumnrow_i3,(pythonic::operator_::add(__pythran_inlinecolumnrow_i3, 1L)))))>::type s_col = s(pythonic::types::contiguous_slice(pythonic::__builtin__::None,pythonic::__builtin__::None),pythonic::types::contiguous_slice(__pythran_inlinecolumnrow_i3,(pythonic::operator_::add(__pythran_inlinecolumnrow_i3, 1L))));
        if (pythonic::numpy::functor::allclose{}(lmda, (pythonic::operator_::div(s_col, pythonic::numpy::linalg::functor::norm{}(s_col)))))
        {
          wheel_number = i;
          break;
        }
      }
    }
    return pythonic::types::make_tuple((! pythonic::__builtin__::pythran::functor::is_none{}(wheel_number)), wheel_number);
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 >
  typename compute_derivatives::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5>::result_type compute_derivatives::operator()(argument_type0&& lmda, argument_type1&& a, argument_type2&& a_orth, argument_type3&& s, argument_type4&& l_v, argument_type5&& n) const
  {
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::dot{})>::type>::type __type0;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
    typedef typename pythonic::assignable<decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type1>()))>::type __type2;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type3;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type4;
    typedef typename pythonic::assignable<decltype((std::declval<__type3>() - std::declval<__type4>()))>::type __type5;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type2>(), std::declval<__type5>()))>::type __type6;
    typedef decltype((pythonic::operator_::mul(std::declval<__type6>(), std::declval<__type5>()))) __type7;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type8;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type2>(), std::declval<__type8>()))>::type __type9;
    typedef decltype((pythonic::operator_::mul(std::declval<__type9>(), std::declval<__type8>()))) __type10;
    typedef decltype((std::declval<__type7>() - std::declval<__type10>())) __type11;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type2>(), std::declval<__type11>()))>::type __type12;
    typedef long __type13;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::enumerate{})>::type>::type __type14;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::logical_or{})>::type>::type __type15;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::all{})>::type>::type __type16;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::isclose{})>::type>::type __type17;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::concatenate{})>::type>::type __type18;
    typedef pythonic::types::list<typename std::remove_reference<__type2>::type> __type19;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type20;
    typedef decltype((pythonic::operator_::mul(std::declval<__type19>(), std::declval<__type20>()))) __type21;
    typedef typename pythonic::assignable<decltype(std::declval<__type18>()(std::declval<__type21>()))>::type __type22;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type23;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type24;
    typedef pythonic::types::none_type __type25;
    typedef decltype(std::declval<__type24>()(std::declval<__type23>(), std::declval<__type25>(), std::declval<__type13>())) __type26;
    typedef decltype((pythonic::operator_::div(std::declval<__type23>(), std::declval<__type26>()))) __type27;
    typedef typename pythonic::assignable<decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type27>()))>::type __type28;
    typedef double __type29;
    typedef decltype(std::declval<__type17>()(std::declval<__type22>(), std::declval<__type28>(), std::declval<__type29>(), std::declval<__type29>())) __type30;
    typedef decltype(std::declval<__type16>()(std::declval<__type30>(), std::declval<__type13>())) __type31;
    typedef decltype((-std::declval<__type28>())) __type32;
    typedef decltype(std::declval<__type17>()(std::declval<__type22>(), std::declval<__type32>(), std::declval<__type29>(), std::declval<__type29>())) __type33;
    typedef decltype(std::declval<__type16>()(std::declval<__type33>(), std::declval<__type13>())) __type34;
    typedef decltype(std::declval<__type15>()(std::declval<__type31>(), std::declval<__type34>())) __type35;
    typedef typename pythonic::lazy<__type35>::type __type36;
    typedef decltype(std::declval<__type14>()(std::declval<__type36>())) __type37;
    typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type37>::type::iterator>::value_type>::type __type38;
    typedef typename std::tuple_element<0,typename std::remove_reference<__type38>::type>::type __type39;
    typedef typename pythonic::lazy<__type39>::type __type40;
    typedef decltype(pythonic::types::make_tuple(std::declval<__type13>(), std::declval<__type40>())) __type41;
    typedef indexable<__type41> __type42;
    typedef typename __combined<__type12,__type42>::type __type43;
    typedef container<typename std::remove_reference<__type13>::type> __type44;
    typedef typename __combined<__type43,__type44>::type __type45;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type46;
    typedef decltype(pythonic::types::make_tuple(std::declval<__type13>(), std::declval<__type13>())) __type47;
    typedef decltype(std::declval<__type1>()[std::declval<__type47>()]) __type48;
    typedef decltype((-std::declval<__type48>())) __type49;
    typedef decltype((pythonic::operator_::div(std::declval<__type49>(), std::declval<__type48>()))) __type50;
    typedef pythonic::types::list<typename std::remove_reference<__type50>::type> __type51;
    typedef pythonic::types::list<typename std::remove_reference<__type13>::type> __type52;
    typedef typename __combined<__type51,__type52>::type __type53;
    typedef pythonic::types::list<typename std::remove_reference<__type53>::type> __type54;
    typedef decltype(std::declval<__type46>()(std::declval<__type54>())) __type55;
    typedef typename pythonic::lazy<__type55>::type __type56;
    typedef typename __combined<__type52,__type51>::type __type57;
    typedef pythonic::types::list<typename std::remove_reference<__type57>::type> __type58;
    typedef decltype(std::declval<__type46>()(std::declval<__type58>())) __type59;
    typedef typename pythonic::lazy<__type59>::type __type60;
    typedef typename __combined<__type56,__type60>::type __type61;
    typedef decltype((pythonic::operator_::mul(std::declval<__type9>(), std::declval<__type5>()))) __type62;
    typedef decltype((pythonic::operator_::mul(std::declval<__type6>(), std::declval<__type8>()))) __type63;
    typedef typename pythonic::assignable<decltype((pythonic::operator_::add(std::declval<__type62>(), std::declval<__type63>())))>::type __type64;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type61>(), std::declval<__type64>()))>::type __type65;
    typedef typename __combined<__type65,__type42>::type __type66;
    typedef typename __combined<__type66,__type44>::type __type67;
    typename pythonic::lazy<__type61>::type dn;
    typename pythonic::lazy<__type61>::type dm;
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, lmda)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, lmda)), 1L)); }), pythonic::__builtin__::functor::str{}(lmda));
    ;
    ;
    typename pythonic::assignable<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(pythonic::types::str("w"))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(pythonic::types::str("v"))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(pythonic::types::str("u"))>::type>::type>::type>::type>>::type({pythonic::types::str("u"), pythonic::types::str("v"), pythonic::types::str("w")}).fast(pythonic::numpy::functor::argmax{}(pythonic::numpy::ndarray::functor::reshape{}(lmda, -1L))))>::type axis = typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(pythonic::types::str("w"))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(pythonic::types::str("v"))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(pythonic::types::str("u"))>::type>::type>::type>::type>>::type({pythonic::types::str("u"), pythonic::types::str("v"), pythonic::types::str("w")}).fast(pythonic::numpy::functor::argmax{}(pythonic::numpy::ndarray::functor::reshape{}(lmda, -1L)));
    if ((pythonic::operator_::eq(axis, pythonic::types::str("u"))))
    {
      dm = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(1L, 0L))), lmda.fast(pythonic::types::make_tuple(0L, 0L)))))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type>::type>>::type({(pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(1L, 0L))), lmda.fast(pythonic::types::make_tuple(0L, 0L)))), 1L, 0L}))>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(1L, 0L))), lmda.fast(pythonic::types::make_tuple(0L, 0L)))))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type>::type>>::type({(pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(1L, 0L))), lmda.fast(pythonic::types::make_tuple(0L, 0L)))), 1L, 0L}), pythonic::types::single_value()}));
      dn = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(2L, 0L))), lmda.fast(pythonic::types::make_tuple(0L, 0L)))))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type>::type>>::type({(pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(2L, 0L))), lmda.fast(pythonic::types::make_tuple(0L, 0L)))), 0L, 1L}))>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(2L, 0L))), lmda.fast(pythonic::types::make_tuple(0L, 0L)))))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type>::type>>::type({(pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(2L, 0L))), lmda.fast(pythonic::types::make_tuple(0L, 0L)))), 0L, 1L}), pythonic::types::single_value()}));
    }
    else
    {
      if ((pythonic::operator_::eq(axis, pythonic::types::str("v"))))
      {
        dm = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(0L, 0L))), lmda.fast(pythonic::types::make_tuple(1L, 0L)))))>::type>::type>::type>::type>>::type({1L, (pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(0L, 0L))), lmda.fast(pythonic::types::make_tuple(1L, 0L)))), 0L}))>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(0L, 0L))), lmda.fast(pythonic::types::make_tuple(1L, 0L)))))>::type>::type>::type>::type>>::type({1L, (pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(0L, 0L))), lmda.fast(pythonic::types::make_tuple(1L, 0L)))), 0L}), pythonic::types::single_value()}));
        dn = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(2L, 0L))), lmda.fast(pythonic::types::make_tuple(1L, 0L)))))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type>::type>>::type({0L, (pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(2L, 0L))), lmda.fast(pythonic::types::make_tuple(1L, 0L)))), 1L}))>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(2L, 0L))), lmda.fast(pythonic::types::make_tuple(1L, 0L)))))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type>::type>>::type({0L, (pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(2L, 0L))), lmda.fast(pythonic::types::make_tuple(1L, 0L)))), 1L}), pythonic::types::single_value()}));
      }
      else
      {
        dm = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(0L, 0L))), lmda.fast(pythonic::types::make_tuple(2L, 0L)))))>::type>::type>::type>::type>>::type({1L, 0L, (pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(0L, 0L))), lmda.fast(pythonic::types::make_tuple(2L, 0L))))}))>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(0L, 0L))), lmda.fast(pythonic::types::make_tuple(2L, 0L)))))>::type>::type>::type>::type>>::type({1L, 0L, (pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(0L, 0L))), lmda.fast(pythonic::types::make_tuple(2L, 0L))))}), pythonic::types::single_value()}));
        dn = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(1L, 0L))), lmda.fast(pythonic::types::make_tuple(2L, 0L)))))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type>::type>>::type({0L, 1L, (pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(1L, 0L))), lmda.fast(pythonic::types::make_tuple(2L, 0L))))}))>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype((pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(1L, 0L))), lmda.fast(pythonic::types::make_tuple(2L, 0L)))))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(1L)>::type>::type>::type>::type>>::type({0L, 1L, (pythonic::operator_::div((-lmda.fast(pythonic::types::make_tuple(1L, 0L))), lmda.fast(pythonic::types::make_tuple(2L, 0L))))}), pythonic::types::single_value()}));
      }
    }
    typename pythonic::assignable<decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, lmda))>::type lmda_T = pythonic::__builtin__::getattr(pythonic::types::attr::T{}, lmda);
    typename pythonic::assignable<decltype(pythonic::numpy::functor::concatenate{}((pythonic::operator_::mul(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(lmda_T)>::type>::type>::type>>::type({lmda_T, pythonic::types::single_value()}), n))))>::type lmda_T_block = pythonic::numpy::functor::concatenate{}((pythonic::operator_::mul(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(lmda_T)>::type>::type>::type>>::type({lmda_T, pythonic::types::single_value()}), n)));
    typename pythonic::assignable<decltype((a - l_v))>::type diff = (a - l_v);
    typename pythonic::assignable<decltype(pythonic::numpy::functor::dot{}(lmda_T, diff))>::type delta = pythonic::numpy::functor::dot{}(lmda_T, diff);
    typename pythonic::assignable<decltype(pythonic::numpy::functor::dot{}(lmda_T, a_orth))>::type omega = pythonic::numpy::functor::dot{}(lmda_T, a_orth);
    typename pythonic::assignable<decltype((pythonic::operator_::add((pythonic::operator_::mul(omega, diff)), (pythonic::operator_::mul(delta, a_orth)))))>::type gamma_top = (pythonic::operator_::add((pythonic::operator_::mul(omega, diff)), (pythonic::operator_::mul(delta, a_orth))));
    typename pythonic::assignable<typename __combined<__type45,__type42>::type>::type gamma_bottom = pythonic::numpy::functor::dot{}(lmda_T, ((pythonic::operator_::mul(delta, diff)) - (pythonic::operator_::mul(omega, a_orth))));
    typename pythonic::assignable<decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, (pythonic::operator_::div(s, pythonic::numpy::linalg::functor::norm{}(s, pythonic::__builtin__::None, 0L)))))>::type lmda_singular = pythonic::__builtin__::getattr(pythonic::types::attr::T{}, (pythonic::operator_::div(s, pythonic::numpy::linalg::functor::norm{}(s, pythonic::__builtin__::None, 0L))));
    typename pythonic::lazy<decltype(pythonic::numpy::functor::logical_or{}(pythonic::numpy::functor::all{}(pythonic::numpy::functor::isclose{}(lmda_T_block, lmda_singular, 1e-05, 0.001), 1L), pythonic::numpy::functor::all{}(pythonic::numpy::functor::isclose{}(lmda_T_block, (-lmda_singular), 1e-05, 0.001), 1L)))>::type is_singular = pythonic::numpy::functor::logical_or{}(pythonic::numpy::functor::all{}(pythonic::numpy::functor::isclose{}(lmda_T_block, lmda_singular, 1e-05, 0.001), 1L), pythonic::numpy::functor::all{}(pythonic::numpy::functor::isclose{}(lmda_T_block, (-lmda_singular), 1e-05, 0.001), 1L));
    typename pythonic::assignable<typename __combined<__type67,__type42>::type>::type S_m = pythonic::numpy::functor::dot{}(dm, gamma_top);
    ;
    {
      for (auto&& __tuple0: pythonic::__builtin__::functor::enumerate{}(is_singular))
      {
        ;
        typename pythonic::lazy<decltype(std::get<0>(__tuple0))>::type i = std::get<0>(__tuple0);
        if (std::get<1>(__tuple0))
        {
          gamma_bottom[pythonic::types::make_tuple(0L, i)] = 1L;
          S_m[pythonic::types::make_tuple(0L, i)] = 0L;
        }
      }
    }
    typename pythonic::assignable<decltype(pythonic::numpy::ndarray::functor::reshape{}((pythonic::operator_::div(S_m, gamma_bottom)), -1L, 1L))>::type S_m_ = pythonic::numpy::ndarray::functor::reshape{}((pythonic::operator_::div(S_m, gamma_bottom)), -1L, 1L);
    typename pythonic::assignable<decltype(pythonic::numpy::ndarray::functor::reshape{}((pythonic::operator_::div(pythonic::numpy::functor::dot{}(dn, gamma_top), gamma_bottom)), -1L, 1L))>::type S_n_ = pythonic::numpy::ndarray::functor::reshape{}((pythonic::operator_::div(pythonic::numpy::functor::dot{}(dn, gamma_top), gamma_bottom)), -1L, 1L);
    typename pythonic::assignable<decltype(pythonic::numpy::functor::zeros{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, S_m_)))>::type zeros = pythonic::numpy::functor::zeros{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, S_m_));
    if ((pythonic::operator_::eq(axis, pythonic::types::str("u"))))
    {
      return pythonic::types::make_tuple(zeros, S_m_, S_n_, axis);
    }
    if ((pythonic::operator_::eq(axis, pythonic::types::str("v"))))
    {
      return pythonic::types::make_tuple(S_m_, zeros, S_n_, axis);
    }
    if ((pythonic::operator_::eq(axis, pythonic::types::str("w"))))
    {
      return pythonic::types::make_tuple(S_m_, S_n_, zeros, axis);
    }
    return pythonic::__builtin__::None;
  }
  template <typename argument_type0 , typename argument_type1 >
  typename make_vectors::type<argument_type0, argument_type1>::result_type make_vectors::operator()(argument_type0&& alpha, argument_type1&& l) const
  {
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type0;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::pythran::functor::make_shape{})>::type>::type __type1;
    typedef std::integral_constant<long, 3> __type2;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type3;
    typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type3>())) __type4;
    typedef typename pythonic::assignable<typename std::tuple_element<0,typename std::remove_reference<__type4>::type>::type>::type __type5;
    typedef decltype(std::declval<__type1>()(std::declval<__type2>(), std::declval<__type5>())) __type6;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type6>()))>::type __type7;
    typedef long __type8;
    typedef indexable<__type8> __type9;
    typedef typename __combined<__type7,__type9>::type __type10;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::cos{})>::type>::type __type11;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type12;
    typedef typename pythonic::assignable<decltype(std::declval<__type12>()(std::declval<__type3>(), std::declval<__type8>()))>::type __type13;
    typedef typename pythonic::assignable<decltype(std::declval<__type11>()(std::declval<__type13>()))>::type __type14;
    typedef container<typename std::remove_reference<__type14>::type> __type15;
    typedef typename __combined<__type10,__type15>::type __type16;
    typedef typename __combined<__type16,__type9>::type __type17;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::sin{})>::type>::type __type18;
    typedef typename pythonic::assignable<decltype(std::declval<__type18>()(std::declval<__type13>()))>::type __type19;
    typedef container<typename std::remove_reference<__type19>::type> __type20;
    typedef decltype((-std::declval<__type19>())) __type21;
    typedef container<typename std::remove_reference<__type21>::type> __type22;
    typedef typename __combined<__type10,__type22>::type __type23;
    typedef typename __combined<__type23,__type9>::type __type24;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type25;
    typedef typename pythonic::assignable<decltype(std::declval<__type12>()(std::declval<__type25>(), std::declval<__type8>()))>::type __type26;
    typedef decltype((pythonic::operator_::mul(std::declval<__type26>(), std::declval<__type14>()))) __type27;
    typedef container<typename std::remove_reference<__type27>::type> __type28;
    typedef typename __combined<__type10,__type28>::type __type29;
    typedef typename __combined<__type29,__type9>::type __type30;
    typedef decltype((pythonic::operator_::mul(std::declval<__type26>(), std::declval<__type19>()))) __type31;
    typedef container<typename std::remove_reference<__type31>::type> __type32;
    typedef typename __combined<__type30,__type32>::type __type33;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::ones{})>::type>::type __type34;
    typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type13>())) __type35;
    typedef decltype(std::declval<__type34>()(std::declval<__type35>())) __type36;
    typedef container<typename std::remove_reference<__type36>::type> __type37;
    typedef container<typename std::remove_reference<__type26>::type> __type38;
    typedef typename __combined<__type10,__type38>::type __type39;
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, alpha)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, alpha)), 1L)); }), pythonic::__builtin__::functor::str{}(alpha));
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, l)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, l)), 1L)); }), pythonic::__builtin__::functor::str{}(l));
    typename pythonic::assignable<decltype(std::get<0>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, alpha)))>::type n = std::get<0>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, alpha));
    typename pythonic::assignable<decltype(pythonic::numpy::ndarray::functor::reshape{}(alpha, -1L))>::type alpha_row = pythonic::numpy::ndarray::functor::reshape{}(alpha, -1L);
    ;
    typename pythonic::assignable<decltype(pythonic::numpy::ndarray::functor::reshape{}(l, -1L))>::type l_row = pythonic::numpy::ndarray::functor::reshape{}(l, -1L);
    typename pythonic::assignable<decltype(pythonic::numpy::functor::cos{}(alpha_row))>::type cos = pythonic::numpy::functor::cos{}(alpha_row);
    typename pythonic::assignable<decltype(pythonic::numpy::functor::sin{}(alpha_row))>::type sin = pythonic::numpy::functor::sin{}(alpha_row);
    typename pythonic::assignable<typename __combined<__type17,__type20>::type>::type a = pythonic::numpy::functor::zeros{}(pythonic::__builtin__::pythran::functor::make_shape{}(std::integral_constant<long, 3>{}, n));
    std::get<0>(a) = cos;
    std::get<1>(a) = sin;
    typename pythonic::assignable<typename __combined<__type24,__type15>::type>::type a_orth = pythonic::numpy::functor::zeros{}(pythonic::__builtin__::pythran::functor::make_shape{}(std::integral_constant<long, 3>{}, n));
    std::get<0>(a_orth) = (-sin);
    std::get<1>(a_orth) = cos;
    typename pythonic::assignable<typename __combined<__type33,__type37>::type>::type s = pythonic::numpy::functor::zeros{}(pythonic::__builtin__::pythran::functor::make_shape{}(std::integral_constant<long, 3>{}, n));
    std::get<0>(s) = (pythonic::operator_::mul(l_row, cos));
    std::get<1>(s) = (pythonic::operator_::mul(l_row, sin));
    std::get<2>(s) = pythonic::numpy::functor::ones{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, alpha_row));
    typename pythonic::assignable<typename __combined<__type39,__type9>::type>::type l_v = pythonic::numpy::functor::zeros{}(pythonic::__builtin__::pythran::functor::make_shape{}(std::integral_constant<long, 3>{}, n));
    std::get<2>(l_v) = l_row;
    return pythonic::types::make_tuple(a, a_orth, s, l_v);
  }
  typename tolerance::type::result_type tolerance::operator()() const
  {
    {
      static typename tolerance::type::result_type tmp_global = 0.001;
      return tmp_global;
    }
  }
  typename max_iter::type::result_type max_iter::operator()() const
  {
    {
      static typename max_iter::type::result_type tmp_global = 50L;
      return tmp_global;
    }
  }
  typename min_delta_size::type::result_type min_delta_size::operator()() const
  {
    {
      static typename min_delta_size::type::result_type tmp_global = 0.01;
      return tmp_global;
    }
  }
  typename eta_delta::type::result_type eta_delta::operator()() const
  {
    {
      static typename eta_delta::type::result_type tmp_global = 0.01;
      return tmp_global;
    }
  }
  typename eta_lmda::type::result_type eta_lmda::operator()() const
  {
    {
      static typename eta_lmda::type::result_type tmp_global = 0.0001;
      return tmp_global;
    }
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
  typename pythran_get_p0::type<argument_type0, argument_type1, argument_type2, argument_type3>::result_type pythran_get_p0::operator()(argument_type0&& alpha, argument_type1&& q, argument_type2&& s, argument_type3&& i) const
  {
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type0;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type1;
    typedef column __type2;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type3;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type4;
    typedef decltype(std::declval<__type2>()(std::declval<__type3>(), std::declval<__type4>())) __type5;
    typedef long __type6;
    typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type5>(), std::declval<__type6>()))>::type __type7;
    typedef typename std::tuple_element<1,typename std::remove_reference<__type7>::type>::type __type8;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::math::functor::cos{})>::type>::type __type9;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type10;
    typedef decltype(pythonic::types::make_tuple(std::declval<__type4>(), std::declval<__type6>())) __type11;
    typedef decltype(std::declval<__type10>()[std::declval<__type11>()]) __type12;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type13;
    typedef decltype(std::declval<__type13>()[std::declval<__type11>()]) __type14;
    typedef decltype((pythonic::operator_::add(std::declval<__type12>(), std::declval<__type14>()))) __type15;
    typedef decltype(std::declval<__type9>()(std::declval<__type15>())) __type16;
    typedef pythonic::types::list<typename std::remove_reference<__type16>::type> __type17;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::math::functor::sin{})>::type>::type __type18;
    typedef decltype(std::declval<__type18>()(std::declval<__type15>())) __type19;
    typedef pythonic::types::list<typename std::remove_reference<__type19>::type> __type20;
    typedef typename __combined<__type17,__type20>::type __type21;
    typedef pythonic::types::list<typename std::remove_reference<__type6>::type> __type22;
    typedef typename __combined<__type21,__type22>::type __type23;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type23>()))>::type __type24;
    typedef typename std::tuple_element<2,typename std::remove_reference<__type24>::type>::type __type25;
    typedef decltype((pythonic::operator_::mul(std::declval<__type8>(), std::declval<__type25>()))) __type26;
    typedef typename std::tuple_element<2,typename std::remove_reference<__type7>::type>::type __type27;
    typedef typename std::tuple_element<1,typename std::remove_reference<__type24>::type>::type __type28;
    typedef decltype((pythonic::operator_::mul(std::declval<__type27>(), std::declval<__type28>()))) __type29;
    typedef decltype((std::declval<__type26>() - std::declval<__type29>())) __type30;
    typedef pythonic::types::list<typename std::remove_reference<__type30>::type> __type31;
    typedef typename std::tuple_element<0,typename std::remove_reference<__type24>::type>::type __type32;
    typedef decltype((pythonic::operator_::mul(std::declval<__type27>(), std::declval<__type32>()))) __type33;
    typedef typename std::tuple_element<0,typename std::remove_reference<__type7>::type>::type __type34;
    typedef decltype((pythonic::operator_::mul(std::declval<__type34>(), std::declval<__type25>()))) __type35;
    typedef decltype((std::declval<__type33>() - std::declval<__type35>())) __type36;
    typedef pythonic::types::list<typename std::remove_reference<__type36>::type> __type37;
    typedef typename __combined<__type31,__type37>::type __type38;
    typedef decltype((pythonic::operator_::mul(std::declval<__type34>(), std::declval<__type28>()))) __type39;
    typedef decltype((pythonic::operator_::mul(std::declval<__type8>(), std::declval<__type32>()))) __type40;
    typedef decltype((std::declval<__type39>() - std::declval<__type40>())) __type41;
    typedef pythonic::types::list<typename std::remove_reference<__type41>::type> __type42;
    typedef typename __combined<__type38,__type42>::type __type43;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type43>()))>::type __type44;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type45;
    typedef decltype(std::declval<__type45>()(std::declval<__type44>())) __type46;
    typedef decltype((pythonic::operator_::div(std::declval<__type44>(), std::declval<__type46>()))) __type47;
    typedef typename __combined<__type44,__type47>::type __type48;
    ;
    ;
    typename pythonic::assignable<decltype(pythonic::numpy::ndarray::functor::reshape{}(column()(s, i), -1L))>::type __pythran_inlinecrossa4 = pythonic::numpy::ndarray::functor::reshape{}(column()(s, i), -1L);
    typename pythonic::assignable<decltype(pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(pythonic::math::functor::cos{}((pythonic::operator_::add(q[pythonic::types::make_tuple(i, 0L)], alpha[pythonic::types::make_tuple(i, 0L)]))))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(pythonic::math::functor::sin{}((pythonic::operator_::add(q[pythonic::types::make_tuple(i, 0L)], alpha[pythonic::types::make_tuple(i, 0L)]))))>::type>::type>::type>::type>>::type({pythonic::math::functor::cos{}((pythonic::operator_::add(q[pythonic::types::make_tuple(i, 0L)], alpha[pythonic::types::make_tuple(i, 0L)]))), pythonic::math::functor::sin{}((pythonic::operator_::add(q[pythonic::types::make_tuple(i, 0L)], alpha[pythonic::types::make_tuple(i, 0L)]))), 0L})))>::type __pythran_inlinecrossb4 = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(0L)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(pythonic::math::functor::cos{}((pythonic::operator_::add(q[pythonic::types::make_tuple(i, 0L)], alpha[pythonic::types::make_tuple(i, 0L)]))))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(pythonic::math::functor::sin{}((pythonic::operator_::add(q[pythonic::types::make_tuple(i, 0L)], alpha[pythonic::types::make_tuple(i, 0L)]))))>::type>::type>::type>::type>>::type({pythonic::math::functor::cos{}((pythonic::operator_::add(q[pythonic::types::make_tuple(i, 0L)], alpha[pythonic::types::make_tuple(i, 0L)]))), pythonic::math::functor::sin{}((pythonic::operator_::add(q[pythonic::types::make_tuple(i, 0L)], alpha[pythonic::types::make_tuple(i, 0L)]))), 0L}));
    typename pythonic::assignable<typename __combined<__type48,__type46>::type>::type p = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(((pythonic::operator_::mul(std::get<2>(__pythran_inlinecrossa4), std::get<0>(__pythran_inlinecrossb4))) - (pythonic::operator_::mul(std::get<0>(__pythran_inlinecrossa4), std::get<2>(__pythran_inlinecrossb4)))))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(((pythonic::operator_::mul(std::get<0>(__pythran_inlinecrossa4), std::get<1>(__pythran_inlinecrossb4))) - (pythonic::operator_::mul(std::get<1>(__pythran_inlinecrossa4), std::get<0>(__pythran_inlinecrossb4)))))>::type>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(((pythonic::operator_::mul(std::get<1>(__pythran_inlinecrossa4), std::get<2>(__pythran_inlinecrossb4))) - (pythonic::operator_::mul(std::get<2>(__pythran_inlinecrossa4), std::get<1>(__pythran_inlinecrossb4)))))>::type>::type>::type>::type>>::type({((pythonic::operator_::mul(std::get<1>(__pythran_inlinecrossa4), std::get<2>(__pythran_inlinecrossb4))) - (pythonic::operator_::mul(std::get<2>(__pythran_inlinecrossa4), std::get<1>(__pythran_inlinecrossb4)))), ((pythonic::operator_::mul(std::get<2>(__pythran_inlinecrossa4), std::get<0>(__pythran_inlinecrossb4))) - (pythonic::operator_::mul(std::get<0>(__pythran_inlinecrossa4), std::get<2>(__pythran_inlinecrossb4)))), ((pythonic::operator_::mul(std::get<0>(__pythran_inlinecrossa4), std::get<1>(__pythran_inlinecrossb4))) - (pythonic::operator_::mul(std::get<1>(__pythran_inlinecrossa4), std::get<0>(__pythran_inlinecrossb4))))}));
    pythonic::operator_::idiv(p, pythonic::numpy::linalg::functor::norm{}(p));
    return p;
  }
  template <typename argument_type0 , typename argument_type1 >
  typename shortest_distance::type<argument_type0, argument_type1>::result_type shortest_distance::operator()(argument_type0&& q_e, argument_type1&& q_d) const
  {
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type0;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
    typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type1>())) __type2;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type2>()))>::type __type3;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::enumerate{})>::type>::type __type4;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type5;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::argmin{})>::type>::type __type6;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::absolute{})>::type>::type __type7;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::hstack{})>::type>::type __type8;
    typedef constrain_angle __type9;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type10;
    typedef decltype((std::declval<__type10>() - std::declval<__type1>())) __type11;
    typedef decltype(std::declval<__type9>()(std::declval<__type11>())) __type12;
    typedef double __type13;
    typedef decltype((pythonic::operator_::add(std::declval<__type10>(), std::declval<__type13>()))) __type14;
    typedef decltype((std::declval<__type14>() - std::declval<__type1>())) __type15;
    typedef decltype(std::declval<__type9>()(std::declval<__type15>())) __type16;
    typedef decltype(pythonic::types::make_tuple(std::declval<__type12>(), std::declval<__type16>())) __type17;
    typedef typename pythonic::assignable<decltype(std::declval<__type8>()(std::declval<__type17>()))>::type __type18;
    typedef decltype(std::declval<__type7>()(std::declval<__type18>())) __type19;
    typedef long __type20;
    typedef decltype(std::declval<__type6>()(std::declval<__type19>(), std::declval<__type20>())) __type21;
    typedef decltype(std::declval<__type5>()(std::declval<__type21>(), std::declval<__type20>())) __type22;
    typedef typename pythonic::lazy<__type22>::type __type23;
    typedef decltype(std::declval<__type4>()(std::declval<__type23>())) __type24;
    typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type24>::type::iterator>::value_type>::type __type25;
    typedef typename std::tuple_element<0,typename std::remove_reference<__type25>::type>::type __type26;
    typedef typename pythonic::lazy<__type26>::type __type27;
    typedef decltype(pythonic::types::make_tuple(std::declval<__type27>(), std::declval<__type20>())) __type28;
    typedef indexable<__type28> __type29;
    typedef typename __combined<__type3,__type29>::type __type30;
    typedef typename std::tuple_element<1,typename std::remove_reference<__type25>::type>::type __type31;
    typedef decltype(pythonic::types::make_tuple(std::declval<__type27>(), std::declval<__type31>())) __type32;
    typedef decltype(std::declval<__type18>()[std::declval<__type32>()]) __type33;
    typedef container<typename std::remove_reference<__type33>::type> __type34;
    typedef typename __combined<__type30,__type34>::type __type35;
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q_e)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q_e)), 1L)); }), pythonic::__builtin__::functor::str{}(q_e));
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q_d)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q_d)), 1L)); }), pythonic::__builtin__::functor::str{}(q_d));
    typename pythonic::assignable<decltype(pythonic::numpy::functor::hstack{}(pythonic::types::make_tuple(constrain_angle()((q_d - q_e)), constrain_angle()(((pythonic::operator_::add(q_d, 3.141592653589793)) - q_e)))))>::type diff_opp_diff = pythonic::numpy::functor::hstack{}(pythonic::types::make_tuple(constrain_angle()((q_d - q_e)), constrain_angle()(((pythonic::operator_::add(q_d, 3.141592653589793)) - q_e))));
    typename pythonic::lazy<decltype(pythonic::numpy::ndarray::functor::reshape{}(pythonic::numpy::functor::argmin{}(pythonic::numpy::functor::absolute{}(diff_opp_diff), 1L), -1L))>::type choose = pythonic::numpy::ndarray::functor::reshape{}(pythonic::numpy::functor::argmin{}(pythonic::numpy::functor::absolute{}(diff_opp_diff), 1L), -1L);
    typename pythonic::assignable<typename __combined<__type35,__type29>::type>::type taken = pythonic::numpy::functor::zeros{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q_e));
    {
      for (auto&& __tuple0: pythonic::__builtin__::functor::enumerate{}(choose))
      {
        ;
        typename pythonic::lazy<decltype(std::get<0>(__tuple0))>::type i = std::get<0>(__tuple0);
        taken[pythonic::types::make_tuple(i, 0L)] = diff_opp_diff[pythonic::types::make_tuple(i, std::get<1>(__tuple0))];
      }
    }
    return taken;
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 >
  typename solve::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8, argument_type9>::result_type solve::operator()(argument_type0&& S_u, argument_type1&& S_v, argument_type2&& S_w, argument_type3&& none_axis, argument_type4&& q, argument_type5&& lmda, argument_type6&& a, argument_type7&& a_orth, argument_type8&& l_v, argument_type9&& n) const
  {
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::dot{})>::type>::type __type0;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type1;
    typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type1>())) __type2;
    typedef decltype(std::declval<__type0>()(std::declval<__type2>(), std::declval<__type1>())) __type3;
    typedef typename pythonic::lazy<__type3>::type __type4;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type5;
    typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type5>())) __type6;
    typedef decltype(std::declval<__type0>()(std::declval<__type6>(), std::declval<__type5>())) __type7;
    typedef typename pythonic::lazy<__type7>::type __type8;
    typedef typename __combined<__type4,__type8>::type __type9;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type10;
    typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type10>())) __type11;
    typedef decltype(std::declval<__type0>()(std::declval<__type11>(), std::declval<__type10>())) __type12;
    typedef typename pythonic::lazy<__type12>::type __type13;
    typedef typename __combined<__type13,__type4>::type __type14;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::concatenate{})>::type>::type __type15;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type16;
    typedef S __type17;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type18;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type19;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type20;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type8>::type>::type __type21;
    typedef decltype(std::declval<__type17>()(std::declval<__type18>(), std::declval<__type19>(), std::declval<__type20>(), std::declval<__type21>())) __type22;
    typedef typename pythonic::assignable<decltype((std::declval<__type16>() - std::declval<__type22>()))>::type __type23;
    typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, std::declval<__type23>())) __type24;
    typedef decltype(std::declval<__type0>()(std::declval<__type24>(), std::declval<__type1>())) __type25;
    typedef decltype(std::declval<__type0>()(std::declval<__type24>(), std::declval<__type10>())) __type26;
    typedef decltype(pythonic::types::make_tuple(std::declval<__type25>(), std::declval<__type26>())) __type27;
    typedef decltype(std::declval<__type15>()(std::declval<__type27>())) __type28;
    typedef typename pythonic::lazy<__type28>::type __type29;
    typedef decltype(std::declval<__type0>()(std::declval<__type24>(), std::declval<__type5>())) __type30;
    typedef decltype(pythonic::types::make_tuple(std::declval<__type30>(), std::declval<__type26>())) __type31;
    typedef decltype(std::declval<__type15>()(std::declval<__type31>())) __type32;
    typedef typename pythonic::lazy<__type32>::type __type33;
    typedef typename __combined<__type29,__type33>::type __type34;
    typedef decltype(pythonic::types::make_tuple(std::declval<__type30>(), std::declval<__type25>())) __type35;
    typedef decltype(std::declval<__type15>()(std::declval<__type35>())) __type36;
    typedef typename pythonic::lazy<__type36>::type __type37;
    typedef typename __combined<__type34,__type37>::type __type38;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type2>(), std::declval<__type10>()))>::type __type39;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type6>(), std::declval<__type10>()))>::type __type40;
    typedef typename __combined<__type39,__type40>::type __type41;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()(std::declval<__type6>(), std::declval<__type1>()))>::type __type42;
    typename pythonic::lazy<__type9>::type a_u_;
    typename pythonic::lazy<__type14>::type a_v_;
    typename pythonic::lazy<__type38>::type b_;
    typename pythonic::assignable<typename __combined<__type41,__type42>::type>::type a_c_;
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q)), 1L)); }), pythonic::__builtin__::functor::str{}(q));
    ;
    typename pythonic::assignable<decltype((q - S()(lmda, a, a_orth, l_v)))>::type diff = (q - S()(lmda, a, a_orth, l_v));
    ;
    ;
    ;
    ;
    if ((pythonic::operator_::eq(none_axis, pythonic::types::str("u"))))
    {
      a_u_ = pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, S_v), S_v);
      a_c_ = pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, S_v), S_w);
      a_v_ = pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, S_w), S_w);
      b_ = pythonic::numpy::functor::concatenate{}(pythonic::types::make_tuple(pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, diff), S_v), pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, diff), S_w)));
    }
    else
    {
      if ((pythonic::operator_::eq(none_axis, pythonic::types::str("v"))))
      {
        a_u_ = pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, S_u), S_u);
        a_c_ = pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, S_u), S_w);
        a_v_ = pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, S_w), S_w);
        b_ = pythonic::numpy::functor::concatenate{}(pythonic::types::make_tuple(pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, diff), S_u), pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, diff), S_w)));
      }
      else
      {
        a_u_ = pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, S_u), S_u);
        a_c_ = pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, S_u), S_v);
        a_v_ = pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, S_v), S_v);
        b_ = pythonic::numpy::functor::concatenate{}(pythonic::types::make_tuple(pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, diff), S_u), pythonic::numpy::functor::dot{}(pythonic::__builtin__::getattr(pythonic::types::attr::T{}, diff), S_v)));
      }
    }
    ;
    ;
    typename pythonic::assignable<decltype(pythonic::numpy::functor::dot{}(getTwoSquareMatrixInverse()(pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(a_c_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(a_u_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type>::type>::type>>::type({a_u_.fast(pythonic::types::make_tuple(0L, 0L)), a_c_.fast(pythonic::types::make_tuple(0L, 0L))}))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(a_v_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(a_c_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type>::type>::type>>::type({a_c_.fast(pythonic::types::make_tuple(0L, 0L)), a_v_.fast(pythonic::types::make_tuple(0L, 0L))}))>::type>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(a_c_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(a_u_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type>::type>::type>>::type({a_u_.fast(pythonic::types::make_tuple(0L, 0L)), a_c_.fast(pythonic::types::make_tuple(0L, 0L))}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(a_v_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(a_c_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type>::type>::type>>::type({a_c_.fast(pythonic::types::make_tuple(0L, 0L)), a_v_.fast(pythonic::types::make_tuple(0L, 0L))})}))), b_))>::type x = pythonic::numpy::functor::dot{}(getTwoSquareMatrixInverse()(pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(a_c_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(a_u_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type>::type>::type>>::type({a_u_.fast(pythonic::types::make_tuple(0L, 0L)), a_c_.fast(pythonic::types::make_tuple(0L, 0L))}))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(a_v_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(a_c_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type>::type>::type>>::type({a_c_.fast(pythonic::types::make_tuple(0L, 0L)), a_v_.fast(pythonic::types::make_tuple(0L, 0L))}))>::type>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(a_c_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(a_u_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type>::type>::type>>::type({a_u_.fast(pythonic::types::make_tuple(0L, 0L)), a_c_.fast(pythonic::types::make_tuple(0L, 0L))}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(a_v_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(a_c_.fast(pythonic::types::make_tuple(0L, 0L)))>::type>::type>::type>::type>>::type({a_c_.fast(pythonic::types::make_tuple(0L, 0L)), a_v_.fast(pythonic::types::make_tuple(0L, 0L))})}))), b_);
    if ((pythonic::operator_::eq(none_axis, pythonic::types::str("u"))))
    {
      return pythonic::types::make_tuple(pythonic::__builtin__::None, x.fast(pythonic::types::make_tuple(0L, 0L)), x.fast(pythonic::types::make_tuple(1L, 0L)));
    }
    else
    {
      if ((pythonic::operator_::eq(none_axis, pythonic::types::str("v"))))
      {
        return pythonic::types::make_tuple(x.fast(pythonic::types::make_tuple(0L, 0L)), pythonic::__builtin__::None, x.fast(pythonic::types::make_tuple(1L, 0L)));
      }
      else
      {
        return pythonic::types::make_tuple(x.fast(pythonic::types::make_tuple(0L, 0L)), x.fast(pythonic::types::make_tuple(1L, 0L)), pythonic::__builtin__::None);
      }
    }
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 >
  typename update_parameters::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8, argument_type9>::result_type update_parameters::operator()(argument_type0&& lmda, argument_type1&& delta_u, argument_type2&& delta_v, argument_type3&& delta_w, argument_type4&& none_axis, argument_type5&& q, argument_type6&& a, argument_type7&& a_orth, argument_type8&& l_v, argument_type9&& n) const
  {
    typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
    typedef long __type1;
    typedef decltype(pythonic::types::make_tuple(std::declval<__type1>(), std::declval<__type1>())) __type2;
    typedef typename pythonic::assignable<decltype(std::declval<__type0>()[std::declval<__type2>()])>::type __type3;
    typedef decltype(std::declval<__type0>()[std::declval<__type2>()]) __type4;
    typedef container<typename std::remove_reference<__type4>::type> __type5;
    typedef typename __combined<__type0,__type5>::type __type6;
    typedef decltype(std::declval<__type6>()[std::declval<__type2>()]) __type7;
    typedef container<typename std::remove_reference<__type7>::type> __type8;
    typedef typename __combined<__type6,__type8>::type __type9;
    typedef typename pythonic::assignable<decltype(std::declval<__type9>()[std::declval<__type2>()])>::type __type10;
    typedef typename __combined<__type3,__type10>::type __type11;
    typedef decltype(std::declval<__type9>()[std::declval<__type2>()]) __type12;
    typedef container<typename std::remove_reference<__type12>::type> __type13;
    typedef typename __combined<__type9,__type13>::type __type14;
    typedef decltype(std::declval<__type14>()[std::declval<__type2>()]) __type15;
    typedef container<typename std::remove_reference<__type15>::type> __type16;
    typedef typename __combined<__type14,__type16>::type __type17;
    typedef typename pythonic::assignable<decltype(std::declval<__type17>()[std::declval<__type2>()])>::type __type18;
    typedef typename pythonic::assignable<typename __combined<__type11,__type18>::type>::type __type19;
    typedef typename __combined<__type11,__type18>::type __type20;
    typedef typename pythonic::assignable<typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type>::type __type21;
    typedef typename pythonic::assignable<typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type>::type __type22;
    typedef typename __combined<__type21,__type22>::type __type23;
    typedef typename pythonic::assignable<decltype((pythonic::operator_::add(std::declval<__type20>(), std::declval<__type23>())))>::type __type24;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type25;
    typedef pythonic::types::list<typename std::remove_reference<__type24>::type> __type26;
    typedef typename pythonic::assignable<decltype(std::declval<__type6>()[std::declval<__type2>()])>::type __type27;
    typedef typename pythonic::assignable<decltype(std::declval<__type14>()[std::declval<__type2>()])>::type __type28;
    typedef typename __combined<__type27,__type28>::type __type29;
    typedef decltype(std::declval<__type17>()[std::declval<__type2>()]) __type30;
    typedef container<typename std::remove_reference<__type30>::type> __type31;
    typedef typename __combined<__type17,__type31>::type __type32;
    typedef typename pythonic::assignable<decltype(std::declval<__type32>()[std::declval<__type2>()])>::type __type33;
    typedef typename __combined<__type29,__type33>::type __type34;
    typedef typename pythonic::assignable<typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type>::type __type35;
    typedef typename __combined<__type35,__type21>::type __type36;
    typedef typename pythonic::assignable<decltype((pythonic::operator_::add(std::declval<__type34>(), std::declval<__type36>())))>::type __type37;
    typedef pythonic::types::list<typename std::remove_reference<__type37>::type> __type38;
    typedef typename __combined<__type26,__type38>::type __type39;
    typedef typename pythonic::assignable<decltype(std::declval<__type25>()(std::declval<__type39>()))>::type __type40;
    typedef decltype((pythonic::operator_::div(std::declval<__type24>(), std::declval<__type40>()))) __type41;
    typedef typename __combined<__type24,__type41>::type __type42;
    typedef typename pythonic::assignable<typename __combined<__type42,__type40>::type>::type __type43;
    typedef typename pythonic::assignable<typename __combined<__type29,__type33>::type>::type __type44;
    typedef decltype((pythonic::operator_::div(std::declval<__type37>(), std::declval<__type40>()))) __type45;
    typedef typename __combined<__type37,__type45>::type __type46;
    typedef typename pythonic::assignable<typename __combined<__type46,__type40>::type>::type __type47;
    typedef typename __combined<__type42,__type40>::type __type48;
    typedef typename __combined<__type42,__type48>::type __type49;
    typedef typename __combined<__type46,__type40>::type __type50;
    typedef typename __combined<__type46,__type50>::type __type51;
    typedef double __type52;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::functools::functor::partial{})>::type>::type __type53;
    typedef pythran_lmda_t0 __type54;
    typedef typename pythonic::assignable<decltype(std::declval<__type53>()(std::declval<__type54>()))>::type __type55;
    typedef pythran_lmda_t1 __type56;
    typedef typename pythonic::assignable<decltype(std::declval<__type53>()(std::declval<__type56>()))>::type __type57;
    typedef typename __combined<__type55,__type57>::type __type58;
    typedef pythran_lmda_t2 __type59;
    typedef typename pythonic::assignable<decltype(std::declval<__type53>()(std::declval<__type59>()))>::type __type60;
    typename pythonic::assignable<typename __combined<__type36,__type52>::type>::type delta_n;
    typename pythonic::assignable<typename __combined<__type29,__type33>::type>::type n__;
    typename pythonic::assignable<typename __combined<__type11,__type18>::type>::type m;
    typename pythonic::assignable<typename __combined<__type58,__type60>::type>::type lmda_t;
    typename pythonic::assignable<typename __combined<__type23,__type52>::type>::type delta_m;
    ;
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, lmda)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, lmda)), 1L)); }), pythonic::__builtin__::functor::str{}(lmda));
    pythonic::pythran_assert((pythonic::operator_::eq(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, lmda), pythonic::types::make_tuple(3L, 1L))), pythonic::__builtin__::functor::str{}(lmda));
    if ((pythonic::operator_::eq(none_axis, pythonic::types::str("u"))))
    {
      m = lmda.fast(pythonic::types::make_tuple(1L, 0L));
      n__ = lmda.fast(pythonic::types::make_tuple(2L, 0L));
      delta_m = delta_v;
      delta_n = delta_w;
      lmda_t = pythonic::functools::functor::partial{}(pythran_lmda_t0());
    }
    else
    {
      if ((pythonic::operator_::eq(none_axis, pythonic::types::str("v"))))
      {
        m = lmda.fast(pythonic::types::make_tuple(0L, 0L));
        n__ = lmda.fast(pythonic::types::make_tuple(2L, 0L));
        delta_m = delta_u;
        delta_n = delta_w;
        lmda_t = pythonic::functools::functor::partial{}(pythran_lmda_t1());
      }
      else
      {
        m = lmda.fast(pythonic::types::make_tuple(0L, 0L));
        n__ = lmda.fast(pythonic::types::make_tuple(1L, 0L));
        delta_m = delta_u;
        delta_n = delta_v;
        lmda_t = pythonic::functools::functor::partial{}(pythran_lmda_t2());
      }
    }
    typename pythonic::assignable<typename __combined<__type19,__type43>::type>::type prev_m = m;
    typename pythonic::assignable<typename __combined<__type44,__type47>::type>::type prev_n = n__;
    typename pythonic::assignable<decltype(pythonic::numpy::linalg::functor::norm{}(shortest_distance()(q, S()(lmda, a, a_orth, l_v))))>::type total_dist = pythonic::numpy::linalg::functor::norm{}(shortest_distance()(q, S()(lmda, a, a_orth, l_v)));
    while (pythonic::__builtin__::True)
    {
      typename pythonic::assignable<typename __combined<__type49,__type40>::type>::type m_i = (pythonic::operator_::add(m, delta_m));
      typename pythonic::assignable<typename __combined<__type51,__type40>::type>::type n_i = (pythonic::operator_::add(n__, delta_n));
      while ((pythonic::operator_::gt(pythonic::numpy::linalg::functor::norm{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(m_i)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(n_i)>::type>::type>::type>::type>>::type({m_i, n_i})), 1L)))
      {
        typename pythonic::assignable<decltype(pythonic::numpy::linalg::functor::norm{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(m_i)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(n_i)>::type>::type>::type>::type>>::type({m_i, n_i})))>::type factor = pythonic::numpy::linalg::functor::norm{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(m_i)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(n_i)>::type>::type>::type>::type>>::type({m_i, n_i}));
        pythonic::operator_::idiv(m_i, factor);
        pythonic::operator_::idiv(n_i, factor);
      }
      if ((pythonic::operator_::lt(total_dist, pythonic::numpy::linalg::functor::norm{}(shortest_distance()(q, S()(lmda_t(m_i, n_i), a, a_orth, l_v))))))
      {
        delta_m *= 0.5;
        delta_n *= 0.5;
        if ((pythonic::operator_::lt(pythonic::numpy::linalg::functor::norm{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename __combined<typename std::remove_cv<typename std::remove_reference<decltype(delta_n)>::type>::type,typename std::remove_cv<typename std::remove_reference<decltype(delta_m)>::type>::type>::type>::type>>::type({delta_m, delta_n})), 0.01)))
        {
          return pythonic::types::make_tuple(lmda_t(prev_m, prev_n), pythonic::__builtin__::True);
        }
        else
        {
          prev_m = m_i;
          prev_n = n_i;
        }
      }
      else
      {
        return pythonic::types::make_tuple(lmda_t(m_i, n_i), pythonic::__builtin__::False);
      }
    }
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 >
  typename select_starting_points::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6>::result_type select_starting_points::operator()(argument_type0&& q, argument_type1&& alpha, argument_type2&& a, argument_type3&& a_orth, argument_type4&& s, argument_type5&& l_v, argument_type6&& n) const
  {
    typedef typename pythonic::assignable<pythonic::types::empty_list>::type __type0;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type1;
    typedef cross __type2;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::functools::functor::partial{})>::type>::type __type3;
    typedef pythran_get_p0 __type4;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type5;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type6;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type7;
    typedef typename pythonic::assignable<decltype(std::declval<__type3>()(std::declval<__type4>(), std::declval<__type5>(), std::declval<__type6>(), std::declval<__type7>()))>::type __type8;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::range{})>::type>::type __type9;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type10;
    typedef decltype(std::declval<__type9>()(std::declval<__type10>())) __type11;
    typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type11>::type::iterator>::value_type>::type __type12;
    typedef typename pythonic::assignable<decltype(std::declval<__type8>()(std::declval<__type12>()))>::type __type13;
    typedef decltype(std::declval<__type2>()(std::declval<__type13>(), std::declval<__type13>())) __type14;
    typedef long __type15;
    typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type14>(), std::declval<__type15>(), std::declval<__type15>()))>::type __type16;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type17;
    typedef decltype(std::declval<__type17>()(std::declval<__type16>())) __type18;
    typedef decltype((pythonic::operator_::div(std::declval<__type16>(), std::declval<__type18>()))) __type19;
    typedef typename __combined<__type16,__type19>::type __type20;
    typedef typename __combined<__type20,__type18>::type __type21;
    typedef typename pythonic::assignable<decltype((-std::declval<__type21>()))>::type __type22;
    typedef typename __combined<__type21,__type22>::type __type23;
    typedef pythonic::types::list<typename std::remove_reference<__type23>::type> __type24;
    typedef shortest_distance __type25;
    typedef S __type26;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type27;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type28;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type29;
    typedef decltype(std::declval<__type26>()(std::declval<__type23>(), std::declval<__type27>(), std::declval<__type28>(), std::declval<__type29>())) __type30;
    typedef decltype(std::declval<__type25>()(std::declval<__type6>(), std::declval<__type30>())) __type31;
    typedef typename pythonic::assignable<decltype(std::declval<__type17>()(std::declval<__type31>()))>::type __type32;
    typedef pythonic::types::list<typename std::remove_reference<__type32>::type> __type33;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__dispatch__::functor::pop{})>::type>::type __type34;
    typedef typename __combined<__type0,__type24>::type __type35;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::argmin{})>::type>::type __type36;
    typedef typename __combined<__type0,__type33>::type __type37;
    typedef typename pythonic::assignable<decltype(std::declval<__type36>()(std::declval<__type37>()))>::type __type38;
    typedef decltype(std::declval<__type34>()(std::declval<__type35>(), std::declval<__type38>())) __type39;
    typedef decltype(std::declval<__type1>()(std::declval<__type39>(), std::declval<__type15>(), std::declval<__type15>())) __type40;
    typedef pythonic::types::list<typename std::remove_reference<__type40>::type> __type41;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__builtin__::functor::len{})>::type>::type __type42;
    typedef decltype(std::declval<__type42>()(std::declval<__type37>())) __type43;
    typedef decltype(std::declval<__type9>()(std::declval<__type43>())) __type44;
    typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type44>::type::iterator>::value_type>::type __type45;
    typename pythonic::assignable<typename __combined<__type12,__type45>::type>::type i;
    ;
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q)), 1L)); }), pythonic::__builtin__::functor::str{}(q));
    typename pythonic::assignable<decltype(pythonic::functools::functor::partial{}(pythran_get_p0(), alpha, q, s))>::type get_p = pythonic::functools::functor::partial{}(pythran_get_p0(), alpha, q, s);
    typename pythonic::assignable<typename __combined<__type0,__type24>::type>::type cs = pythonic::__builtin__::functor::list{}();
    typename pythonic::assignable<typename __combined<__type0,__type33>::type>::type dists = pythonic::__builtin__::functor::list{}();
    {
      long  __target140606223190840 = n;
      for ( i=0L; i < __target140606223190840; i += 1L)
      {
        typename pythonic::assignable<decltype(get_p(i))>::type p_1 = get_p(i);
        {
          long  __target140606223191736 = n;
          for (long  j=0L; j < __target140606223191736; j += 1L)
          {
            if ((! (pythonic::operator_::gt(i, j))))
            {
              continue;
            }
            typename pythonic::assignable<decltype(get_p(j))>::type p_2 = get_p(j);
            typename pythonic::assignable<typename __combined<__type21,__type22>::type>::type c = pythonic::numpy::ndarray::functor::reshape{}(cross()(p_1, p_2), -1L, 1L);
            if ((pythonic::operator_::gt(pythonic::__builtin__::functor::abs{}((pythonic::operator_::mul((pythonic::operator_::div(pythonic::numpy::functor::dot{}(p_1, p_2), pythonic::numpy::linalg::functor::norm{}(p_1))), pythonic::numpy::linalg::functor::norm{}(p_2)))), 0.99)))
            {
              continue;
            }
            pythonic::operator_::idiv(c, pythonic::numpy::linalg::functor::norm{}(c));
            if ((pythonic::operator_::lt(std::get<2>(c), 0L)))
            {
              c = (-c);
            }
            typename pythonic::assignable<decltype(pythonic::numpy::linalg::functor::norm{}(shortest_distance()(q, S()(c, a, a_orth, l_v))))>::type dist = pythonic::numpy::linalg::functor::norm{}(shortest_distance()(q, S()(c, a, a_orth, l_v)));
            pythonic::__builtin__::list::functor::append{}(cs, c);
            pythonic::__builtin__::list::functor::append{}(dists, dist);
          }
        }
      }
      if (i == __target140606223190840)
      i -= 1L;
    }
    typename pythonic::assignable<typename __combined<__type0,__type41>::type>::type starting_points_ = pythonic::__builtin__::functor::list{}();
    {
      long  __target140606223191400 = pythonic::__builtin__::functor::len{}(dists);
      for ( i=0L; i < __target140606223191400; i += 1L)
      {
        typename pythonic::assignable<decltype(pythonic::numpy::functor::argmin{}(dists))>::type smallest_arg = pythonic::numpy::functor::argmin{}(dists);
        pythonic::__builtin__::list::functor::append{}(starting_points_, pythonic::numpy::ndarray::functor::reshape{}(pythonic::__dispatch__::functor::pop{}(cs, smallest_arg), 3L, 1L));
        pythonic::__dispatch__::functor::pop{}(dists, smallest_arg);
      }
      if (i == __target140606223191400)
      i -= 1L;
    }
    return starting_points_;
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 >
  typename estimate_lmda::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5>::result_type estimate_lmda::operator()(argument_type0&& q, argument_type1&& alpha, argument_type2&& a, argument_type3&& a_orth, argument_type4&& s, argument_type5&& l_v) const
  {
    typedef typename pythonic::assignable<bool>::type __type0;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::linalg::functor::norm{})>::type>::type __type1;
    typedef select_starting_points __type2;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type3;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type4;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type5;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type6;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type7;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type8;
    typedef decltype(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, std::declval<__type3>())) __type9;
    typedef typename pythonic::assignable<typename std::tuple_element<0,typename std::remove_reference<__type9>::type>::type>::type __type10;
    typedef typename pythonic::assignable<decltype(std::declval<__type2>()(std::declval<__type3>(), std::declval<__type4>(), std::declval<__type5>(), std::declval<__type6>(), std::declval<__type7>(), std::declval<__type8>(), std::declval<__type10>()))>::type __type11;
    typedef typename pythonic::assignable<typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type11>::type::iterator>::value_type>::type>::type __type12;
    typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type11>::type::iterator>::value_type>::type __type13;
    typedef typename __combined<__type12,__type13>::type __type14;
    typedef solve __type15;
    typedef compute_derivatives __type16;
    typedef typename pythonic::assignable<decltype(std::declval<__type16>()(std::declval<__type14>(), std::declval<__type5>(), std::declval<__type6>(), std::declval<__type7>(), std::declval<__type8>(), std::declval<__type10>()))>::type __type17;
    typedef typename pythonic::assignable<typename std::tuple_element<0,typename std::remove_reference<__type17>::type>::type>::type __type18;
    typedef typename pythonic::assignable<typename std::tuple_element<1,typename std::remove_reference<__type17>::type>::type>::type __type19;
    typedef typename pythonic::assignable<typename std::tuple_element<2,typename std::remove_reference<__type17>::type>::type>::type __type20;
    typedef typename pythonic::assignable<typename std::tuple_element<3,typename std::remove_reference<__type17>::type>::type>::type __type21;
    typedef typename pythonic::assignable<decltype(std::declval<__type15>()(std::declval<__type18>(), std::declval<__type19>(), std::declval<__type20>(), std::declval<__type21>(), std::declval<__type3>(), std::declval<__type14>(), std::declval<__type5>(), std::declval<__type6>(), std::declval<__type8>(), std::declval<__type10>()))>::type __type22;
    typedef typename std::tuple_element<0,typename std::remove_reference<__type22>::type>::type __type23;
    typedef typename std::tuple_element<1,typename std::remove_reference<__type22>::type>::type __type24;
    typedef typename std::tuple_element<2,typename std::remove_reference<__type22>::type>::type __type25;
    typedef typename update_parameters::type<__type14, __type23, __type24, __type25, __type21, __type3, __type5, __type6, __type8, __type10>::__ptype12 __type26;
    typedef container<typename std::remove_reference<__type26>::type> __type27;
    typedef typename __combined<__type14,__type27>::type __type28;
    typedef typename update_parameters::type<__type28, __type23, __type24, __type25, __type21, __type3, __type5, __type6, __type8, __type10>::__ptype13 __type29;
    typedef container<typename std::remove_reference<__type29>::type> __type30;
    typedef typename __combined<__type28,__type30>::type __type31;
    typedef typename __combined<__type14,__type31>::type __type32;
    typedef typename __combined<__type27,__type30>::type __type33;
    typedef update_parameters __type34;
    typedef typename pythonic::assignable<decltype(std::declval<__type34>()(std::declval<__type31>(), std::declval<__type23>(), std::declval<__type24>(), std::declval<__type25>(), std::declval<__type21>(), std::declval<__type3>(), std::declval<__type5>(), std::declval<__type6>(), std::declval<__type8>(), std::declval<__type10>()))>::type __type35;
    typedef typename std::tuple_element<0,typename std::remove_reference<__type35>::type>::type __type36;
    typedef typename pythonic::assignable<typename __combined<__type33,__type36>::type>::type __type37;
    typedef decltype((std::declval<__type32>() - std::declval<__type37>())) __type38;
    typedef decltype(std::declval<__type1>()(std::declval<__type38>())) __type39;
    typedef double __type40;
    typedef typename pythonic::assignable<decltype((pythonic::operator_::lt(std::declval<__type39>(), std::declval<__type40>())))>::type __type41;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type42;
    typedef pythonic::types::list<typename std::remove_reference<__type40>::type> __type43;
    typedef pythonic::types::list<typename std::remove_reference<__type43>::type> __type44;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::float64{})>::type>::type __type45;
    typedef typename pythonic::assignable<decltype(std::declval<__type42>()(std::declval<__type44>(), std::declval<__type45>()))>::type __type46;
    typedef typename __combined<__type46,__type12>::type __type47;
    typedef typename pythonic::assignable<typename __combined<__type33,__type37>::type>::type __type48;
    typedef typename __combined<__type48,__type37>::type __type49;
    typedef typename pythonic::assignable<double>::type __type50;
    typedef shortest_distance __type51;
    typedef S __type52;
    typedef decltype(std::declval<__type52>()(std::declval<__type13>(), std::declval<__type5>(), std::declval<__type6>(), std::declval<__type8>())) __type53;
    typedef decltype(std::declval<__type51>()(std::declval<__type3>(), std::declval<__type53>())) __type54;
    typedef typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type54>()))>::type __type55;
    typedef typename __combined<__type50,__type55>::type __type56;
    typedef typename pythonic::assignable<decltype(std::declval<__type52>()(std::declval<__type37>(), std::declval<__type5>(), std::declval<__type6>(), std::declval<__type8>()))>::type __type57;
    typedef typename pythonic::assignable<long>::type __type58;
    typedef indexable<__type58> __type59;
    typedef typename __combined<__type57,__type59>::type __type60;
    typedef decltype(std::declval<__type3>()[std::declval<__type58>()]) __type61;
    typedef container<typename std::remove_reference<__type61>::type> __type62;
    typedef typename __combined<__type60,__type62>::type __type63;
    typedef typename __combined<__type63,__type59>::type __type64;
    typedef typename __combined<__type64,__type62>::type __type65;
    typedef decltype(std::declval<__type51>()(std::declval<__type3>(), std::declval<__type65>())) __type66;
    typedef typename pythonic::assignable<typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type66>()))>::type>::type __type67;
    typedef typename pythonic::assignable<typename pythonic::assignable<typename __combined<__type33,__type36>::type>::type>::type __type68;
    typedef handle_singularities __type69;
    typedef typename pythonic::assignable<decltype(std::declval<__type69>()(std::declval<__type37>(), std::declval<__type7>(), std::declval<__type10>()))>::type __type70;
    typedef typename pythonic::assignable<typename std::tuple_element<1,typename std::remove_reference<__type70>::type>::type>::type __type71;
    typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::reshape{})>::type>::type __type72;
    typedef typename __combined<__type32,__type68>::type __type73;
    typedef long __type74;
    typedef typename pythonic::assignable<decltype(std::declval<__type72>()(std::declval<__type73>(), std::declval<__type74>(), std::declval<__type74>()))>::type __type75;
    typedef typename pythonic::assignable<decltype((-std::declval<__type75>()))>::type __type76;
    typedef typename __combined<__type47,__type49>::type __type77;
    typedef typename pythonic::assignable<decltype(std::declval<__type72>()(std::declval<__type77>(), std::declval<__type74>(), std::declval<__type74>()))>::type __type78;
    typedef typename pythonic::assignable<decltype((-std::declval<__type78>()))>::type __type79;
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, alpha)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, alpha)), 1L)); }), pythonic::__builtin__::functor::str{}(alpha));
    pythonic::pythran_assert(pythonic::__builtin__::pythran::and_([&] () { return (pythonic::operator_::eq(pythonic::__builtin__::functor::len{}(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q)), 2L)); }, [&] () { return (pythonic::operator_::eq(std::get<1>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q)), 1L)); }), pythonic::__builtin__::functor::str{}(q));
    typename pythonic::assignable<decltype(std::get<0>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q)))>::type n = std::get<0>(pythonic::__builtin__::getattr(pythonic::types::attr::SHAPE{}, q));
    typename pythonic::assignable<decltype(select_starting_points()(q, alpha, a, a_orth, s, l_v, n))>::type starting_points = select_starting_points()(q, alpha, a, a_orth, s, l_v, n);
    return std::get<0>(starting_points);
    typename pythonic::assignable<typename __combined<__type0,__type41>::type>::type found = pythonic::__builtin__::False;
    typename pythonic::assignable<typename __combined<__type47,__type49>::type>::type closest_lmda = pythonic::numpy::functor::array{}(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(0.0)>::type>::type>::type>>::type({0.0, pythonic::types::single_value()}))>::type>::type>::type>>::type({typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(0.0)>::type>::type>::type>>::type({0.0, pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(0.0)>::type>::type>::type>>::type({0.0, pythonic::types::single_value()}), typename pythonic::assignable<pythonic::types::list<typename std::remove_reference<typename std::remove_cv<typename std::remove_reference<decltype(0.0)>::type>::type>::type>>::type({0.0, pythonic::types::single_value()})}), pythonic::numpy::functor::float64{});
    typename pythonic::assignable<decltype(pythonic::__builtin__::False)>::type closest_lmda_init = pythonic::__builtin__::False;
    typename pythonic::assignable<typename __combined<__type56,__type67>::type>::type closest_dist = -1.0;
    {
      for (auto&& lmda_start: starting_points)
      {
        typename pythonic::assignable<typename __combined<__type32,__type68>::type>::type lmda = lmda_start;
        if ((! closest_lmda_init))
        {
          closest_lmda = lmda_start;
          closest_lmda_init = pythonic::__builtin__::True;
          closest_dist = pythonic::numpy::linalg::functor::norm{}(shortest_distance()(q, S()(lmda_start, a, a_orth, l_v)));
        }
        {
          typename pythonic::assignable<typename __combined<__type58,__type71>::type>::type last_singularity;
          if ((pythonic::operator_::lt(pythonic::numpy::linalg::functor::norm{}(shortest_distance()(q, S()(lmda, a, a_orth, l_v))), 0.01)))
          {
            found = pythonic::__builtin__::True;
          }
          else
          {
            last_singularity = -1L;
            {
              long  __target140606223539728 = 50L;
              for (long  i=0L; i < __target140606223539728; i += 1L)
              {
                typename pythonic::assignable<decltype(compute_derivatives()(lmda, a, a_orth, s, l_v, n))>::type __tuple0 = compute_derivatives()(lmda, a, a_orth, s, l_v, n);
                typename pythonic::assignable<decltype(std::get<0>(__tuple0))>::type S_u = std::get<0>(__tuple0);
                typename pythonic::assignable<decltype(std::get<1>(__tuple0))>::type S_v = std::get<1>(__tuple0);
                typename pythonic::assignable<decltype(std::get<2>(__tuple0))>::type S_w = std::get<2>(__tuple0);
                typename pythonic::assignable<decltype(std::get<3>(__tuple0))>::type none_axis = std::get<3>(__tuple0);
                if ((pythonic::__builtin__::id(last_singularity) != pythonic::__builtin__::id(-1L)))
                {
                  pythonic::__builtin__::pythran::functor::static_if_{}((! pythonic::__builtin__::pythran::functor::is_none{}(S_u)), $isstatic0(), $isstatic1())(S_u, last_singularity);
                  pythonic::__builtin__::pythran::functor::static_if_{}((! pythonic::__builtin__::pythran::functor::is_none{}(S_u)), $isstatic2(), $isstatic3())(S_u, S_v, last_singularity);
                  pythonic::__builtin__::pythran::functor::static_if_{}((! pythonic::__builtin__::pythran::functor::is_none{}(S_u)), $isstatic4(), $isstatic5())(S_u, S_w, last_singularity);
                }
                typename pythonic::assignable<decltype(solve()(S_u, S_v, S_w, none_axis, q, lmda, a, a_orth, l_v, n))>::type __tuple1 = solve()(S_u, S_v, S_w, none_axis, q, lmda, a, a_orth, l_v, n);
                ;
                ;
                ;
                typename pythonic::assignable<decltype(update_parameters()(lmda, std::get<0>(__tuple1), std::get<1>(__tuple1), std::get<2>(__tuple1), none_axis, q, a, a_orth, l_v, n))>::type __tuple2 = update_parameters()(lmda, std::get<0>(__tuple1), std::get<1>(__tuple1), std::get<2>(__tuple1), none_axis, q, a, a_orth, l_v, n);
                typename pythonic::assignable<typename pythonic::assignable<typename __combined<__type33,__type36>::type>::type>::type lmda_t = std::get<0>(__tuple2);
                ;
                typename pythonic::assignable<decltype(handle_singularities()(lmda_t, s, n))>::type __tuple3 = handle_singularities()(lmda_t, s, n);
                ;
                ;
                typename pythonic::assignable<typename __combined<__type63,__type59>::type>::type S_lmda = S()(lmda_t, a, a_orth, l_v);
                if (pythonic::__builtin__::pythran::and_([&] () { return (pythonic::__builtin__::id(last_singularity) != pythonic::__builtin__::id(-1L)); }, [&] () { return std::get<0>(__tuple3); }))
                {
                  S_lmda[last_singularity] = q[last_singularity];
                }
                last_singularity = std::get<1>(__tuple3);
                {
                  typename pythonic::assignable<typename pythonic::assignable<decltype(std::declval<__type1>()(std::declval<__type66>()))>::type>::type distance;
                  if ((pythonic::operator_::gt(pythonic::numpy::linalg::functor::norm{}(shortest_distance()(q, S_lmda)), pythonic::numpy::linalg::functor::norm{}(shortest_distance()(q, S()(lmda_start, a, a_orth, l_v))))))
                  {
                    found = pythonic::__builtin__::False;
                    break;
                  }
                  else
                  {
                    found = (pythonic::operator_::lt(pythonic::numpy::linalg::functor::norm{}((lmda - lmda_t)), 0.0001));
                    distance = pythonic::numpy::linalg::functor::norm{}(shortest_distance()(q, S_lmda));
                    if ((pythonic::operator_::lt(distance, closest_dist)))
                    {
                      closest_lmda = lmda_t;
                      closest_dist = distance;
                    }
                  }
                }
                lmda = lmda_t;
                if (found)
                {
                  break;
                }
              }
            }
          }
        }
        if (found)
        {
          typename pythonic::assignable<typename __combined<__type75,__type76>::type>::type lmda_ = pythonic::numpy::ndarray::functor::reshape{}(lmda, -1L, 1L);
          if ((pythonic::operator_::lt(lmda_.fast(pythonic::types::make_tuple(2L, 0L)), 0L)))
          {
            lmda_ = (-lmda_);
          }
          return lmda_;
        }
      }
    }
    typename pythonic::assignable<typename __combined<__type78,__type79>::type>::type lmda__ = pythonic::numpy::ndarray::functor::reshape{}(closest_lmda, -1L, 1L);
    if ((pythonic::operator_::lt(lmda__.fast(pythonic::types::make_tuple(2L, 0L)), 0L)))
    {
      lmda__ = (-lmda__);
    }
    return lmda__;
  }
}
#include <pythonic/python/exception_handler.hpp>
#ifdef ENABLE_PYTHON_MODULE

static PyMethodDef Methods[] = {

    {NULL, NULL, 0, NULL}
};


#if PY_MAJOR_VERSION >= 3
  static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "estimator_pythran",            /* m_name */
    "",         /* m_doc */
    -1,                  /* m_size */
    Methods,             /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#define PYTHRAN_RETURN return theModule
#define PYTHRAN_MODULE_INIT(s) PyInit_##s
#else
#define PYTHRAN_RETURN return
#define PYTHRAN_MODULE_INIT(s) init##s
#endif
PyMODINIT_FUNC
PYTHRAN_MODULE_INIT(estimator_pythran)(void)
#ifndef _WIN32
__attribute__ ((visibility("default")))
__attribute__ ((externally_visible))
#endif
;
PyMODINIT_FUNC
PYTHRAN_MODULE_INIT(estimator_pythran)(void) {
    import_array()
    #if PY_MAJOR_VERSION >= 3
    PyObject* theModule = PyModule_Create(&moduledef);
    #else
    PyObject* theModule = Py_InitModule3("estimator_pythran",
                                         Methods,
                                         ""
    );
    #endif
    if(! theModule)
        PYTHRAN_RETURN;
    PyObject * theDoc = Py_BuildValue("(sss)",
                                      "0.9.1post0",
                                      "2019-02-18 19:29:29.027484",
                                      "189a5a9a241f7ccec912517ba25990ad0529ee90b5037a7a4a57750600be6e38");
    if(! theDoc)
        PYTHRAN_RETURN;
    PyModule_AddObject(theModule,
                       "__pythran__",
                       theDoc);


    PYTHRAN_RETURN;
}

#endif