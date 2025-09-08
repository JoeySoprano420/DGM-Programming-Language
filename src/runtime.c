#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// === Safe Arithmetic ===
int dgm_safe_add(int a, int b) {
    long long res = (long long)a + (long long)b;
    if (res > 2147483647) return 2147483647; // clamp
    if (res < -2147483648) return -2147483648;
    return (int)res;
}

int dgm_safe_sub(int a, int b) {
    long long res = (long long)a - (long long)b;
    if (res > 2147483647) return 2147483647;
    if (res < -2147483648) return -2147483648;
    return (int)res;
}

int dgm_safe_mul(int a, int b) {
    long long res = (long long)a * (long long)b;
    if (res > 2147483647) return 2147483647;
    if (res < -2147483648) return -2147483648;
    return (int)res;
}

int dgm_safe_div(int a, int b) {
    if (b == 0) return 0; // heal divide by zero
    return a / b;
}

// === Tuples ===
dgm_tuple2 dgm_tuple_pack(int a, int b) {
    dgm_tuple2 t = {a, b};
    return t;
}

void dgm_tuple_unpack(dgm_tuple2 t, int *x, int *y) {
    if (x) *x = t.a;
    if (y) *y = t.b;
}

// === Lists ===
void dgm_list_init(dgm_list *lst) {
    lst->size = 0;
}

void dgm_list_append(dgm_list *lst, int val) {
    if (lst->size < DGM_LIST_MAX) {
        lst->data[lst->size++] = val;
    }
}

int dgm_list_remove(dgm_list *lst, int idx) {
    if (idx < 0 || idx >= lst->size) return 0;
    int val = lst->data[idx];
    for (int i = idx; i < lst->size - 1; i++) {
        lst->data[i] = lst->data[i + 1];
    }
    lst->size--;
    return val;
}

// === Parallel & Sync (mock impl) ===
static pthread_mutex_t dgm_lock = PTHREAD_MUTEX_INITIALIZER;

void dgm_parallel_begin() {
    // in real version, fork threads
    printf("[DGM] parallel begin\n");
}

void dgm_parallel_end() {
    printf("[DGM] parallel end\n");
}

void dgm_sync() {
    pthread_mutex_lock(&dgm_lock);
    pthread_mutex_unlock(&dgm_lock);
    printf("[DGM] sync\n");
}
