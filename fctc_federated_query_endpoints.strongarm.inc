<?php
/**
 * @file
 * fctc_federated_query_endpoints.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function fctc_federated_query_endpoints_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fqc_endpoints';
  $strongarm->value = 'http://ncp1dev.devcloud.acquia-sites.com/
http://ncp2dev.devcloud.acquia-sites.com/';
  $export['fqc_endpoints'] = $strongarm;

  return $export;
}
