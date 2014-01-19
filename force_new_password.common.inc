<?php
/**
 * @file
 * Common functions used by Force New Password module.
 */

/**
 * Helper function to verify if the user has the "new password" role.
 */
function _force_new_password_role_matches($user) {
  $roles = $user->roles;

  if (in_array(FORCE_NEW_PASSWORD_ROLE_NAME, $roles)) {
    return TRUE;
  }

  return FALSE;
}

/**
 * Helper function to verify if the user is the administrator.
 */
function _force_new_password_is_admin() {
  global $user;

  if ($user->uid == 1) {
    return TRUE;
  }

  return FALSE;
}
