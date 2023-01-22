// Generated by gencpp from file autopilot_bridge/Waypoint.msg
// DO NOT EDIT!


#ifndef AUTOPILOT_BRIDGE_MESSAGE_WAYPOINT_H
#define AUTOPILOT_BRIDGE_MESSAGE_WAYPOINT_H


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
struct Waypoint_
{
  typedef Waypoint_<ContainerAllocator> Type;

  Waypoint_()
    : seq(0)
    , frame(0)
    , command(0)
    , current(false)
    , autocontinue(false)
    , param1(0.0)
    , param2(0.0)
    , param3(0.0)
    , param4(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  Waypoint_(const ContainerAllocator& _alloc)
    : seq(0)
    , frame(0)
    , command(0)
    , current(false)
    , autocontinue(false)
    , param1(0.0)
    , param2(0.0)
    , param3(0.0)
    , param4(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef uint16_t _seq_type;
  _seq_type seq;

   typedef uint8_t _frame_type;
  _frame_type frame;

   typedef uint16_t _command_type;
  _command_type command;

   typedef uint8_t _current_type;
  _current_type current;

   typedef uint8_t _autocontinue_type;
  _autocontinue_type autocontinue;

   typedef double _param1_type;
  _param1_type param1;

   typedef double _param2_type;
  _param2_type param2;

   typedef double _param3_type;
  _param3_type param3;

   typedef double _param4_type;
  _param4_type param4;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::autopilot_bridge::Waypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autopilot_bridge::Waypoint_<ContainerAllocator> const> ConstPtr;

}; // struct Waypoint_

typedef ::autopilot_bridge::Waypoint_<std::allocator<void> > Waypoint;

typedef boost::shared_ptr< ::autopilot_bridge::Waypoint > WaypointPtr;
typedef boost::shared_ptr< ::autopilot_bridge::Waypoint const> WaypointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autopilot_bridge::Waypoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autopilot_bridge::Waypoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autopilot_bridge::Waypoint_<ContainerAllocator1> & lhs, const ::autopilot_bridge::Waypoint_<ContainerAllocator2> & rhs)
{
  return lhs.seq == rhs.seq &&
    lhs.frame == rhs.frame &&
    lhs.command == rhs.command &&
    lhs.current == rhs.current &&
    lhs.autocontinue == rhs.autocontinue &&
    lhs.param1 == rhs.param1 &&
    lhs.param2 == rhs.param2 &&
    lhs.param3 == rhs.param3 &&
    lhs.param4 == rhs.param4 &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autopilot_bridge::Waypoint_<ContainerAllocator1> & lhs, const ::autopilot_bridge::Waypoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autopilot_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::Waypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autopilot_bridge::Waypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::Waypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autopilot_bridge::Waypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::Waypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autopilot_bridge::Waypoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autopilot_bridge::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "55967e54789fbaf753fa65ffa29bd0a2";
  }

  static const char* value(const ::autopilot_bridge::Waypoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x55967e54789fbaf7ULL;
  static const uint64_t static_value2 = 0x53fa65ffa29bd0a2ULL;
};

template<class ContainerAllocator>
struct DataType< ::autopilot_bridge::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autopilot_bridge/Waypoint";
  }

  static const char* value(const ::autopilot_bridge::Waypoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autopilot_bridge::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 seq\n"
"uint8 frame\n"
"uint16 command\n"
"bool current\n"
"bool autocontinue\n"
"float64 param1\n"
"float64 param2\n"
"float64 param3\n"
"float64 param4\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::autopilot_bridge::Waypoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autopilot_bridge::Waypoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.seq);
      stream.next(m.frame);
      stream.next(m.command);
      stream.next(m.current);
      stream.next(m.autocontinue);
      stream.next(m.param1);
      stream.next(m.param2);
      stream.next(m.param3);
      stream.next(m.param4);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Waypoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autopilot_bridge::Waypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autopilot_bridge::Waypoint_<ContainerAllocator>& v)
  {
    s << indent << "seq: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.seq);
    s << indent << "frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.frame);
    s << indent << "command: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.command);
    s << indent << "current: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.current);
    s << indent << "autocontinue: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.autocontinue);
    s << indent << "param1: ";
    Printer<double>::stream(s, indent + "  ", v.param1);
    s << indent << "param2: ";
    Printer<double>::stream(s, indent + "  ", v.param2);
    s << indent << "param3: ";
    Printer<double>::stream(s, indent + "  ", v.param3);
    s << indent << "param4: ";
    Printer<double>::stream(s, indent + "  ", v.param4);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOPILOT_BRIDGE_MESSAGE_WAYPOINT_H