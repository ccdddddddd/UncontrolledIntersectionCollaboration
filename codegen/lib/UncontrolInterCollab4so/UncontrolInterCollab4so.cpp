//
// File: UncontrolInterCollab4so.cpp
//
// MATLAB Coder version            : 5.5
// C/C++ source code generated on  : 08-Mar-2024 10:10:39
//

// Include Files
#include "UncontrolInterCollab4so.h"
#include "UncontrolInterCollab4so_types.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include <algorithm>
#include <cmath>
#include <cstring>

// Type Definitions
struct cell_wrap_3 {
  double f1[3];
};

struct struct_T {
  double values[20];
};

struct cell_wrap_0 {
  coder::bounded_array<double, 20U, 2U> f1;
};

struct cell_wrap_1 {
  coder::array<double, 2U> f1;
};

struct cell_wrap_2 {
  coder::array<double, 1U> f1;
};

// Function Declarations
static void b_binary_expand_op(coder::array<boolean_T, 1U> &in1,
                               const coder::array<boolean_T, 1U> &in2,
                               const coder::array<double, 2U> &in3, double in4);

static void binary_expand_op(coder::array<double, 2U> &in1,
                             const double in2_data[], const int in2_size[2],
                             const struct1_T *in3);

static void c_binary_expand_op(coder::array<boolean_T, 1U> &in1,
                               const coder::array<boolean_T, 1U> &in2,
                               const coder::array<double, 2U> &in3);

namespace coder {
static void do_vectors(const ::coder::array<double, 1U> &a, double b,
                       ::coder::array<double, 1U> &c,
                       ::coder::array<int, 1U> &ia, int *ib_size);

static void do_vectors(const ::coder::array<double, 1U> &a,
                       ::coder::array<double, 1U> &c,
                       ::coder::array<int, 1U> &ia, int *ib_size);

namespace internal {
static void maximum(const ::coder::array<double, 2U> &x, double *ex, int *idx);

static void merge(int idx_data[], double x_data[], int offset, int np, int nq,
                  int iwork_data[], double xwork_data[]);

static void merge(::coder::array<int, 1U> &idx, ::coder::array<double, 1U> &x,
                  int offset, int np, int nq, ::coder::array<int, 1U> &iwork,
                  ::coder::array<double, 1U> &xwork);

static void merge_block(::coder::array<int, 1U> &idx,
                        ::coder::array<double, 1U> &x, int offset, int n,
                        int preSortLevel, ::coder::array<int, 1U> &iwork,
                        ::coder::array<double, 1U> &xwork);

static void sort(double x_data[], const int x_size[2], int idx_data[],
                 int idx_size[2]);

static void sort(::coder::array<double, 1U> &x, ::coder::array<int, 1U> &idx);

} // namespace internal
static void isMember(const ::coder::array<double, 1U> &a,
                     const ::coder::array<double, 2U> &s,
                     ::coder::array<boolean_T, 1U> &tf);

static boolean_T isequal(const ::coder::array<double, 2U> &varargin_1,
                         const ::coder::array<double, 2U> &varargin_2);

static double sum(const ::coder::array<double, 2U> &x);

static void unique_vector(const ::coder::array<double, 1U> &a,
                          ::coder::array<double, 1U> &b);

} // namespace coder
static void findNodeConnections(const coder::array<double, 2U> &eSchlang,
                                double targetNode, double kGen,
                                const coder::array<double, 2U> &l,
                                coder::array<double, 1U> &reachable_to_node,
                                coder::array<double, 1U> &reachable_from_node);

static void findNodeConnections(const coder::array<double, 2U> &eSchlang,
                                const coder::array<double, 2U> &l,
                                coder::array<double, 1U> &reachable_to_node,
                                coder::array<double, 1U> &reachable_from_node);

// Function Definitions
//
// Arguments    : coder::array<boolean_T, 1U> &in1
//                const coder::array<boolean_T, 1U> &in2
//                const coder::array<double, 2U> &in3
//                double in4
// Return Type  : void
//
static void b_binary_expand_op(coder::array<boolean_T, 1U> &in1,
                               const coder::array<boolean_T, 1U> &in2,
                               const coder::array<double, 2U> &in3, double in4)
{
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  if (in3.size(1) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(1);
  }
  in1.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(1) != 1);
  if (in3.size(1) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] && (in3[i * stride_1_0] <= in4));
  }
}

//
// Arguments    : coder::array<double, 2U> &in1
//                const double in2_data[]
//                const int in2_size[2]
//                const struct1_T *in3
// Return Type  : void
//
static void binary_expand_op(coder::array<double, 2U> &in1,
                             const double in2_data[], const int in2_size[2],
                             const struct1_T *in3)
{
  coder::array<double, 2U> in2;
  int i;
  int loop_ub;
  int stride_0_1;
  int stride_1_1;
  if (in1.size(1) == 1) {
    i = in2_size[1];
  } else {
    i = in1.size(1);
  }
  in2.set_size(1, i);
  stride_0_1 = (in2_size[1] != 1);
  stride_1_1 = (in1.size(1) != 1);
  if (in1.size(1) == 1) {
    loop_ub = in2_size[1];
  } else {
    loop_ub = in1.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    in2[i] = in2_data[i * stride_0_1] + in1[i * stride_1_1] * in3->dt;
  }
  in1.set_size(1, in2.size(1));
  loop_ub = in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2[i];
  }
}

//
// Arguments    : coder::array<boolean_T, 1U> &in1
//                const coder::array<boolean_T, 1U> &in2
//                const coder::array<double, 2U> &in3
// Return Type  : void
//
static void c_binary_expand_op(coder::array<boolean_T, 1U> &in1,
                               const coder::array<boolean_T, 1U> &in2,
                               const coder::array<double, 2U> &in3)
{
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  if (in3.size(1) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(1);
  }
  in1.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(1) != 1);
  if (in3.size(1) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] && (in3[i * stride_1_0] <= 100.0));
  }
}

//
// Arguments    : const ::coder::array<double, 1U> &a
//                double b
//                ::coder::array<double, 1U> &c
//                ::coder::array<int, 1U> &ia
//                int *ib_size
// Return Type  : void
//
namespace coder {
static void do_vectors(const ::coder::array<double, 1U> &a, double b,
                       ::coder::array<double, 1U> &c,
                       ::coder::array<int, 1U> &ia, int *ib_size)
{
  int b_ialast;
  int iafirst;
  int ialast;
  int iblast;
  int na;
  int nc;
  int nia;
  na = a.size(0);
  c.set_size(a.size(0));
  ia.set_size(a.size(0));
  *ib_size = 0;
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 0;
  iblast = 1;
  while ((ialast + 1 <= na) && (iblast <= 1)) {
    double ak;
    b_ialast = ialast + 1;
    ak = a[ialast];
    while ((b_ialast < a.size(0)) && (a[b_ialast] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast - 1;
    if (ak == b) {
      ialast = b_ialast;
      iafirst = b_ialast;
      iblast = 2;
    } else {
      boolean_T p;
      if (std::isnan(b)) {
        p = !std::isnan(ak);
      } else if (std::isnan(ak)) {
        p = false;
      } else {
        p = (ak < b);
      }
      if (p) {
        nc++;
        nia++;
        c[nc - 1] = ak;
        ia[nia - 1] = iafirst + 1;
        ialast = b_ialast;
        iafirst = b_ialast;
      } else {
        iblast = 2;
      }
    }
  }
  while (ialast + 1 <= na) {
    b_ialast = ialast + 1;
    while ((b_ialast < a.size(0)) && (a[b_ialast] == a[ialast])) {
      b_ialast++;
    }
    nc++;
    nia++;
    c[nc - 1] = a[ialast];
    ia[nia - 1] = iafirst + 1;
    ialast = b_ialast;
    iafirst = b_ialast;
  }
  if (a.size(0) > 0) {
    if (nia < 1) {
      nia = 0;
    }
    ia.set_size(nia);
    if (nc < 1) {
      nc = 0;
    }
    c.set_size(nc);
  }
}

//
// Arguments    : const ::coder::array<double, 1U> &a
//                ::coder::array<double, 1U> &c
//                ::coder::array<int, 1U> &ia
//                int *ib_size
// Return Type  : void
//
static void do_vectors(const ::coder::array<double, 1U> &a,
                       ::coder::array<double, 1U> &c,
                       ::coder::array<int, 1U> &ia, int *ib_size)
{
  int b_ialast;
  int iafirst;
  int ialast;
  int iblast;
  int na;
  int nc;
  int nia;
  na = a.size(0);
  c.set_size(a.size(0));
  ia.set_size(a.size(0));
  *ib_size = 0;
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 0;
  iblast = 1;
  while ((ialast + 1 <= na) && (iblast <= 1)) {
    double ak;
    b_ialast = ialast + 1;
    ak = a[ialast];
    while ((b_ialast < a.size(0)) && (a[b_ialast] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast - 1;
    if (ak == 0.0) {
      ialast = b_ialast;
      iafirst = b_ialast;
      iblast = 2;
    } else if ((!std::isnan(ak)) && (ak < 0.0)) {
      nc++;
      nia++;
      c[nc - 1] = ak;
      ia[nia - 1] = iafirst + 1;
      ialast = b_ialast;
      iafirst = b_ialast;
    } else {
      iblast = 2;
    }
  }
  while (ialast + 1 <= na) {
    b_ialast = ialast + 1;
    while ((b_ialast < a.size(0)) && (a[b_ialast] == a[ialast])) {
      b_ialast++;
    }
    nc++;
    nia++;
    c[nc - 1] = a[ialast];
    ia[nia - 1] = iafirst + 1;
    ialast = b_ialast;
    iafirst = b_ialast;
  }
  if (a.size(0) > 0) {
    if (nia < 1) {
      nia = 0;
    }
    ia.set_size(nia);
    if (nc < 1) {
      nc = 0;
    }
    c.set_size(nc);
  }
}

//
// Arguments    : const ::coder::array<double, 2U> &x
//                double *ex
//                int *idx
// Return Type  : void
//
namespace internal {
static void maximum(const ::coder::array<double, 2U> &x, double *ex, int *idx)
{
  int last;
  last = x.size(1);
  if (x.size(1) <= 2) {
    if (x.size(1) == 1) {
      *ex = x[0];
      *idx = 1;
    } else if ((x[0] < x[x.size(1) - 1]) ||
               (std::isnan(x[0]) && (!std::isnan(x[x.size(1) - 1])))) {
      *ex = x[x.size(1) - 1];
      *idx = x.size(1);
    } else {
      *ex = x[0];
      *idx = 1;
    }
  } else {
    int k;
    if (!std::isnan(x[0])) {
      *idx = 1;
    } else {
      boolean_T exitg1;
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!std::isnan(x[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (*idx == 0) {
      *ex = x[0];
      *idx = 1;
    } else {
      int i;
      *ex = x[*idx - 1];
      i = *idx + 1;
      for (k = i; k <= last; k++) {
        double d;
        d = x[k - 1];
        if (*ex < d) {
          *ex = d;
          *idx = k;
        }
      }
    }
  }
}

//
// Arguments    : int idx_data[]
//                double x_data[]
//                int offset
//                int np
//                int nq
//                int iwork_data[]
//                double xwork_data[]
// Return Type  : void
//
static void merge(int idx_data[], double x_data[], int offset, int np, int nq,
                  int iwork_data[], double xwork_data[])
{
  if (nq != 0) {
    int iout;
    int n_tmp;
    int p;
    int q;
    n_tmp = np + nq;
    for (int j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork_data[j] = idx_data[iout];
      xwork_data[j] = x_data[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork_data[p] <= xwork_data[q]) {
        idx_data[iout] = iwork_data[p];
        x_data[iout] = xwork_data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx_data[iout] = iwork_data[q];
        x_data[iout] = xwork_data[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          for (int j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx_data[iout] = iwork_data[j - 1];
            x_data[iout] = xwork_data[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

//
// Arguments    : ::coder::array<int, 1U> &idx
//                ::coder::array<double, 1U> &x
//                int offset
//                int np
//                int nq
//                ::coder::array<int, 1U> &iwork
//                ::coder::array<double, 1U> &xwork
// Return Type  : void
//
static void merge(::coder::array<int, 1U> &idx, ::coder::array<double, 1U> &x,
                  int offset, int np, int nq, ::coder::array<int, 1U> &iwork,
                  ::coder::array<double, 1U> &xwork)
{
  if (nq != 0) {
    int iout;
    int n_tmp;
    int p;
    int q;
    n_tmp = np + nq;
    for (int j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork[j] = idx[iout];
      xwork[j] = x[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          for (int j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx[iout] = iwork[j - 1];
            x[iout] = xwork[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

//
// Arguments    : ::coder::array<int, 1U> &idx
//                ::coder::array<double, 1U> &x
//                int offset
//                int n
//                int preSortLevel
//                ::coder::array<int, 1U> &iwork
//                ::coder::array<double, 1U> &xwork
// Return Type  : void
//
static void merge_block(::coder::array<int, 1U> &idx,
                        ::coder::array<double, 1U> &x, int offset, int n,
                        int preSortLevel, ::coder::array<int, 1U> &iwork,
                        ::coder::array<double, 1U> &xwork)
{
  int bLen;
  int nPairs;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int nTail;
    int tailOffset;
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        merge(idx, x, offset + tailOffset, bLen, nTail - bLen, iwork, xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      merge(idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    merge(idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

//
// Arguments    : double x_data[]
//                const int x_size[2]
//                int idx_data[]
//                int idx_size[2]
// Return Type  : void
//
static void sort(double x_data[], const int x_size[2], int idx_data[],
                 int idx_size[2])
{
  double xwork_data[20];
  int iwork_data[20];
  int ib;
  idx_size[0] = 1;
  idx_size[1] = x_size[1];
  ib = x_size[1];
  if (ib - 1 >= 0) {
    std::memset(&idx_data[0], 0, static_cast<unsigned int>(ib) * sizeof(int));
  }
  if (x_size[1] != 0) {
    double x4[4];
    int i1;
    int i2;
    int i4;
    int n;
    int nNaNs;
    int quartetOffset;
    signed char idx4[4];
    n = x_size[1];
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    ib = x_size[1];
    if (ib - 1 >= 0) {
      std::memset(&iwork_data[0], 0,
                  static_cast<unsigned int>(ib) * sizeof(int));
    }
    ib = x_size[1];
    if (ib - 1 >= 0) {
      std::memset(&xwork_data[0], 0,
                  static_cast<unsigned int>(ib) * sizeof(double));
    }
    nNaNs = 0;
    ib = 0;
    for (int k{0}; k < n; k++) {
      if (std::isnan(x_data[k])) {
        i2 = (n - nNaNs) - 1;
        idx_data[i2] = k + 1;
        xwork_data[i2] = x_data[k];
        nNaNs++;
      } else {
        ib++;
        idx4[ib - 1] = static_cast<signed char>(k + 1);
        x4[ib - 1] = x_data[k];
        if (ib == 4) {
          double d;
          double d1;
          signed char b_i1;
          signed char b_i2;
          signed char i;
          signed char i3;
          quartetOffset = k - nNaNs;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            i2 = 2;
          } else {
            i1 = 2;
            i2 = 1;
          }
          if (x4[2] <= x4[3]) {
            ib = 3;
            i4 = 4;
          } else {
            ib = 4;
            i4 = 3;
          }
          d = x4[i1 - 1];
          d1 = x4[ib - 1];
          if (d <= d1) {
            d = x4[i2 - 1];
            if (d <= d1) {
              i = static_cast<signed char>(i1);
              b_i1 = static_cast<signed char>(i2);
              b_i2 = static_cast<signed char>(ib);
              i3 = static_cast<signed char>(i4);
            } else if (d <= x4[i4 - 1]) {
              i = static_cast<signed char>(i1);
              b_i1 = static_cast<signed char>(ib);
              b_i2 = static_cast<signed char>(i2);
              i3 = static_cast<signed char>(i4);
            } else {
              i = static_cast<signed char>(i1);
              b_i1 = static_cast<signed char>(ib);
              b_i2 = static_cast<signed char>(i4);
              i3 = static_cast<signed char>(i2);
            }
          } else {
            d1 = x4[i4 - 1];
            if (d <= d1) {
              if (x4[i2 - 1] <= d1) {
                i = static_cast<signed char>(ib);
                b_i1 = static_cast<signed char>(i1);
                b_i2 = static_cast<signed char>(i2);
                i3 = static_cast<signed char>(i4);
              } else {
                i = static_cast<signed char>(ib);
                b_i1 = static_cast<signed char>(i1);
                b_i2 = static_cast<signed char>(i4);
                i3 = static_cast<signed char>(i2);
              }
            } else {
              i = static_cast<signed char>(ib);
              b_i1 = static_cast<signed char>(i4);
              b_i2 = static_cast<signed char>(i1);
              i3 = static_cast<signed char>(i2);
            }
          }
          idx_data[quartetOffset - 3] = idx4[i - 1];
          idx_data[quartetOffset - 2] = idx4[b_i1 - 1];
          idx_data[quartetOffset - 1] = idx4[b_i2 - 1];
          idx_data[quartetOffset] = idx4[i3 - 1];
          x_data[quartetOffset - 3] = x4[i - 1];
          x_data[quartetOffset - 2] = x4[b_i1 - 1];
          x_data[quartetOffset - 1] = x4[b_i2 - 1];
          x_data[quartetOffset] = x4[i3 - 1];
          ib = 0;
        }
      }
    }
    i4 = x_size[1] - nNaNs;
    if (ib > 0) {
      signed char perm[4];
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      quartetOffset = static_cast<unsigned char>(ib);
      for (int k{0}; k < quartetOffset; k++) {
        i2 = perm[k] - 1;
        i1 = (i4 - ib) + k;
        idx_data[i1] = idx4[i2];
        x_data[i1] = x4[i2];
      }
    }
    ib = nNaNs >> 1;
    for (int k{0}; k < ib; k++) {
      quartetOffset = i4 + k;
      i1 = idx_data[quartetOffset];
      i2 = (n - k) - 1;
      idx_data[quartetOffset] = idx_data[i2];
      idx_data[i2] = i1;
      x_data[quartetOffset] = xwork_data[i2];
      x_data[i2] = xwork_data[quartetOffset];
    }
    if ((nNaNs & 1) != 0) {
      quartetOffset = i4 + ib;
      x_data[quartetOffset] = xwork_data[quartetOffset];
    }
    if (i4 > 1) {
      i2 = i4 >> 2;
      i1 = 4;
      while (i2 > 1) {
        if ((i2 & 1) != 0) {
          i2--;
          ib = i1 * i2;
          quartetOffset = i4 - ib;
          if (quartetOffset > i1) {
            merge(idx_data, x_data, ib, i1, quartetOffset - i1, iwork_data,
                  xwork_data);
          }
        }
        ib = i1 << 1;
        i2 >>= 1;
        for (int k{0}; k < i2; k++) {
          merge(idx_data, x_data, k * ib, i1, i1, iwork_data, xwork_data);
        }
        i1 = ib;
      }
      if (i4 > i1) {
        merge(idx_data, x_data, 0, i1, i4 - i1, iwork_data, xwork_data);
      }
    }
  }
}

//
// Arguments    : ::coder::array<double, 1U> &x
//                ::coder::array<int, 1U> &idx
// Return Type  : void
//
static void sort(::coder::array<double, 1U> &x, ::coder::array<int, 1U> &idx)
{
  array<double, 1U> b_xwork;
  array<double, 1U> vwork;
  array<double, 1U> xwork;
  array<int, 1U> b_iwork;
  array<int, 1U> iidx;
  array<int, 1U> iwork;
  int dim;
  int i;
  int vlen;
  int vstride;
  dim = 0;
  if (x.size(0) != 1) {
    dim = -1;
  }
  if (dim + 2 <= 1) {
    i = x.size(0);
  } else {
    i = 1;
  }
  vlen = i - 1;
  vwork.set_size(i);
  idx.set_size(x.size(0));
  vstride = 1;
  for (int k{0}; k <= dim; k++) {
    vstride *= x.size(0);
  }
  for (int j{0}; j < vstride; j++) {
    for (int k{0}; k <= vlen; k++) {
      vwork[k] = x[j + k * vstride];
    }
    iidx.set_size(vwork.size(0));
    dim = vwork.size(0);
    for (i = 0; i < dim; i++) {
      iidx[i] = 0;
    }
    if (vwork.size(0) != 0) {
      double x4[4];
      int idx4[4];
      int bLen2;
      int i1;
      int i2;
      int i3;
      int i4;
      int iidx_tmp;
      int n;
      int nNonNaN;
      n = vwork.size(0);
      x4[0] = 0.0;
      idx4[0] = 0;
      x4[1] = 0.0;
      idx4[1] = 0;
      x4[2] = 0.0;
      idx4[2] = 0;
      x4[3] = 0.0;
      idx4[3] = 0;
      iwork.set_size(vwork.size(0));
      dim = vwork.size(0);
      for (i = 0; i < dim; i++) {
        iwork[i] = 0;
      }
      xwork.set_size(vwork.size(0));
      dim = vwork.size(0);
      for (i = 0; i < dim; i++) {
        xwork[i] = 0.0;
      }
      bLen2 = 0;
      dim = 0;
      for (int k{0}; k < n; k++) {
        if (std::isnan(vwork[k])) {
          iidx_tmp = (n - bLen2) - 1;
          iidx[iidx_tmp] = k + 1;
          xwork[iidx_tmp] = vwork[k];
          bLen2++;
        } else {
          dim++;
          idx4[dim - 1] = k + 1;
          x4[dim - 1] = vwork[k];
          if (dim == 4) {
            double d;
            double d1;
            signed char b_i1;
            signed char b_i2;
            signed char b_i3;
            signed char b_i4;
            dim = k - bLen2;
            if (x4[0] <= x4[1]) {
              i1 = 1;
              i2 = 2;
            } else {
              i1 = 2;
              i2 = 1;
            }
            if (x4[2] <= x4[3]) {
              i3 = 3;
              i4 = 4;
            } else {
              i3 = 4;
              i4 = 3;
            }
            d = x4[i1 - 1];
            d1 = x4[i3 - 1];
            if (d <= d1) {
              d = x4[i2 - 1];
              if (d <= d1) {
                b_i1 = static_cast<signed char>(i1);
                b_i2 = static_cast<signed char>(i2);
                b_i3 = static_cast<signed char>(i3);
                b_i4 = static_cast<signed char>(i4);
              } else if (d <= x4[i4 - 1]) {
                b_i1 = static_cast<signed char>(i1);
                b_i2 = static_cast<signed char>(i3);
                b_i3 = static_cast<signed char>(i2);
                b_i4 = static_cast<signed char>(i4);
              } else {
                b_i1 = static_cast<signed char>(i1);
                b_i2 = static_cast<signed char>(i3);
                b_i3 = static_cast<signed char>(i4);
                b_i4 = static_cast<signed char>(i2);
              }
            } else {
              d1 = x4[i4 - 1];
              if (d <= d1) {
                if (x4[i2 - 1] <= d1) {
                  b_i1 = static_cast<signed char>(i3);
                  b_i2 = static_cast<signed char>(i1);
                  b_i3 = static_cast<signed char>(i2);
                  b_i4 = static_cast<signed char>(i4);
                } else {
                  b_i1 = static_cast<signed char>(i3);
                  b_i2 = static_cast<signed char>(i1);
                  b_i3 = static_cast<signed char>(i4);
                  b_i4 = static_cast<signed char>(i2);
                }
              } else {
                b_i1 = static_cast<signed char>(i3);
                b_i2 = static_cast<signed char>(i4);
                b_i3 = static_cast<signed char>(i1);
                b_i4 = static_cast<signed char>(i2);
              }
            }
            iidx[dim - 3] = idx4[b_i1 - 1];
            iidx[dim - 2] = idx4[b_i2 - 1];
            iidx[dim - 1] = idx4[b_i3 - 1];
            iidx[dim] = idx4[b_i4 - 1];
            vwork[dim - 3] = x4[b_i1 - 1];
            vwork[dim - 2] = x4[b_i2 - 1];
            vwork[dim - 1] = x4[b_i3 - 1];
            vwork[dim] = x4[b_i4 - 1];
            dim = 0;
          }
        }
      }
      i3 = vwork.size(0) - bLen2;
      if (dim > 0) {
        signed char perm[4];
        perm[1] = 0;
        perm[2] = 0;
        perm[3] = 0;
        if (dim == 1) {
          perm[0] = 1;
        } else if (dim == 2) {
          if (x4[0] <= x4[1]) {
            perm[0] = 1;
            perm[1] = 2;
          } else {
            perm[0] = 2;
            perm[1] = 1;
          }
        } else if (x4[0] <= x4[1]) {
          if (x4[1] <= x4[2]) {
            perm[0] = 1;
            perm[1] = 2;
            perm[2] = 3;
          } else if (x4[0] <= x4[2]) {
            perm[0] = 1;
            perm[1] = 3;
            perm[2] = 2;
          } else {
            perm[0] = 3;
            perm[1] = 1;
            perm[2] = 2;
          }
        } else if (x4[0] <= x4[2]) {
          perm[0] = 2;
          perm[1] = 1;
          perm[2] = 3;
        } else if (x4[1] <= x4[2]) {
          perm[0] = 2;
          perm[1] = 3;
          perm[2] = 1;
        } else {
          perm[0] = 3;
          perm[1] = 2;
          perm[2] = 1;
        }
        i = static_cast<unsigned char>(dim);
        for (int k{0}; k < i; k++) {
          iidx_tmp = perm[k] - 1;
          i1 = (i3 - dim) + k;
          iidx[i1] = idx4[iidx_tmp];
          vwork[i1] = x4[iidx_tmp];
        }
      }
      dim = bLen2 >> 1;
      for (int k{0}; k < dim; k++) {
        i1 = i3 + k;
        i2 = iidx[i1];
        iidx_tmp = (n - k) - 1;
        iidx[i1] = iidx[iidx_tmp];
        iidx[iidx_tmp] = i2;
        vwork[i1] = xwork[iidx_tmp];
        vwork[iidx_tmp] = xwork[i1];
      }
      if ((bLen2 & 1) != 0) {
        dim += i3;
        vwork[dim] = xwork[dim];
      }
      nNonNaN = vwork.size(0) - bLen2;
      i1 = 2;
      if (nNonNaN > 1) {
        if (vwork.size(0) >= 256) {
          int nBlocks;
          nBlocks = nNonNaN >> 8;
          if (nBlocks > 0) {
            for (int b{0}; b < nBlocks; b++) {
              double c_xwork[256];
              int c_iwork[256];
              i4 = (b << 8) - 1;
              for (int b_b{0}; b_b < 6; b_b++) {
                n = 1 << (b_b + 2);
                bLen2 = n << 1;
                i = 256 >> (b_b + 3);
                for (int k{0}; k < i; k++) {
                  i2 = (i4 + k * bLen2) + 1;
                  for (i1 = 0; i1 < bLen2; i1++) {
                    dim = i2 + i1;
                    c_iwork[i1] = iidx[dim];
                    c_xwork[i1] = vwork[dim];
                  }
                  i3 = 0;
                  i1 = n;
                  dim = i2 - 1;
                  int exitg1;
                  do {
                    exitg1 = 0;
                    dim++;
                    if (c_xwork[i3] <= c_xwork[i1]) {
                      iidx[dim] = c_iwork[i3];
                      vwork[dim] = c_xwork[i3];
                      if (i3 + 1 < n) {
                        i3++;
                      } else {
                        exitg1 = 1;
                      }
                    } else {
                      iidx[dim] = c_iwork[i1];
                      vwork[dim] = c_xwork[i1];
                      if (i1 + 1 < bLen2) {
                        i1++;
                      } else {
                        dim -= i3;
                        for (i1 = i3 + 1; i1 <= n; i1++) {
                          iidx_tmp = dim + i1;
                          iidx[iidx_tmp] = c_iwork[i1 - 1];
                          vwork[iidx_tmp] = c_xwork[i1 - 1];
                        }
                        exitg1 = 1;
                      }
                    }
                  } while (exitg1 == 0);
                }
              }
            }
            dim = nBlocks << 8;
            i1 = nNonNaN - dim;
            if (i1 > 0) {
              merge_block(iidx, vwork, dim, i1, 2, iwork, xwork);
            }
            i1 = 8;
          }
        }
        dim = iwork.size(0);
        b_iwork.set_size(iwork.size(0));
        for (i = 0; i < dim; i++) {
          b_iwork[i] = iwork[i];
        }
        b_xwork.set_size(xwork.size(0));
        dim = xwork.size(0);
        for (i = 0; i < dim; i++) {
          b_xwork[i] = xwork[i];
        }
        merge_block(iidx, vwork, 0, nNonNaN, i1, b_iwork, b_xwork);
      }
    }
    for (int k{0}; k <= vlen; k++) {
      i = j + k * vstride;
      x[i] = vwork[k];
      idx[i] = iidx[k];
    }
  }
}

//
// Arguments    : const ::coder::array<double, 1U> &a
//                const ::coder::array<double, 2U> &s
//                ::coder::array<boolean_T, 1U> &tf
// Return Type  : void
//
} // namespace internal
static void isMember(const ::coder::array<double, 1U> &a,
                     const ::coder::array<double, 2U> &s,
                     ::coder::array<boolean_T, 1U> &tf)
{
  array<double, 1U> ss;
  array<int, 1U> b_ss;
  int k;
  int na;
  int ns;
  int pmax;
  int pmin;
  boolean_T exitg1;
  boolean_T guard1{false};
  na = a.size(0) - 1;
  ns = s.size(0);
  tf.set_size(a.size(0));
  pmax = a.size(0);
  for (pmin = 0; pmin < pmax; pmin++) {
    tf[pmin] = false;
  }
  guard1 = false;
  if (s.size(0) <= 4) {
    guard1 = true;
  } else {
    int ilo;
    int pow2p;
    pmax = 31;
    pmin = 0;
    exitg1 = false;
    while ((!exitg1) && (pmax - pmin > 1)) {
      ilo = (pmin + pmax) >> 1;
      pow2p = 1 << ilo;
      if (pow2p == ns) {
        pmax = ilo;
        exitg1 = true;
      } else if (pow2p > ns) {
        pmax = ilo;
      } else {
        pmin = ilo;
      }
    }
    if (a.size(0) <= pmax + 4) {
      guard1 = true;
    } else {
      double v_idx_1;
      boolean_T y;
      y = true;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= s.size(0) - 2)) {
        v_idx_1 = s[k + 1];
        if ((s[k] <= v_idx_1) || std::isnan(v_idx_1)) {
          k++;
        } else {
          y = false;
          exitg1 = true;
        }
      }
      if (!y) {
        ss.set_size(s.size(0));
        pmax = s.size(0);
        for (pmin = 0; pmin < pmax; pmin++) {
          ss[pmin] = s[pmin];
        }
        internal::sort(ss, b_ss);
        for (k = 0; k <= na; k++) {
          v_idx_1 = a[k];
          pmax = ss.size(0);
          pmin = -1;
          ilo = 1;
          exitg1 = false;
          while ((!exitg1) && (pmax >= ilo)) {
            pow2p = ((ilo >> 1) + (pmax >> 1)) - 1;
            if (((ilo & 1) == 1) && ((pmax & 1) == 1)) {
              pow2p++;
            }
            if (v_idx_1 == ss[pow2p]) {
              pmin = pow2p;
              exitg1 = true;
            } else {
              if (std::isnan(ss[pow2p])) {
                y = !std::isnan(v_idx_1);
              } else if (std::isnan(v_idx_1)) {
                y = false;
              } else {
                y = (v_idx_1 < ss[pow2p]);
              }
              if (y) {
                pmax = pow2p;
              } else {
                ilo = pow2p + 2;
              }
            }
          }
          if (pmin + 1 > 0) {
            while ((pmin > 0) && (v_idx_1 == ss[pmin - 1])) {
              pmin--;
            }
          }
          if (pmin + 1 > 0) {
            tf[k] = true;
          }
        }
      } else {
        for (k = 0; k <= na; k++) {
          v_idx_1 = a[k];
          pmax = s.size(0);
          pmin = -1;
          ilo = 1;
          exitg1 = false;
          while ((!exitg1) && (pmax >= ilo)) {
            pow2p = ((ilo >> 1) + (pmax >> 1)) - 1;
            if (((ilo & 1) == 1) && ((pmax & 1) == 1)) {
              pow2p++;
            }
            if (v_idx_1 == s[pow2p]) {
              pmin = pow2p;
              exitg1 = true;
            } else {
              if (std::isnan(s[pow2p])) {
                y = !std::isnan(v_idx_1);
              } else if (std::isnan(v_idx_1)) {
                y = false;
              } else {
                y = (v_idx_1 < s[pow2p]);
              }
              if (y) {
                pmax = pow2p;
              } else {
                ilo = pow2p + 2;
              }
            }
          }
          if (pmin + 1 > 0) {
            while ((pmin > 0) && (v_idx_1 == s[pmin - 1])) {
              pmin--;
            }
          }
          if (pmin + 1 > 0) {
            tf[k] = true;
          }
        }
      }
    }
  }
  if (guard1) {
    for (pmax = 0; pmax <= na; pmax++) {
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= ns - 1)) {
        if (a[pmax] == s[k]) {
          tf[pmax] = true;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
  }
}

//
// Arguments    : const ::coder::array<double, 2U> &varargin_1
//                const ::coder::array<double, 2U> &varargin_2
// Return Type  : boolean_T
//
static boolean_T isequal(const ::coder::array<double, 2U> &varargin_1,
                         const ::coder::array<double, 2U> &varargin_2)
{
  boolean_T p;
  p = false;
  if ((varargin_1.size(0) == varargin_2.size(0)) && (varargin_2.size(1) == 1)) {
    p = true;
  }
  if (p && (varargin_1.size(0) != 0) &&
      ((varargin_2.size(0) != 0) && (varargin_2.size(1) != 0))) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargin_2.size(0) - 1)) {
      if (!(varargin_1[k] == varargin_2[k])) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return p;
}

//
// Arguments    : const ::coder::array<double, 2U> &x
// Return Type  : double
//
static double sum(const ::coder::array<double, 2U> &x)
{
  double y;
  if (x.size(1) == 0) {
    y = 0.0;
  } else {
    int firstBlockLength;
    int lastBlockLength;
    int nblocks;
    if (x.size(1) <= 1024) {
      firstBlockLength = x.size(1);
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = static_cast<int>(static_cast<unsigned int>(x.size(1)) >> 10);
      lastBlockLength = x.size(1) - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    y = x[0];
    for (int k{2}; k <= firstBlockLength; k++) {
      y += x[k - 1];
    }
    for (int ib{2}; ib <= nblocks; ib++) {
      double bsum;
      int hi;
      firstBlockLength = (ib - 1) << 10;
      bsum = x[firstBlockLength];
      if (ib == nblocks) {
        hi = lastBlockLength;
      } else {
        hi = 1024;
      }
      for (int k{2}; k <= hi; k++) {
        bsum += x[(firstBlockLength + k) - 1];
      }
      y += bsum;
    }
  }
  return y;
}

//
// Arguments    : const ::coder::array<double, 1U> &a
//                ::coder::array<double, 1U> &b
// Return Type  : void
//
static void unique_vector(const ::coder::array<double, 1U> &a,
                          ::coder::array<double, 1U> &b)
{
  array<int, 1U> idx;
  array<int, 1U> iwork;
  double x;
  int b_i;
  int i;
  int i2;
  int j;
  int k;
  int n;
  int na;
  int nb;
  int qEnd;
  na = a.size(0);
  n = a.size(0) + 1;
  idx.set_size(a.size(0));
  i = a.size(0);
  for (b_i = 0; b_i < i; b_i++) {
    idx[b_i] = 0;
  }
  if (a.size(0) != 0) {
    iwork.set_size(a.size(0));
    b_i = a.size(0) - 1;
    for (k = 1; k <= b_i; k += 2) {
      if ((a[k - 1] <= a[k]) || std::isnan(a[k])) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }
    if ((a.size(0) & 1) != 0) {
      idx[a.size(0) - 1] = a.size(0);
    }
    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (nb = i + 1; nb < n; nb = qEnd + i) {
        int kEnd;
        int p;
        int q;
        p = j;
        q = nb - 1;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          x = a[idx[q] - 1];
          b_i = idx[p - 1];
          if ((a[b_i - 1] <= x) || std::isnan(x)) {
            iwork[k] = b_i;
            p++;
            if (p == nb) {
              while (q + 1 < qEnd) {
                k++;
                iwork[k] = idx[q];
                q++;
              }
            }
          } else {
            iwork[k] = idx[q];
            q++;
            if (q + 1 == qEnd) {
              while (p < nb) {
                k++;
                iwork[k] = idx[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx[(j + k) - 1] = iwork[k];
        }
        j = qEnd;
      }
      i = i2;
    }
  }
  b.set_size(a.size(0));
  for (k = 0; k < na; k++) {
    b[k] = a[idx[k] - 1];
  }
  k = a.size(0);
  while ((k >= 1) && std::isnan(b[k - 1])) {
    k--;
  }
  i2 = a.size(0) - k;
  nb = 0;
  i = 1;
  while (i <= k) {
    x = b[i - 1];
    do {
      i++;
    } while (!((i > k) || (b[i - 1] != x)));
    nb++;
    b[nb - 1] = x;
  }
  for (j = 0; j < i2; j++) {
    b[nb + j] = b[k + j];
  }
  nb += i2;
  if (nb < 1) {
    nb = 0;
  }
  b.set_size(nb);
}

//
// 初始化可以到达目标节点的节点集合
//
// Arguments    : const coder::array<double, 2U> &eSchlang
//                double targetNode
//                double kGen
//                const coder::array<double, 2U> &l
//                coder::array<double, 1U> &reachable_to_node
//                coder::array<double, 1U> &reachable_from_node
// Return Type  : void
//
} // namespace coder
static void findNodeConnections(const coder::array<double, 2U> &eSchlang,
                                double targetNode, double kGen,
                                const coder::array<double, 2U> &l,
                                coder::array<double, 1U> &reachable_to_node,
                                coder::array<double, 1U> &reachable_from_node)
{
  coder::array<double, 2U> old_reachable_to_target;
  coder::array<double, 2U> reachable_from_target;
  coder::array<double, 2U> reachable_to_target;
  coder::array<double, 2U> x;
  coder::array<double, 2U> y;
  coder::array<double, 1U> b_reachable_from_target;
  coder::array<double, 1U> b_reachable_to_target;
  coder::array<int, 1U> ia;
  coder::array<int, 1U> r2;
  coder::array<boolean_T, 1U> r;
  coder::array<boolean_T, 1U> r1;
  double b_l;
  int k;
  int nx;
  reachable_to_target.set_size(1, 1);
  reachable_to_target[0] = targetNode;
  old_reachable_to_target.set_size(0, 0);
  //  通过循环查找可以到达目标节点的节点集合
  while (!coder::isequal(reachable_to_target, old_reachable_to_target)) {
    old_reachable_to_target.set_size(reachable_to_target.size(0), 1);
    nx = reachable_to_target.size(0);
    for (k = 0; k < nx; k++) {
      old_reachable_to_target[k] = reachable_to_target[k];
    }
    b_l = l[static_cast<int>(targetNode + 1.0) - 1];
    x.set_size(1, eSchlang.size(0));
    nx = eSchlang.size(0);
    for (k = 0; k < nx; k++) {
      x[k] = l[static_cast<int>(eSchlang[k] + 1.0) - 1] - b_l;
    }
    nx = x.size(1);
    y.set_size(1, x.size(1));
    for (k = 0; k < nx; k++) {
      y[k] = std::abs(x[k]);
    }
    b_reachable_to_target.set_size(eSchlang.size(0));
    nx = eSchlang.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k] = eSchlang[k + eSchlang.size(0)];
    }
    coder::isMember(b_reachable_to_target, reachable_to_target, r);
    if (r.size(0) == y.size(1)) {
      r1.set_size(r.size(0));
      nx = r.size(0);
      for (k = 0; k < nx; k++) {
        r1[k] = (r[k] && (y[k] <= kGen));
      }
    } else {
      b_binary_expand_op(r1, r, y, kGen);
    }
    k = r1.size(0) - 1;
    nx = 0;
    for (int i{0}; i <= k; i++) {
      if (r1[i]) {
        nx++;
      }
    }
    r2.set_size(nx);
    nx = 0;
    for (int i{0}; i <= k; i++) {
      if (r1[i]) {
        r2[nx] = i + 1;
        nx++;
      }
    }
    b_reachable_to_target.set_size(reachable_to_target.size(0) + r2.size(0));
    nx = reachable_to_target.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k] = reachable_to_target[k];
    }
    nx = r2.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k + reachable_to_target.size(0)] =
          eSchlang[r2[k] - 1];
    }
    coder::unique_vector(b_reachable_to_target, b_reachable_from_target);
    reachable_to_target.set_size(b_reachable_from_target.size(0), 1);
    nx = b_reachable_from_target.size(0);
    for (k = 0; k < nx; k++) {
      reachable_to_target[k] = b_reachable_from_target[k];
    }
    // ,
  }
  //  找到可以从目标节点出发到达的节点集合
  reachable_from_target.set_size(1, 1);
  reachable_from_target[0] = targetNode;
  old_reachable_to_target.set_size(0, 0);
  //  通过循环查找可以从目标节点出发到达的节点集合
  while (!coder::isequal(reachable_from_target, old_reachable_to_target)) {
    old_reachable_to_target.set_size(reachable_from_target.size(0), 1);
    nx = reachable_from_target.size(0);
    for (k = 0; k < nx; k++) {
      old_reachable_to_target[k] = reachable_from_target[k];
    }
    b_l = l[static_cast<int>(targetNode + 1.0) - 1];
    x.set_size(1, eSchlang.size(0));
    nx = eSchlang.size(0);
    for (k = 0; k < nx; k++) {
      x[k] =
          l[static_cast<int>(eSchlang[k + eSchlang.size(0)] + 1.0) - 1] - b_l;
    }
    nx = x.size(1);
    y.set_size(1, x.size(1));
    for (k = 0; k < nx; k++) {
      y[k] = std::abs(x[k]);
    }
    b_reachable_to_target.set_size(eSchlang.size(0));
    nx = eSchlang.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k] = eSchlang[k];
    }
    coder::isMember(b_reachable_to_target, reachable_from_target, r);
    if (r.size(0) == y.size(1)) {
      r1.set_size(r.size(0));
      nx = r.size(0);
      for (k = 0; k < nx; k++) {
        r1[k] = (r[k] && (y[k] <= kGen));
      }
    } else {
      b_binary_expand_op(r1, r, y, kGen);
    }
    k = r1.size(0) - 1;
    nx = 0;
    for (int i{0}; i <= k; i++) {
      if (r1[i]) {
        nx++;
      }
    }
    ia.set_size(nx);
    nx = 0;
    for (int i{0}; i <= k; i++) {
      if (r1[i]) {
        ia[nx] = i + 1;
        nx++;
      }
    }
    b_reachable_to_target.set_size(reachable_from_target.size(0) + ia.size(0));
    nx = reachable_from_target.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k] = reachable_from_target[k];
    }
    nx = ia.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k + reachable_from_target.size(0)] =
          eSchlang[(ia[k] + eSchlang.size(0)) - 1];
    }
    coder::unique_vector(b_reachable_to_target, b_reachable_from_target);
    reachable_from_target.set_size(b_reachable_from_target.size(0), 1);
    nx = b_reachable_from_target.size(0);
    for (k = 0; k < nx; k++) {
      reachable_from_target[k] = b_reachable_from_target[k];
    }
    // ,
  }
  //  返回结果
  b_reachable_to_target.set_size(reachable_to_target.size(0));
  nx = reachable_to_target.size(0);
  for (k = 0; k < nx; k++) {
    b_reachable_to_target[k] = reachable_to_target[k];
  }
  coder::do_vectors(b_reachable_to_target, targetNode, reachable_to_node, ia,
                    &nx);
  //  排除目标节点
  b_reachable_to_target.set_size(reachable_from_target.size(0));
  nx = reachable_from_target.size(0);
  for (k = 0; k < nx; k++) {
    b_reachable_to_target[k] = reachable_from_target[k];
  }
  coder::do_vectors(b_reachable_to_target, targetNode, reachable_from_node, ia,
                    &nx);
  //  排除目标节点
}

//
// 初始化可以到达目标节点的节点集合
//
// Arguments    : const coder::array<double, 2U> &eSchlang
//                const coder::array<double, 2U> &l
//                coder::array<double, 1U> &reachable_to_node
//                coder::array<double, 1U> &reachable_from_node
// Return Type  : void
//
static void findNodeConnections(const coder::array<double, 2U> &eSchlang,
                                const coder::array<double, 2U> &l,
                                coder::array<double, 1U> &reachable_to_node,
                                coder::array<double, 1U> &reachable_from_node)
{
  coder::array<double, 2U> old_reachable_to_target;
  coder::array<double, 2U> reachable_from_target;
  coder::array<double, 2U> reachable_to_target;
  coder::array<double, 2U> x;
  coder::array<double, 2U> y;
  coder::array<double, 1U> b_reachable_from_target;
  coder::array<double, 1U> b_reachable_to_target;
  coder::array<int, 1U> ia;
  coder::array<int, 1U> r2;
  coder::array<boolean_T, 1U> r;
  coder::array<boolean_T, 1U> r1;
  double b_l;
  int k;
  int nx;
  reachable_to_target.set_size(1, 1);
  reachable_to_target[0] = 0.0;
  old_reachable_to_target.set_size(0, 0);
  //  通过循环查找可以到达目标节点的节点集合
  while (!coder::isequal(reachable_to_target, old_reachable_to_target)) {
    old_reachable_to_target.set_size(reachable_to_target.size(0), 1);
    nx = reachable_to_target.size(0);
    for (k = 0; k < nx; k++) {
      old_reachable_to_target[k] = reachable_to_target[k];
    }
    b_l = l[0];
    x.set_size(1, eSchlang.size(0));
    nx = eSchlang.size(0);
    for (k = 0; k < nx; k++) {
      x[k] = l[static_cast<int>(eSchlang[k] + 1.0) - 1] - b_l;
    }
    nx = x.size(1);
    y.set_size(1, x.size(1));
    for (k = 0; k < nx; k++) {
      y[k] = std::abs(x[k]);
    }
    b_reachable_to_target.set_size(eSchlang.size(0));
    nx = eSchlang.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k] = eSchlang[k + eSchlang.size(0)];
    }
    coder::isMember(b_reachable_to_target, reachable_to_target, r);
    if (r.size(0) == y.size(1)) {
      r1.set_size(r.size(0));
      nx = r.size(0);
      for (k = 0; k < nx; k++) {
        r1[k] = (r[k] && (y[k] <= 100.0));
      }
    } else {
      c_binary_expand_op(r1, r, y);
    }
    k = r1.size(0) - 1;
    nx = 0;
    for (int i{0}; i <= k; i++) {
      if (r1[i]) {
        nx++;
      }
    }
    r2.set_size(nx);
    nx = 0;
    for (int i{0}; i <= k; i++) {
      if (r1[i]) {
        r2[nx] = i + 1;
        nx++;
      }
    }
    b_reachable_to_target.set_size(reachable_to_target.size(0) + r2.size(0));
    nx = reachable_to_target.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k] = reachable_to_target[k];
    }
    nx = r2.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k + reachable_to_target.size(0)] =
          eSchlang[r2[k] - 1];
    }
    coder::unique_vector(b_reachable_to_target, b_reachable_from_target);
    reachable_to_target.set_size(b_reachable_from_target.size(0), 1);
    nx = b_reachable_from_target.size(0);
    for (k = 0; k < nx; k++) {
      reachable_to_target[k] = b_reachable_from_target[k];
    }
    // ,
  }
  //  找到可以从目标节点出发到达的节点集合
  reachable_from_target.set_size(1, 1);
  reachable_from_target[0] = 0.0;
  old_reachable_to_target.set_size(0, 0);
  //  通过循环查找可以从目标节点出发到达的节点集合
  while (!coder::isequal(reachable_from_target, old_reachable_to_target)) {
    old_reachable_to_target.set_size(reachable_from_target.size(0), 1);
    nx = reachable_from_target.size(0);
    for (k = 0; k < nx; k++) {
      old_reachable_to_target[k] = reachable_from_target[k];
    }
    b_l = l[0];
    x.set_size(1, eSchlang.size(0));
    nx = eSchlang.size(0);
    for (k = 0; k < nx; k++) {
      x[k] =
          l[static_cast<int>(eSchlang[k + eSchlang.size(0)] + 1.0) - 1] - b_l;
    }
    nx = x.size(1);
    y.set_size(1, x.size(1));
    for (k = 0; k < nx; k++) {
      y[k] = std::abs(x[k]);
    }
    b_reachable_to_target.set_size(eSchlang.size(0));
    nx = eSchlang.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k] = eSchlang[k];
    }
    coder::isMember(b_reachable_to_target, reachable_from_target, r);
    if (r.size(0) == y.size(1)) {
      r1.set_size(r.size(0));
      nx = r.size(0);
      for (k = 0; k < nx; k++) {
        r1[k] = (r[k] && (y[k] <= 100.0));
      }
    } else {
      c_binary_expand_op(r1, r, y);
    }
    k = r1.size(0) - 1;
    nx = 0;
    for (int i{0}; i <= k; i++) {
      if (r1[i]) {
        nx++;
      }
    }
    ia.set_size(nx);
    nx = 0;
    for (int i{0}; i <= k; i++) {
      if (r1[i]) {
        ia[nx] = i + 1;
        nx++;
      }
    }
    b_reachable_to_target.set_size(reachable_from_target.size(0) + ia.size(0));
    nx = reachable_from_target.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k] = reachable_from_target[k];
    }
    nx = ia.size(0);
    for (k = 0; k < nx; k++) {
      b_reachable_to_target[k + reachable_from_target.size(0)] =
          eSchlang[(ia[k] + eSchlang.size(0)) - 1];
    }
    coder::unique_vector(b_reachable_to_target, b_reachable_from_target);
    reachable_from_target.set_size(b_reachable_from_target.size(0), 1);
    nx = b_reachable_from_target.size(0);
    for (k = 0; k < nx; k++) {
      reachable_from_target[k] = b_reachable_from_target[k];
    }
    // ,
  }
  //  返回结果
  b_reachable_to_target.set_size(reachable_to_target.size(0));
  nx = reachable_to_target.size(0);
  for (k = 0; k < nx; k++) {
    b_reachable_to_target[k] = reachable_to_target[k];
  }
  coder::do_vectors(b_reachable_to_target, reachable_to_node, ia, &nx);
  //  排除目标节点
  b_reachable_to_target.set_size(reachable_from_target.size(0));
  nx = reachable_from_target.size(0);
  for (k = 0; k < nx; k++) {
    b_reachable_to_target[k] = reachable_from_target[k];
  }
  coder::do_vectors(b_reachable_to_target, reachable_from_node, ia, &nx);
  //  排除目标节点
}

//
// Arguments    : short numOfVehsInt
//                const double dis2center[20]
//                const double velocity[20]
//                const double accel[20]
//                const struct0_T pConflictStructInt[20]
//                const struct1_T *calibrationVars
//                double vTarget[20]
// Return Type  : void
//
void UncontrolInterCollab4so(short numOfVehsInt, const double dis2center[20],
                             const double velocity[20], const double accel[20],
                             const struct0_T pConflictStructInt[20],
                             const struct1_T *calibrationVars,
                             double vTarget[20])
{
  coder::array<cell_wrap_0, 1U> pConflict;
  coder::array<cell_wrap_1, 2U> p;
  coder::array<cell_wrap_2, 2U> A;
  coder::array<cell_wrap_3, 2U> b_x;
  coder::array<double, 2U> b_eSchlang;
  coder::array<double, 2U> eSchlang;
  coder::array<double, 2U> i4coder;
  coder::array<double, 2U> l;
  coder::array<double, 2U> lMatrix;
  coder::array<double, 2U> p4coder;
  coder::array<double, 2U> u;
  coder::array<double, 1U> matching_columns;
  coder::array<double, 1U> reachable_from_node;
  coder::array<int, 1U> r1;
  coder::array<unsigned short, 2U> E;
  coder::array<unsigned short, 2U> b_E;
  coder::array<signed char, 2U> aMatrix;
  coder::array<signed char, 2U> qMatrix;
  coder::array<boolean_T, 2U> x;
  coder::array<boolean_T, 1U> r;
  struct_T pConflictStruct[20];
  double vTarget_data[40];
  double a_data[20];
  double pDis_data[20];
  double v_data[20];
  double x_data[20];
  double aMax;
  double aMin;
  double lk;
  double pDis0;
  double vMax;
  double vMin;
  int iidx_data[20];
  int iidx_size[2];
  int v_size[2];
  int x_size[2];
  int b_i;
  int b_loop_ub;
  int ex;
  int ex_tmp_tmp;
  int j;
  int k;
  int kVector_idx_1;
  int loop_ub;
  int partialTrueCount;
  int rank_size_idx_1;
  int trueCount;
  signed char rank_data[20];
  boolean_T exitg1;
  boolean_T tf;
  for (int i{0}; i < 20; i++) {
    for (b_i = 0; b_i < 20; b_i++) {
      pConflictStruct[i].values[b_i] = pConflictStructInt[i].values[b_i];
    }
  }
  //  检查 dis2center, velocity, accel 的长度
  //  计算最小长度
  ex_tmp_tmp = numOfVehsInt;
  ex = numOfVehsInt;
  if (numOfVehsInt > 20) {
    ex = 20;
  }
  //  截取或填充为最小长度
  if (ex < 1) {
    loop_ub = 0;
  } else {
    loop_ub = ex;
  }
  //  for i = 1:numOfVehs
  //      pConflict{i} = pConflictStruct(i).values;
  //  end
  pConflict.set_size(static_cast<int>(numOfVehsInt));
  for (int i{0}; i < ex_tmp_tmp; i++) {
    //  提取 pConflictStruct 中不是 -99 的元素
    //  如果有非 -99 的元素，则放入 pConflict
    trueCount = 0;
    for (kVector_idx_1 = 0; kVector_idx_1 < 20; kVector_idx_1++) {
      if (pConflictStruct[i].values[kVector_idx_1] != -99.0) {
        trueCount++;
      }
    }
    if (trueCount != 0) {
      trueCount = 0;
      partialTrueCount = 0;
      for (kVector_idx_1 = 0; kVector_idx_1 < 20; kVector_idx_1++) {
        tf = (pConflictStruct[i].values[kVector_idx_1] != -99.0);
        if (tf) {
          trueCount++;
          rank_data[partialTrueCount] =
              static_cast<signed char>(kVector_idx_1 + 1);
          partialTrueCount++;
        }
      }
      pConflict[i].f1.size[0] = 1;
      pConflict[i].f1.size[1] = trueCount;
      for (b_i = 0; b_i < trueCount; b_i++) {
        pConflict[i].f1.data[b_i] =
            pConflictStruct[i].values[rank_data[b_i] - 1];
      }
    } else {
      //  如果所有元素都是 -99，则留空
      pConflict[i].f1.size[0] = 0;
      pConflict[i].f1.size[1] = 0;
    }
  }
  //  生成调用示例的时候，附上一张图片
  //  dis2center=[11,111,1111,4,52];
  vMin = calibrationVars->vMin;
  //  0;
  vMax = calibrationVars->vMax;
  // 20;
  aMin = calibrationVars->aMin;
  // -3;
  aMax = calibrationVars->aMax;
  // 1.5;
  // 0.2;
  // 2; % 设定的阈值
  // 0.15;
  // 0.7;
  // 25;
  //  根据 dis2center 的大小对车辆进行排序
  x_size[0] = 1;
  x_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    std::copy(&dis2center[0], &dis2center[loop_ub], &x_data[0]);
  }
  coder::internal::sort(x_data, x_size, iidx_data, iidx_size);
  trueCount = iidx_size[1];
  for (b_i = 0; b_i < trueCount; b_i++) {
    x_data[b_i] = iidx_data[b_i];
  }
  //  根据排序结果重新排列位移、速度和加速度数组
  trueCount = iidx_size[1];
  for (b_i = 0; b_i < trueCount; b_i++) {
    pDis_data[b_i] = dis2center[static_cast<int>(x_data[b_i]) - 1];
  }
  v_size[0] = 1;
  v_size[1] = iidx_size[1];
  trueCount = iidx_size[1];
  for (b_i = 0; b_i < trueCount; b_i++) {
    v_data[b_i] = velocity[static_cast<int>(x_data[b_i]) - 1];
  }
  trueCount = iidx_size[1];
  for (b_i = 0; b_i < trueCount; b_i++) {
    a_data[b_i] = accel[static_cast<int>(x_data[b_i]) - 1];
  }
  pDis0 = dis2center[static_cast<int>(x_data[0]) - 1] - calibrationVars->D;
  //  for i=1:1:numOfVehs
  //      % p{i}=pConflict{sortIndex(i)};
  //      for j=pConflict{sortIndex(i)}
  //          p{i}=[p{i},sortIndex(j)];
  //      end
  //      if isempty(p{i})
  //          p{i}=0;
  //      end
  //  end
  //  获取每个元素在排序后的位置
  rank_size_idx_1 = static_cast<signed char>(loop_ub);
  trueCount = static_cast<signed char>(loop_ub);
  if (trueCount - 1 >= 0) {
    std::memset(&rank_data[0], 0,
                static_cast<unsigned int>(trueCount) * sizeof(signed char));
  }
  b_i = iidx_size[1];
  for (int i{0}; i < b_i; i++) {
    rank_data[static_cast<signed char>(x_data[i]) - 1] =
        static_cast<signed char>(i + 1);
  }
  p.set_size(1, static_cast<int>(numOfVehsInt));
  for (int i{0}; i < ex_tmp_tmp; i++) {
    p4coder.set_size(1, 0);
    //  []; % 初始化为空数组
    //  p{i}=pConflict{sortIndex(i)};
    for (j = 0; j < ex_tmp_tmp; j++) {
      b_i = static_cast<int>(x_data[i]);
      b_i = pConflict[static_cast<signed char>(b_i) - 1].f1.size[0] *
            pConflict[static_cast<signed char>(b_i) - 1].f1.size[1];
      tf = false;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= b_i - 1)) {
        if (j + 1 == static_cast<short>(
                         pConflict[static_cast<signed char>(x_data[i]) - 1]
                             .f1.data[k])) {
          tf = true;
          exitg1 = true;
        } else {
          k++;
        }
      }
      if (tf) {
        // sortIndex(i)：第i近的车的原本序号
        b_i = p4coder.size(1);
        p4coder.set_size(p4coder.size(0), p4coder.size(1) + 1);
        p4coder[b_i] = rank_data[j];
        // rank(j)：原本序号为j的车是第几近的
      }
    }
    if (p4coder.size(1) == 0) {
      p4coder.set_size(1, 1);
      p4coder[0] = 0.0;
    }
    p[p.size(0) * i].f1.set_size(1, p4coder.size(1));
    trueCount = p4coder.size(1);
    for (b_i = 0; b_i < trueCount; b_i++) {
      p[i].f1[b_i] = p4coder[b_i];
    }
  }
  E.set_size(0, 2);
  //  [];
  for (int i{0}; i < ex_tmp_tmp; i++) {
    b_i = i + 1;
    for (j = 0; j <= b_i; j++) {
      tf = false;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= p[i].f1.size(1) - 1)) {
        if (j == static_cast<signed char>(p[i].f1[k])) {
          tf = true;
          exitg1 = true;
        } else {
          k++;
        }
      }
      if (tf) {
        trueCount = E.size(0);
        b_E.set_size(E.size(0) + 1, 2);
        for (partialTrueCount = 0; partialTrueCount < 2; partialTrueCount++) {
          for (kVector_idx_1 = 0; kVector_idx_1 < trueCount; kVector_idx_1++) {
            b_E[kVector_idx_1 + b_E.size(0) * partialTrueCount] =
                E[kVector_idx_1 + E.size(0) * partialTrueCount];
          }
        }
        b_E[E.size(0)] = static_cast<unsigned short>(j);
        b_E[E.size(0) + b_E.size(0)] = static_cast<unsigned short>(i + 1);
        E.set_size(b_E.size(0), 2);
        trueCount = b_E.size(0) * 2;
        for (partialTrueCount = 0; partialTrueCount < trueCount;
             partialTrueCount++) {
          E[partialTrueCount] = b_E[partialTrueCount];
        }
      }
    }
  }
  // [];
  eSchlang.set_size(0, 2);
  // [];
  kVector_idx_1 = numOfVehsInt + 1;
  l.set_size(1, kVector_idx_1);
  for (b_i = 0; b_i < kVector_idx_1; b_i++) {
    l[b_i] = 0.0;
  }
  l[0] = 1.0;
  if (numOfVehsInt - 1 >= 0) {
    b_loop_ub = E.size(0);
  }
  for (int i{0}; i < ex_tmp_tmp; i++) {
    unsigned short k_data;
    //  找到有向图𝒢𝑁+1中节点i 的所有父节点j，即所有𝑗 ∈ {𝑗|(𝑗, 𝑖) ∈ ℰ𝑁+1}。
    r.set_size(E.size(0));
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      r[b_i] = (E[b_i + E.size(0)] == i + 1);
    }
    j = r.size(0) - 1;
    trueCount = 0;
    for (kVector_idx_1 = 0; kVector_idx_1 <= j; kVector_idx_1++) {
      if (r[kVector_idx_1]) {
        trueCount++;
      }
    }
    r1.set_size(trueCount);
    partialTrueCount = 0;
    for (kVector_idx_1 = 0; kVector_idx_1 <= j; kVector_idx_1++) {
      if (r[kVector_idx_1]) {
        r1[partialTrueCount] = kVector_idx_1 + 1;
        partialTrueCount++;
      }
    }
    trueCount = r1.size(0);
    matching_columns.set_size(r1.size(0));
    for (b_i = 0; b_i < trueCount; b_i++) {
      matching_columns[b_i] = E[r1[b_i] - 1];
    }
    //  E
    //  找到节点i 的所有父节点中层数最大的节点k，其层数为𝑙𝑘。
    p4coder.set_size(1, matching_columns.size(0));
    trueCount = matching_columns.size(0);
    for (b_i = 0; b_i < trueCount; b_i++) {
      p4coder[b_i] = l[static_cast<int>(matching_columns[b_i])];
    }
    coder::internal::maximum(p4coder, &lk, &kVector_idx_1);
    x.set_size(1, matching_columns.size(0));
    trueCount = matching_columns.size(0);
    for (b_i = 0; b_i < trueCount; b_i++) {
      x[b_i] = (l[static_cast<int>(matching_columns[b_i])] == lk);
    }
    k = (x.size(1) >= 1);
    partialTrueCount = x.size(1);
    kVector_idx_1 = 0;
    exitg1 = false;
    while ((!exitg1) && (partialTrueCount > 0)) {
      if (x[partialTrueCount - 1]) {
        kVector_idx_1 = 1;
        j = partialTrueCount;
        exitg1 = true;
      } else {
        partialTrueCount--;
      }
    }
    if (k == 1) {
      if (kVector_idx_1 == 0) {
        k = 0;
      }
    } else {
      k = (kVector_idx_1 >= 1);
    }
    for (b_i = 0; b_i < k; b_i++) {
      k_data = static_cast<unsigned short>(matching_columns[j - 1]);
    }
    //      if i==2
    //          matching_columns
    //          l
    //          lk
    //      end
    //  numOfVehs,dis2center,velocity,accel,pConflict,calibrationVars
    l[i + 1] = lk + 1.0;
    trueCount = eSchlang.size(0);
    b_eSchlang.set_size(eSchlang.size(0) + k, 2);
    for (b_i = 0; b_i < 2; b_i++) {
      for (partialTrueCount = 0; partialTrueCount < trueCount;
           partialTrueCount++) {
        b_eSchlang[partialTrueCount + b_eSchlang.size(0) * b_i] =
            eSchlang[partialTrueCount + eSchlang.size(0) * b_i];
      }
    }
    for (b_i = 0; b_i < k; b_i++) {
      b_eSchlang[eSchlang.size(0)] = k_data;
    }
    b_eSchlang[eSchlang.size(0) + b_eSchlang.size(0)] =
        static_cast<double>(i) + 1.0;
    eSchlang.set_size(b_eSchlang.size(0), 2);
    trueCount = b_eSchlang.size(0) * 2;
    for (b_i = 0; b_i < trueCount; b_i++) {
      eSchlang[b_i] = b_eSchlang[b_i];
    }
  }
  //  lStrich=l(2:end)
  //  lStrich(rank)
  //  创建一个空的cell数组
  A.set_size(1, static_cast<int>(numOfVehsInt));
  p.set_size(1, static_cast<int>(numOfVehsInt));
  for (kVector_idx_1 = 0; kVector_idx_1 < ex_tmp_tmp; kVector_idx_1++) {
    p4coder.set_size(1, 0);
    // []; % 初始化为空数组
    findNodeConnections(eSchlang, static_cast<double>(kVector_idx_1) + 1.0,
                        calibrationVars->kGen, l, matching_columns,
                        reachable_from_node);
    trueCount = matching_columns.size(0);
    A[A.size(0) * kVector_idx_1].f1.set_size(matching_columns.size(0) +
                                             reachable_from_node.size(0));
    for (b_i = 0; b_i < trueCount; b_i++) {
      A[kVector_idx_1].f1[b_i] = matching_columns[b_i];
    }
    trueCount = reachable_from_node.size(0);
    for (b_i = 0; b_i < trueCount; b_i++) {
      A[kVector_idx_1].f1[b_i + matching_columns.size(0)] =
          reachable_from_node[b_i];
    }
    for (j = 0; j < ex_tmp_tmp; j++) {
      if ((l[kVector_idx_1 + 1] == l[j + 1]) && (kVector_idx_1 != j)) {
        b_i = p4coder.size(1);
        p4coder.set_size(p4coder.size(0), p4coder.size(1) + 1);
        p4coder[b_i] = static_cast<double>(j) + 1.0;
      }
    }
    p[p.size(0) * kVector_idx_1].f1.set_size(1, p4coder.size(1));
    trueCount = p4coder.size(1);
    for (b_i = 0; b_i < trueCount; b_i++) {
      p[kVector_idx_1].f1[b_i] = p4coder[b_i];
    }
  }
  aMatrix.set_size(static_cast<int>(numOfVehsInt),
                   static_cast<int>(numOfVehsInt));
  kVector_idx_1 = numOfVehsInt * numOfVehsInt;
  lMatrix.set_size(static_cast<int>(numOfVehsInt),
                   static_cast<int>(numOfVehsInt));
  qMatrix.set_size(static_cast<int>(numOfVehsInt),
                   static_cast<int>(numOfVehsInt));
  for (b_i = 0; b_i < kVector_idx_1; b_i++) {
    aMatrix[b_i] = 0;
    qMatrix[b_i] = 0;
  }
  for (int i{0}; i < ex_tmp_tmp; i++) {
    trueCount = A[i].f1.size(0);
    p4coder.set_size(1,
                     A[A.size(0) * i].f1.size(0) + p[p.size(0) * i].f1.size(1));
    for (b_i = 0; b_i < trueCount; b_i++) {
      p4coder[b_i] = A[i].f1[b_i];
    }
    trueCount = p[i].f1.size(1);
    for (b_i = 0; b_i < trueCount; b_i++) {
      p4coder[b_i + A[i].f1.size(0)] = p[i].f1[b_i];
    }
    b_i = p4coder.size(1);
    for (kVector_idx_1 = 0; kVector_idx_1 < b_i; kVector_idx_1++) {
      lk = p4coder[kVector_idx_1];
      if (lk != 0.0) {
        aMatrix[i + aMatrix.size(0) * (static_cast<int>(lk) - 1)] = 1;
        aMatrix[(static_cast<int>(lk) + aMatrix.size(0) * i) - 1] = 1;
      }
    }
    //      for j = [(A{i})',B{i}]
    //          if j~=0
    //              aMatrix(i, j) = 1;
    //              aMatrix(j, i) = 1;
    //          end
    //      end
  }
  //  对于每一个元素 i 和 j，根据给定的条件进行操作
  for (int i{0}; i < ex_tmp_tmp; i++) {
    for (j = 0; j < ex_tmp_tmp; j++) {
      if (i == j) {
        u.set_size(1, aMatrix.size(1));
        trueCount = aMatrix.size(1);
        for (b_i = 0; b_i < trueCount; b_i++) {
          u[b_i] = aMatrix[i + aMatrix.size(0) * b_i];
        }
        lMatrix[i + lMatrix.size(0) * j] = coder::sum(u);
      } else {
        lMatrix[i + lMatrix.size(0) * j] =
            -static_cast<double>(aMatrix[i + aMatrix.size(0) * j]);
      }
    }
  }
  findNodeConnections(eSchlang, l, matching_columns, reachable_from_node);
  //  i4coder=[];
  if (matching_columns.size(0) == 0) {
    i4coder.set_size(1, reachable_from_node.size(0));
    trueCount = reachable_from_node.size(0);
    for (b_i = 0; b_i < trueCount; b_i++) {
      i4coder[i4coder.size(0) * b_i] = reachable_from_node[b_i];
    }
  } else if (reachable_from_node.size(0) == 0) {
    i4coder.set_size(1, matching_columns.size(0));
    trueCount = matching_columns.size(0);
    for (b_i = 0; b_i < trueCount; b_i++) {
      i4coder[i4coder.size(0) * b_i] = matching_columns[b_i];
    }
  } else {
    i4coder.set_size(2, matching_columns.size(0));
    trueCount = matching_columns.size(0);
    for (b_i = 0; b_i < trueCount; b_i++) {
      i4coder[i4coder.size(0) * b_i] = matching_columns[b_i];
    }
    trueCount = reachable_from_node.size(0);
    for (b_i = 0; b_i < trueCount; b_i++) {
      i4coder[i4coder.size(0) * b_i + 1] = reachable_from_node[b_i];
    }
  }
  if (i4coder.size(1) == 0) {
    kVector_idx_1 = 0;
  } else if (i4coder.size(0) > i4coder.size(1)) {
    kVector_idx_1 = 2;
  } else {
    kVector_idx_1 = i4coder.size(1);
  }
  for (partialTrueCount = 0; partialTrueCount < kVector_idx_1;
       partialTrueCount++) {
    qMatrix[(static_cast<int>(i4coder[partialTrueCount]) +
             qMatrix.size(0) *
                 (static_cast<int>(i4coder[partialTrueCount]) - 1)) -
            1] = 1;
  }
  //  for i = [reachable_to_node0, reachable_from_node0]'
  //      qMatrix(i, i) = 1;
  //  end
  u.set_size(1, static_cast<int>(numOfVehsInt));
  b_x.set_size(1, static_cast<int>(numOfVehsInt));
  for (int i{0}; i < ex_tmp_tmp; i++) {
    u[i] = 0.0;
    b_x[i].f1[0] =
        (pDis0 - pDis_data[i]) - calibrationVars->D * (l[0] - l[i + 1]);
    b_x[i].f1[1] = v_data[i] - vMax;
    b_x[i].f1[2] = a_data[i];
  }
  for (int i{0}; i < ex_tmp_tmp; i++) {
    for (j = 0; j < ex_tmp_tmp; j++) {
      lk = lMatrix[i + lMatrix.size(0) * j] +
           static_cast<double>(qMatrix[i + qMatrix.size(0) * j]);
      u[i] = u[i] - ((lk * calibrationVars->kp * b_x[j].f1[0] +
                      lk * calibrationVars->kv * b_x[j].f1[1]) +
                     lk * 0.0 * b_x[j].f1[2]);
    }
  }
  //  将数组 u 中的所有元素限制在 [aMin, aMax] 范围内
  j = u.size(1);
  for (int i{0}; i < j; i++) {
    if (u[i] < aMin) {
      u[i] = aMin;
    }
  }
  j = u.size(1);
  for (int i{0}; i < j; i++) {
    if (u[i] > aMax) {
      u[i] = aMax;
    }
  }
  if (iidx_size[1] == u.size(1)) {
    trueCount = iidx_size[1] - 1;
    u.set_size(1, iidx_size[1]);
    for (b_i = 0; b_i <= trueCount; b_i++) {
      u[b_i] = v_data[b_i] + u[b_i] * calibrationVars->dt;
    }
  } else {
    binary_expand_op(u, v_data, v_size, calibrationVars);
  }
  j = u.size(1);
  for (int i{0}; i < j; i++) {
    if (u[i] < vMin) {
      u[i] = vMin;
    }
  }
  j = u.size(1);
  for (int i{0}; i < j; i++) {
    if (u[i] > vMax) {
      u[i] = vMax;
    }
  }
  // rank(j)：原本序号为j的车是第几近的
  //  u*dt
  //  设置填充值为-90
  //  填充 dis2center, velocity, accel 至长度为 20
  if (ex < 1) {
    kVector_idx_1 = 0;
  } else {
    kVector_idx_1 = static_cast<signed char>(ex);
  }
  partialTrueCount = static_cast<signed char>(loop_ub);
  if (static_cast<signed char>(loop_ub) > kVector_idx_1) {
    partialTrueCount = kVector_idx_1;
  }
  if (ex < 1) {
    b_i = 0;
  } else {
    b_i = static_cast<signed char>(ex);
  }
  if (partialTrueCount > b_i) {
    partialTrueCount = b_i;
  }
  for (b_i = 0; b_i < rank_size_idx_1; b_i++) {
    vTarget_data[b_i] = u[rank_data[b_i] - 1];
  }
  trueCount = static_cast<signed char>(20 - partialTrueCount);
  for (b_i = 0; b_i < trueCount; b_i++) {
    vTarget_data[b_i + static_cast<signed char>(loop_ub)] = -99.0;
  }
  //  确保数组长度正好为 20，如果原本就超过 20，则截取前 20 个元素
  std::copy(&vTarget_data[0], &vTarget_data[20], &vTarget[0]);
}

//
// Arguments    : void
// Return Type  : void
//
void UncontrolInterCollab4so_initialize()
{
}

//
// Arguments    : void
// Return Type  : void
//
void UncontrolInterCollab4so_terminate()
{
}

//
// File trailer for UncontrolInterCollab4so.cpp
//
// [EOF]
//
