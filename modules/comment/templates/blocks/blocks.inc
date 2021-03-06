<?php
$blocks = array(
	'ViewComments' => array(
		'description' => $gallery->i18n('Show comments'),
		'vars'        => array(
			'show' => array(
				'description' => $gallery->i18n('Number of comments'),
				'type'        => 'choice',
				'default'     => '3',
				'choices'     => array(
					'1'   => $gallery->i18n('1'),
					'2'   => $gallery->i18n('2'),
					'3'   => $gallery->i18n('3'),
					'4'   => $gallery->i18n('4'),
					'5'   => $gallery->i18n('5'),
					'10'  => $gallery->i18n('10'),
					'20'  => $gallery->i18n('20'),
					'30'  => $gallery->i18n('30'),
					'50'  => $gallery->i18n('50'),
					'100' => $gallery->i18n('100'),
					'999' => $gallery->i18n('999'),
				),
			),
		),
	),
	'AddComment'   => array(
		'description' => $gallery->i18n('Add Comment'),
		'vars'        => array(
			'expand' => array(
				'description' => $gallery->i18n('Show a text box that expands into the full form'),
				'type'        => 'boolean',
				'default'     => 'true',
			),
		),
	),
);
