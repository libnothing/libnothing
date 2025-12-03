#ifndef LIBNOTHING_H
#define LIBNOTHING_H

#ifdef __cplusplus
extern "C" {
#endif

/* Cross-platform visibility */
#if defined(_WIN32) || defined(_WIN64)
  #ifdef LIBNOTHING_BUILD
    #define LIBNOTHING_API __declspec(dllexport)
  #else
    #define LIBNOTHING_API __declspec(dllimport)
  #endif
#else
  #define LIBNOTHING_API __attribute__((visibility("default")))
#endif

/* A symbolic handle for absolutely nothing */
typedef struct {
    int internal_state; /* meaningless */
} nothing_context;

/* Initializes the nothing runtime */
LIBNOTHING_API void nothing_init(nothing_context* ctx);

/* Performs an abstract non-action */
LIBNOTHING_API void nothing_do(const nothing_context* ctx);

/* Returns a zero-status, because nothing ever fails */
LIBNOTHING_API int nothing_status(void);

/* Shuts down the nothing environment */
LIBNOTHING_API void nothing_shutdown(nothing_context* ctx);

#ifdef __cplusplus
}
#endif

#endif /* LIBNOTHING_H */
