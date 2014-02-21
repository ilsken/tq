#ifndef tq_type_traits_detail_h
#define tq_type_traits_detail_h
namespace tq { inline namespace type_traits { namespace detail {
    template <class First, class Second>
    using select_2nd = Second;
    
    template <class T>
    struct has_operator_address_of_impl {
        template <class C>
        static select_2nd<decltype(std::declval<C*>()->operator&()), std::true_type> test(int);
        template <class C>
        static std::false_type test(...);
        typedef decltype(test(0)) result;
    };
}}}
#endif