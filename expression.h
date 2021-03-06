#pragma once

#include "boost/spirit/home/x3.hpp"
#include "ast.h"

struct count_class;
using count_type = x3::rule<count_class, ast::Count>;
BOOST_SPIRIT_DECLARE(count_type);

const count_type& count_rule();


