<?php
/**
 * @file
 * soda_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function soda_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['blockify-blockify-breadcrumb'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'blockify-breadcrumb',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-demos'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-demos',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content_after',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_left',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-node_type-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'node_type-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/*
node/*/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -12,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
