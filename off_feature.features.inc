<?php
/**
 * @file
 * off_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function off_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
