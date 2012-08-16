<?php

/**
 * @file
 * Administration forms for the Artisinal module.
 */

/**
 * Menu callback; Displays the administration settings for Disqus.
 */
function artisinal_admin_settings() {
  $form = array();
  return system_settings_form($form);
}
