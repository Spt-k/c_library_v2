/** @file
 *    @brief MAVLink comm protocol testsuite generated from winch.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef WINCH_TESTSUITE_H
#define WINCH_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_standard(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_winch(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_standard(system_id, component_id, last_msg);
    mavlink_test_winch(system_id, component_id, last_msg);
}
#endif

#include "../standard/testsuite.h"


static void mavlink_test_winch_motor_stats(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_WINCH_MOTOR_STATS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_winch_motor_stats_t packet_in = {
        17.0,45.0,73.0,17859,17963,53,120
    };
    mavlink_winch_motor_stats_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.motor_voltage = packet_in.motor_voltage;
        packet1.motor_current = packet_in.motor_current;
        packet1.motor_torque = packet_in.motor_torque;
        packet1.motor_rpm = packet_in.motor_rpm;
        packet1.motor_angle = packet_in.motor_angle;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_winch_motor_stats_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_winch_motor_stats_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_winch_motor_stats_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.motor_voltage , packet1.motor_current , packet1.motor_rpm , packet1.motor_torque , packet1.motor_angle );
    mavlink_msg_winch_motor_stats_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_winch_motor_stats_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.motor_voltage , packet1.motor_current , packet1.motor_rpm , packet1.motor_torque , packet1.motor_angle );
    mavlink_msg_winch_motor_stats_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_winch_motor_stats_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_winch_motor_stats_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.motor_voltage , packet1.motor_current , packet1.motor_rpm , packet1.motor_torque , packet1.motor_angle );
    mavlink_msg_winch_motor_stats_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("WINCH_MOTOR_STATS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_WINCH_MOTOR_STATS) != NULL);
#endif
}

static void mavlink_test_winch(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_winch_motor_stats(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // WINCH_TESTSUITE_H
