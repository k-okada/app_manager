/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-groovy-multimaster-experimental-0.2.1/debian/ros-groovy-multimaster-experimental/opt/ros/groovy/stacks/multimaster_experimental/app_manager/msg/AppInstallationState.msg */
#ifndef APP_MANAGER_MESSAGE_APPINSTALLATIONSTATE_H
#define APP_MANAGER_MESSAGE_APPINSTALLATIONSTATE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "app_manager/ExchangeApp.h"
#include "app_manager/ExchangeApp.h"

namespace app_manager
{
template <class ContainerAllocator>
struct AppInstallationState_ {
  typedef AppInstallationState_<ContainerAllocator> Type;

  AppInstallationState_()
  : installed_apps()
  , available_apps()
  {
  }

  AppInstallationState_(const ContainerAllocator& _alloc)
  : installed_apps(_alloc)
  , available_apps(_alloc)
  {
  }

  typedef std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other >  _installed_apps_type;
  std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other >  installed_apps;

  typedef std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other >  _available_apps_type;
  std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other >  available_apps;


  typedef boost::shared_ptr< ::app_manager::AppInstallationState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::app_manager::AppInstallationState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AppInstallationState
typedef  ::app_manager::AppInstallationState_<std::allocator<void> > AppInstallationState;

typedef boost::shared_ptr< ::app_manager::AppInstallationState> AppInstallationStatePtr;
typedef boost::shared_ptr< ::app_manager::AppInstallationState const> AppInstallationStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::app_manager::AppInstallationState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::app_manager::AppInstallationState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace app_manager

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::app_manager::AppInstallationState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::app_manager::AppInstallationState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::app_manager::AppInstallationState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "46d45bbda08250199267aff8c0ee8c41";
  }

  static const char* value(const  ::app_manager::AppInstallationState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x46d45bbda0825019ULL;
  static const uint64_t static_value2 = 0x9267aff8c0ee8c41ULL;
};

template<class ContainerAllocator>
struct DataType< ::app_manager::AppInstallationState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "app_manager/AppInstallationState";
  }

  static const char* value(const  ::app_manager::AppInstallationState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::app_manager::AppInstallationState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ExchangeApp[] installed_apps\n\
ExchangeApp[] available_apps\n\
\n\
================================================================================\n\
MSG: app_manager/ExchangeApp\n\
# app name\n\
string name\n\
# user-friendly display name of application\n\
string display_name\n\
# the version of the package currently installed\n\
string version\n\
# latest version of the package avaliable\n\
string latest_version\n\
# the detailed description of the app\n\
string description\n\
# icon for showing app\n\
Icon icon\n\
# hidden apps are not show - used for cases where multiple apps are in a deb\n\
bool hidden\n\
================================================================================\n\
MSG: app_manager/Icon\n\
# Image data format.  \"jpeg\" or \"png\"\n\
string format\n\
\n\
# Image data.\n\
uint8[] data\n\
\n\
";
  }

  static const char* value(const  ::app_manager::AppInstallationState_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::app_manager::AppInstallationState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.installed_apps);
    stream.next(m.available_apps);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AppInstallationState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::app_manager::AppInstallationState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::app_manager::AppInstallationState_<ContainerAllocator> & v) 
  {
    s << indent << "installed_apps[]" << std::endl;
    for (size_t i = 0; i < v.installed_apps.size(); ++i)
    {
      s << indent << "  installed_apps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::app_manager::ExchangeApp_<ContainerAllocator> >::stream(s, indent + "    ", v.installed_apps[i]);
    }
    s << indent << "available_apps[]" << std::endl;
    for (size_t i = 0; i < v.available_apps.size(); ++i)
    {
      s << indent << "  available_apps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::app_manager::ExchangeApp_<ContainerAllocator> >::stream(s, indent + "    ", v.available_apps[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // APP_MANAGER_MESSAGE_APPINSTALLATIONSTATE_H

