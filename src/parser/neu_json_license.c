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

#include <stdlib.h>
#include <string.h>

#include "json/json.h"

#include "json/neu_json_license.h"

int neu_json_decode_set_license_req(char *                       buf,
                                    neu_json_set_license_req_t **result)
{
    int                         ret = 0;
    neu_json_set_license_req_t *req =
        calloc(1, sizeof(neu_json_set_license_req_t));

    neu_json_elem_t req_elems[] = { {
        .name = "license",
        .t    = NEU_JSON_STR,
    } };
    ret = neu_json_decode(buf, NEU_JSON_ELEM_SIZE(req_elems), req_elems);
    if (ret != 0) {
        goto decode_fail;
    }

    req->license = req_elems[0].v.val_str;

    *result = req;
    return ret;

decode_fail:
    if (req != NULL) {
        free(req);
    }
    return -1;
}

void neu_json_decode_set_license_req_free(neu_json_set_license_req_t *req)
{

    free(req->license);

    free(req);
}