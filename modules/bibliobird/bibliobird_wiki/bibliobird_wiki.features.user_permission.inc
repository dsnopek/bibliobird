<?php
/**
 * @file
 * bibliobird_wiki.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibliobird_wiki_user_default_permissions() {
  $permissions = array();

  // Exported permission: create wiki content.
  $permissions['create wiki content'] = array(
    'name' => 'create wiki content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any wiki content.
  $permissions['delete any wiki content'] = array(
    'name' => 'delete any wiki content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any wiki content.
  $permissions['edit any wiki content'] = array(
    'name' => 'edit any wiki content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
