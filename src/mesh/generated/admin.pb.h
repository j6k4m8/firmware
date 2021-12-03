/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_ADMIN_PB_H_INCLUDED
#define PB_ADMIN_PB_H_INCLUDED
#include <pb.h>
#include "channel.pb.h"
#include "mesh.pb.h"
#include "radioconfig.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _AdminMessage {
    pb_size_t which_variant;
    union {
        RadioConfig set_radio;
        User set_owner;
        Channel set_channel;
        bool get_radio_request;
        RadioConfig get_radio_response;
        uint32_t get_channel_request;
        Channel get_channel_response;
        bool confirm_set_channel;
        bool confirm_set_radio;
        bool exit_simulator;
        int32_t reboot_seconds;
    };
} AdminMessage;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define AdminMessage_init_default                {0, {RadioConfig_init_default}}
#define AdminMessage_init_zero                   {0, {RadioConfig_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define AdminMessage_set_radio_tag               1
#define AdminMessage_set_owner_tag               2
#define AdminMessage_set_channel_tag             3
#define AdminMessage_get_radio_request_tag       4
#define AdminMessage_get_radio_response_tag      5
#define AdminMessage_get_channel_request_tag     6
#define AdminMessage_get_channel_response_tag    7
#define AdminMessage_confirm_set_channel_tag     32
#define AdminMessage_confirm_set_radio_tag       33
#define AdminMessage_exit_simulator_tag          34
#define AdminMessage_reboot_seconds_tag          35

/* Struct field encoding specification for nanopb */
#define AdminMessage_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,set_radio,set_radio),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,set_owner,set_owner),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,set_channel,set_channel),   3) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,get_radio_request,get_radio_request),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,get_radio_response,get_radio_response),   5) \
X(a, STATIC,   ONEOF,    UINT32,   (variant,get_channel_request,get_channel_request),   6) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,get_channel_response,get_channel_response),   7) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,confirm_set_channel,confirm_set_channel),  32) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,confirm_set_radio,confirm_set_radio),  33) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,exit_simulator,exit_simulator),  34) \
X(a, STATIC,   ONEOF,    INT32,    (variant,reboot_seconds,reboot_seconds),  35)
#define AdminMessage_CALLBACK NULL
#define AdminMessage_DEFAULT NULL
#define AdminMessage_variant_set_radio_MSGTYPE RadioConfig
#define AdminMessage_variant_set_owner_MSGTYPE User
#define AdminMessage_variant_set_channel_MSGTYPE Channel
#define AdminMessage_variant_get_radio_response_MSGTYPE RadioConfig
#define AdminMessage_variant_get_channel_response_MSGTYPE Channel

extern const pb_msgdesc_t AdminMessage_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define AdminMessage_fields &AdminMessage_msg

/* Maximum encoded size of messages (where known) */
#define AdminMessage_size                        447

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
