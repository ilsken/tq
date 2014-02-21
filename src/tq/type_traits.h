#ifndef tq_transform_traits_h
#define tq_transform_traits_h

#include <type_traits>
#include <tq/cxx14/transform_traits.h>
#include <tq/detail/type_traits.h>

// some extensions
namespace tq { inline namespace type_traits {
    // traits
    template <class T>
    struct  has_operator_address_of : detail::has_operator_address_of_impl<T> {};
    template <class Iterator, class Category>
    struct is_iterator_category : std::is_base_of<Category, Iterator> {};
    
    // helpers
    template <class T>
    using iterator_t = typename T::iterator;
    
    template <class T>
    using iterator_category_t = typename T::iterator_category;
    
    template <class Iterator, class Category>
    using is_iterator_category_t = typename is_iterator_category<Iterator, Category>::type;

}}



#endif

