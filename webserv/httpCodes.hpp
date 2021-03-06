/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   httpCodes.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:53:01 by pgueugno          #+#    #+#             */
/*   Updated: 2022/02/17 17:53:01 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HTTPCODES_HPP
#define HTTPCODES_HPP

#define CODE_100 "HTTP/1.1 100 Continue"
#define CODE_101 "HTTP/1.1 101 Switching Protocols"
#define CODE_102 "HTTP/1.1 102 Processing"
#define CODE_103 "HTTP/1.1 103 Early Hints"

#define CODE_200 "HTTP/1.1 200 OK"
#define CODE_201 "HTTP/1.1 201 Created"
#define CODE_202 "HTTP/1.1 202 Accepted"
#define CODE_203 "HTTP/1.1 203 Non-Authoritative Information "
#define CODE_204 "HTTP/1.1 204 No Content"
#define CODE_205 "HTTP/1.1 205 Reset Content"
#define CODE_206 "HTTP/1.1 206 Partial Content"
#define CODE_207 "HTTP/1.1 207 Multi-Status "
#define CODE_208 "HTTP/1.1 208 Already Reported"
#define CODE_226 "HTTP/1.1 226 IM Used"

#define CODE_300 "HTTP/1.1 300 Multiple Choices"
#define CODE_301 "HTTP/1.1 301 Moved Permanently"
#define CODE_302 "HTTP/1.1 302 Found"
#define CODE_303 "HTTP/1.1 303 See Other"
#define CODE_304 "HTTP/1.1 304 Not Modified"
#define CODE_305 "HTTP/1.1 305 Use Proxy"
#define CODE_306 "HTTP/1.1 306 Switch Proxy"
#define CODE_307 "HTTP/1.1 307 Temporary Redirect"
#define CODE_308 "HTTP/1.1 308 Permanent Redirect"

#define CODE_400 "HTTP/1.1 400 Bad Request"
#define CODE_401 "HTTP/1.1 401 Unauthorized"
#define CODE_402 "HTTP/1.1 402 Payment Required"
#define CODE_403 "HTTP/1.1 403 Forbidden"
#define CODE_404 "HTTP/1.1 404 Not Found"
#define CODE_405 "HTTP/1.1 405 Method Not Allowed"
#define CODE_406 "HTTP/1.1 406 Not Acceptable"
#define CODE_407 "HTTP/1.1 407 Proxy Authentication Required"
#define CODE_408 "HTTP/1.1 408 Request Timeout"
#define CODE_409 "HTTP/1.1 409 Conflict"
#define CODE_410 "HTTP/1.1 410 Gone"
#define CODE_411 "HTTP/1.1 411 Length Required"
#define CODE_412 "HTTP/1.1 412 Precondition Failed"
#define CODE_413 "HTTP/1.1 413 Payload Too Large"
#define CODE_414 "HTTP/1.1 414 URI Too Long"
#define CODE_415 "HTTP/1.1 415 Unsupported Media Type"
#define CODE_416 "HTTP/1.1 416 Range Not Satisfiable"
#define CODE_417 "HTTP/1.1 417 Expectation Failed"
#define CODE_418 "HTTP/1.1 418 I'm a teapot"
#define CODE_421 "HTTP/1.1 421 Misdirected Request"
#define CODE_422 "HTTP/1.1 422 Unprocessable Entity"
#define CODE_423 "HTTP/1.1 423 Locked"
#define CODE_424 "HTTP/1.1 424 Failed Dependency"
#define CODE_425 "HTTP/1.1 425 Too Early"
#define CODE_426 "HTTP/1.1 426 Upgrade Required"
#define CODE_428 "HTTP/1.1 428 Precondition Required"
#define CODE_429 "HTTP/1.1 429 Too Many Requests"
#define CODE_431 "HTTP/1.1 431 Request Header Fields Too Large"
#define CODE_451 "HTTP/1.1 451 Unavailable For Legal Reasons "

#define CODE_500 "HTTP/1.1 500 Internal Server Error"
#define CODE_501 "HTTP/1.1 501 Not Implemented"
#define CODE_502 "HTTP/1.1 502 Bad Gateway"
#define CODE_503 "HTTP/1.1 503 Service Unavailable"
#define CODE_504 "HTTP/1.1 504 Gateway Timeout"
#define CODE_505 "HTTP/1.1 505 HTTP Version Not Supported"
#define CODE_506 "HTTP/1.1 506 Variant Also Negotiates"
#define CODE_507 "HTTP/1.1 507 Insufficient Storage"
#define CODE_508 "HTTP/1.1 508 Loop Detected"
#define CODE_510 "HTTP/1.1 510 Not Extended"
#define CODE_511 "HTTP/1.1 511 Network Authentication Required"

#endif /* HTTPCODES_HPP */