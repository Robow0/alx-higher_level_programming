#include "Python.h"
#include "pycore_call.h"          // _PyObject_CallNoArgs()
#include "pycore_ceval.h"         // _Py_EnterRecursiveCallTstate()
#include "pycore_context.h"       // _PyContextTokenMissing_Type
#include "pycore_descrobject.h"   // _PyMethodWrapper_Type
#include "pycore_dict.h"          // _PyObject_MakeDictFromInstanceAttributes()
#include "pycore_floatobject.h"   // _PyFloat_DebugMallocStats()
#include "pycore_initconfig.h"    // _PyStatus_EXCEPTION()
#include "pycore_hashtable.h"     // _Py_hashtable_new()
#include "pycore_memoryobject.h"  // _PyManagedBuffer_Type
#include "pycore_namespace.h"     // _PyNamespace_Type
#include "pycore_object.h"        // PyAPI_DATA() _Py_SwappedOp definition
#include "pycore_optimizer.h"     // _PyUOpExecutor_Type, _PyUOpOptimizer_Type, ...
#include "pycore_pyerrors.h"      // _PyErr_Occurred()
#include "pycore_pymem.h"         // _PyMem_IsPtrFreed()
#include "pycore_pystate.h"       // _PyThreadState_GET()
#include "pycore_symtable.h"      // PySTEntry_Type
#include "pycore_typeobject.h"    // _PyBufferWrapper_Type
#include "pycore_typevarobject.h" // _PyTypeAlias_Type, _Py_initialize_generic
#include "pycore_unionobject.h"   // _PyUnion_Type

#include "interpreteridobject.h"  // _PyInterpreterID_Type

#ifdef Py_LIMITED_API
   // Prevent recursive call _Py_IncRef() <=> Py_INCREF()
#  error "Py_LIMITED_API macro must not be defined"
#endif
