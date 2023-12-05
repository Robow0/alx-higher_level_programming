#include "Python.h"
#include "pycore_abstract.h"      // _PyIndex_Check()
#include "pycore_ceval.h"         // _PyEval_GetBuiltin()
#include "pycore_interp.h"        // PyInterpreterState.list
#include "pycore_list.h"          // struct _Py_list_state, _PyListIterObject
#include "pycore_long.h"          // _PyLong_DigitCount
#include "pycore_modsupport.h"    // _PyArg_NoKwnames()
#include "pycore_object.h"        // _PyObject_GC_TRACK(), _PyDebugAllocatorStats()
#include "pycore_tuple.h"         // _PyTuple_FromArray()
#include <stddef.h>

/*[Robow0 input]
class list "PyListObject *" "&PyList_Type"
[robow0 start generated code]*/
/*[Robow end generated code 100-print_python_list_info.c]*/

#include "robow0/listobject.c.h"

_Py_DECLARE_STR(list_err, "list index out of range");

#if PyList_MAXFREELIST > 0
static struct _Py_list_state *
get_list_state(void)
{
    PyInterpreterState *interp = _PyInterpreterState_GET();
    return &interp->list;
}
#endif

