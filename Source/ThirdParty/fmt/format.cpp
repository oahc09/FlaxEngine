// Formatting library for C++
//
// Copyright (c) 2012 - 2016, Victor Zverovich
// All rights reserved.
//
// For the license information refer to format.h.

#include "fmt/format-inl.h"

FMT_BEGIN_NAMESPACE
template FMT_API internal::locale_ref::locale_ref(const std::locale &loc);
template FMT_API std::locale internal::locale_ref::get<std::locale>() const;

// Explicit instantiations for char.

template FMT_API char internal::thousands_sep_impl(locale_ref);

template FMT_API void internal::basic_buffer<char>::append(const char *, const char *);

template FMT_API int internal::char_traits<char>::format_float(
    char *, std::size_t, const char *, int, double);

template FMT_API int internal::char_traits<char>::format_float(
    char *, std::size_t, const char *, int, long double);

#if FMT_USE_STRING
template FMT_API std::string internal::vformat<char>(
    string_view, basic_format_args<format_context>);
#endif

template FMT_API format_context::iterator internal::vformat_to(
    internal::buffer &, string_view, basic_format_args<format_context>);

template FMT_API void internal::sprintf_format(
    double, internal::buffer &, core_format_specs);
template FMT_API void internal::sprintf_format(
    long double, internal::buffer &, core_format_specs);

// Explicit instantiations for wchar_t.

template FMT_API wchar_t internal::thousands_sep_impl(locale_ref);

template FMT_API void internal::basic_buffer<wchar_t>::append(
    const wchar_t *, const wchar_t *);

template FMT_API int internal::char_traits<wchar_t>::format_float(
    wchar_t *, std::size_t, const wchar_t *, int, double);

template FMT_API int internal::char_traits<wchar_t>::format_float(
    wchar_t *, std::size_t, const wchar_t *, int, long double);

#if FMT_USE_STRING
template FMT_API std::wstring internal::vformat<wchar_t>(
    wstring_view, basic_format_args<wformat_context>);
#endif
FMT_END_NAMESPACE
