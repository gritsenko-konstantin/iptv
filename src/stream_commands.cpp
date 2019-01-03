/*  Copyright (C) 2014-2018 FastoGT. All right reserved.
    This file is part of iptv_cloud.
    iptv_cloud is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    iptv_cloud is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with iptv_cloud.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stream_commands.h"

namespace iptv_cloud {

protocol::request_t RestartStreamRequest(protocol::sequance_id_t id) {
  protocol::request_t req;
  req.id = id;
  req.method = RESTART_STREAM;
  return req;
}

protocol::responce_t RestartStreamResponceSuccess(protocol::sequance_id_t id) {
  return protocol::responce_t::MakeMessage(id, protocol::MakeSuccessMessage());
}

protocol::request_t StopStreamRequest(protocol::sequance_id_t id) {
  protocol::request_t req;
  req.id = id;
  req.method = STOP_STREAM;
  return req;
}

protocol::responce_t StopStreamResponceSuccess(protocol::sequance_id_t id) {
  return protocol::responce_t::MakeMessage(id, protocol::MakeSuccessMessage());
}

protocol::request_t ChangedSourcesStreamRequest(protocol::sequance_id_t id, protocol::serializet_params_t params) {
  protocol::request_t req;
  req.id = id;
  req.method = CHANGED_SOURCES_STREAM;
  req.params = params;
  return req;
}

protocol::responce_t ChangedSourcesStreamResponceSuccess(protocol::sequance_id_t id) {
  return protocol::responce_t::MakeMessage(id, protocol::MakeSuccessMessage());
}

protocol::request_t StatisticStreamRequest(protocol::sequance_id_t id, protocol::serializet_params_t params) {
  protocol::request_t req;
  req.id = id;
  req.method = STATISTIC_STREAM;
  req.params = params;
  return req;
}

protocol::responce_t StatisticStreamResponceSuccess(protocol::sequance_id_t id) {
  return protocol::responce_t::MakeMessage(id, protocol::MakeSuccessMessage());
}

}  // namespace iptv_cloud
