#ifndef LIBCOMPUTERON_COMPUTER_ON_H
#define LIBCOMPUTERON_COMPUTER_ON_H

#ifdef __cplusplus
# if __cplusplus >= 202002L
#  define LIBCOMPUTERON_INLINE inline consteval
# elif __cplusplus >= 199711L
#  define LIBCOMPUTERON_INLINE inline constexpr
# else /* <= C++03 */
#  define LIBCOMPUTERON_INLINE inline
# endif /* __cplusplus >= 199711L */
#else
# ifndef __GNUC_GNU_INLINE__
#  define LIBCOMPUTERON_INLINE inline static
# else
#  define LIBCOMPUTERON_INLINE inline
# endif /* __GNUC_GNU_INLINE__ */
#endif /* __cplusplus */

LIBCOMPUTERON_INLINE int computer_on() {
	return 1;
}

#endif /* LIBCOMPUTERON_COMPUTER_ON_H */
