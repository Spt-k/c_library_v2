#pragma once
// MESSAGE WINCH_MOTOR_ALT PACKING

#define MAVLINK_MSG_ID_WINCH_MOTOR_ALT 52504


typedef struct __mavlink_winch_motor_alt_t {
 float alt_low; /*<  Altitude where winch motor enables torque.*/
 float alt_high; /*<  Altitude where winch motor maximizes torque.*/
 uint8_t target_system; /*<  Target system ID.*/
 uint8_t target_component; /*<  Target component ID.*/
 uint8_t ascend_lock_on; /*<  Motor block system switch on ascend.*/
 uint8_t descend_lock_on; /*<  Motor block system switch on descend*/
} mavlink_winch_motor_alt_t;

#define MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN 12
#define MAVLINK_MSG_ID_WINCH_MOTOR_ALT_MIN_LEN 12
#define MAVLINK_MSG_ID_52504_LEN 12
#define MAVLINK_MSG_ID_52504_MIN_LEN 12

#define MAVLINK_MSG_ID_WINCH_MOTOR_ALT_CRC 84
#define MAVLINK_MSG_ID_52504_CRC 84



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WINCH_MOTOR_ALT { \
    52504, \
    "WINCH_MOTOR_ALT", \
    6, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_winch_motor_alt_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_winch_motor_alt_t, target_component) }, \
         { "alt_low", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_winch_motor_alt_t, alt_low) }, \
         { "alt_high", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_winch_motor_alt_t, alt_high) }, \
         { "ascend_lock_on", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_winch_motor_alt_t, ascend_lock_on) }, \
         { "descend_lock_on", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_winch_motor_alt_t, descend_lock_on) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WINCH_MOTOR_ALT { \
    "WINCH_MOTOR_ALT", \
    6, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_winch_motor_alt_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_winch_motor_alt_t, target_component) }, \
         { "alt_low", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_winch_motor_alt_t, alt_low) }, \
         { "alt_high", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_winch_motor_alt_t, alt_high) }, \
         { "ascend_lock_on", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_winch_motor_alt_t, ascend_lock_on) }, \
         { "descend_lock_on", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_winch_motor_alt_t, descend_lock_on) }, \
         } \
}
#endif

/**
 * @brief Pack a winch_motor_alt message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param alt_low  Altitude where winch motor enables torque.
 * @param alt_high  Altitude where winch motor maximizes torque.
 * @param ascend_lock_on  Motor block system switch on ascend.
 * @param descend_lock_on  Motor block system switch on descend
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_alt_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, float alt_low, float alt_high, uint8_t ascend_lock_on, uint8_t descend_lock_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN];
    _mav_put_float(buf, 0, alt_low);
    _mav_put_float(buf, 4, alt_high);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, ascend_lock_on);
    _mav_put_uint8_t(buf, 11, descend_lock_on);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN);
#else
    mavlink_winch_motor_alt_t packet;
    packet.alt_low = alt_low;
    packet.alt_high = alt_high;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.ascend_lock_on = ascend_lock_on;
    packet.descend_lock_on = descend_lock_on;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_ALT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_CRC);
}

/**
 * @brief Pack a winch_motor_alt message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param alt_low  Altitude where winch motor enables torque.
 * @param alt_high  Altitude where winch motor maximizes torque.
 * @param ascend_lock_on  Motor block system switch on ascend.
 * @param descend_lock_on  Motor block system switch on descend
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_alt_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, float alt_low, float alt_high, uint8_t ascend_lock_on, uint8_t descend_lock_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN];
    _mav_put_float(buf, 0, alt_low);
    _mav_put_float(buf, 4, alt_high);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, ascend_lock_on);
    _mav_put_uint8_t(buf, 11, descend_lock_on);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN);
#else
    mavlink_winch_motor_alt_t packet;
    packet.alt_low = alt_low;
    packet.alt_high = alt_high;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.ascend_lock_on = ascend_lock_on;
    packet.descend_lock_on = descend_lock_on;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_ALT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN);
#endif
}

/**
 * @brief Pack a winch_motor_alt message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param alt_low  Altitude where winch motor enables torque.
 * @param alt_high  Altitude where winch motor maximizes torque.
 * @param ascend_lock_on  Motor block system switch on ascend.
 * @param descend_lock_on  Motor block system switch on descend
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_motor_alt_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,float alt_low,float alt_high,uint8_t ascend_lock_on,uint8_t descend_lock_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN];
    _mav_put_float(buf, 0, alt_low);
    _mav_put_float(buf, 4, alt_high);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, ascend_lock_on);
    _mav_put_uint8_t(buf, 11, descend_lock_on);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN);
#else
    mavlink_winch_motor_alt_t packet;
    packet.alt_low = alt_low;
    packet.alt_high = alt_high;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.ascend_lock_on = ascend_lock_on;
    packet.descend_lock_on = descend_lock_on;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_MOTOR_ALT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_CRC);
}

/**
 * @brief Encode a winch_motor_alt struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_alt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_alt_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_winch_motor_alt_t* winch_motor_alt)
{
    return mavlink_msg_winch_motor_alt_pack(system_id, component_id, msg, winch_motor_alt->target_system, winch_motor_alt->target_component, winch_motor_alt->alt_low, winch_motor_alt->alt_high, winch_motor_alt->ascend_lock_on, winch_motor_alt->descend_lock_on);
}

/**
 * @brief Encode a winch_motor_alt struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_alt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_alt_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_winch_motor_alt_t* winch_motor_alt)
{
    return mavlink_msg_winch_motor_alt_pack_chan(system_id, component_id, chan, msg, winch_motor_alt->target_system, winch_motor_alt->target_component, winch_motor_alt->alt_low, winch_motor_alt->alt_high, winch_motor_alt->ascend_lock_on, winch_motor_alt->descend_lock_on);
}

/**
 * @brief Encode a winch_motor_alt struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param winch_motor_alt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_motor_alt_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_winch_motor_alt_t* winch_motor_alt)
{
    return mavlink_msg_winch_motor_alt_pack_status(system_id, component_id, _status, msg,  winch_motor_alt->target_system, winch_motor_alt->target_component, winch_motor_alt->alt_low, winch_motor_alt->alt_high, winch_motor_alt->ascend_lock_on, winch_motor_alt->descend_lock_on);
}

/**
 * @brief Send a winch_motor_alt message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param alt_low  Altitude where winch motor enables torque.
 * @param alt_high  Altitude where winch motor maximizes torque.
 * @param ascend_lock_on  Motor block system switch on ascend.
 * @param descend_lock_on  Motor block system switch on descend
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_winch_motor_alt_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, float alt_low, float alt_high, uint8_t ascend_lock_on, uint8_t descend_lock_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN];
    _mav_put_float(buf, 0, alt_low);
    _mav_put_float(buf, 4, alt_high);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, ascend_lock_on);
    _mav_put_uint8_t(buf, 11, descend_lock_on);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_ALT, buf, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_CRC);
#else
    mavlink_winch_motor_alt_t packet;
    packet.alt_low = alt_low;
    packet.alt_high = alt_high;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.ascend_lock_on = ascend_lock_on;
    packet.descend_lock_on = descend_lock_on;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_ALT, (const char *)&packet, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_CRC);
#endif
}

/**
 * @brief Send a winch_motor_alt message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_winch_motor_alt_send_struct(mavlink_channel_t chan, const mavlink_winch_motor_alt_t* winch_motor_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_winch_motor_alt_send(chan, winch_motor_alt->target_system, winch_motor_alt->target_component, winch_motor_alt->alt_low, winch_motor_alt->alt_high, winch_motor_alt->ascend_lock_on, winch_motor_alt->descend_lock_on);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_ALT, (const char *)winch_motor_alt, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_CRC);
#endif
}

#if MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_winch_motor_alt_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, float alt_low, float alt_high, uint8_t ascend_lock_on, uint8_t descend_lock_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, alt_low);
    _mav_put_float(buf, 4, alt_high);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, ascend_lock_on);
    _mav_put_uint8_t(buf, 11, descend_lock_on);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_ALT, buf, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_CRC);
#else
    mavlink_winch_motor_alt_t *packet = (mavlink_winch_motor_alt_t *)msgbuf;
    packet->alt_low = alt_low;
    packet->alt_high = alt_high;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->ascend_lock_on = ascend_lock_on;
    packet->descend_lock_on = descend_lock_on;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_MOTOR_ALT, (const char *)packet, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_MIN_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_CRC);
#endif
}
#endif

#endif

// MESSAGE WINCH_MOTOR_ALT UNPACKING


/**
 * @brief Get field target_system from winch_motor_alt message
 *
 * @return  Target system ID.
 */
static inline uint8_t mavlink_msg_winch_motor_alt_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field target_component from winch_motor_alt message
 *
 * @return  Target component ID.
 */
static inline uint8_t mavlink_msg_winch_motor_alt_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field alt_low from winch_motor_alt message
 *
 * @return  Altitude where winch motor enables torque.
 */
static inline float mavlink_msg_winch_motor_alt_get_alt_low(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field alt_high from winch_motor_alt message
 *
 * @return  Altitude where winch motor maximizes torque.
 */
static inline float mavlink_msg_winch_motor_alt_get_alt_high(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field ascend_lock_on from winch_motor_alt message
 *
 * @return  Motor block system switch on ascend.
 */
static inline uint8_t mavlink_msg_winch_motor_alt_get_ascend_lock_on(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field descend_lock_on from winch_motor_alt message
 *
 * @return  Motor block system switch on descend
 */
static inline uint8_t mavlink_msg_winch_motor_alt_get_descend_lock_on(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Decode a winch_motor_alt message into a struct
 *
 * @param msg The message to decode
 * @param winch_motor_alt C-struct to decode the message contents into
 */
static inline void mavlink_msg_winch_motor_alt_decode(const mavlink_message_t* msg, mavlink_winch_motor_alt_t* winch_motor_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    winch_motor_alt->alt_low = mavlink_msg_winch_motor_alt_get_alt_low(msg);
    winch_motor_alt->alt_high = mavlink_msg_winch_motor_alt_get_alt_high(msg);
    winch_motor_alt->target_system = mavlink_msg_winch_motor_alt_get_target_system(msg);
    winch_motor_alt->target_component = mavlink_msg_winch_motor_alt_get_target_component(msg);
    winch_motor_alt->ascend_lock_on = mavlink_msg_winch_motor_alt_get_ascend_lock_on(msg);
    winch_motor_alt->descend_lock_on = mavlink_msg_winch_motor_alt_get_descend_lock_on(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN? msg->len : MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN;
        memset(winch_motor_alt, 0, MAVLINK_MSG_ID_WINCH_MOTOR_ALT_LEN);
    memcpy(winch_motor_alt, _MAV_PAYLOAD(msg), len);
#endif
}
