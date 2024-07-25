// Generated by gencpp from file smarp_msgs/camInfo.msg
// DO NOT EDIT!


#ifndef SMARP_MSGS_MESSAGE_CAMINFO_H
#define SMARP_MSGS_MESSAGE_CAMINFO_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace smarp_msgs
{
template <class ContainerAllocator>
struct camInfo_
{
  typedef camInfo_<ContainerAllocator> Type;

  camInfo_()
    : stopline(0)
    , crop_image_width(0)
    , crop_image_height(0)
    , m_lx(0.0)
    , m_ly(0.0)
    , m_rx(0.0)
    , m_ry(0.0)
    , m_point()
    , light_color()  {
    }
  camInfo_(const ContainerAllocator& _alloc)
    : stopline(0)
    , crop_image_width(0)
    , crop_image_height(0)
    , m_lx(0.0)
    , m_ly(0.0)
    , m_rx(0.0)
    , m_ry(0.0)
    , m_point(_alloc)
    , light_color(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _stopline_type;
  _stopline_type stopline;

   typedef int32_t _crop_image_width_type;
  _crop_image_width_type crop_image_width;

   typedef int32_t _crop_image_height_type;
  _crop_image_height_type crop_image_height;

   typedef float _m_lx_type;
  _m_lx_type m_lx;

   typedef float _m_ly_type;
  _m_ly_type m_ly;

   typedef float _m_rx_type;
  _m_rx_type m_rx;

   typedef float _m_ry_type;
  _m_ry_type m_ry;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _m_point_type;
  _m_point_type m_point;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _light_color_type;
  _light_color_type light_color;





  typedef boost::shared_ptr< ::smarp_msgs::camInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::smarp_msgs::camInfo_<ContainerAllocator> const> ConstPtr;

}; // struct camInfo_

typedef ::smarp_msgs::camInfo_<std::allocator<void> > camInfo;

typedef boost::shared_ptr< ::smarp_msgs::camInfo > camInfoPtr;
typedef boost::shared_ptr< ::smarp_msgs::camInfo const> camInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::smarp_msgs::camInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::smarp_msgs::camInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::smarp_msgs::camInfo_<ContainerAllocator1> & lhs, const ::smarp_msgs::camInfo_<ContainerAllocator2> & rhs)
{
  return lhs.stopline == rhs.stopline &&
    lhs.crop_image_width == rhs.crop_image_width &&
    lhs.crop_image_height == rhs.crop_image_height &&
    lhs.m_lx == rhs.m_lx &&
    lhs.m_ly == rhs.m_ly &&
    lhs.m_rx == rhs.m_rx &&
    lhs.m_ry == rhs.m_ry &&
    lhs.m_point == rhs.m_point &&
    lhs.light_color == rhs.light_color;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::smarp_msgs::camInfo_<ContainerAllocator1> & lhs, const ::smarp_msgs::camInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace smarp_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::smarp_msgs::camInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::smarp_msgs::camInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::smarp_msgs::camInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::smarp_msgs::camInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::smarp_msgs::camInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::smarp_msgs::camInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::smarp_msgs::camInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f61d1f9a4644e3d0d34fa2980922d65a";
  }

  static const char* value(const ::smarp_msgs::camInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf61d1f9a4644e3d0ULL;
  static const uint64_t static_value2 = 0xd34fa2980922d65aULL;
};

template<class ContainerAllocator>
struct DataType< ::smarp_msgs::camInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "smarp_msgs/camInfo";
  }

  static const char* value(const ::smarp_msgs::camInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::smarp_msgs::camInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 stopline\n"
"int32 crop_image_width\n"
"int32 crop_image_height\n"
"float32 m_lx\n"
"float32 m_ly\n"
"float32 m_rx\n"
"float32 m_ry\n"
"int32[] m_point\n"
"string light_color\n"
;
  }

  static const char* value(const ::smarp_msgs::camInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::smarp_msgs::camInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stopline);
      stream.next(m.crop_image_width);
      stream.next(m.crop_image_height);
      stream.next(m.m_lx);
      stream.next(m.m_ly);
      stream.next(m.m_rx);
      stream.next(m.m_ry);
      stream.next(m.m_point);
      stream.next(m.light_color);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct camInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::smarp_msgs::camInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::smarp_msgs::camInfo_<ContainerAllocator>& v)
  {
    s << indent << "stopline: ";
    Printer<int16_t>::stream(s, indent + "  ", v.stopline);
    s << indent << "crop_image_width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.crop_image_width);
    s << indent << "crop_image_height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.crop_image_height);
    s << indent << "m_lx: ";
    Printer<float>::stream(s, indent + "  ", v.m_lx);
    s << indent << "m_ly: ";
    Printer<float>::stream(s, indent + "  ", v.m_ly);
    s << indent << "m_rx: ";
    Printer<float>::stream(s, indent + "  ", v.m_rx);
    s << indent << "m_ry: ";
    Printer<float>::stream(s, indent + "  ", v.m_ry);
    s << indent << "m_point[]" << std::endl;
    for (size_t i = 0; i < v.m_point.size(); ++i)
    {
      s << indent << "  m_point[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.m_point[i]);
    }
    s << indent << "light_color: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.light_color);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SMARP_MSGS_MESSAGE_CAMINFO_H
