/* -*-mode:c++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */

#pragma once

#include <string>
#include <vector>
#include <exception>
#include <stdexcept>
#include <sys/types.h>

#include "util/optional.hh"

class FetchDependenciesError : public std::exception {};
class ExecutionError : public std::exception {};
class UploadOutputError : public std::exception {};

class ExecutionResponse
{
private:
  ExecutionResponse() {}

public:
  static ExecutionResponse parse_message( const std::string & message );
};
