// Generated by gencpp from file imu_single_uwb/IotFrame0Node.msg
// DO NOT EDIT!


#ifndef IMU_SINGLE_UWB_MESSAGE_IOTFRAME0NODE_H
#define IMU_SINGLE_UWB_MESSAGE_IOTFRAME0NODE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace imu_single_uwb
{
template <class ContainerAllocator>
struct IotFrame0Node_
{
  typedef IotFrame0Node_<ContainerAllocator> Type;

  IotFrame0Node_()
    : uid(0)
    , dis(0.0)
    , aoa_angle_horizontal(0.0)
    , aoa_angle_vertical(0.0)
    , fp_rssi(0.0)
    , rx_rssi(0.0)
    , user_data()  {
    }
  IotFrame0Node_(const ContainerAllocator& _alloc)
    : uid(0)
    , dis(0.0)
    , aoa_angle_horizontal(0.0)
    , aoa_angle_vertical(0.0)
    , fp_rssi(0.0)
    , rx_rssi(0.0)
    , user_data(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _uid_type;
  _uid_type uid;

   typedef float _dis_type;
  _dis_type dis;

   typedef float _aoa_angle_horizontal_type;
  _aoa_angle_horizontal_type aoa_angle_horizontal;

   typedef float _aoa_angle_vertical_type;
  _aoa_angle_vertical_type aoa_angle_vertical;

   typedef float _fp_rssi_type;
  _fp_rssi_type fp_rssi;

   typedef float _rx_rssi_type;
  _rx_rssi_type rx_rssi;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _user_data_type;
  _user_data_type user_data;





  typedef boost::shared_ptr< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> const> ConstPtr;

}; // struct IotFrame0Node_

typedef ::imu_single_uwb::IotFrame0Node_<std::allocator<void> > IotFrame0Node;

typedef boost::shared_ptr< ::imu_single_uwb::IotFrame0Node > IotFrame0NodePtr;
typedef boost::shared_ptr< ::imu_single_uwb::IotFrame0Node const> IotFrame0NodeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::imu_single_uwb::IotFrame0Node_<ContainerAllocator1> & lhs, const ::imu_single_uwb::IotFrame0Node_<ContainerAllocator2> & rhs)
{
  return lhs.uid == rhs.uid &&
    lhs.dis == rhs.dis &&
    lhs.aoa_angle_horizontal == rhs.aoa_angle_horizontal &&
    lhs.aoa_angle_vertical == rhs.aoa_angle_vertical &&
    lhs.fp_rssi == rhs.fp_rssi &&
    lhs.rx_rssi == rhs.rx_rssi &&
    lhs.user_data == rhs.user_data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::imu_single_uwb::IotFrame0Node_<ContainerAllocator1> & lhs, const ::imu_single_uwb::IotFrame0Node_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace imu_single_uwb

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "df423b5fa843bedeae14cfe493476452";
  }

  static const char* value(const ::imu_single_uwb::IotFrame0Node_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdf423b5fa843bedeULL;
  static const uint64_t static_value2 = 0xae14cfe493476452ULL;
};

template<class ContainerAllocator>
struct DataType< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "imu_single_uwb/IotFrame0Node";
  }

  static const char* value(const ::imu_single_uwb::IotFrame0Node_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 uid\n"
"float32 dis\n"
"float32 aoa_angle_horizontal\n"
"float32 aoa_angle_vertical\n"
"float32 fp_rssi\n"
"float32 rx_rssi\n"
"string user_data\n"
;
  }

  static const char* value(const ::imu_single_uwb::IotFrame0Node_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uid);
      stream.next(m.dis);
      stream.next(m.aoa_angle_horizontal);
      stream.next(m.aoa_angle_vertical);
      stream.next(m.fp_rssi);
      stream.next(m.rx_rssi);
      stream.next(m.user_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IotFrame0Node_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::imu_single_uwb::IotFrame0Node_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::imu_single_uwb::IotFrame0Node_<ContainerAllocator>& v)
  {
    s << indent << "uid: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.uid);
    s << indent << "dis: ";
    Printer<float>::stream(s, indent + "  ", v.dis);
    s << indent << "aoa_angle_horizontal: ";
    Printer<float>::stream(s, indent + "  ", v.aoa_angle_horizontal);
    s << indent << "aoa_angle_vertical: ";
    Printer<float>::stream(s, indent + "  ", v.aoa_angle_vertical);
    s << indent << "fp_rssi: ";
    Printer<float>::stream(s, indent + "  ", v.fp_rssi);
    s << indent << "rx_rssi: ";
    Printer<float>::stream(s, indent + "  ", v.rx_rssi);
    s << indent << "user_data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.user_data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IMU_SINGLE_UWB_MESSAGE_IOTFRAME0NODE_H