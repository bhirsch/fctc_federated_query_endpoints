<?php
/**
 * @file
 * fctc_federated_query_endpoints.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function fctc_federated_query_endpoints_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
