// Copyright 2018 J&JV

/**
 * @file        Class.cpp
 * @brief       ...
 *
 * @author      João Vítor (jv.venceslau.c@gmail.com)
 * @author      ...
 * @since       04/11/2018
 * @date        19/11/2018
 * @version     0.2
 */

#include "Class.hpp"

Class::Class() {}

Class::Class(std::string subject, std::string schedule) {
    this->subject = subject;
    this->schedule = Schedule(schedule);
}

Class::~Class() {}

std::string Class::get_subject() { return subject; }

Schedule Class::get_schedule() { return schedule; }

bool Class::operator==(const Class& other) const {
    return subject == other.subject;
}
bool Class::operator!=(const Class& other) const {
    return subject != other.subject;
}