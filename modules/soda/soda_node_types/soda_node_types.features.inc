<?php
/**
 * @file
 * soda_node_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function soda_node_types_node_info() {
  $items = array(
    'hotels' => array(
      'name' => t('Hotels - iOS App'),
      'base' => 'node_content',
      'description' => t('Data for this dataset are created from an extranal iOS app using REST services.'),
      'has_title' => '1',
      'title_label' => t('Hotel Name'),
      'help' => '',
    ),
    'hotels_thessaloniki' => array(
      'name' => t('Hotels - Ckan import'),
      'base' => 'node_content',
      'description' => t('This is a dataset that was imported from the Official Thessaloniki\'s CKAN repo at http://opendata.thessaloniki.gr/dataset/hotles/resource/a2c9838e-b686-4d3d-ae2e-62addb0a67e1. Import was made using the distribution\'s feeds module.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'playground' => array(
      'name' => t('Playgrounds'),
      'base' => 'node_content',
      'description' => t('Playgrounds may have a location, an address and an image.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
