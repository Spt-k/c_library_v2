#pragma once
// MESSAGE BG_SV_STPT PACKING

#define MAVLINK_MSG_ID_BG_SV_STPT 52507


typedef struct __mavlink_bg_sv_stpt_t {
 float pitch_offset; /*<  Pitch offset*/
 float yaw_offset; /*<  Yaw offset*/
 float pitch; /*<  Desired pitch*/
 float yaw; /*<  Desired yaw*/
 uint8_t target_system; /*<  Target system ID.*/
 uint8_t target_component; /*<  Target component ID.*/
 uint8_t servo_id; /*<  Target servo ID*/
} mavlink_bg_sv_stpt_t;

#define MAVLINK_MSG_ID_BG_SV_STPT_LEN 19
#define MAVLINK_MSG_ID_BG_SV_STPT_MIN_LEN 19
#define MAVLINK_MSG_ID_52507_LEN 19
#define MAVLINK_MSG_ID_52507_MIN_LEN 19

#define MAVLINK_MSG_ID_BG_SV_STPT_CRC 217
#define MAVLINK_MSG_ID_52507_CRC 217



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BG_SV_STPT { \
    52507, \
    "BG_SV_STPT", \
    7, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_bg_sv_stpt_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_bg_sv_stpt_t, target_component) }, \
         { "servo_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_bg_sv_stpt_t, servo_id) }, \
         { "pitch_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_bg_sv_stpt_t, pitch_offset) }, \
         { "yaw_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_bg_sv_stpt_t, yaw_offset) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_bg_sv_stpt_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_bg_sv_stpt_t, yaw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BG_SV_STPT { \
    "BG_SV_STPT", \
    7, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_bg_sv_stpt_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_bg_sv_stpt_t, target_component) }, \
         { "servo_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_bg_sv_stpt_t, servo_id) }, \
         { "pitch_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_bg_sv_stpt_t, pitch_offset) }, \
         { "yaw_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_bg_sv_stpt_t, yaw_offset) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_bg_sv_stpt_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_bg_sv_stpt_t, yaw) }, \
         } \
}
#endif

/**
 * @brief Pack a bg_sv_stpt message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param servo_id  Target servo ID
 * @param pitch_offset  Pitch offset
 * @param yaw_offset  Yaw offset
 * @param pitch  Desired pitch
 * @param yaw  Desired yaw
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bg_sv_stpt_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t servo_id, float pitch_offset, float yaw_offset, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BG_SV_STPT_LEN];
    _mav_put_float(buf, 0, pitch_offset);
    _mav_put_float(buf, 4, yaw_offset);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_uint8_t(buf, 16, target_system);
    _mav_put_uint8_t(buf, 17, target_component);
    _mav_put_uint8_t(buf, 18, servo_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BG_SV_STPT_LEN);
#else
    mavlink_bg_sv_stpt_t packet;
    packet.pitch_offset = pitch_offset;
    packet.yaw_offset = yaw_offset;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.servo_id = servo_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BG_SV_STPT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BG_SV_STPT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BG_SV_STPT_MIN_LEN, MAVLINK_MSG_ID_BG_SV_STPT_LEN, MAVLINK_MSG_ID_BG_SV_STPT_CRC);
}

/**
 * @brief Pack a bg_sv_stpt message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param servo_id  Target servo ID
 * @param pitch_offset  Pitch offset
 * @param yaw_offset  Yaw offset
 * @param pitch  Desired pitch
 * @param yaw  Desired yaw
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bg_sv_stpt_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t servo_id, float pitch_offset, float yaw_offset, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BG_SV_STPT_LEN];
    _mav_put_float(buf, 0, pitch_offset);
    _mav_put_float(buf, 4, yaw_offset);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_uint8_t(buf, 16, target_system);
    _mav_put_uint8_t(buf, 17, target_component);
    _mav_put_uint8_t(buf, 18, servo_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BG_SV_STPT_LEN);
#else
    mavlink_bg_sv_stpt_t packet;
    packet.pitch_offset = pitch_offset;
    packet.yaw_offset = yaw_offset;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.servo_id = servo_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BG_SV_STPT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BG_SV_STPT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_BG_SV_STPT_MIN_LEN, MAVLINK_MSG_ID_BG_SV_STPT_LEN, MAVLINK_MSG_ID_BG_SV_STPT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_BG_SV_STPT_MIN_LEN, MAVLINK_MSG_ID_BG_SV_STPT_LEN);
#endif
}

/**
 * @brief Pack a bg_sv_stpt message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param servo_id  Target servo ID
 * @param pitch_offset  Pitch offset
 * @param yaw_offset  Yaw offset
 * @param pitch  Desired pitch
 * @param yaw  Desired yaw
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bg_sv_stpt_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t servo_id,float pitch_offset,float yaw_offset,float pitch,float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BG_SV_STPT_LEN];
    _mav_put_float(buf, 0, pitch_offset);
    _mav_put_float(buf, 4, yaw_offset);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_uint8_t(buf, 16, target_system);
    _mav_put_uint8_t(buf, 17, target_component);
    _mav_put_uint8_t(buf, 18, servo_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BG_SV_STPT_LEN);
#else
    mavlink_bg_sv_stpt_t packet;
    packet.pitch_offset = pitch_offset;
    packet.yaw_offset = yaw_offset;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.servo_id = servo_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BG_SV_STPT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BG_SV_STPT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BG_SV_STPT_MIN_LEN, MAVLINK_MSG_ID_BG_SV_STPT_LEN, MAVLINK_MSG_ID_BG_SV_STPT_CRC);
}

/**
 * @brief Encode a bg_sv_stpt struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bg_sv_stpt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bg_sv_stpt_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bg_sv_stpt_t* bg_sv_stpt)
{
    return mavlink_msg_bg_sv_stpt_pack(system_id, component_id, msg, bg_sv_stpt->target_system, bg_sv_stpt->target_component, bg_sv_stpt->servo_id, bg_sv_stpt->pitch_offset, bg_sv_stpt->yaw_offset, bg_sv_stpt->pitch, bg_sv_stpt->yaw);
}

/**
 * @brief Encode a bg_sv_stpt struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bg_sv_stpt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bg_sv_stpt_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bg_sv_stpt_t* bg_sv_stpt)
{
    return mavlink_msg_bg_sv_stpt_pack_chan(system_id, component_id, chan, msg, bg_sv_stpt->target_system, bg_sv_stpt->target_component, bg_sv_stpt->servo_id, bg_sv_stpt->pitch_offset, bg_sv_stpt->yaw_offset, bg_sv_stpt->pitch, bg_sv_stpt->yaw);
}

/**
 * @brief Encode a bg_sv_stpt struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param bg_sv_stpt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bg_sv_stpt_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_bg_sv_stpt_t* bg_sv_stpt)
{
    return mavlink_msg_bg_sv_stpt_pack_status(system_id, component_id, _status, msg,  bg_sv_stpt->target_system, bg_sv_stpt->target_component, bg_sv_stpt->servo_id, bg_sv_stpt->pitch_offset, bg_sv_stpt->yaw_offset, bg_sv_stpt->pitch, bg_sv_stpt->yaw);
}

/**
 * @brief Send a bg_sv_stpt message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID.
 * @param servo_id  Target servo ID
 * @param pitch_offset  Pitch offset
 * @param yaw_offset  Yaw offset
 * @param pitch  Desired pitch
 * @param yaw  Desired yaw
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bg_sv_stpt_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t servo_id, float pitch_offset, float yaw_offset, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BG_SV_STPT_LEN];
    _mav_put_float(buf, 0, pitch_offset);
    _mav_put_float(buf, 4, yaw_offset);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_uint8_t(buf, 16, target_system);
    _mav_put_uint8_t(buf, 17, target_component);
    _mav_put_uint8_t(buf, 18, servo_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BG_SV_STPT, buf, MAVLINK_MSG_ID_BG_SV_STPT_MIN_LEN, MAVLINK_MSG_ID_BG_SV_STPT_LEN, MAVLINK_MSG_ID_BG_SV_STPT_CRC);
#else
    mavlink_bg_sv_stpt_t packet;
    packet.pitch_offset = pitch_offset;
    packet.yaw_offset = yaw_offset;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.servo_id = servo_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BG_SV_STPT, (const char *)&packet, MAVLINK_MSG_ID_BG_SV_STPT_MIN_LEN, MAVLINK_MSG_ID_BG_SV_STPT_LEN, MAVLINK_MSG_ID_BG_SV_STPT_CRC);
#endif
}

/**
 * @brief Send a bg_sv_stpt message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_bg_sv_stpt_send_struct(mavlink_channel_t chan, const mavlink_bg_sv_stpt_t* bg_sv_stpt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bg_sv_stpt_send(chan, bg_sv_stpt->target_system, bg_sv_stpt->target_component, bg_sv_stpt->servo_id, bg_sv_stpt->pitch_offset, bg_sv_stpt->yaw_offset, bg_sv_stpt->pitch, bg_sv_stpt->yaw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BG_SV_STPT, (const char *)bg_sv_stpt, MAVLINK_MSG_ID_BG_SV_STPT_MIN_LEN, MAVLINK_MSG_ID_BG_SV_STPT_LEN, MAVLINK_MSG_ID_BG_SV_STPT_CRC);
#endif
}

#if MAVLINK_MSG_ID_BG_SV_STPT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bg_sv_stpt_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t servo_id, float pitch_offset, float yaw_offset, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, pitch_offset);
    _mav_put_float(buf, 4, yaw_offset);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_uint8_t(buf, 16, target_system);
    _mav_put_uint8_t(buf, 17, target_component);
    _mav_put_uint8_t(buf, 18, servo_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BG_SV_STPT, buf, MAVLINK_MSG_ID_BG_SV_STPT_MIN_LEN, MAVLINK_MSG_ID_BG_SV_STPT_LEN, MAVLINK_MSG_ID_BG_SV_STPT_CRC);
#else
    mavlink_bg_sv_stpt_t *packet = (mavlink_bg_sv_stpt_t *)msgbuf;
    packet->pitch_offset = pitch_offset;
    packet->yaw_offset = yaw_offset;
    packet->pitch = pitch;
    packet->yaw = yaw;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->servo_id = servo_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BG_SV_STPT, (const char *)packet, MAVLINK_MSG_ID_BG_SV_STPT_MIN_LEN, MAVLINK_MSG_ID_BG_SV_STPT_LEN, MAVLINK_MSG_ID_BG_SV_STPT_CRC);
#endif
}
#endif

#endif

// MESSAGE BG_SV_STPT UNPACKING


/**
 * @brief Get field target_system from bg_sv_stpt message
 *
 * @return  Target system ID.
 */
static inline uint8_t mavlink_msg_bg_sv_stpt_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field target_component from bg_sv_stpt message
 *
 * @return  Target component ID.
 */
static inline uint8_t mavlink_msg_bg_sv_stpt_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field servo_id from bg_sv_stpt message
 *
 * @return  Target servo ID
 */
static inline uint8_t mavlink_msg_bg_sv_stpt_get_servo_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field pitch_offset from bg_sv_stpt message
 *
 * @return  Pitch offset
 */
static inline float mavlink_msg_bg_sv_stpt_get_pitch_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field yaw_offset from bg_sv_stpt message
 *
 * @return  Yaw offset
 */
static inline float mavlink_msg_bg_sv_stpt_get_yaw_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitch from bg_sv_stpt message
 *
 * @return  Desired pitch
 */
static inline float mavlink_msg_bg_sv_stpt_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw from bg_sv_stpt message
 *
 * @return  Desired yaw
 */
static inline float mavlink_msg_bg_sv_stpt_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a bg_sv_stpt message into a struct
 *
 * @param msg The message to decode
 * @param bg_sv_stpt C-struct to decode the message contents into
 */
static inline void mavlink_msg_bg_sv_stpt_decode(const mavlink_message_t* msg, mavlink_bg_sv_stpt_t* bg_sv_stpt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    bg_sv_stpt->pitch_offset = mavlink_msg_bg_sv_stpt_get_pitch_offset(msg);
    bg_sv_stpt->yaw_offset = mavlink_msg_bg_sv_stpt_get_yaw_offset(msg);
    bg_sv_stpt->pitch = mavlink_msg_bg_sv_stpt_get_pitch(msg);
    bg_sv_stpt->yaw = mavlink_msg_bg_sv_stpt_get_yaw(msg);
    bg_sv_stpt->target_system = mavlink_msg_bg_sv_stpt_get_target_system(msg);
    bg_sv_stpt->target_component = mavlink_msg_bg_sv_stpt_get_target_component(msg);
    bg_sv_stpt->servo_id = mavlink_msg_bg_sv_stpt_get_servo_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BG_SV_STPT_LEN? msg->len : MAVLINK_MSG_ID_BG_SV_STPT_LEN;
        memset(bg_sv_stpt, 0, MAVLINK_MSG_ID_BG_SV_STPT_LEN);
    memcpy(bg_sv_stpt, _MAV_PAYLOAD(msg), len);
#endif
}
