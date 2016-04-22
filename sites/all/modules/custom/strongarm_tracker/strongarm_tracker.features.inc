<?php
/**
 * @file
 * strongarm_tracker.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function strongarm_tracker_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
