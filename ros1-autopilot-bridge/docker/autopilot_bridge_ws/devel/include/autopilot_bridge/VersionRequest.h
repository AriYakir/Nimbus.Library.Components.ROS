// Generated by gencpp from file autopilot_bridge/VersionRequest.msg
// DO NOT EDIT!


#ifndef AUTOPILOT_BRIDGE_MESSAGE_VERSIONREQUEST_H
#define AUTOPILOT_BRIDGE_MESSAGE_VERSIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autopilot_bridge
{
template <class ContainerAllocator>
struct VersionRequest_
{
  typedef VersionRequest_<ContainerAllocator> Type;

  VersionRequest_()
    : timeout(0.0)  {
    }
  VersionRequest_(const ContainerAllocator& _alloc)
    : timeout(0.0)  {
  (void)_alloc;
    }



   typedef float _timeout_type;
  _timeout_type timeout;





  typedef boost::shared_ptr< ::autopilot_bridge::VersionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autopilot_bridge::VersionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct VersionRequest_

typedef ::autopilot_bridge::VersionRequest_<std::allocator<void> > VersionRequest;

typedef boost::shared_ptr< ::autopilot_bridge::VersionRequest > VersionRequestPtr;
typedef boost::shared_ptr< ::autopilot_bridge::VersionRequest const> VersionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autopilot_bridge::VersionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autopilot_bridge::VersionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autopilot_bridge::VersionRequest_<ContainerAllocator1> & lhs, const ::autopilot_bridge::VersionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.timeout == rhs.timeout;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autopilot_bridge::VersionRequest_<ContainerAllocator1> & lhs, const ::autopilot_bridge::VersionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autopilot_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::VersionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::VersionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::VersionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::VersionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::VersionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::VersionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autopilot_bridge::VersionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e929ace7fd80dc265b8b96078f41e82";
  }

  static const char* value(const ::autopilot_bridge::VersionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e929ace7fd80dc2ULL;
  static const uint64_t static_value2 = 0x65b8b96078f41e82ULL;
};

template<class ContainerAllocator>
struct DataType< ::autopilot_bridge::VersionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autopilot_bridge/VersionRequest";
  }

  static const char* value(const ::autopilot_bridge::VersionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autopilot_bridge::VersionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 timeout\n"
;
  }

  static const char* value(const ::autopilot_bridge::VersionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autopilot_bridge::VersionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timeout);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VersionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autopilot_bridge::VersionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autopilot_bridge::VersionRequest_<ContainerAllocator>& v)
  {
    s << indent << "timeout: ";
    Printer<float>::stream(s, indent + "  ", v.timeout);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOPILOT_BRIDGE_MESSAGE_VERSIONREQUEST_H