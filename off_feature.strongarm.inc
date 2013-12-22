<?php
/**
 * @file
 * off_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function off_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = '[node:content-type]/[node:title]';
  $export['pathauto_node_blog_pattern'] = $strongarm;

  return $export;
}
