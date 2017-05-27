<?php
/**
 * @file
 * Administration forms for the admin module.
 */

/**
 * Menu callback; Displays the administration settings for Synapse.
 */

/**
 * Implements hook_field_settings_form().
 * Webmaster settings.
 */
function export_settings() {
  $form = [];

  $form['rest'] = array(
    '#type' => 'fieldset',
    '#title' => t('REST'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form["rest"]["export_rest_auth"] = array(
    '#title' => t("Auth Token"),
    '#type' => 'textfield',
    '#default_value' => variable_get("export_rest_auth", '5S0qp3itUzilZretRIN7v2z60BpXVP8p'),
  );
  $form["rest"]["export_rest_sync"] = array(
    '#title' => t("Sync"),
    '#type' => 'checkbox',
    '#default_value' => variable_get("export_rest_sync", TRUE),
  );

  return system_settings_form($form);
}
