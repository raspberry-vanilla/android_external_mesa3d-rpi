/* Copyright (C) 2020 Google, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#include "v3dv_tracepoints.h"


#define __NEEDS_TRACE_PRIV
#include "util/u_debug.h"
#include "util/perf/u_trace_priv.h"


/*
 * begin_job_cl
 */
  
#define __print_begin_job_cl NULL
  
#define __print_json_begin_job_cl NULL
#define __print_fuzzy_hash_args_begin_job_cl NULL

#define __fuzzy_hash_begin_job_cl NULL
#define __fuzzy_equals_begin_job_cl NULL
#define __print_fuzzy_hash_args_begin_job_cl NULL
static const struct u_tracepoint __tp_begin_job_cl = {
    "begin_job_cl",
    ALIGN_POT(0, 8),   /* keep size 64b aligned */
    0
    ,
    0,
    0,
    u_tracepoint_type_marker,
    __print_begin_job_cl,
    __print_json_begin_job_cl,
    __fuzzy_hash_begin_job_cl,
    __fuzzy_equals_begin_job_cl,
    __print_fuzzy_hash_args_begin_job_cl,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_begin_job_cl,
#endif
};
void __trace_begin_job_cl(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
) {
   struct trace_begin_job_cl entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_begin_job_cl *__entry =
      queueing ?
      (struct trace_begin_job_cl *)u_trace_appendv(ut, cs, &__tp_begin_job_cl,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
}

/*
 * end_job_cl
 */
  
static void __print_end_job_cl(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_cl *__entry =
      (const struct trace_end_job_cl *)arg;
   fprintf(out, ""
      "id=%u"
         ", "
      "serialize=0x%x"
         ", "
      "draw_count=%u"
         ", "
      "cache_flush=%u"
   ,__entry->id
   ,__entry->serialize
   ,__entry->draw_count
   ,__entry->cache_flush
   );
}

  
static void __print_json_end_job_cl(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_cl *__entry =
      (const struct trace_end_job_cl *)arg;
   fprintf(out, ""
      "\"id\": \"%u\""
         ", "
      "\"serialize\": \"0x%x\""
         ", "
      "\"draw_count\": \"%u\""
         ", "
      "\"cache_flush\": \"%u\""
   ,__entry->id
   ,__entry->serialize
   ,__entry->draw_count
   ,__entry->cache_flush
   );
}

#define __print_fuzzy_hash_args_end_job_cl NULL

static uint32_t __fuzzy_hash_end_job_cl(const void *_event) {
   uint32_t hash = 1;
   const struct trace_end_job_cl *__entry =
      (const struct trace_end_job_cl *)_event;
   (void)__entry;
   return hash;
}

static bool __fuzzy_equals_end_job_cl(const void *_a, const void *_b) {
   const struct trace_end_job_cl *__entry_a =
      (const struct trace_end_job_cl *)_a;
   (void)__entry_a;
   const struct trace_end_job_cl *__entry_b =
      (const struct trace_end_job_cl *)_b;
   (void)__entry_b;
   return true;
}

static const struct u_tracepoint __tp_end_job_cl = {
    "end_job_cl",
    ALIGN_POT(sizeof(struct trace_end_job_cl), 8),   /* keep size 64b aligned */
    0
    ,
    0,
    1,
    u_tracepoint_type_marker,
    __print_end_job_cl,
    __print_json_end_job_cl,
    __fuzzy_hash_end_job_cl,
    __fuzzy_equals_end_job_cl,
    __print_fuzzy_hash_args_end_job_cl,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_end_job_cl,
#endif
};
void __trace_end_job_cl(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
   , uint32_t draw_count
   , bool cache_flush
) {
   struct trace_end_job_cl entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_end_job_cl *__entry =
      queueing ?
      (struct trace_end_job_cl *)u_trace_appendv(ut, cs, &__tp_end_job_cl,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
   __entry->id = id;
   __entry->serialize = serialize;
   __entry->draw_count = draw_count;
   __entry->cache_flush = cache_flush;
}

/*
 * begin_job_csd
 */
  
#define __print_begin_job_csd NULL
  
#define __print_json_begin_job_csd NULL
#define __print_fuzzy_hash_args_begin_job_csd NULL

#define __fuzzy_hash_begin_job_csd NULL
#define __fuzzy_equals_begin_job_csd NULL
#define __print_fuzzy_hash_args_begin_job_csd NULL
static const struct u_tracepoint __tp_begin_job_csd = {
    "begin_job_csd",
    ALIGN_POT(0, 8),   /* keep size 64b aligned */
    0
    ,
    0,
    2,
    u_tracepoint_type_marker,
    __print_begin_job_csd,
    __print_json_begin_job_csd,
    __fuzzy_hash_begin_job_csd,
    __fuzzy_equals_begin_job_csd,
    __print_fuzzy_hash_args_begin_job_csd,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_begin_job_csd,
#endif
};
void __trace_begin_job_csd(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
) {
   struct trace_begin_job_csd entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_begin_job_csd *__entry =
      queueing ?
      (struct trace_begin_job_csd *)u_trace_appendv(ut, cs, &__tp_begin_job_csd,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
}

/*
 * end_job_csd
 */
  
static void __print_end_job_csd(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_csd *__entry =
      (const struct trace_end_job_csd *)arg;
   fprintf(out, ""
      "id=%u"
         ", "
      "serialize=0x%x"
         ", "
      "wg_x=%u"
         ", "
      "wg_y=%u"
         ", "
      "wg_z=%u"
   ,__entry->id
   ,__entry->serialize
   ,__entry->wg_x
   ,__entry->wg_y
   ,__entry->wg_z
   );
}

  
static void __print_json_end_job_csd(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_csd *__entry =
      (const struct trace_end_job_csd *)arg;
   fprintf(out, ""
      "\"id\": \"%u\""
         ", "
      "\"serialize\": \"0x%x\""
         ", "
      "\"wg_x\": \"%u\""
         ", "
      "\"wg_y\": \"%u\""
         ", "
      "\"wg_z\": \"%u\""
   ,__entry->id
   ,__entry->serialize
   ,__entry->wg_x
   ,__entry->wg_y
   ,__entry->wg_z
   );
}

#define __print_fuzzy_hash_args_end_job_csd NULL

static uint32_t __fuzzy_hash_end_job_csd(const void *_event) {
   uint32_t hash = 1;
   const struct trace_end_job_csd *__entry =
      (const struct trace_end_job_csd *)_event;
   (void)__entry;
   return hash;
}

static bool __fuzzy_equals_end_job_csd(const void *_a, const void *_b) {
   const struct trace_end_job_csd *__entry_a =
      (const struct trace_end_job_csd *)_a;
   (void)__entry_a;
   const struct trace_end_job_csd *__entry_b =
      (const struct trace_end_job_csd *)_b;
   (void)__entry_b;
   return true;
}

static const struct u_tracepoint __tp_end_job_csd = {
    "end_job_csd",
    ALIGN_POT(sizeof(struct trace_end_job_csd), 8),   /* keep size 64b aligned */
    0
    ,
    0,
    3,
    u_tracepoint_type_marker,
    __print_end_job_csd,
    __print_json_end_job_csd,
    __fuzzy_hash_end_job_csd,
    __fuzzy_equals_end_job_csd,
    __print_fuzzy_hash_args_end_job_csd,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_end_job_csd,
#endif
};
void __trace_end_job_csd(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
   , uint32_t wg_x
   , uint32_t wg_y
   , uint32_t wg_z
) {
   struct trace_end_job_csd entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_end_job_csd *__entry =
      queueing ?
      (struct trace_end_job_csd *)u_trace_appendv(ut, cs, &__tp_end_job_csd,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
   __entry->id = id;
   __entry->serialize = serialize;
   __entry->wg_x = wg_x;
   __entry->wg_y = wg_y;
   __entry->wg_z = wg_z;
}

/*
 * begin_job_tfu
 */
  
#define __print_begin_job_tfu NULL
  
#define __print_json_begin_job_tfu NULL
#define __print_fuzzy_hash_args_begin_job_tfu NULL

#define __fuzzy_hash_begin_job_tfu NULL
#define __fuzzy_equals_begin_job_tfu NULL
#define __print_fuzzy_hash_args_begin_job_tfu NULL
static const struct u_tracepoint __tp_begin_job_tfu = {
    "begin_job_tfu",
    ALIGN_POT(0, 8),   /* keep size 64b aligned */
    0
    ,
    0,
    4,
    u_tracepoint_type_marker,
    __print_begin_job_tfu,
    __print_json_begin_job_tfu,
    __fuzzy_hash_begin_job_tfu,
    __fuzzy_equals_begin_job_tfu,
    __print_fuzzy_hash_args_begin_job_tfu,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_begin_job_tfu,
#endif
};
void __trace_begin_job_tfu(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
) {
   struct trace_begin_job_tfu entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_begin_job_tfu *__entry =
      queueing ?
      (struct trace_begin_job_tfu *)u_trace_appendv(ut, cs, &__tp_begin_job_tfu,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
}

/*
 * end_job_tfu
 */
  
static void __print_end_job_tfu(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_tfu *__entry =
      (const struct trace_end_job_tfu *)arg;
   fprintf(out, ""
      "id=%u"
         ", "
      "serialize=0x%x"
   ,__entry->id
   ,__entry->serialize
   );
}

  
static void __print_json_end_job_tfu(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_tfu *__entry =
      (const struct trace_end_job_tfu *)arg;
   fprintf(out, ""
      "\"id\": \"%u\""
         ", "
      "\"serialize\": \"0x%x\""
   ,__entry->id
   ,__entry->serialize
   );
}

#define __print_fuzzy_hash_args_end_job_tfu NULL

static uint32_t __fuzzy_hash_end_job_tfu(const void *_event) {
   uint32_t hash = 1;
   const struct trace_end_job_tfu *__entry =
      (const struct trace_end_job_tfu *)_event;
   (void)__entry;
   return hash;
}

static bool __fuzzy_equals_end_job_tfu(const void *_a, const void *_b) {
   const struct trace_end_job_tfu *__entry_a =
      (const struct trace_end_job_tfu *)_a;
   (void)__entry_a;
   const struct trace_end_job_tfu *__entry_b =
      (const struct trace_end_job_tfu *)_b;
   (void)__entry_b;
   return true;
}

static const struct u_tracepoint __tp_end_job_tfu = {
    "end_job_tfu",
    ALIGN_POT(sizeof(struct trace_end_job_tfu), 8),   /* keep size 64b aligned */
    0
    ,
    0,
    5,
    u_tracepoint_type_marker,
    __print_end_job_tfu,
    __print_json_end_job_tfu,
    __fuzzy_hash_end_job_tfu,
    __fuzzy_equals_end_job_tfu,
    __print_fuzzy_hash_args_end_job_tfu,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_end_job_tfu,
#endif
};
void __trace_end_job_tfu(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
) {
   struct trace_end_job_tfu entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_end_job_tfu *__entry =
      queueing ?
      (struct trace_end_job_tfu *)u_trace_appendv(ut, cs, &__tp_end_job_tfu,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
   __entry->id = id;
   __entry->serialize = serialize;
}

/*
 * begin_job_cpu_reset_queries
 */
  
#define __print_begin_job_cpu_reset_queries NULL
  
#define __print_json_begin_job_cpu_reset_queries NULL
#define __print_fuzzy_hash_args_begin_job_cpu_reset_queries NULL

#define __fuzzy_hash_begin_job_cpu_reset_queries NULL
#define __fuzzy_equals_begin_job_cpu_reset_queries NULL
#define __print_fuzzy_hash_args_begin_job_cpu_reset_queries NULL
static const struct u_tracepoint __tp_begin_job_cpu_reset_queries = {
    "begin_job_cpu_reset_queries",
    ALIGN_POT(0, 8),   /* keep size 64b aligned */
    0
    ,
    0,
    6,
    u_tracepoint_type_marker,
    __print_begin_job_cpu_reset_queries,
    __print_json_begin_job_cpu_reset_queries,
    __fuzzy_hash_begin_job_cpu_reset_queries,
    __fuzzy_equals_begin_job_cpu_reset_queries,
    __print_fuzzy_hash_args_begin_job_cpu_reset_queries,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_begin_job_cpu_reset_queries,
#endif
};
void __trace_begin_job_cpu_reset_queries(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
) {
   struct trace_begin_job_cpu_reset_queries entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_begin_job_cpu_reset_queries *__entry =
      queueing ?
      (struct trace_begin_job_cpu_reset_queries *)u_trace_appendv(ut, cs, &__tp_begin_job_cpu_reset_queries,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
}

/*
 * end_job_cpu_reset_queries
 */
  
static void __print_end_job_cpu_reset_queries(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_cpu_reset_queries *__entry =
      (const struct trace_end_job_cpu_reset_queries *)arg;
   fprintf(out, ""
      "id=%u"
         ", "
      "serialize=0x%x"
   ,__entry->id
   ,__entry->serialize
   );
}

  
static void __print_json_end_job_cpu_reset_queries(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_cpu_reset_queries *__entry =
      (const struct trace_end_job_cpu_reset_queries *)arg;
   fprintf(out, ""
      "\"id\": \"%u\""
         ", "
      "\"serialize\": \"0x%x\""
   ,__entry->id
   ,__entry->serialize
   );
}

#define __print_fuzzy_hash_args_end_job_cpu_reset_queries NULL

static uint32_t __fuzzy_hash_end_job_cpu_reset_queries(const void *_event) {
   uint32_t hash = 1;
   const struct trace_end_job_cpu_reset_queries *__entry =
      (const struct trace_end_job_cpu_reset_queries *)_event;
   (void)__entry;
   return hash;
}

static bool __fuzzy_equals_end_job_cpu_reset_queries(const void *_a, const void *_b) {
   const struct trace_end_job_cpu_reset_queries *__entry_a =
      (const struct trace_end_job_cpu_reset_queries *)_a;
   (void)__entry_a;
   const struct trace_end_job_cpu_reset_queries *__entry_b =
      (const struct trace_end_job_cpu_reset_queries *)_b;
   (void)__entry_b;
   return true;
}

static const struct u_tracepoint __tp_end_job_cpu_reset_queries = {
    "end_job_cpu_reset_queries",
    ALIGN_POT(sizeof(struct trace_end_job_cpu_reset_queries), 8),   /* keep size 64b aligned */
    0
    ,
    0,
    7,
    u_tracepoint_type_marker,
    __print_end_job_cpu_reset_queries,
    __print_json_end_job_cpu_reset_queries,
    __fuzzy_hash_end_job_cpu_reset_queries,
    __fuzzy_equals_end_job_cpu_reset_queries,
    __print_fuzzy_hash_args_end_job_cpu_reset_queries,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_end_job_cpu_reset_queries,
#endif
};
void __trace_end_job_cpu_reset_queries(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
) {
   struct trace_end_job_cpu_reset_queries entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_end_job_cpu_reset_queries *__entry =
      queueing ?
      (struct trace_end_job_cpu_reset_queries *)u_trace_appendv(ut, cs, &__tp_end_job_cpu_reset_queries,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
   __entry->id = id;
   __entry->serialize = serialize;
}

/*
 * begin_job_cpu_copy_query_results
 */
  
#define __print_begin_job_cpu_copy_query_results NULL
  
#define __print_json_begin_job_cpu_copy_query_results NULL
#define __print_fuzzy_hash_args_begin_job_cpu_copy_query_results NULL

#define __fuzzy_hash_begin_job_cpu_copy_query_results NULL
#define __fuzzy_equals_begin_job_cpu_copy_query_results NULL
#define __print_fuzzy_hash_args_begin_job_cpu_copy_query_results NULL
static const struct u_tracepoint __tp_begin_job_cpu_copy_query_results = {
    "begin_job_cpu_copy_query_results",
    ALIGN_POT(0, 8),   /* keep size 64b aligned */
    0
    ,
    0,
    8,
    u_tracepoint_type_marker,
    __print_begin_job_cpu_copy_query_results,
    __print_json_begin_job_cpu_copy_query_results,
    __fuzzy_hash_begin_job_cpu_copy_query_results,
    __fuzzy_equals_begin_job_cpu_copy_query_results,
    __print_fuzzy_hash_args_begin_job_cpu_copy_query_results,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_begin_job_cpu_copy_query_results,
#endif
};
void __trace_begin_job_cpu_copy_query_results(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
) {
   struct trace_begin_job_cpu_copy_query_results entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_begin_job_cpu_copy_query_results *__entry =
      queueing ?
      (struct trace_begin_job_cpu_copy_query_results *)u_trace_appendv(ut, cs, &__tp_begin_job_cpu_copy_query_results,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
}

/*
 * end_job_cpu_copy_query_results
 */
  
static void __print_end_job_cpu_copy_query_results(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_cpu_copy_query_results *__entry =
      (const struct trace_end_job_cpu_copy_query_results *)arg;
   fprintf(out, ""
      "id=%u"
         ", "
      "serialize=0x%x"
   ,__entry->id
   ,__entry->serialize
   );
}

  
static void __print_json_end_job_cpu_copy_query_results(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_cpu_copy_query_results *__entry =
      (const struct trace_end_job_cpu_copy_query_results *)arg;
   fprintf(out, ""
      "\"id\": \"%u\""
         ", "
      "\"serialize\": \"0x%x\""
   ,__entry->id
   ,__entry->serialize
   );
}

#define __print_fuzzy_hash_args_end_job_cpu_copy_query_results NULL

static uint32_t __fuzzy_hash_end_job_cpu_copy_query_results(const void *_event) {
   uint32_t hash = 1;
   const struct trace_end_job_cpu_copy_query_results *__entry =
      (const struct trace_end_job_cpu_copy_query_results *)_event;
   (void)__entry;
   return hash;
}

static bool __fuzzy_equals_end_job_cpu_copy_query_results(const void *_a, const void *_b) {
   const struct trace_end_job_cpu_copy_query_results *__entry_a =
      (const struct trace_end_job_cpu_copy_query_results *)_a;
   (void)__entry_a;
   const struct trace_end_job_cpu_copy_query_results *__entry_b =
      (const struct trace_end_job_cpu_copy_query_results *)_b;
   (void)__entry_b;
   return true;
}

static const struct u_tracepoint __tp_end_job_cpu_copy_query_results = {
    "end_job_cpu_copy_query_results",
    ALIGN_POT(sizeof(struct trace_end_job_cpu_copy_query_results), 8),   /* keep size 64b aligned */
    0
    ,
    0,
    9,
    u_tracepoint_type_marker,
    __print_end_job_cpu_copy_query_results,
    __print_json_end_job_cpu_copy_query_results,
    __fuzzy_hash_end_job_cpu_copy_query_results,
    __fuzzy_equals_end_job_cpu_copy_query_results,
    __print_fuzzy_hash_args_end_job_cpu_copy_query_results,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_end_job_cpu_copy_query_results,
#endif
};
void __trace_end_job_cpu_copy_query_results(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
) {
   struct trace_end_job_cpu_copy_query_results entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_end_job_cpu_copy_query_results *__entry =
      queueing ?
      (struct trace_end_job_cpu_copy_query_results *)u_trace_appendv(ut, cs, &__tp_end_job_cpu_copy_query_results,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
   __entry->id = id;
   __entry->serialize = serialize;
}

/*
 * begin_job_cpu_csd_indirect
 */
  
#define __print_begin_job_cpu_csd_indirect NULL
  
#define __print_json_begin_job_cpu_csd_indirect NULL
#define __print_fuzzy_hash_args_begin_job_cpu_csd_indirect NULL

#define __fuzzy_hash_begin_job_cpu_csd_indirect NULL
#define __fuzzy_equals_begin_job_cpu_csd_indirect NULL
#define __print_fuzzy_hash_args_begin_job_cpu_csd_indirect NULL
static const struct u_tracepoint __tp_begin_job_cpu_csd_indirect = {
    "begin_job_cpu_csd_indirect",
    ALIGN_POT(0, 8),   /* keep size 64b aligned */
    0
    ,
    0,
    10,
    u_tracepoint_type_marker,
    __print_begin_job_cpu_csd_indirect,
    __print_json_begin_job_cpu_csd_indirect,
    __fuzzy_hash_begin_job_cpu_csd_indirect,
    __fuzzy_equals_begin_job_cpu_csd_indirect,
    __print_fuzzy_hash_args_begin_job_cpu_csd_indirect,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_begin_job_cpu_csd_indirect,
#endif
};
void __trace_begin_job_cpu_csd_indirect(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
) {
   struct trace_begin_job_cpu_csd_indirect entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_begin_job_cpu_csd_indirect *__entry =
      queueing ?
      (struct trace_begin_job_cpu_csd_indirect *)u_trace_appendv(ut, cs, &__tp_begin_job_cpu_csd_indirect,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
}

/*
 * end_job_cpu_csd_indirect
 */
  
static void __print_end_job_cpu_csd_indirect(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_cpu_csd_indirect *__entry =
      (const struct trace_end_job_cpu_csd_indirect *)arg;
   fprintf(out, ""
      "id=%u"
         ", "
      "serialize=0x%x"
   ,__entry->id
   ,__entry->serialize
   );
}

  
static void __print_json_end_job_cpu_csd_indirect(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_cpu_csd_indirect *__entry =
      (const struct trace_end_job_cpu_csd_indirect *)arg;
   fprintf(out, ""
      "\"id\": \"%u\""
         ", "
      "\"serialize\": \"0x%x\""
   ,__entry->id
   ,__entry->serialize
   );
}

#define __print_fuzzy_hash_args_end_job_cpu_csd_indirect NULL

static uint32_t __fuzzy_hash_end_job_cpu_csd_indirect(const void *_event) {
   uint32_t hash = 1;
   const struct trace_end_job_cpu_csd_indirect *__entry =
      (const struct trace_end_job_cpu_csd_indirect *)_event;
   (void)__entry;
   return hash;
}

static bool __fuzzy_equals_end_job_cpu_csd_indirect(const void *_a, const void *_b) {
   const struct trace_end_job_cpu_csd_indirect *__entry_a =
      (const struct trace_end_job_cpu_csd_indirect *)_a;
   (void)__entry_a;
   const struct trace_end_job_cpu_csd_indirect *__entry_b =
      (const struct trace_end_job_cpu_csd_indirect *)_b;
   (void)__entry_b;
   return true;
}

static const struct u_tracepoint __tp_end_job_cpu_csd_indirect = {
    "end_job_cpu_csd_indirect",
    ALIGN_POT(sizeof(struct trace_end_job_cpu_csd_indirect), 8),   /* keep size 64b aligned */
    0
    ,
    0,
    11,
    u_tracepoint_type_marker,
    __print_end_job_cpu_csd_indirect,
    __print_json_end_job_cpu_csd_indirect,
    __fuzzy_hash_end_job_cpu_csd_indirect,
    __fuzzy_equals_end_job_cpu_csd_indirect,
    __print_fuzzy_hash_args_end_job_cpu_csd_indirect,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_end_job_cpu_csd_indirect,
#endif
};
void __trace_end_job_cpu_csd_indirect(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
) {
   struct trace_end_job_cpu_csd_indirect entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_end_job_cpu_csd_indirect *__entry =
      queueing ?
      (struct trace_end_job_cpu_csd_indirect *)u_trace_appendv(ut, cs, &__tp_end_job_cpu_csd_indirect,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
   __entry->id = id;
   __entry->serialize = serialize;
}

/*
 * begin_job_cpu_timestamp_query
 */
  
#define __print_begin_job_cpu_timestamp_query NULL
  
#define __print_json_begin_job_cpu_timestamp_query NULL
#define __print_fuzzy_hash_args_begin_job_cpu_timestamp_query NULL

#define __fuzzy_hash_begin_job_cpu_timestamp_query NULL
#define __fuzzy_equals_begin_job_cpu_timestamp_query NULL
#define __print_fuzzy_hash_args_begin_job_cpu_timestamp_query NULL
static const struct u_tracepoint __tp_begin_job_cpu_timestamp_query = {
    "begin_job_cpu_timestamp_query",
    ALIGN_POT(0, 8),   /* keep size 64b aligned */
    0
    ,
    0,
    12,
    u_tracepoint_type_marker,
    __print_begin_job_cpu_timestamp_query,
    __print_json_begin_job_cpu_timestamp_query,
    __fuzzy_hash_begin_job_cpu_timestamp_query,
    __fuzzy_equals_begin_job_cpu_timestamp_query,
    __print_fuzzy_hash_args_begin_job_cpu_timestamp_query,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_begin_job_cpu_timestamp_query,
#endif
};
void __trace_begin_job_cpu_timestamp_query(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
) {
   struct trace_begin_job_cpu_timestamp_query entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_begin_job_cpu_timestamp_query *__entry =
      queueing ?
      (struct trace_begin_job_cpu_timestamp_query *)u_trace_appendv(ut, cs, &__tp_begin_job_cpu_timestamp_query,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
}

/*
 * end_job_cpu_timestamp_query
 */
  
static void __print_end_job_cpu_timestamp_query(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_cpu_timestamp_query *__entry =
      (const struct trace_end_job_cpu_timestamp_query *)arg;
   fprintf(out, ""
      "id=%u"
         ", "
      "serialize=0x%x"
   ,__entry->id
   ,__entry->serialize
   );
}

  
static void __print_json_end_job_cpu_timestamp_query(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_job_cpu_timestamp_query *__entry =
      (const struct trace_end_job_cpu_timestamp_query *)arg;
   fprintf(out, ""
      "\"id\": \"%u\""
         ", "
      "\"serialize\": \"0x%x\""
   ,__entry->id
   ,__entry->serialize
   );
}

#define __print_fuzzy_hash_args_end_job_cpu_timestamp_query NULL

static uint32_t __fuzzy_hash_end_job_cpu_timestamp_query(const void *_event) {
   uint32_t hash = 1;
   const struct trace_end_job_cpu_timestamp_query *__entry =
      (const struct trace_end_job_cpu_timestamp_query *)_event;
   (void)__entry;
   return hash;
}

static bool __fuzzy_equals_end_job_cpu_timestamp_query(const void *_a, const void *_b) {
   const struct trace_end_job_cpu_timestamp_query *__entry_a =
      (const struct trace_end_job_cpu_timestamp_query *)_a;
   (void)__entry_a;
   const struct trace_end_job_cpu_timestamp_query *__entry_b =
      (const struct trace_end_job_cpu_timestamp_query *)_b;
   (void)__entry_b;
   return true;
}

static const struct u_tracepoint __tp_end_job_cpu_timestamp_query = {
    "end_job_cpu_timestamp_query",
    ALIGN_POT(sizeof(struct trace_end_job_cpu_timestamp_query), 8),   /* keep size 64b aligned */
    0
    ,
    0,
    13,
    u_tracepoint_type_marker,
    __print_end_job_cpu_timestamp_query,
    __print_json_end_job_cpu_timestamp_query,
    __fuzzy_hash_end_job_cpu_timestamp_query,
    __fuzzy_equals_end_job_cpu_timestamp_query,
    __print_fuzzy_hash_args_end_job_cpu_timestamp_query,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_end_job_cpu_timestamp_query,
#endif
};
void __trace_end_job_cpu_timestamp_query(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
) {
   struct trace_end_job_cpu_timestamp_query entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_end_job_cpu_timestamp_query *__entry =
      queueing ?
      (struct trace_end_job_cpu_timestamp_query *)u_trace_appendv(ut, cs, &__tp_end_job_cpu_timestamp_query,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
   __entry->id = id;
   __entry->serialize = serialize;
}

/*
 * begin_cmdbuf
 */
  
#define __print_begin_cmdbuf NULL
  
#define __print_json_begin_cmdbuf NULL
#define __print_fuzzy_hash_args_begin_cmdbuf NULL

#define __fuzzy_hash_begin_cmdbuf NULL
#define __fuzzy_equals_begin_cmdbuf NULL
#define __print_fuzzy_hash_args_begin_cmdbuf NULL
static const struct u_tracepoint __tp_begin_cmdbuf = {
    "begin_cmdbuf",
    ALIGN_POT(0, 8),   /* keep size 64b aligned */
    0
    ,
    0,
    14,
    u_tracepoint_type_marker,
    __print_begin_cmdbuf,
    __print_json_begin_cmdbuf,
    __fuzzy_hash_begin_cmdbuf,
    __fuzzy_equals_begin_cmdbuf,
    __print_fuzzy_hash_args_begin_cmdbuf,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_begin_cmdbuf,
#endif
};
void __trace_begin_cmdbuf(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
) {
   struct trace_begin_cmdbuf entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_begin_cmdbuf *__entry =
      queueing ?
      (struct trace_begin_cmdbuf *)u_trace_appendv(ut, cs, &__tp_begin_cmdbuf,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
}

/*
 * end_cmdbuf
 */
  
static void __print_end_cmdbuf(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_cmdbuf *__entry =
      (const struct trace_end_cmdbuf *)arg;
   fprintf(out, ""
      "flags=0x%x"
   ,__entry->flags
   );
}

  
static void __print_json_end_cmdbuf(FILE *out, const void *arg, const void *indirect) {
   const struct trace_end_cmdbuf *__entry =
      (const struct trace_end_cmdbuf *)arg;
   fprintf(out, ""
      "\"flags\": \"0x%x\""
   ,__entry->flags
   );
}

#define __print_fuzzy_hash_args_end_cmdbuf NULL

static uint32_t __fuzzy_hash_end_cmdbuf(const void *_event) {
   uint32_t hash = 1;
   const struct trace_end_cmdbuf *__entry =
      (const struct trace_end_cmdbuf *)_event;
   (void)__entry;
   return hash;
}

static bool __fuzzy_equals_end_cmdbuf(const void *_a, const void *_b) {
   const struct trace_end_cmdbuf *__entry_a =
      (const struct trace_end_cmdbuf *)_a;
   (void)__entry_a;
   const struct trace_end_cmdbuf *__entry_b =
      (const struct trace_end_cmdbuf *)_b;
   (void)__entry_b;
   return true;
}

static const struct u_tracepoint __tp_end_cmdbuf = {
    "end_cmdbuf",
    ALIGN_POT(sizeof(struct trace_end_cmdbuf), 8),   /* keep size 64b aligned */
    0
    ,
    0,
    15,
    u_tracepoint_type_marker,
    __print_end_cmdbuf,
    __print_json_end_cmdbuf,
    __fuzzy_hash_end_cmdbuf,
    __fuzzy_equals_end_cmdbuf,
    __print_fuzzy_hash_args_end_cmdbuf,
#ifdef HAVE_PERFETTO
    (void (*)(void *pctx, uint64_t, uint16_t, const void *, const void *, const void *))v3dv_utrace_perfetto_end_cmdbuf,
#endif
};
void __trace_end_cmdbuf(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , VkCommandBufferUsageFlags flags
) {
   struct trace_end_cmdbuf entry;
   const bool queueing = enabled_traces & U_TRACE_TYPE_REQUIRE_QUEUING;
   UNUSED struct trace_end_cmdbuf *__entry =
      queueing ?
      (struct trace_end_cmdbuf *)u_trace_appendv(ut, cs, &__tp_end_cmdbuf,
                                                    0
                                                    ,
                                                    0, NULL, NULL
                                                    ) :
      &entry;
   __entry->flags = flags;
}

