/**
 * NEURON IIoT System for Industry 4.0
 * Copyright (C) 2020-2022 EMQ Technologies Co., Ltd All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 **/

/*
 * DO NOT EDIT THIS FILE MANUALLY!
 * It was automatically generated by `json-autotype`.
 */

#ifndef _NEU_JSON_API_NEU_JSON_TAG_H_
#define _NEU_JSON_API_NEU_JSON_TAG_H_

#include "json/json.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char *  address;
    char *  name;
    char *  description;
    int64_t type;
    int64_t attribute;
} neu_json_add_tags_req_tag_t;

typedef struct {
    char *                       node;
    char *                       group;
    int                          n_tag;
    neu_json_add_tags_req_tag_t *tags;
} neu_json_add_tags_req_t;

int  neu_json_decode_add_tags_req(char *buf, neu_json_add_tags_req_t **result);
void neu_json_decode_add_tags_req_free(neu_json_add_tags_req_t *req);

typedef struct {
    uint16_t index;
    int      error;
} neu_json_add_tag_res_t, neu_json_update_tag_res_t;

int neu_json_encode_au_tags_resp(void *json_object, void *param);

typedef char *neu_json_del_tags_req_name_t;

typedef struct {
    char *                        node;
    char *                        group;
    int                           n_tags;
    neu_json_del_tags_req_name_t *tags;
} neu_json_del_tags_req_t;

int  neu_json_decode_del_tags_req(char *buf, neu_json_del_tags_req_t **result);
void neu_json_decode_del_tags_req_free(neu_json_del_tags_req_t *req);

typedef struct {
    char *  address;
    char *  name;
    char *  description;
    int64_t type;
    int64_t attribute;
} neu_json_get_tags_resp_tag_t;

typedef struct {
    int                           n_tag;
    neu_json_get_tags_resp_tag_t *tags;
} neu_json_get_tags_resp_t;

int neu_json_encode_get_tags_resp(void *json_object, void *param);

typedef struct {
    char *  name;
    char *  address;
    char *  description;
    int64_t type;
    int64_t attribute;
} neu_json_update_tags_req_tag_t;

typedef struct {
    char *                          node;
    char *                          group;
    int                             n_tag;
    neu_json_update_tags_req_tag_t *tags;
} neu_json_update_tags_req_t;

int  neu_json_decode_update_tags_req(char *                       buf,
                                     neu_json_update_tags_req_t **result);
void neu_json_decode_update_tags_req_free(neu_json_update_tags_req_t *req);

#ifdef __cplusplus
}
#endif

#endif
