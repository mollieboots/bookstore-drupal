<?php
/**
 * @file
 * contact_feature.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function contact_feature_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'mollie.bootsma@gmail.com',
      'reply' => 'Thanks so much for your feedback! Some one will get back to you as soon as we find our way out of the oversized labyrinth the entire staff is lost in.

-Mama B\'s Books',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
