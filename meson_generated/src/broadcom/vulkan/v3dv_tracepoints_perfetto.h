/* Copyright © 2021 Igalia S.L.
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



#ifndef _V3DV_TRACEPOINTS_PERFETTO_H
#define _V3DV_TRACEPOINTS_PERFETTO_H

#include "util/perf/u_perfetto.h"
#ifdef ANDROID_LIBPERFETTO
#include <perfetto/trace/clock_snapshot.pbzero.h>
#include <perfetto/trace/gpu/gpu_render_stage_event.pbzero.h>
#include <perfetto/trace/gpu/vulkan_api_event.pbzero.h>
#endif


UNUSED static const char *tracepoint_names[] = {
   "begin_job_cl",
   "end_job_cl",
   "begin_job_csd",
   "end_job_csd",
   "begin_job_tfu",
   "end_job_tfu",
   "begin_job_cpu_reset_queries",
   "end_job_cpu_reset_queries",
   "begin_job_cpu_copy_query_results",
   "end_job_cpu_copy_query_results",
   "begin_job_cpu_csd_indirect",
   "end_job_cpu_csd_indirect",
   "begin_job_cpu_timestamp_query",
   "end_job_cpu_timestamp_query",
   "begin_cmdbuf",
   "end_cmdbuf",
};

typedef void (*trace_payload_as_extra_func)(perfetto::protos::pbzero::GpuRenderStageEvent *, const void*, const void*);

static void UNUSED
trace_payload_as_extra_begin_job_cl(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_begin_job_cl *payload,
                                     const void *indirect_data)
{
}
static void UNUSED
trace_payload_as_extra_end_job_cl(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_end_job_cl *payload,
                                     const void *indirect_data)
{
   UNUSED char buf[128];

   {
      auto data = event->add_extra_data();
      data->set_name("id", 2);

      
      const int slen = sprintf(buf, "%u", payload->id);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("serialize", 9);

      
      const int slen = sprintf(buf, "0x%x", payload->serialize);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("draw_count", 10);

      
      const int slen = sprintf(buf, "%u", payload->draw_count);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("cache_flush", 11);

      
      const int slen = sprintf(buf, "%u", payload->cache_flush);

      data->set_value(buf, slen);
   }

}
static void UNUSED
trace_payload_as_extra_begin_job_csd(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_begin_job_csd *payload,
                                     const void *indirect_data)
{
}
static void UNUSED
trace_payload_as_extra_end_job_csd(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_end_job_csd *payload,
                                     const void *indirect_data)
{
   UNUSED char buf[128];

   {
      auto data = event->add_extra_data();
      data->set_name("id", 2);

      
      const int slen = sprintf(buf, "%u", payload->id);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("serialize", 9);

      
      const int slen = sprintf(buf, "0x%x", payload->serialize);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("wg_x", 4);

      
      const int slen = sprintf(buf, "%u", payload->wg_x);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("wg_y", 4);

      
      const int slen = sprintf(buf, "%u", payload->wg_y);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("wg_z", 4);

      
      const int slen = sprintf(buf, "%u", payload->wg_z);

      data->set_value(buf, slen);
   }

}
static void UNUSED
trace_payload_as_extra_begin_job_tfu(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_begin_job_tfu *payload,
                                     const void *indirect_data)
{
}
static void UNUSED
trace_payload_as_extra_end_job_tfu(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_end_job_tfu *payload,
                                     const void *indirect_data)
{
   UNUSED char buf[128];

   {
      auto data = event->add_extra_data();
      data->set_name("id", 2);

      
      const int slen = sprintf(buf, "%u", payload->id);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("serialize", 9);

      
      const int slen = sprintf(buf, "0x%x", payload->serialize);

      data->set_value(buf, slen);
   }

}
static void UNUSED
trace_payload_as_extra_begin_job_cpu_reset_queries(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_begin_job_cpu_reset_queries *payload,
                                     const void *indirect_data)
{
}
static void UNUSED
trace_payload_as_extra_end_job_cpu_reset_queries(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_end_job_cpu_reset_queries *payload,
                                     const void *indirect_data)
{
   UNUSED char buf[128];

   {
      auto data = event->add_extra_data();
      data->set_name("id", 2);

      
      const int slen = sprintf(buf, "%u", payload->id);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("serialize", 9);

      
      const int slen = sprintf(buf, "0x%x", payload->serialize);

      data->set_value(buf, slen);
   }

}
static void UNUSED
trace_payload_as_extra_begin_job_cpu_copy_query_results(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_begin_job_cpu_copy_query_results *payload,
                                     const void *indirect_data)
{
}
static void UNUSED
trace_payload_as_extra_end_job_cpu_copy_query_results(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_end_job_cpu_copy_query_results *payload,
                                     const void *indirect_data)
{
   UNUSED char buf[128];

   {
      auto data = event->add_extra_data();
      data->set_name("id", 2);

      
      const int slen = sprintf(buf, "%u", payload->id);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("serialize", 9);

      
      const int slen = sprintf(buf, "0x%x", payload->serialize);

      data->set_value(buf, slen);
   }

}
static void UNUSED
trace_payload_as_extra_begin_job_cpu_csd_indirect(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_begin_job_cpu_csd_indirect *payload,
                                     const void *indirect_data)
{
}
static void UNUSED
trace_payload_as_extra_end_job_cpu_csd_indirect(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_end_job_cpu_csd_indirect *payload,
                                     const void *indirect_data)
{
   UNUSED char buf[128];

   {
      auto data = event->add_extra_data();
      data->set_name("id", 2);

      
      const int slen = sprintf(buf, "%u", payload->id);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("serialize", 9);

      
      const int slen = sprintf(buf, "0x%x", payload->serialize);

      data->set_value(buf, slen);
   }

}
static void UNUSED
trace_payload_as_extra_begin_job_cpu_timestamp_query(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_begin_job_cpu_timestamp_query *payload,
                                     const void *indirect_data)
{
}
static void UNUSED
trace_payload_as_extra_end_job_cpu_timestamp_query(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_end_job_cpu_timestamp_query *payload,
                                     const void *indirect_data)
{
   UNUSED char buf[128];

   {
      auto data = event->add_extra_data();
      data->set_name("id", 2);

      
      const int slen = sprintf(buf, "%u", payload->id);

      data->set_value(buf, slen);
   }
   {
      auto data = event->add_extra_data();
      data->set_name("serialize", 9);

      
      const int slen = sprintf(buf, "0x%x", payload->serialize);

      data->set_value(buf, slen);
   }

}
static void UNUSED
trace_payload_as_extra_begin_cmdbuf(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_begin_cmdbuf *payload,
                                     const void *indirect_data)
{
}
static void UNUSED
trace_payload_as_extra_end_cmdbuf(perfetto::protos::pbzero::GpuRenderStageEvent *event,
                                     const struct trace_end_cmdbuf *payload,
                                     const void *indirect_data)
{
   UNUSED char buf[128];

   {
      auto data = event->add_extra_data();
      data->set_name("flags", 5);

      
      const int slen = sprintf(buf, "0x%x", payload->flags);

      data->set_value(buf, slen);
   }

}

#endif /* _V3DV_TRACEPOINTS_PERFETTO_H */
