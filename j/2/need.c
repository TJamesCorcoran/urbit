/* j/2/need.c
**
** This file is in the public domain.
*/
#include "all.h"


/* functions
*/
  u3_noun
  u3_cqb_need(
                    u3_noun a)
  {
    if ( 0 == a ) {
      return u3m_bail(c3__exit);
    }
    else {
      return u3k(u3t(a));
    }
  }
  u3_noun
  u3_cwb_need(
                   u3_noun cor)
  {
    u3_noun a;

    if ( u3_none == (a = u3r_at(u3v_sam, cor)) ) {
      return u3m_bail(c3__exit);
    } else {
      return u3_cqb_need(a);
    }
  }
