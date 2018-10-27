
#ifndef __MACROS__H
#define __MACROS__H

#define property(type, name) \
	private: \
		type name##_; \
	public: \
		const type& set##name()const \
		{ return name##_; } \
		void set##name(const type& value) \
		{ name##_ = value; }

#endif//__MACROS__H
