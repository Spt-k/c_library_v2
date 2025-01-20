#pragma once
// MESSAGE WINCH_DC_PWR PACKING

#define MAVLINK_MSG_ID_WINCH_DC_PWR 52500


typedef struct __mavlink_winch_dc_pwr_t {
 uint8_t target_system; /*<  Target system ID.*/
 uint8_t target_component; /*<  Target component ID.*/
 uint8_t power_enabled; /*<  DC power status.*/
} mavlink_winch_dc_pwr_t;

#define MAVLINK_MSG_ID_WINCH_DC_PWR_LEN 3
#define MAVLINK_MSG_ID_WINCH_DC_PWR_MIN_LEN 3
#define MAVLINK_MSG_ID_52500_LEN 3
#define MAVLINK_MSG_ID_52500_MIN_LEN 3

#define MAVLINK_MSG_ID_WINCH_DC_PWR_CRC 88
#define MAVLINK_MSG_ID_52500_CRC 88



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WINCH_DC_PWR { \
    52500, \
    "WINCH_DC_PWR", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_winch_dc_pwr_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_winch_dc_pwr_t, target_component) }, \
         { "power_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_winch_dc_pwr_t, power_enabled) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WINCH_DC_PWR { \
    "WINCH_DC_PWR", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_winch_dc_pwr_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_winch_dc_pwr_t, target_component) }, \
         { "power_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_winch_dc_pwr_t, power_enabled) }, \
         } \
}
#endif

/**
 * @brief Pack a winch_dc_pwr message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param power_enabled  DC power status.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_dc_pwr_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t power_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_DC_PWR_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, power_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN);
#else
    mavlink_winch_dc_pwr_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.power_enabled = power_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_DC_PWR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WINCH_DC_PWR_MIN_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_CRC);
}

/**
 * @brief Pack a winch_dc_pwr message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param power_enabled  DC power status.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_dc_pwr_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t power_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_DC_PWR_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, power_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN);
#else
    mavlink_winch_dc_pwr_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.power_enabled = power_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_DC_PWR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_DC_PWR_MIN_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_DC_PWR_MIN_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN);
#endif
}

/**
 * @brief Pack a winch_dc_pwr message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param power_enabled  DC power status.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_dc_pwr_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t power_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_DC_PWR_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, power_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN);
#else
    mavlink_winch_dc_pwr_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.power_enabled = power_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_DC_PWR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WINCH_DC_PWR_MIN_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_CRC);
}

/**
 * @brief Encode a winch_dc_pwr struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param winch_dc_pwr C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_dc_pwr_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_winch_dc_pwr_t* winch_dc_pwr)
{
    return mavlink_msg_winch_dc_pwr_pack(system_id, component_id, msg, winch_dc_pwr->target_system, winch_dc_pwr->target_component, winch_dc_pwr->power_enabled);
}

/**
 * @brief Encode a winch_dc_pwr struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param winch_dc_pwr C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_dc_pwr_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_winch_dc_pwr_t* winch_dc_pwr)
{
    return mavlink_msg_winch_dc_pwr_pack_chan(system_id, component_id, chan, msg, winch_dc_pwr->target_system, winch_dc_pwr->target_component, winch_dc_pwr->power_enabled);
}

/**
 * @brief Encode a winch_dc_pwr struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param winch_dc_pwr C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_dc_pwr_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_winch_dc_pwr_t* winch_dc_pwr)
{
    return mavlink_msg_winch_dc_pwr_pack_status(system_id, component_id, _status, msg,  winch_dc_pwr->target_system, winch_dc_pwr->target_component, winch_dc_pwr->power_enabled);
}

/**
 * @brief Send a winch_dc_pwr message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param power_enabled  DC power status.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_winch_dc_pwr_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t power_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_DC_PWR_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, power_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_DC_PWR, buf, MAVLINK_MSG_ID_WINCH_DC_PWR_MIN_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_CRC);
#else
    mavlink_winch_dc_pwr_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.power_enabled = power_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_DC_PWR, (const char *)&packet, MAVLINK_MSG_ID_WINCH_DC_PWR_MIN_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_CRC);
#endif
}

/**
 * @brief Send a winch_dc_pwr message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_winch_dc_pwr_send_struct(mavlink_channel_t chan, const mavlink_winch_dc_pwr_t* winch_dc_pwr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_winch_dc_pwr_send(chan, winch_dc_pwr->target_system, winch_dc_pwr->target_component, winch_dc_pwr->power_enabled);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_DC_PWR, (const char *)winch_dc_pwr, MAVLINK_MSG_ID_WINCH_DC_PWR_MIN_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_CRC);
#endif
}

#if MAVLINK_MSG_ID_WINCH_DC_PWR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_winch_dc_pwr_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t power_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, power_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_DC_PWR, buf, MAVLINK_MSG_ID_WINCH_DC_PWR_MIN_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_CRC);
#else
    mavlink_winch_dc_pwr_t *packet = (mavlink_winch_dc_pwr_t *)msgbuf;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->power_enabled = power_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_DC_PWR, (const char *)packet, MAVLINK_MSG_ID_WINCH_DC_PWR_MIN_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN, MAVLINK_MSG_ID_WINCH_DC_PWR_CRC);
#endif
}
#endif

#endif

// MESSAGE WINCH_DC_PWR UNPACKING


/**
 * @brief Get field target_system from winch_dc_pwr message
 *
 * @return  Target system ID.
 */
static inline uint8_t mavlink_msg_winch_dc_pwr_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from winch_dc_pwr message
 *
 * @return  Target component ID.
 */
static inline uint8_t mavlink_msg_winch_dc_pwr_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field power_enabled from winch_dc_pwr message
 *
 * @return  DC power status.
 */
static inline uint8_t mavlink_msg_winch_dc_pwr_get_power_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a winch_dc_pwr message into a struct
 *
 * @param msg The message to decode
 * @param winch_dc_pwr C-struct to decode the message contents into
 */
static inline void mavlink_msg_winch_dc_pwr_decode(const mavlink_message_t* msg, mavlink_winch_dc_pwr_t* winch_dc_pwr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    winch_dc_pwr->target_system = mavlink_msg_winch_dc_pwr_get_target_system(msg);
    winch_dc_pwr->target_component = mavlink_msg_winch_dc_pwr_get_target_component(msg);
    winch_dc_pwr->power_enabled = mavlink_msg_winch_dc_pwr_get_power_enabled(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WINCH_DC_PWR_LEN? msg->len : MAVLINK_MSG_ID_WINCH_DC_PWR_LEN;
        memset(winch_dc_pwr, 0, MAVLINK_MSG_ID_WINCH_DC_PWR_LEN);
    memcpy(winch_dc_pwr, _MAV_PAYLOAD(msg), len);
#endif
}
