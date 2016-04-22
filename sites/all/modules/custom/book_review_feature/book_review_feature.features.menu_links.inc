<?php
/**
 * @file
 * book_review_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function book_review_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_book-reviews:book-reviews.
  $menu_links['main-menu_book-reviews:book-reviews'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'book-reviews',
    'router_path' => 'book-reviews',
    'link_title' => 'Book Reviews',
    'options' => array(
      'identifier' => 'main-menu_book-reviews:book-reviews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Book Reviews');

  return $menu_links;
}
