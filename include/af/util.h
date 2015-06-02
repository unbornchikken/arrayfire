/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#pragma once
#include <af/defines.h>

#ifdef __cplusplus
namespace af
{
    class array;

    /**
        \defgroup print_func_print print

        \brief Print the array to screen

        \ingroup arrayfire_func
    */
    /**
        \param[in] exp is an expression, generally the name of the array
        \param[in] arr is the input array

        \ingroup print_func_print
    */
    AFAPI void print(const char *exp, const array &arr);

    // Purpose of Addition: "How to add Function" documentation
    AFAPI array exampleFunction(const array& in, const af_someenum_t param);
}

#define af_print(exp) af::print(#exp, exp);

#endif //__cplusplus

#ifdef __cplusplus
extern "C" {
#endif

    /**
        \ingroup method_mat
        @{
    */
    /**
        \brief Gets the number of elements in an array.

        \param[out] elems is the output that contains number of elements of \p arr
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_get_elements(dim_t *elems, const af_array arr);

    /**
        \brief Gets the type of an array.

        \param[out] type is the output that contains the type of \p arr
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_get_type(af_dtype *type, const af_array arr);

    /**
        \brief Gets the dimseions of an array.

        \param[out] d0 is the output that contains the size of first dimension of \p arr
        \param[out] d1 is the output that contains the size of second dimension of \p arr
        \param[out] d2 is the output that contains the size of third dimension of \p arr
        \param[out] d3 is the output that contains the size of fourth dimension of \p arr
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_get_dims(dim_t *d0, dim_t *d1, dim_t *d2, dim_t *d3,
                             const af_array arr);

    /**
        \brief Gets the number of dimensions of an array.

        \param[out] result is the output that contains the number of dims of \p arr
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_get_numdims(unsigned *result, const af_array arr);

    /**
        \brief Check if an array is empty.

        \param[out] result is true if elements of arr is 0, otherwise false
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_empty        (bool *result, const af_array arr);

    /**
        \brief Check if an array is scalar, ie. single element.

        \param[out] result is true if elements of arr is 1, otherwise false
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_scalar       (bool *result, const af_array arr);

    /**
        \brief Check if an array is row vector.

        \param[out] result is true if arr has dims [1 x 1 1], false otherwise
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_row          (bool *result, const af_array arr);

    /**
        \brief Check if an array is a column vector

        \param[out] result is true if arr has dims [x 1 1 1], false otherwise
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_column       (bool *result, const af_array arr);

    /**
        \brief Check if an array is a vector

        A vector is any array that has exactly 1 dimension not equal to 1.

        \param[out] result is true if arr is a vector, false otherwise
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_vector       (bool *result, const af_array arr);

    /**
        \brief Check if an array is complex type

        \param[out] result is true if arr is of type \ref c32 or \ref c64, otherwise false
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_complex      (bool *result, const af_array arr);

    /**
        \brief Check if an array is real type

        This is mutually exclusive to \ref af_is_complex

        \param[out] result is true if arr is NOT of type \ref c32 or \ref c64, otherwise false
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_real         (bool *result, const af_array arr);

    /**
        \brief Check if an array is double precision type

        \param[out] result is true if arr is of type \ref f64 or \ref c64, otherwise false
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_double       (bool *result, const af_array arr);

    /**
        \brief Check if an array is single precision type

        \param[out] result is true if arr is of type \ref f32 or \ref c32, otherwise false
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_single       (bool *result, const af_array arr);

    /**
        \brief Check if an array is real floating point type

        \param[out] result is true if arr is of type \ref f32 or \ref f64, otherwise false
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_realfloating (bool *result, const af_array arr);

    /**
        \brief Check if an array is floating precision type

        This is a combination of \ref af_is_realfloating and \ref af_is_complex

        \param[out] result is true if arr is of type \ref f32, \ref f64, \ref c32 or \ref c64, otherwise false
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_floating     (bool *result, const af_array arr);

    /**
        \brief Check if an array is integer type

        \param[out] result is true if arr is of integer types, otherwise false
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_integer      (bool *result, const af_array arr);

    /**
        \brief Check if an array is bool type

        \param[out] result is true if arr is of \ref b8 type, otherwise false
        \param[in] arr is the input array

        \returns error codes
    */
    AFAPI af_err af_is_bool         (bool *result, const af_array arr);
    /**
        @}
    */

    /**
        \param[in] arr is the input array

        \returns error codes

        \ingroup print_func_print
    */
    AFAPI af_err af_print_array(af_array arr);

    // Purpose of Addition: "How to add Function" documentation
    AFAPI af_err af_example_function(af_array* out, const af_array in, const af_someenum_t param);

    ///
    ///Get the version information of the library
    ///
    AFAPI af_err af_get_version(int *major, int *minor, int *patch);

#ifdef __cplusplus
}
#endif
