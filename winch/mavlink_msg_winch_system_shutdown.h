#pragma once
// MESSAGE WINCH_SYSTEM_SHUTDOWN PACKING

#define MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN 52506


typedef struct __mavlink_winch_system_shutdown_t {
 uint8_t target_system; /*<  Target system ID.*/
 uint8_t target_component; /*<  Target component ID.*/
 uint8_t shutdown_status; /*<  Shutdown status*/
} mavlink_winch_system_shutdown_t;

#define MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN 3
#define MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_MIN_LEN 3
#define MAVLINK_MSG_ID_52506_LEN 3
#define MAVLINK_MSG_ID_52506_MIN_LEN 3

#define MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_CRC 107
#define MAVLINK_MSG_ID_52506_CRC 107



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WINCH_SYSTEM_SHUTDOWN { \
    52506, \
    "WINCH_SYSTEM_SHUTDOWN", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_winch_system_shutdown_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_winch_system_shutdown_t, target_component) }, \
         { "shutdown_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_winch_system_shutdown_t, shutdown_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WINCH_SYSTEM_SHUTDOWN { \
    "WINCH_SYSTEM_SHUTDOWN", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_winch_system_shutdown_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_winch_system_shutdown_t, target_component) }, \
         { "shutdown_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_winch_system_shutdown_t, shutdown_status) }, \
         } \
}
#endif

/**
 * @brief Pack a winch_system_shutdown message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param shutdown_status  Shutdown status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_system_shutdown_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t shutdown_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, shutdown_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN);
#else
    mavlink_winch_system_shutdown_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.shutdown_status = shutdown_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_MIN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_CRC);
}

/**
 * @brief Pack a winch_system_shutdown message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param shutdown_status  Shutdown status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_system_shutdown_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t shutdown_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, shutdown_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN);
#else
    mavlink_winch_system_shutdown_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.shutdown_status = shutdown_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_MIN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_MIN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN);
#endif
}

/**
 * @brief Pack a winch_system_shutdown message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param shutdown_status  Shutdown status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_system_shutdown_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t shutdown_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, shutdown_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN);
#else
    mavlink_winch_system_shutdown_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.shutdown_status = shutdown_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_MIN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_CRC);
}

/**
 * @brief Encode a winch_system_shutdown struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param winch_system_shutdown C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_system_shutdown_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_winch_system_shutdown_t* winch_system_shutdown)
{
    return mavlink_msg_winch_system_shutdown_pack(system_id, component_id, msg, winch_system_shutdown->target_system, winch_system_shutdown->target_component, winch_system_shutdown->shutdown_status);
}

/**
 * @brief Encode a winch_system_shutdown struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param winch_system_shutdown C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_system_shutdown_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_winch_system_shutdown_t* winch_system_shutdown)
{
    return mavlink_msg_winch_system_shutdown_pack_chan(system_id, component_id, chan, msg, winch_system_shutdown->target_system, winch_system_shutdown->target_component, winch_system_shutdown->shutdown_status);
}

/**
 * @brief Encode a winch_system_shutdown struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param winch_system_shutdown C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_system_shutdown_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_winch_system_shutdown_t* winch_system_shutdown)
{
    return mavlink_msg_winch_system_shutdown_pack_status(system_id, component_id, _status, msg,  winch_system_shutdown->target_system, winch_system_shutdown->target_component, winch_system_shutdown->shutdown_status);
}

/**
 * @brief Send a winch_system_shutdown message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param shutdown_status  Shutdown status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_winch_system_shutdown_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t shutdown_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, shutdown_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN, buf, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_MIN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_CRC);
#else
    mavlink_winch_system_shutdown_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.shutdown_status = shutdown_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN, (const char *)&packet, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_MIN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_CRC);
#endif
}

/**
 * @brief Send a winch_system_shutdown message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_winch_system_shutdown_send_struct(mavlink_channel_t chan, const mavlink_winch_system_shutdown_t* winch_system_shutdown)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_winch_system_shutdown_send(chan, winch_system_shutdown->target_system, winch_system_shutdown->target_component, winch_system_shutdown->shutdown_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN, (const char *)winch_system_shutdown, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_MIN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_CRC);
#endif
}

#if MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_winch_system_shutdown_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t shutdown_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, shutdown_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN, buf, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_MIN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_CRC);
#else
    mavlink_winch_system_shutdown_t *packet = (mavlink_winch_system_shutdown_t *)msgbuf;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->shutdown_status = shutdown_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN, (const char *)packet, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_MIN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_CRC);
#endif
}
#endif

#endif

// MESSAGE WINCH_SYSTEM_SHUTDOWN UNPACKING


/**
 * @brief Get field target_system from winch_system_shutdown message
 *
 * @return  Target system ID.
 */
static inline uint8_t mavlink_msg_winch_system_shutdown_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from winch_system_shutdown message
 *
 * @return  Target component ID.
 */
static inline uint8_t mavlink_msg_winch_system_shutdown_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field shutdown_status from winch_system_shutdown message
 *
 * @return  Shutdown status
 */
static inline uint8_t mavlink_msg_winch_system_shutdown_get_shutdown_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a winch_system_shutdown message into a struct
 *
 * @param msg The message to decode
 * @param winch_system_shutdown C-struct to decode the message contents into
 */
static inline void mavlink_msg_winch_system_shutdown_decode(const mavlink_message_t* msg, mavlink_winch_system_shutdown_t* winch_system_shutdown)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    winch_system_shutdown->target_system = mavlink_msg_winch_system_shutdown_get_target_system(msg);
    winch_system_shutdown->target_component = mavlink_msg_winch_system_shutdown_get_target_component(msg);
    winch_system_shutdown->shutdown_status = mavlink_msg_winch_system_shutdown_get_shutdown_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN? msg->len : MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN;
        memset(winch_system_shutdown, 0, MAVLINK_MSG_ID_WINCH_SYSTEM_SHUTDOWN_LEN);
    memcpy(winch_system_shutdown, _MAV_PAYLOAD(msg), len);
#endif
}
