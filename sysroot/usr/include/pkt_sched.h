#ifndef _LINUX_PKT_SCHED_H
#define _LINUX_PKT_SCHED_H

#include <linux/types.h>

#define TC_CBQ_MAX                6
#define TCA_CBQ_UNSPEC            0
#define TCA_CBQ_LSSOPT            1
#define TCA_CBQ_RATE              2
#define TCA_CBQ_WRROPT            3
#define TCA_CBQ_FOPT              4
#define TCA_CBQ_POLICE            5
#define TCA_CBQ_STAB              6

struct tc_cbq_lssopt {
    __u32  change;
    __u32  flags;
    __u8   maxidle;
    __u8   minidle;
    __u8   offtime;
    __u8   minburst;
    __u32  ewma_log;
};

struct tc_cbq_wrropt {
    __u32  flags;
    __u32  priority;
};

struct tc_cbq_ovl {
    __u32  strategy;
};

#define TC_CBQ_OVL_CLASSIC    1
#define TC_CBQ_OVL_DELAY      2
#define TC_CBQ_OVL_LOWPRIO    3
#define TC_CBQ_OVL_DROP       4
#define TC_CBQ_OVL_RCLASSIC   5

struct tc_cbq_fopt {
    __u32  split;
    __u32  defmap;
};

struct tc_cbq_police {
    __u32  police;
};

#endif

