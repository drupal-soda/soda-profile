<?php
/**
 * @file
 * soda_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function soda_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Information for end user about the distribution';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'soda_description';
  $fe_block_boxes->body = '<b>Small Open DAta framework</b> is a web based platform aimed to solve the fundamental problem of the Open Data which is:

<blockquote>"Where is the data?"</blockquote>

In fact there is a lot of data available but they are not opened or are hidden etc. Sometimes data need to be created from the beginning and it is where simple people can contribute.

Using SODA you will be able to create, manage, manipulate and export open data to several open data hubs such as <a href="http://ckan.org/">CKAN</a>, <a href="http://thedatatank.com/">TheDataTank</a> etc.

You can learn more for this project at https://github.com/drupal-soda.';

  $export['soda_description'] = $fe_block_boxes;

  return $export;
}
