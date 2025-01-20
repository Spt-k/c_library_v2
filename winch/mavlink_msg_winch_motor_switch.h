#pragma once
// MESSAGE WINCH_MOTOR_SWITCH PACKING

#define MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH 52501


typedef struct __mavlink_winch_motor_switch_t {
 uint8_t target_system; /*<  Target system ID.*/
 uint8_t target_component; /*<  Target component ID.*/
 uint8_t torque_on; /*<  Motor switch.*/
} mavlink_winch_motor_switch_t;

#define MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN 3
#define MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_MIN_LEN 3
#define MAVLINK_MSG_ID_52501_LEN 3
#define MAVLINK_MSG_ID_52501_MIN_LEN 3

#define MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_CRC 13
#define MAVLINK_MSG_ID_52501_CRC 13



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WINCH_MOTOR_SWITCH { \
    52501, \
    "WINCH_MOTOR_SWITCH", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_winch_motor_switch_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_winch_motor_switch_t, target_component) }, \
         { "torque_on", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_winch_motor_switch_t, torque_on) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WINCH_MOTOR_SWITCH { \
    "WINCH_MOTOR_SWITCH", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_winch_motor_switch_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_winch_motor_switch_t, target_component) }, \
         { "torque_on", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_winch_motor_switch_t, torque_on) }, \
         } \
}
#endif

/**
 * @brief Pack a winch_motor_switch message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param torque_on  Motor switch.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_switch_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t torque_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, torque_on);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN);
#else
    mavlink_winch_motor_switch_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.torque_on = torque_on;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_CRC);
}

/**
 * @brief Pack a winch_motor_switch message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param torque_on  Motor switch.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_switch_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t torque_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, torque_on);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN);
#else
    mavlink_winch_motor_switch_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.torque_on = torque_on;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN);
#endif
}

/**
 * @brief Pack a winch_motor_switch message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param torque_on  Motor switch.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_switch_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t torque_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, torque_on);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN);
#else
    mavlink_winch_motor_switch_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.torque_on = torque_on;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_CRC);
}

/**
 * @brief Encode a winch_motor_switch struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_switch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_switch_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_winch_motor_switch_t* winch_motor_switch)
{
    return mavlink_msg_winch_motor_switch_pack(system_id, component_id, msg, winch_motor_switch->target_system, winch_motor_switch->target_component, winch_motor_switch->torque_on);
}

/**
 * @brief Encode a winch_motor_switch struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_switch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_switch_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_winch_motor_switch_t* winch_motor_switch)
{
    return mavlink_msg_winch_motor_switch_pack_chan(system_id, component_id, chan, msg, winch_motor_switch->target_system, winch_motor_switch->target_component, winch_motor_switch->torque_on);
}

/**
 * @brief Encode a winch_motor_switch struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_switch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_switch_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_winch_motor_switch_t* winch_motor_switch)
{
    return mavlink_msg_winch_motor_switch_pack_status(system_id, component_id, _status, msg,  winch_motor_switch->target_system, winch_motor_switch->target_component, winch_motor_switch->torque_on);
}

/**
 * @brief Send a winch_motor_switch message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param torque_on  Motor switch.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_winch_motor_switch_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t torque_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, torque_on);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH, buf, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_CRC);
#else
    mavlink_winch_motor_switch_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.torque_on = torque_on;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH, (const char *)&packet, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_CRC);
#endif
}

/**
 * @brief Send a winch_motor_switch message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_winch_motor_switch_send_struct(mavlink_channel_t chan, const mavlink_winch_motor_switch_t* winch_motor_switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_winch_motor_switch_send(chan, winch_motor_switch->target_system, winch_motor_switch->target_component, winch_motor_switch->torque_on);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH, (const char *)winch_motor_switch, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_CRC);
#endif
}

#if MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_winch_motor_switch_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t torque_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, torque_on);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH, buf, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_CRC);
#else
    mavlink_winch_motor_switch_t *packet = (mavlink_winch_motor_switch_t *)msgbuf;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->torque_on = torque_on;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH, (const char *)packet, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_CRC);
#endif
}
#endif

#endif

// MESSAGE WINCH_MOTOR_SWITCH UNPACKING


/**
 * @brief Get field target_system from winch_motor_switch message
 *
 * @return  Target system ID.
 */
static inline uint8_t mavlink_msg_winch_motor_switch_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from winch_motor_switch message
 *
 * @return  Target component ID.
 */
static inline uint8_t mavlink_msg_winch_motor_switch_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field torque_on from winch_motor_switch message
 *
 * @return  Motor switch.
 */
static inline uint8_t mavlink_msg_winch_motor_switch_get_torque_on(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a winch_motor_switch message into a struct
 *
 * @param msg The message to decode
 * @param winch_motor_switch C-struct to decode the message contents into
 */
static inline void mavlink_msg_winch_motor_switch_decode(const mavlink_message_t* msg, mavlink_winch_motor_switch_t* winch_motor_switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    winch_motor_switch->target_system = mavlink_msg_winch_motor_switch_get_target_system(msg);
    winch_motor_switch->target_component = mavlink_msg_winch_motor_switch_get_target_component(msg);
    winch_motor_switch->torque_on = mavlink_msg_winch_motor_switch_get_torque_on(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN? msg->len : MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN;
        memset(winch_motor_switch, 0, MAVLINK_MSG_ID_WINCH_MOTOR_SWITCH_LEN);
    memcpy(winch_motor_switch, _MAV_PAYLOAD(msg), len);
#endif
}
