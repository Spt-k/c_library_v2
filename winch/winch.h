/** @file
 *  @brief MAVLink comm protocol generated from winch.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_WINCH_H
#define MAVLINK_WINCH_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_WINCH.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_WINCH_XML_HASH 2246114950222636378

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}, {52500, 88, 3, 3, 3, 0, 1}, {52501, 13, 3, 3, 3, 0, 1}, {52502, 236, 6, 6, 3, 4, 5}, {52503, 9, 8, 8, 3, 4, 5}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_WINCH

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 0
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 0
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_winch_dc_pwr.h"
#include "./mavlink_msg_winch_motor_switch.h"
#include "./mavlink_msg_winch_motor_max_i.h"
#include "./mavlink_msg_winch_telem.h"

// base include
#include "../standard/standard.h"


#if MAVLINK_WINCH_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_PROTOCOL_VERSION, MAVLINK_MESSAGE_INFO_WINCH_DC_PWR, MAVLINK_MESSAGE_INFO_WINCH_MOTOR_SWITCH, MAVLINK_MESSAGE_INFO_WINCH_MOTOR_MAX_I, MAVLINK_MESSAGE_INFO_WINCH_TELEM}
# define MAVLINK_MESSAGE_NAMES {{ "HEARTBEAT", 0 }, { "PROTOCOL_VERSION", 300 }, { "WINCH_DC_PWR", 52500 }, { "WINCH_MOTOR_MAX_I", 52502 }, { "WINCH_MOTOR_SWITCH", 52501 }, { "WINCH_TELEM", 52503 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_WINCH_H
