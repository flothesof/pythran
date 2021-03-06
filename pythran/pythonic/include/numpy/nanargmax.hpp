#ifndef PYTHONIC_INCLUDE_NUMPY_NANARGMAX_HPP
#define PYTHONIC_INCLUDE_NUMPY_NANARGMAX_HPP

#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/numpy/isnan.hpp"

namespace pythonic
{

  namespace numpy
  {
    template <class E>
    long nanargmax(E const &expr);

    DECLARE_FUNCTOR(pythonic::numpy, nanargmax);
  }
}

#endif
