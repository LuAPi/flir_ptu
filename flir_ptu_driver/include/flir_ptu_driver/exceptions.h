#ifndef EXCEPTIONS_H_
#define EXCEPTIONS_H_

#include <boost/exception/all.hpp>
namespace exceptions {

struct FlirPtuClientException : virtual boost::exception,
                                virtual std::exception {};


struct IncorrectResponseException : virtual FlirPtuClientException {};
struct ResponseParsingException : virtual FlirPtuClientException {};
struct NotConnectedException : virtual FlirPtuClientException {};
struct NotInitializedException : virtual FlirPtuClientException {};
struct ValueOutOfRangeException : virtual FlirPtuClientException {};

} // namespace exceptions

#endif  // EXCEPTIONS_H_
