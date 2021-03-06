#ifndef PYTHONIC_NUMPY_SIN_HPP
#define PYTHONIC_NUMPY_SIN_HPP

#include "pythonic/include/numpy/sin.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/utils/numpy_traits.hpp"

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME sin
#define NUMPY_NARY_FUNC_SYM boost::simd::sin
#include "pythonic/types/numpy_nary_expr.hpp"
  }
}

#endif
