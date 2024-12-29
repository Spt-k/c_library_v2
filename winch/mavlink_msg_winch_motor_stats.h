#pragma once
// MESSAGE WINCH_MOTOR_STATS PACKING

#define MAVLINK_MSG_ID_WINCH_MOTOR_STATS 996633


typedef struct __mavlink_winch_motor_stats_t {
 float motor_voltage; /*< [V] Motor voltage.*/
 float motor_current; /*< [A] Motor current.*/
 float motor_torque; /*< [N/m] Motor torque.*/
 uint16_t motor_rpm; /*< [rpm] Motor rpm.*/
 uint16_t motor_angle; /*< [deg] Motor angle.*/
 uint8_t target_system; /*<  System ID.*/
 uint8_t target_component; /*<  Component ID.*/
} mavlink_winch_motor_stats_t;

#define MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN 18
#define MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN 18
#define MAVLINK_MSG_ID_996633_LEN 18
#define MAVLINK_MSG_ID_996633_MIN_LEN 18

#define MAVLINK_MSG_ID_WINCH_MOTOR_STATS_CRC 131
#define MAVLINK_MSG_ID_996633_CRC 131



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WINCH_MOTOR_STATS { \
    996633, \
    "WINCH_MOTOR_STATS", \
    7, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_winch_motor_stats_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_winch_motor_stats_t, target_component) }, \
         { "motor_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_winch_motor_stats_t, motor_voltage) }, \
         { "motor_current", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_winch_motor_stats_t, motor_current) }, \
         { "motor_rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_winch_motor_stats_t, motor_rpm) }, \
         { "motor_torque", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_winch_motor_stats_t, motor_torque) }, \
         { "motor_angle", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_winch_motor_stats_t, motor_angle) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WINCH_MOTOR_STATS { \
    "WINCH_MOTOR_STATS", \
    7, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_winch_motor_stats_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_winch_motor_stats_t, target_component) }, \
         { "motor_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_winch_motor_stats_t, motor_voltage) }, \
         { "motor_current", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_winch_motor_stats_t, motor_current) }, \
         { "motor_rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_winch_motor_stats_t, motor_rpm) }, \
         { "motor_torque", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_winch_motor_stats_t, motor_torque) }, \
         { "motor_angle", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_winch_motor_stats_t, motor_angle) }, \
         } \
}
#endif

/**
 * @brief Pack a winch_motor_stats message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param motor_voltage [V] Motor voltage.
 * @param motor_current [A] Motor current.
 * @param motor_rpm [rpm] Motor rpm.
 * @param motor_torque [N/m] Motor torque.
 * @param motor_angle [deg] Motor angle.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_stats_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, float motor_voltage, float motor_current, uint16_t motor_rpm, float motor_torque, uint16_t motor_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN];
    _mav_put_float(buf, 0, motor_voltage);
    _mav_put_float(buf, 4, motor_current);
    _mav_put_float(buf, 8, motor_torque);
    _mav_put_uint16_t(buf, 12, motor_rpm);
    _mav_put_uint16_t(buf, 14, motor_angle);
    _mav_put_uint8_t(buf, 16, target_system);
    _mav_put_uint8_t(buf, 17, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN);
#else
    mavlink_winch_motor_stats_t packet;
    packet.motor_voltage = motor_voltage;
    packet.motor_current = motor_current;
    packet.motor_torque = motor_torque;
    packet.motor_rpm = motor_rpm;
    packet.motor_angle = motor_angle;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_STATS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_CRC);
}

/**
 * @brief Pack a winch_motor_stats message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param motor_voltage [V] Motor voltage.
 * @param motor_current [A] Motor current.
 * @param motor_rpm [rpm] Motor rpm.
 * @param motor_torque [N/m] Motor torque.
 * @param motor_angle [deg] Motor angle.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_stats_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, float motor_voltage, float motor_current, uint16_t motor_rpm, float motor_torque, uint16_t motor_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN];
    _mav_put_float(buf, 0, motor_voltage);
    _mav_put_float(buf, 4, motor_current);
    _mav_put_float(buf, 8, motor_torque);
    _mav_put_uint16_t(buf, 12, motor_rpm);
    _mav_put_uint16_t(buf, 14, motor_angle);
    _mav_put_uint8_t(buf, 16, target_system);
    _mav_put_uint8_t(buf, 17, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN);
#else
    mavlink_winch_motor_stats_t packet;
    packet.motor_voltage = motor_voltage;
    packet.motor_current = motor_current;
    packet.motor_torque = motor_torque;
    packet.motor_rpm = motor_rpm;
    packet.motor_angle = motor_angle;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_STATS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN);
#endif
}

/**
 * @brief Pack a winch_motor_stats message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param motor_voltage [V] Motor voltage.
 * @param motor_current [A] Motor current.
 * @param motor_rpm [rpm] Motor rpm.
 * @param motor_torque [N/m] Motor torque.
 * @param motor_angle [deg] Motor angle.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_stats_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,float motor_voltage,float motor_current,uint16_t motor_rpm,float motor_torque,uint16_t motor_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN];
    _mav_put_float(buf, 0, motor_voltage);
    _mav_put_float(buf, 4, motor_current);
    _mav_put_float(buf, 8, motor_torque);
    _mav_put_uint16_t(buf, 12, motor_rpm);
    _mav_put_uint16_t(buf, 14, motor_angle);
    _mav_put_uint8_t(buf, 16, target_system);
    _mav_put_uint8_t(buf, 17, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN);
#else
    mavlink_winch_motor_stats_t packet;
    packet.motor_voltage = motor_voltage;
    packet.motor_current = motor_current;
    packet.motor_torque = motor_torque;
    packet.motor_rpm = motor_rpm;
    packet.motor_angle = motor_angle;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_STATS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_CRC);
}

/**
 * @brief Encode a winch_motor_stats struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_stats C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_stats_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_winch_motor_stats_t* winch_motor_stats)
{
    return mavlink_msg_winch_motor_stats_pack(system_id, component_id, msg, winch_motor_stats->target_system, winch_motor_stats->target_component, winch_motor_stats->motor_voltage, winch_motor_stats->motor_current, winch_motor_stats->motor_rpm, winch_motor_stats->motor_torque, winch_motor_stats->motor_angle);
}

/**
 * @brief Encode a winch_motor_stats struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_stats C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_stats_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_winch_motor_stats_t* winch_motor_stats)
{
    return mavlink_msg_winch_motor_stats_pack_chan(system_id, component_id, chan, msg, winch_motor_stats->target_system, winch_motor_stats->target_component, winch_motor_stats->motor_voltage, winch_motor_stats->motor_current, winch_motor_stats->motor_rpm, winch_motor_stats->motor_torque, winch_motor_stats->motor_angle);
}

/**
 * @brief Encode a winch_motor_stats struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_stats C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_stats_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_winch_motor_stats_t* winch_motor_stats)
{
    return mavlink_msg_winch_motor_stats_pack_status(system_id, component_id, _status, msg,  winch_motor_stats->target_system, winch_motor_stats->target_component, winch_motor_stats->motor_voltage, winch_motor_stats->motor_current, winch_motor_stats->motor_rpm, winch_motor_stats->motor_torque, winch_motor_stats->motor_angle);
}

/**
 * @brief Send a winch_motor_stats message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param motor_voltage [V] Motor voltage.
 * @param motor_current [A] Motor current.
 * @param motor_rpm [rpm] Motor rpm.
 * @param motor_torque [N/m] Motor torque.
 * @param motor_angle [deg] Motor angle.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_winch_motor_stats_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, float motor_voltage, float motor_current, uint16_t motor_rpm, float motor_torque, uint16_t motor_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN];
    _mav_put_float(buf, 0, motor_voltage);
    _mav_put_float(buf, 4, motor_current);
    _mav_put_float(buf, 8, motor_torque);
    _mav_put_uint16_t(buf, 12, motor_rpm);
    _mav_put_uint16_t(buf, 14, motor_angle);
    _mav_put_uint8_t(buf, 16, target_system);
    _mav_put_uint8_t(buf, 17, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_STATS, buf, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_CRC);
#else
    mavlink_winch_motor_stats_t packet;
    packet.motor_voltage = motor_voltage;
    packet.motor_current = motor_current;
    packet.motor_torque = motor_torque;
    packet.motor_rpm = motor_rpm;
    packet.motor_angle = motor_angle;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_STATS, (const char *)&packet, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_CRC);
#endif
}

/**
 * @brief Send a winch_motor_stats message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_winch_motor_stats_send_struct(mavlink_channel_t chan, const mavlink_winch_motor_stats_t* winch_motor_stats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_winch_motor_stats_send(chan, winch_motor_stats->target_system, winch_motor_stats->target_component, winch_motor_stats->motor_voltage, winch_motor_stats->motor_current, winch_motor_stats->motor_rpm, winch_motor_stats->motor_torque, winch_motor_stats->motor_angle);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_STATS, (const char *)winch_motor_stats, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_CRC);
#endif
}

#if MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_winch_motor_stats_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, float motor_voltage, float motor_current, uint16_t motor_rpm, float motor_torque, uint16_t motor_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, motor_voltage);
    _mav_put_float(buf, 4, motor_current);
    _mav_put_float(buf, 8, motor_torque);
    _mav_put_uint16_t(buf, 12, motor_rpm);
    _mav_put_uint16_t(buf, 14, motor_angle);
    _mav_put_uint8_t(buf, 16, target_system);
    _mav_put_uint8_t(buf, 17, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_STATS, buf, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_CRC);
#else
    mavlink_winch_motor_stats_t *packet = (mavlink_winch_motor_stats_t *)msgbuf;
    packet->motor_voltage = motor_voltage;
    packet->motor_current = motor_current;
    packet->motor_torque = motor_torque;
    packet->motor_rpm = motor_rpm;
    packet->motor_angle = motor_angle;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_STATS, (const char *)packet, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_CRC);
#endif
}
#endif

#endif

// MESSAGE WINCH_MOTOR_STATS UNPACKING


/**
 * @brief Get field target_system from winch_motor_stats message
 *
 * @return  System ID.
 */
static inline uint8_t mavlink_msg_winch_motor_stats_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field target_component from winch_motor_stats message
 *
 * @return  Component ID.
 */
static inline uint8_t mavlink_msg_winch_motor_stats_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field motor_voltage from winch_motor_stats message
 *
 * @return [V] Motor voltage.
 */
static inline float mavlink_msg_winch_motor_stats_get_motor_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field motor_current from winch_motor_stats message
 *
 * @return [A] Motor current.
 */
static inline float mavlink_msg_winch_motor_stats_get_motor_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field motor_rpm from winch_motor_stats message
 *
 * @return [rpm] Motor rpm.
 */
static inline uint16_t mavlink_msg_winch_motor_stats_get_motor_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field motor_torque from winch_motor_stats message
 *
 * @return [N/m] Motor torque.
 */
static inline float mavlink_msg_winch_motor_stats_get_motor_torque(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field motor_angle from winch_motor_stats message
 *
 * @return [deg] Motor angle.
 */
static inline uint16_t mavlink_msg_winch_motor_stats_get_motor_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Decode a winch_motor_stats message into a struct
 *
 * @param msg The message to decode
 * @param winch_motor_stats C-struct to decode the message contents into
 */
static inline void mavlink_msg_winch_motor_stats_decode(const mavlink_message_t* msg, mavlink_winch_motor_stats_t* winch_motor_stats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    winch_motor_stats->motor_voltage = mavlink_msg_winch_motor_stats_get_motor_voltage(msg);
    winch_motor_stats->motor_current = mavlink_msg_winch_motor_stats_get_motor_current(msg);
    winch_motor_stats->motor_torque = mavlink_msg_winch_motor_stats_get_motor_torque(msg);
    winch_motor_stats->motor_rpm = mavlink_msg_winch_motor_stats_get_motor_rpm(msg);
    winch_motor_stats->motor_angle = mavlink_msg_winch_motor_stats_get_motor_angle(msg);
    winch_motor_stats->target_system = mavlink_msg_winch_motor_stats_get_target_system(msg);
    winch_motor_stats->target_component = mavlink_msg_winch_motor_stats_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN? msg->len : MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN;
        memset(winch_motor_stats, 0, MAVLINK_MSG_ID_WINCH_MOTOR_STATS_LEN);
    memcpy(winch_motor_stats, _MAV_PAYLOAD(msg), len);
#endif
}
