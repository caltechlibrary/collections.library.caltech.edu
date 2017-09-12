<?php

/**
 * @file
 * Views integration and data for the caltechlibrary_collections module.
 */

/**
 * Implements hook_views_data_alter().
 */
function caltechlibrary_collections_views_data_alter(&$data) {
  $data['node']['comments_link']['field']['handler'] = 'caltechlibrary_collections_handler_field_comment_node_link';
}
