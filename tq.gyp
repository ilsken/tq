 {
    'targets': [
      {
        'target_name': 'tq',
        'type': '<(library)',
        'dependencies': [],
        'defines': [],
        'include_dirs': [
          'src/tq'
        ],
        'direct_dependent_settings': {
          'include_dirs': ['src'],
          'defines': [],
          'linkflags': []
        },
        'export_dependent_settings': [],
        'sources': [
          'src/tq/experimental/optional.h',
          'src/tq/type_traits.h'
        ]
      }
    ]
  }
