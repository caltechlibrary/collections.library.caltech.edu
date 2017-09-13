INTRODUCTION
------------

This custom module allows us to override the “add new comment” and “log in to
post comments” links from the Comment module when used in Views.

We implement `hook_theme_registry_alter()` and point to a custom function to
override the login URL and use the Shibboleth Authentication URL for logging in.

A custom Views field handler is added along with a custom `hook_node_view()`
function for the rendering of comment links.

We implement `hook_module_implements_alter()` so that our implementation of
`hook_views_data_alter()` fires last, after the original version for the
Comment module.

We implement `hook_filter_info_alter()` and a custom tips callback to override
the filter tips text for the MathJax module.

REQUIREMENTS
------------

This module doesn’t require, but works with the following modules:

 * MathJax (https://www.drupal.org/project/mathjax)
 * Shibboleth Authentication (https://www.drupal.org/project/shib_auth)
 * Views (https://www.drupal.org/project/views)


INSTALLATION
------------

Install as you would normally install a contributed Drupal module. Visit:
https://www.drupal.org/docs/7/extending-drupal-7/installing-drupal-7-contributed-modules
for further information.


CONFIGURATION
-------------

The module has no menu or modifiable settings. There is no configuration.
