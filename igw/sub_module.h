/*
Copyright (C) 2015-2018  Xavier MARCHAL
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "module.h"

template <class T> //, class = class std::enable_if<std::is_base_of<Module, T>::value, T>::type>
class SubModule : public Module {
protected:
    T &_parent;

public:
    SubModule(size_t concurrency, T &parent) : Module(concurrency), _parent(parent) {

    }

    virtual ~SubModule() = default;

    virtual void run() override = 0;
};