<?php
/**
 * @file
 * off_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function off_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'projects';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Projects';
  $quicktabs->tabs = array(
    0 => array(
      'nid' => '5',
      'teaser' => 0,
      'hide_title' => 1,
      'title' => 'OFF',
      'weight' => '-100',
      'type' => 'node',
    ),
    1 => array(
      'nid' => '',
      'teaser' => 0,
      'hide_title' => 1,
      'title' => 'Free and Open',
      'weight' => '-99',
      'type' => 'node',
    ),
    2 => array(
      'nid' => '',
      'teaser' => 0,
      'hide_title' => 1,
      'title' => 'Closed but Useful',
      'weight' => '-98',
      'type' => 'node',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Closed but Useful');
  t('Free and Open');
  t('OFF');
  t('Projects');

  $export['projects'] = $quicktabs;

  return $export;
}
