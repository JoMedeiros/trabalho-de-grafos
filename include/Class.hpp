// Copyright 2018 J&JV

/**
 * @file        Class.hpp
 * @brief       ...
 *
 * @author      João Vítor (jv.venceslau.c@gmail.com)
 * @author      ...
 * @since       04/11/2018
 * @date        04/11/2018
 * @version     0.1
 */

#ifndef INCLUDE_CLASS_HPP_
#define INCLUDE_CLASS_HPP_

#include <string>

#include "Schedule.hpp"

/**
 * @brief ...
 *
 */
class Class {
   public:
    Class();
    Class(std::string* subject, std::string* schedule);
    Class(Class&&) = default;
    Class(const Class&) = default;
    Class& operator=(Class&&) = default;
    Class& operator=(const Class&) = default;
    ~Class();

    std::string* get_subject();
    Schedule* get_schedule();

   private:
    std::string* subject = nullptr;
    Schedule* schedule = nullptr;
};

#endif  // INCLUDE_CLASS_HPP_
