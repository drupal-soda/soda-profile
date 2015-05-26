<?php
/**
 * @file
 * soda_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function soda_roles_user_default_roles() {
  $roles = array();

  // Exported role: App.
  $roles['App'] = array(
    'name' => 'App',
    'weight' => 3,
  );

  // Exported role: Consumer.
  $roles['Consumer'] = array(
    'name' => 'Consumer',
    'weight' => 2,
  );

  // Exported role: Dataset Manager.
  $roles['Dataset Manager'] = array(
    'name' => 'Dataset Manager',
    'weight' => 4,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 5,
  );

  return $roles;
}
