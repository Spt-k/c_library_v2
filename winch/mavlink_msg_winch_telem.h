#pragma once
// MESSAGE WINCH_TELEM PACKING

#define MAVLINK_MSG_ID_WINCH_TELEM 52503


typedef struct __mavlink_winch_telem_t {
 float cable_released; /*<  How much cable was released.*/
 float reserve_charge; /*<  Reserve battery voltage.*/
 uint8_t target_system; /*<  Target system ID.*/
 uint8_t target_component; /*<  Target component ID.*/
 uint8_t dc_status; /*<  DC status.*/
 uint8_t ac_status; /*<  AC status.*/
 uint8_t torque_min; /*<  Minimum motor torque.*/
 uint8_t torque_max; /*<  Maximum motor torque.*/
} mavlink_winch_telem_t;

#define MAVLINK_MSG_ID_WINCH_TELEM_LEN 14
#define MAVLINK_MSG_ID_WINCH_TELEM_MIN_LEN 14
#define MAVLINK_MSG_ID_52503_LEN 14
#define MAVLINK_MSG_ID_52503_MIN_LEN 14

#define MAVLINK_MSG_ID_WINCH_TELEM_CRC 243
#define MAVLINK_MSG_ID_52503_CRC 243



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WINCH_TELEM { \
    52503, \
    "WINCH_TELEM", \
    8, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_winch_telem_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_winch_telem_t, target_component) }, \
         { "cable_released", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_winch_telem_t, cable_released) }, \
         { "reserve_charge", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_winch_telem_t, reserve_charge) }, \
         { "dc_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_winch_telem_t, dc_status) }, \
         { "ac_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_winch_telem_t, ac_status) }, \
         { "torque_min", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_winch_telem_t, torque_min) }, \
         { "torque_max", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_winch_telem_t, torque_max) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WINCH_TELEM { \
    "WINCH_TELEM", \
    8, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_winch_telem_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_winch_telem_t, target_component) }, \
         { "cable_released", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_winch_telem_t, cable_released) }, \
         { "reserve_charge", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_winch_telem_t, reserve_charge) }, \
         { "dc_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_winch_telem_t, dc_status) }, \
         { "ac_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_winch_telem_t, ac_status) }, \
         { "torque_min", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_winch_telem_t, torque_min) }, \
         { "torque_max", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_winch_telem_t, torque_max) }, \
         } \
}
#endif

/**
 * @brief Pack a winch_telem message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param cable_released  How much cable was released.
 * @param reserve_charge  Reserve battery voltage.
 * @param dc_status  DC status.
 * @param ac_status  AC status.
 * @param torque_min  Minimum motor torque.
 * @param torque_max  Maximum motor torque.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_telem_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, float cable_released, float reserve_charge, uint8_t dc_status, uint8_t ac_status, uint8_t torque_min, uint8_t torque_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_TELEM_LEN];
    _mav_put_float(buf, 0, cable_released);
    _mav_put_float(buf, 4, reserve_charge);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, dc_status);
    _mav_put_uint8_t(buf, 11, ac_status);
    _mav_put_uint8_t(buf, 12, torque_min);
    _mav_put_uint8_t(buf, 13, torque_max);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_TELEM_LEN);
#else
    mavlink_winch_telem_t packet;
    packet.cable_released = cable_released;
    packet.reserve_charge = reserve_charge;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.dc_status = dc_status;
    packet.ac_status = ac_status;
    packet.torque_min = torque_min;
    packet.torque_max = torque_max;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_TELEM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_TELEM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WINCH_TELEM_MIN_LEN, MAVLINK_MSG_ID_WINCH_TELEM_LEN, MAVLINK_MSG_ID_WINCH_TELEM_CRC);
}

/**
 * @brief Pack a winch_telem message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param cable_released  How much cable was released.
 * @param reserve_charge  Reserve battery voltage.
 * @param dc_status  DC status.
 * @param ac_status  AC status.
 * @param torque_min  Minimum motor torque.
 * @param torque_max  Maximum motor torque.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_telem_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, float cable_released, float reserve_charge, uint8_t dc_status, uint8_t ac_status, uint8_t torque_min, uint8_t torque_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_TELEM_LEN];
    _mav_put_float(buf, 0, cable_released);
    _mav_put_float(buf, 4, reserve_charge);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, dc_status);
    _mav_put_uint8_t(buf, 11, ac_status);
    _mav_put_uint8_t(buf, 12, torque_min);
    _mav_put_uint8_t(buf, 13, torque_max);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_TELEM_LEN);
#else
    mavlink_winch_telem_t packet;
    packet.cable_released = cable_released;
    packet.reserve_charge = reserve_charge;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.dc_status = dc_status;
    packet.ac_status = ac_status;
    packet.torque_min = torque_min;
    packet.torque_max = torque_max;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_TELEM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_TELEM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_TELEM_MIN_LEN, MAVLINK_MSG_ID_WINCH_TELEM_LEN, MAVLINK_MSG_ID_WINCH_TELEM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WINCH_TELEM_MIN_LEN, MAVLINK_MSG_ID_WINCH_TELEM_LEN);
#endif
}

/**
 * @brief Pack a winch_telem message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param cable_released  How much cable was released.
 * @param reserve_charge  Reserve battery voltage.
 * @param dc_status  DC status.
 * @param ac_status  AC status.
 * @param torque_min  Minimum motor torque.
 * @param torque_max  Maximum motor torque.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_winch_telem_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,float cable_released,float reserve_charge,uint8_t dc_status,uint8_t ac_status,uint8_t torque_min,uint8_t torque_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_TELEM_LEN];
    _mav_put_float(buf, 0, cable_released);
    _mav_put_float(buf, 4, reserve_charge);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, dc_status);
    _mav_put_uint8_t(buf, 11, ac_status);
    _mav_put_uint8_t(buf, 12, torque_min);
    _mav_put_uint8_t(buf, 13, torque_max);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WINCH_TELEM_LEN);
#else
    mavlink_winch_telem_t packet;
    packet.cable_released = cable_released;
    packet.reserve_charge = reserve_charge;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.dc_status = dc_status;
    packet.ac_status = ac_status;
    packet.torque_min = torque_min;
    packet.torque_max = torque_max;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WINCH_TELEM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WINCH_TELEM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WINCH_TELEM_MIN_LEN, MAVLINK_MSG_ID_WINCH_TELEM_LEN, MAVLINK_MSG_ID_WINCH_TELEM_CRC);
}

/**
 * @brief Encode a winch_telem struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param winch_telem C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_telem_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_winch_telem_t* winch_telem)
{
    return mavlink_msg_winch_telem_pack(system_id, component_id, msg, winch_telem->target_system, winch_telem->target_component, winch_telem->cable_released, winch_telem->reserve_charge, winch_telem->dc_status, winch_telem->ac_status, winch_telem->torque_min, winch_telem->torque_max);
}

/**
 * @brief Encode a winch_telem struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param winch_telem C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_telem_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_winch_telem_t* winch_telem)
{
    return mavlink_msg_winch_telem_pack_chan(system_id, component_id, chan, msg, winch_telem->target_system, winch_telem->target_component, winch_telem->cable_released, winch_telem->reserve_charge, winch_telem->dc_status, winch_telem->ac_status, winch_telem->torque_min, winch_telem->torque_max);
}

/**
 * @brief Encode a winch_telem struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param winch_telem C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_winch_telem_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_winch_telem_t* winch_telem)
{
    return mavlink_msg_winch_telem_pack_status(system_id, component_id, _status, msg,  winch_telem->target_system, winch_telem->target_component, winch_telem->cable_released, winch_telem->reserve_charge, winch_telem->dc_status, winch_telem->ac_status, winch_telem->torque_min, winch_telem->torque_max);
}

/**
 * @brief Send a winch_telem message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param cable_released  How much cable was released.
 * @param reserve_charge  Reserve battery voltage.
 * @param dc_status  DC status.
 * @param ac_status  AC status.
 * @param torque_min  Minimum motor torque.
 * @param torque_max  Maximum motor torque.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_winch_telem_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, float cable_released, float reserve_charge, uint8_t dc_status, uint8_t ac_status, uint8_t torque_min, uint8_t torque_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WINCH_TELEM_LEN];
    _mav_put_float(buf, 0, cable_released);
    _mav_put_float(buf, 4, reserve_charge);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, dc_status);
    _mav_put_uint8_t(buf, 11, ac_status);
    _mav_put_uint8_t(buf, 12, torque_min);
    _mav_put_uint8_t(buf, 13, torque_max);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_TELEM, buf, MAVLINK_MSG_ID_WINCH_TELEM_MIN_LEN, MAVLINK_MSG_ID_WINCH_TELEM_LEN, MAVLINK_MSG_ID_WINCH_TELEM_CRC);
#else
    mavlink_winch_telem_t packet;
    packet.cable_released = cable_released;
    packet.reserve_charge = reserve_charge;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.dc_status = dc_status;
    packet.ac_status = ac_status;
    packet.torque_min = torque_min;
    packet.torque_max = torque_max;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_TELEM, (const char *)&packet, MAVLINK_MSG_ID_WINCH_TELEM_MIN_LEN, MAVLINK_MSG_ID_WINCH_TELEM_LEN, MAVLINK_MSG_ID_WINCH_TELEM_CRC);
#endif
}

/**
 * @brief Send a winch_telem message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_winch_telem_send_struct(mavlink_channel_t chan, const mavlink_winch_telem_t* winch_telem)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_winch_telem_send(chan, winch_telem->target_system, winch_telem->target_component, winch_telem->cable_released, winch_telem->reserve_charge, winch_telem->dc_status, winch_telem->ac_status, winch_telem->torque_min, winch_telem->torque_max);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_TELEM, (const char *)winch_telem, MAVLINK_MSG_ID_WINCH_TELEM_MIN_LEN, MAVLINK_MSG_ID_WINCH_TELEM_LEN, MAVLINK_MSG_ID_WINCH_TELEM_CRC);
#endif
}

#if MAVLINK_MSG_ID_WINCH_TELEM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_winch_telem_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, float cable_released, float reserve_charge, uint8_t dc_status, uint8_t ac_status, uint8_t torque_min, uint8_t torque_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, cable_released);
    _mav_put_float(buf, 4, reserve_charge);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, dc_status);
    _mav_put_uint8_t(buf, 11, ac_status);
    _mav_put_uint8_t(buf, 12, torque_min);
    _mav_put_uint8_t(buf, 13, torque_max);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_TELEM, buf, MAVLINK_MSG_ID_WINCH_TELEM_MIN_LEN, MAVLINK_MSG_ID_WINCH_TELEM_LEN, MAVLINK_MSG_ID_WINCH_TELEM_CRC);
#else
    mavlink_winch_telem_t *packet = (mavlink_winch_telem_t *)msgbuf;
    packet->cable_released = cable_released;
    packet->reserve_charge = reserve_charge;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->dc_status = dc_status;
    packet->ac_status = ac_status;
    packet->torque_min = torque_min;
    packet->torque_max = torque_max;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WINCH_TELEM, (const char *)packet, MAVLINK_MSG_ID_WINCH_TELEM_MIN_LEN, MAVLINK_MSG_ID_WINCH_TELEM_LEN, MAVLINK_MSG_ID_WINCH_TELEM_CRC);
#endif
}
#endif

#endif

// MESSAGE WINCH_TELEM UNPACKING


/**
 * @brief Get field target_system from winch_telem message
 *
 * @return  Target system ID.
 */
static inline uint8_t mavlink_msg_winch_telem_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field target_component from winch_telem message
 *
 * @return  Target component ID.
 */
static inline uint8_t mavlink_msg_winch_telem_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field cable_released from winch_telem message
 *
 * @return  How much cable was released.
 */
static inline float mavlink_msg_winch_telem_get_cable_released(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field reserve_charge from winch_telem message
 *
 * @return  Reserve battery voltage.
 */
static inline float mavlink_msg_winch_telem_get_reserve_charge(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field dc_status from winch_telem message
 *
 * @return  DC status.
 */
static inline uint8_t mavlink_msg_winch_telem_get_dc_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field ac_status from winch_telem message
 *
 * @return  AC status.
 */
static inline uint8_t mavlink_msg_winch_telem_get_ac_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field torque_min from winch_telem message
 *
 * @return  Minimum motor torque.
 */
static inline uint8_t mavlink_msg_winch_telem_get_torque_min(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field torque_max from winch_telem message
 *
 * @return  Maximum motor torque.
 */
static inline uint8_t mavlink_msg_winch_telem_get_torque_max(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Decode a winch_telem message into a struct
 *
 * @param msg The message to decode
 * @param winch_telem C-struct to decode the message contents into
 */
static inline void mavlink_msg_winch_telem_decode(const mavlink_message_t* msg, mavlink_winch_telem_t* winch_telem)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    winch_telem->cable_released = mavlink_msg_winch_telem_get_cable_released(msg);
    winch_telem->reserve_charge = mavlink_msg_winch_telem_get_reserve_charge(msg);
    winch_telem->target_system = mavlink_msg_winch_telem_get_target_system(msg);
    winch_telem->target_component = mavlink_msg_winch_telem_get_target_component(msg);
    winch_telem->dc_status = mavlink_msg_winch_telem_get_dc_status(msg);
    winch_telem->ac_status = mavlink_msg_winch_telem_get_ac_status(msg);
    winch_telem->torque_min = mavlink_msg_winch_telem_get_torque_min(msg);
    winch_telem->torque_max = mavlink_msg_winch_telem_get_torque_max(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WINCH_TELEM_LEN? msg->len : MAVLINK_MSG_ID_WINCH_TELEM_LEN;
        memset(winch_telem, 0, MAVLINK_MSG_ID_WINCH_TELEM_LEN);
    memcpy(winch_telem, _MAV_PAYLOAD(msg), len);
#endif
}
