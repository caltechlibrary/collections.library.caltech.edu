<?php

/**
 * @file
 * Definition of caltechlibrary_collections_handler_field_comment_node_link.
 */

/**
 * Handler for showing comment module's node link.
 *
 * @ingroup views_field_handlers
 */
class caltechlibrary_collections_handler_field_comment_node_link extends views_handler_field_comment_node_link {
  function render($values) {
    // Build fake $node.
    $node = $this->get_value($values);

    // Run fake $node through custom hook_node_view() function.
    caltechlibrary_collections_node_view($node, $this->options['teaser'] ? 'teaser' : 'full');

    // Only render the links, if they are defined.
    return !empty($node->content['links']['comment']) ? drupal_render($node->content['links']['comment']) : '';
  }

}
