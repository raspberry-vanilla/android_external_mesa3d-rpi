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


#ifndef _V3DV_TRACEPOINTS_H
#define _V3DV_TRACEPOINTS_H

#include "vulkan/vulkan_core.h"

#include "util/perf/u_trace.h"

#ifdef __cplusplus
extern "C" {
#endif

struct v3dv_device;



/*
 * begin_job_cl
 */
struct trace_begin_job_cl {
   uint8_t dummy;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_begin_job_cl(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_begin_job_cl *payload,
   const void *indirect_data);
#endif
void __trace_begin_job_cl(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
);
static ALWAYS_INLINE void trace_begin_job_cl(
     struct u_trace *ut
   , void *cs
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_begin_job_cl(
        ut
      , enabled_traces
      , cs
   );
}

/*
 * end_job_cl
 */
struct trace_end_job_cl {
   uint32_t id;
   uint8_t serialize;
   uint32_t draw_count;
   bool cache_flush;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_end_job_cl(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_end_job_cl *payload,
   const void *indirect_data);
#endif
void __trace_end_job_cl(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
   , uint32_t draw_count
   , bool cache_flush
);
static ALWAYS_INLINE void trace_end_job_cl(
     struct u_trace *ut
   , void *cs
   , uint32_t id
   , uint8_t serialize
   , uint32_t draw_count
   , bool cache_flush
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_end_job_cl(
        ut
      , enabled_traces
      , cs
      , id
      , serialize
      , draw_count
      , cache_flush
   );
}

/*
 * begin_job_csd
 */
struct trace_begin_job_csd {
   uint8_t dummy;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_begin_job_csd(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_begin_job_csd *payload,
   const void *indirect_data);
#endif
void __trace_begin_job_csd(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
);
static ALWAYS_INLINE void trace_begin_job_csd(
     struct u_trace *ut
   , void *cs
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_begin_job_csd(
        ut
      , enabled_traces
      , cs
   );
}

/*
 * end_job_csd
 */
struct trace_end_job_csd {
   uint32_t id;
   uint8_t serialize;
   uint32_t wg_x;
   uint32_t wg_y;
   uint32_t wg_z;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_end_job_csd(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_end_job_csd *payload,
   const void *indirect_data);
#endif
void __trace_end_job_csd(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
   , uint32_t wg_x
   , uint32_t wg_y
   , uint32_t wg_z
);
static ALWAYS_INLINE void trace_end_job_csd(
     struct u_trace *ut
   , void *cs
   , uint32_t id
   , uint8_t serialize
   , uint32_t wg_x
   , uint32_t wg_y
   , uint32_t wg_z
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_end_job_csd(
        ut
      , enabled_traces
      , cs
      , id
      , serialize
      , wg_x
      , wg_y
      , wg_z
   );
}

/*
 * begin_job_tfu
 */
struct trace_begin_job_tfu {
   uint8_t dummy;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_begin_job_tfu(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_begin_job_tfu *payload,
   const void *indirect_data);
#endif
void __trace_begin_job_tfu(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
);
static ALWAYS_INLINE void trace_begin_job_tfu(
     struct u_trace *ut
   , void *cs
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_begin_job_tfu(
        ut
      , enabled_traces
      , cs
   );
}

/*
 * end_job_tfu
 */
struct trace_end_job_tfu {
   uint32_t id;
   uint8_t serialize;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_end_job_tfu(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_end_job_tfu *payload,
   const void *indirect_data);
#endif
void __trace_end_job_tfu(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
);
static ALWAYS_INLINE void trace_end_job_tfu(
     struct u_trace *ut
   , void *cs
   , uint32_t id
   , uint8_t serialize
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_end_job_tfu(
        ut
      , enabled_traces
      , cs
      , id
      , serialize
   );
}

/*
 * begin_job_cpu_reset_queries
 */
struct trace_begin_job_cpu_reset_queries {
   uint8_t dummy;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_begin_job_cpu_reset_queries(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_begin_job_cpu_reset_queries *payload,
   const void *indirect_data);
#endif
void __trace_begin_job_cpu_reset_queries(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
);
static ALWAYS_INLINE void trace_begin_job_cpu_reset_queries(
     struct u_trace *ut
   , void *cs
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_begin_job_cpu_reset_queries(
        ut
      , enabled_traces
      , cs
   );
}

/*
 * end_job_cpu_reset_queries
 */
struct trace_end_job_cpu_reset_queries {
   uint32_t id;
   uint8_t serialize;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_end_job_cpu_reset_queries(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_end_job_cpu_reset_queries *payload,
   const void *indirect_data);
#endif
void __trace_end_job_cpu_reset_queries(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
);
static ALWAYS_INLINE void trace_end_job_cpu_reset_queries(
     struct u_trace *ut
   , void *cs
   , uint32_t id
   , uint8_t serialize
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_end_job_cpu_reset_queries(
        ut
      , enabled_traces
      , cs
      , id
      , serialize
   );
}

/*
 * begin_job_cpu_copy_query_results
 */
struct trace_begin_job_cpu_copy_query_results {
   uint8_t dummy;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_begin_job_cpu_copy_query_results(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_begin_job_cpu_copy_query_results *payload,
   const void *indirect_data);
#endif
void __trace_begin_job_cpu_copy_query_results(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
);
static ALWAYS_INLINE void trace_begin_job_cpu_copy_query_results(
     struct u_trace *ut
   , void *cs
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_begin_job_cpu_copy_query_results(
        ut
      , enabled_traces
      , cs
   );
}

/*
 * end_job_cpu_copy_query_results
 */
struct trace_end_job_cpu_copy_query_results {
   uint32_t id;
   uint8_t serialize;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_end_job_cpu_copy_query_results(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_end_job_cpu_copy_query_results *payload,
   const void *indirect_data);
#endif
void __trace_end_job_cpu_copy_query_results(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
);
static ALWAYS_INLINE void trace_end_job_cpu_copy_query_results(
     struct u_trace *ut
   , void *cs
   , uint32_t id
   , uint8_t serialize
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_end_job_cpu_copy_query_results(
        ut
      , enabled_traces
      , cs
      , id
      , serialize
   );
}

/*
 * begin_job_cpu_csd_indirect
 */
struct trace_begin_job_cpu_csd_indirect {
   uint8_t dummy;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_begin_job_cpu_csd_indirect(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_begin_job_cpu_csd_indirect *payload,
   const void *indirect_data);
#endif
void __trace_begin_job_cpu_csd_indirect(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
);
static ALWAYS_INLINE void trace_begin_job_cpu_csd_indirect(
     struct u_trace *ut
   , void *cs
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_begin_job_cpu_csd_indirect(
        ut
      , enabled_traces
      , cs
   );
}

/*
 * end_job_cpu_csd_indirect
 */
struct trace_end_job_cpu_csd_indirect {
   uint32_t id;
   uint8_t serialize;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_end_job_cpu_csd_indirect(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_end_job_cpu_csd_indirect *payload,
   const void *indirect_data);
#endif
void __trace_end_job_cpu_csd_indirect(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
);
static ALWAYS_INLINE void trace_end_job_cpu_csd_indirect(
     struct u_trace *ut
   , void *cs
   , uint32_t id
   , uint8_t serialize
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_end_job_cpu_csd_indirect(
        ut
      , enabled_traces
      , cs
      , id
      , serialize
   );
}

/*
 * begin_job_cpu_timestamp_query
 */
struct trace_begin_job_cpu_timestamp_query {
   uint8_t dummy;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_begin_job_cpu_timestamp_query(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_begin_job_cpu_timestamp_query *payload,
   const void *indirect_data);
#endif
void __trace_begin_job_cpu_timestamp_query(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
);
static ALWAYS_INLINE void trace_begin_job_cpu_timestamp_query(
     struct u_trace *ut
   , void *cs
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_begin_job_cpu_timestamp_query(
        ut
      , enabled_traces
      , cs
   );
}

/*
 * end_job_cpu_timestamp_query
 */
struct trace_end_job_cpu_timestamp_query {
   uint32_t id;
   uint8_t serialize;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_end_job_cpu_timestamp_query(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_end_job_cpu_timestamp_query *payload,
   const void *indirect_data);
#endif
void __trace_end_job_cpu_timestamp_query(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , uint32_t id
   , uint8_t serialize
);
static ALWAYS_INLINE void trace_end_job_cpu_timestamp_query(
     struct u_trace *ut
   , void *cs
   , uint32_t id
   , uint8_t serialize
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_end_job_cpu_timestamp_query(
        ut
      , enabled_traces
      , cs
      , id
      , serialize
   );
}

/*
 * begin_cmdbuf
 */
struct trace_begin_cmdbuf {
   uint8_t dummy;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_begin_cmdbuf(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_begin_cmdbuf *payload,
   const void *indirect_data);
#endif
void __trace_begin_cmdbuf(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
);
static ALWAYS_INLINE void trace_begin_cmdbuf(
     struct u_trace *ut
   , void *cs
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_begin_cmdbuf(
        ut
      , enabled_traces
      , cs
   );
}

/*
 * end_cmdbuf
 */
struct trace_end_cmdbuf {
   VkCommandBufferUsageFlags flags;
};
#ifdef HAVE_PERFETTO
void v3dv_utrace_perfetto_end_cmdbuf(
   struct v3dv_device *dev,
   uint64_t ts_ns,
   uint16_t tp_idx,
   const void *flush_data,
   const struct trace_end_cmdbuf *payload,
   const void *indirect_data);
#endif
void __trace_end_cmdbuf(
     struct u_trace *ut
   , enum u_trace_type enabled_traces
   , void *cs
   , VkCommandBufferUsageFlags flags
);
static ALWAYS_INLINE void trace_end_cmdbuf(
     struct u_trace *ut
   , void *cs
   , VkCommandBufferUsageFlags flags
) {
   enum u_trace_type enabled_traces = p_atomic_read_relaxed(&ut->utctx->enabled_traces);
   if (!unlikely(enabled_traces != 0 &&
                 true))
      return;
   __trace_end_cmdbuf(
        ut
      , enabled_traces
      , cs
      , flags
   );
}

#ifdef __cplusplus
}
#endif



#endif /* _V3DV_TRACEPOINTS_H */
