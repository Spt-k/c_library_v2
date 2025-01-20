#pragma once
// MESSAGE WINCH_MOTOR_MAX_I PACKING

#define MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I 52502


typedef struct __mavlink_winch_motor_max_i_t {
 float max_amps; /*<  Winch motor max amps.*/
 uint8_t target_system; /*<  Target system ID.*/
 uint8_t target_component; /*<  CTarget component ID.*/
} mavlink_winch_motor_max_i_t;

#define MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN 6
#define MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_MIN_LEN 6
#define MAVLINK_MSG_ID_52502_LEN 6
#define MAVLINK_MSG_ID_52502_MIN_LEN 6

#define MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_CRC 236
#define MAVLINK_MSG_ID_52502_CRC 236



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WINCH_MOTOR_MAX_I { \
    52502, \
    "WINCH_MOTOR_MAX_I", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_winch_motor_max_i_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_winch_motor_max_i_t, target_component) }, \
         { "max_amps", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_winch_motor_max_i_t, max_amps) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WINCH_MOTOR_MAX_I { \
    "WINCH_MOTOR_MAX_I", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_winch_motor_max_i_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_winch_motor_max_i_t, target_component) }, \
         { "max_amps", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_winch_motor_max_i_t, max_amps) }, \
         } \
}
#endif

/**
 * @brief Pack a winch_motor_max_i message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  CTarget component ID.
 * @param max_amps  Winch motor max amps.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_max_i_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, float max_amps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN];
    _mav_put_float(buf, 0, max_amps);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN);
#else
    mavlink_winch_motor_max_i_t packet;
    packet.max_amps = max_amps;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_CRC);
}

/**
 * @brief Pack a winch_motor_max_i message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  CTarget component ID.
 * @param max_amps  Winch motor max amps.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_max_i_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, float max_amps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN];
    _mav_put_float(buf, 0, max_amps);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN);
#else
    mavlink_winch_motor_max_i_t packet;
    packet.max_amps = max_amps;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN);
#endif
}

/**
 * @brief Pack a winch_motor_max_i message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  Target system ID.
 * @param target_component  CTarget component ID.
 * @param max_amps  Winch motor max amps.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_max_i_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,float max_amps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN];
    _mav_put_float(buf, 0, max_amps);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN);
#else
    mavlink_winch_motor_max_i_t packet;
    packet.max_amps = max_amps;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_CRC);
}

/**
 * @brief Encode a winch_motor_max_i struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_max_i C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_max_i_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_winch_motor_max_i_t* winch_motor_max_i)
{
    return mavlink_msg_winch_motor_max_i_pack(system_id, component_id, msg, winch_motor_max_i->target_system, winch_motor_max_i->target_component, winch_motor_max_i->max_amps);
}

/**
 * @brief Encode a winch_motor_max_i struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_max_i C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_max_i_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_winch_motor_max_i_t* winch_motor_max_i)
{
    return mavlink_msg_winch_motor_max_i_pack_chan(system_id, component_id, chan, msg, winch_motor_max_i->target_system, winch_motor_max_i->target_component, winch_motor_max_i->max_amps);
}

/**
 * @brief Encode a winch_motor_max_i struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_max_i C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_max_i_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_winch_motor_max_i_t* winch_motor_max_i)
{
    return mavlink_msg_winch_motor_max_i_pack_status(system_id, component_id, _status, msg,  winch_motor_max_i->target_system, winch_motor_max_i->target_component, winch_motor_max_i->max_amps);
}

/**
 * @brief Send a winch_motor_max_i message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  Target system ID.
 * @param target_component  CTarget component ID.
 * @param max_amps  Winch motor max amps.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_winch_motor_max_i_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, float max_amps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN];
    _mav_put_float(buf, 0, max_amps);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I, buf, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_CRC);
#else
    mavlink_winch_motor_max_i_t packet;
    packet.max_amps = max_amps;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I, (const char *)&packet, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_CRC);
#endif
}

/**
 * @brief Send a winch_motor_max_i message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_winch_motor_max_i_send_struct(mavlink_channel_t chan, const mavlink_winch_motor_max_i_t* winch_motor_max_i)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_winch_motor_max_i_send(chan, winch_motor_max_i->target_system, winch_motor_max_i->target_component, winch_motor_max_i->max_amps);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I, (const char *)winch_motor_max_i, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_CRC);
#endif
}

#if MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_winch_motor_max_i_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, float max_amps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, max_amps);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I, buf, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_CRC);
#else
    mavlink_winch_motor_max_i_t *packet = (mavlink_winch_motor_max_i_t *)msgbuf;
    packet->max_amps = max_amps;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I, (const char *)packet, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_CRC);
#endif
}
#endif

#endif

// MESSAGE WINCH_MOTOR_MAX_I UNPACKING


/**
 * @brief Get field target_system from winch_motor_max_i message
 *
 * @return  Target system ID.
 */
static inline uint8_t mavlink_msg_winch_motor_max_i_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field target_component from winch_motor_max_i message
 *
 * @return  CTarget component ID.
 */
static inline uint8_t mavlink_msg_winch_motor_max_i_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field max_amps from winch_motor_max_i message
 *
 * @return  Winch motor max amps.
 */
static inline float mavlink_msg_winch_motor_max_i_get_max_amps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a winch_motor_max_i message into a struct
 *
 * @param msg The message to decode
 * @param winch_motor_max_i C-struct to decode the message contents into
 */
static inline void mavlink_msg_winch_motor_max_i_decode(const mavlink_message_t* msg, mavlink_winch_motor_max_i_t* winch_motor_max_i)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    winch_motor_max_i->max_amps = mavlink_msg_winch_motor_max_i_get_max_amps(msg);
    winch_motor_max_i->target_system = mavlink_msg_winch_motor_max_i_get_target_system(msg);
    winch_motor_max_i->target_component = mavlink_msg_winch_motor_max_i_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN? msg->len : MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN;
        memset(winch_motor_max_i, 0, MAVLINK_MSG_ID_WINCH_MOTOR_MAX_I_LEN);
    memcpy(winch_motor_max_i, _MAV_PAYLOAD(msg), len);
#endif
}
