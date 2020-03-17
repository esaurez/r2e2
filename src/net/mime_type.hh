/* -*-mode:c++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#pragma once

#include <vector>
#include <string>

class MIMEType
{
private:
  std::string type_;
  std::vector< std::pair< std::string, std::string > > parameters_;

public:
  MIMEType( const std::string & content_type );

  const std::string & type() const { return type_; }
};

