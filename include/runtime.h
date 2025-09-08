#ifndef DGM_RUNTIME_H
#define DGM_RUNTIME_H

#ifdef __cplusplus
extern "C" {
#endif

// Safe arithmetic
int dgm_safe_add(int a, int b);
int dgm_safe_sub(int a, int b);
int dgm_safe_mul(int a, int b);
int dgm_safe_div(int a, int b);

// Tuples
typedef struct {
    int a;
    int b;
} dgm_tuple2;

dgm_tuple2 dgm_tuple_pack(int a, int b);
void dgm_tuple_unpack(dgm_tuple2 t, int *x, int *y);

// Lists (simple fixed-capacity list)
#define DGM_LIST_MAX 1024
typedef struct {
    int data[DGM_LIST_MAX];
    int size;
} dgm_list;

void dgm_list_init(dgm_list *lst);
void dgm_list_append(dgm_list *lst, int val);
int dgm_list_remove(dgm_list *lst, int idx);

// Parallel & sync (mock)
void dgm_parallel_begin();
void dgm_parallel_end();
void dgm_sync();

#ifdef __cplusplus
}
#endif

#endif
