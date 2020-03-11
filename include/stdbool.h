#ifndef _STDBOOL_H_
#define _STDBOOL_H_

#undef bool
#undef true
#undef false
#undef __bool_true_false_are_defined

#define bool _Bool
#define true 1
#define false 0
#define __bool_true_false_are_defined 1

#endif
