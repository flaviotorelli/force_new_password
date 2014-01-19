<?php
/**
 * @file
 * Administration page callbacks for the Force New Password module.
 */

/**
 * Force new password general admin form settings.
 */
function force_new_password_genaral_config($form, $form_state) {

  $form = array();

  $form['force_new_password_disclaimer_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Disclaimer message'),
    '#default_value' => variable_get('force_new_password_disclaimer_message', ''),
    '#required' => TRUE,
  );

  $form['force_new_password_result_page'] = array(
    '#type' => 'textfield',
    '#title' => t('Result page'),
    '#default_value' => variable_get('force_new_password_result_page', ''),
    '#description' => t('The path of result page to be showed after password change.<br />
    Leave empty to keep the regular Drupal flow.'),
  );

  $form['force_new_password_role_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Role name'),
    '#default_value' => variable_get('force_new_password_role_name', 'imported_users'),
    '#description' => t('Set the user role that you want to force the password change.'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}

/**
 * Force new password general admin form validate.
 */
function force_new_password_genaral_config_validate($form, $form_state) {

  // Check if the role exists.
  $role_name = $form_state['values']['force_new_password_role_name'];
  $check_role = user_role_load_by_name($role_name);
  if ($check_role === FALSE) {
    form_set_error('force_new_password_role_name', t('Invalid role. Please, make sure to use an existing role.'));
  }

}
