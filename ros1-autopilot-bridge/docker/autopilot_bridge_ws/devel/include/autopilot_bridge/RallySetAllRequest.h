// Generated by gencpp from file autopilot_bridge/RallySetAllRequest.msg
// DO NOT EDIT!


#ifndef AUTOPILOT_BRIDGE_MESSAGE_RALLYSETALLREQUEST_H
#define AUTOPILOT_BRIDGE_MESSAGE_RALLYSETALLREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <autopilot_bridge/Rallypoint.h>

namespace autopilot_bridge
{
template <class ContainerAllocator>
struct RallySetAllRequest_
{
  typedef RallySetAllRequest_<ContainerAllocator> Type;

  RallySetAllRequest_()
    : points()  {
    }
  RallySetAllRequest_(const ContainerAllocator& _alloc)
    : points(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::autopilot_bridge::Rallypoint_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::autopilot_bridge::Rallypoint_<ContainerAllocator> >> _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RallySetAllRequest_

typedef ::autopilot_bridge::RallySetAllRequest_<std::allocator<void> > RallySetAllRequest;

typedef boost::shared_ptr< ::autopilot_bridge::RallySetAllRequest > RallySetAllRequestPtr;
typedef boost::shared_ptr< ::autopilot_bridge::RallySetAllRequest const> RallySetAllRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator1> & lhs, const ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator2> & rhs)
{
  return lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator1> & lhs, const ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autopilot_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "014b2ed2ed71df0e669ab4ba24318ce5";
  }

  static const char* value(const ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x014b2ed2ed71df0eULL;
  static const uint64_t static_value2 = 0x669ab4ba24318ce5ULL;
};

template<class ContainerAllocator>
struct DataType< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autopilot_bridge/RallySetAllRequest";
  }

  static const char* value(const ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Rallypoint[] points\n"
"\n"
"================================================================================\n"
"MSG: autopilot_bridge/Rallypoint\n"
"float64 lat\n"
"float64 lon\n"
"float64 alt\n"
"float64 break_alt\n"
"float64 land_dir\n"
"uint8 flags\n"
;
  }

  static const char* value(const ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RallySetAllRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autopilot_bridge::RallySetAllRequest_<ContainerAllocator>& v)
  {
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autopilot_bridge::Rallypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOPILOT_BRIDGE_MESSAGE_RALLYSETALLREQUEST_H