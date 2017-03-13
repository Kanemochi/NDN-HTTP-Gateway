/*
Copyright (C) 2015-2017  Xavier MARCHAL
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

#include <memory>

#include "raw_stream.h"

class Message {
protected:
    std::shared_ptr<RawStream> _raw_stream;

public:
    Message() {
        _raw_stream = std::make_shared<RawStream>();
    }

    Message(std::shared_ptr<RawStream> raw_stream) {
        _raw_stream = raw_stream;
    }

    ~Message(){

    }

    std::shared_ptr<RawStream> get_raw_stream(){
        return _raw_stream;
    }
};