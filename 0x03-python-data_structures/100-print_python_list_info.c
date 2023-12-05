#include <Python.h>

void print_python_list_info(PyObject *p) {
    Py_ssize_t size, i;
    PyListObject *list;

    printf("[*] Size of the Python List = %zd\n", PyList_Size(p));

    list = (PyListObject *)p;
    size = list->allocated;

    printf("[*] Allocated = %zd\n", size);

    for (i = 0; i < size; ++i) {
        if (i < PyList_Size(p)) {
            printf("Element %zd: %s\n", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
        }
    }
}
