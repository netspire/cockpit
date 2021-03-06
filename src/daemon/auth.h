/*
 * This file is part of Cockpit.
 *
 * Copyright (C) 2013 Red Hat, Inc.
 *
 * Cockpit is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Cockpit is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Cockpit; If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COCKPIT_AUTH_H__
#define COCKPIT_AUTH_H__

#include "types.h"

G_BEGIN_DECLS

#define COCKPIT_ROLE_ADMIN         "wheel"
#define COCKPIT_ROLE_USER_ADMIN    "cockpit-user-admin"
#define COCKPIT_ROLE_REALM_ADMIN   "cockpit-realm-admin"
#define COCKPIT_ROLE_STORAGE_ADMIN "cockpit-storage-admin"

gboolean auth_uid_is_wheel       (uid_t uid);

gboolean auth_check_uid_role     (GDBusMethodInvocation *invocation,
                                  uid_t uid,
                                  const gchar *role);
gboolean auth_check_sender_role  (GDBusMethodInvocation *invocation,
                                  const gchar *role);

G_END_DECLS

#endif /* COCKPIT_AUTH_H__ */
