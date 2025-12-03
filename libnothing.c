#define LIBNOTHING_BUILD
#include "libnothing.h"

void nothing_init(nothing_context* ctx) {
    if (ctx) {
        ctx->internal_state = 0; /* signifies nothing */
    }
    /* intentionally does nothing else */
}

void nothing_do(const nothing_context* ctx) {
    (void)ctx; /* ignore everything */
    /* perform no operation */
}

int nothing_status(void) {
    return 0; /* everything is fine because nothing happened */
}

void nothing_shutdown(nothing_context* ctx) {
    if (ctx) {
        ctx->internal_state = 0; /* reset to nothing */
    }
    /* do nothing further */
}
