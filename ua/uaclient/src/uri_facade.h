/// @author Alexander Rykovanov 2013
/// @email rykovanov.as@gmail.com
/// @brief Thread wrapper with coockies.
/// @license GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at 
/// http://www.gnu.org/licenses/lgpl.html)
///

#ifndef OPC_UA_CLIENT_URI_FACADE
#define OPC_UA_CLIENT_URI_FACADE

#include <uri.h>

namespace OpcUa
{
  class Uri
  {
  public:
    Uri(const std::string& uriString)
      : Impl(uriString)
    {
    }

    std::string Scheme() const
    {
      return Impl.scheme().string();
    }

    std::string Host() const
    {
      return Impl.authority().host();
    }

    unsigned Port() const
    {
      return Impl.authority().port();
    }

  private:
    uripp::uri Impl;
  };
}

#endif // OPC_UA_CLIENT_URI_FACADE
