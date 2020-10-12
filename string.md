# constructors

## basic_string()
Default constructor creates an empty string.


## basic_string(const basic_string& __str)
Construct string with copy of value of @a __str.

- **param**  __str  Source string.


## basic_string(const basic_string& __str, size_type __pos, const _Alloc& __a = _Alloc())
Construct string as copy of a substring.

- **param**  __str  Source string.
- **param**  __pos  Index of first character to copy from.
- **param**  __a  Allocator to use.


## basic_string(const basic_string& __str, size_type __pos, size_type __n, const _Alloc& __a)
Construct string as copy of a substring.

**@param**  __str  Source string.
**@param**  __pos  Index of first character to copy from.
**@param**  __n  Number of characters to copy.
**@param**  __a  Allocator to use.


## basic_string(const _CharT* __s, size_type __n, const _Alloc& __a = _Alloc())
construct string initialized by a character %array. 
__s must have at least __n characters.

- **@param**  __s  Source character %array.
- **@param**  __n  Number of characters to copy.
- **@param**  __a  Allocator to use (default is default allocator).


## basic_string(const _CharT* __s, const _Alloc& __a = _Alloc()) const
Construct string as copy of a C string.

- **@param**  __s  Source C string.
- **@param**  __a  Allocator to use (default is default allocator).


## basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc())
Construct string as multiple characters.

- **@param**  __n  Number of characters.
- **@param**  __c  Character to use.
- **@param**  __a  Allocator to use (default is default allocator).


## basic_string(basic_string&& __str)
Move construct string.

- **@param**  __str  Source string.


## basic_string(initializer_list<_CharT> __l, const _Alloc& __a = _Alloc())
Construct string from an initializer %list.

- **@param**  __l  std::initializer_list of characters.
- **@param**  __a  Allocator to use (default is default allocator).


## basic_string(const basic_string& __str, const _Alloc& __a)
Construct string.


## basic_string(basic_string&& __str, const _Alloc& __a)
Move construct string.


## basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a = _Alloc())
Construct string as copy of a range.

- **@param**  __beg  Start of range.
- **@param**  __end  End of range.
- **@param**  __a  Allocator to use (default is default allocator).


# destructor
## ~basic_string()
Destroy the string instance.


# operator
## operator=()
### basic_string& operator=(const basic_string& __str)
Assign the value of @a str to this string.

- **@param**  __str  Source string.


### basic_string& operator=(const _CharT* __s)
Copy contents of @a s into this string.

- **@param**  __s  Source null-terminated string.


### basic_string& operator=(_CharT __c)
Set value to string of length 1. 
Assigning to a character makes this string length 1 and (*this)[0] == __c.

- **@param**  __c  Source character.


### basic_string& operator=(basic_string&& __str)
Move assign the value of @a str to this string.
The contents of __str are moved into this string (without copying).
_str is a valid, but unspecified string.

- **@param**  __str  Source string.


### basic_string& operator=(initializer_list<_CharT> __l)
Set value to string constructed from initializer %list.

- **@param**  __l  std::initializer_list.


## operator []
### const_reference operator[] (size_type __pos) const
Element access: Subscript access to the data contained in the string.

- **@param**  __pos  The index of the character to access.
- **return**  Read-only (constant) reference to the character.

This operator allows for easy, array-style, data access.
Note that data access with this operator is unchecked and
out_of_range lookups are not defined. (For checked lookups see at().)


### reference operator[](size_type __pos)
Subscript access to the data contained in the string.

- **@param**  __pos  The index of the character to access.
- **return**  Read/write reference to the character.

This operator allows for easy, array-style, data access.
Note that data access with this operator is unchecked and
out_of_range lookups are not defined. (For checked lookups see at().)


## operator+=
### basic_string& operator+=(const basic_string& __str)
Modifiers: Append a string to this string.

- **@param** __str  The string to append.
- **@return**  Reference to this string.


### basic_string& operator+=(const _CharT* __s)
Append a C string.

- **@param** __s  The C string to append.
- **@return**  Reference to this string.


### basic_string& operator+=(_CharT __c)
Append a character.

- **@param** __c  The character to append.
- **@return**  Reference to this string.


### basic_string& operator+=(initializer_list<_CharT> __l)
Append an initializer_list of characters.

- **@param** __l  The initializer_list of characters to be appended.
- **@return**  Reference to this string.


### template<typename _Tp> _If_sv<_Tp, basic_string&> operator+=(const _Tp& __svt)
Append a string_view.

- **@param** __svt The object convertible to string_view to be appended.
- **@return**  Reference to this string.


### template<typename _CharT, typename _Traits, typename _Alloc> basic_string<_CharT,_Traits,_Alloc> operator+(const _CharT* __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);
Concatenate C string and string.

- **@param** __lhs  First string.
- **@param** __rhs  Last string.
- **@return**  New string with value of __lhs followed by __rhs.


### template<typename _CharT, typename _Traits, typename _Alloc> basic_string<_CharT,_Traits,_Alloc> operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);
Concatenate character and string.

- **@param** __lhs  First string.
- **@param** __rhs  Last string.
- **@return**  New string with __lhs followed by __rhs.


### template<typename _CharT, typename _Traits, typename _Alloc> inline basic_string<_CharT, _Traits, _Alloc> operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const _CharT* __rhs)
Concatenate string and C string.

- **@param** __lhs  First string.
- **@param** __rhs  Last string.
- **@return**  New string with __lhs followed by __rhs.


### template<typename _CharT, typename _Traits, typename _Alloc> inline basic_string<_CharT, _Traits, _Alloc> operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
Concatenate string and character.

- **@param** __lhs  First string.
- **@param** __rhs  Last string.
- **@return**  New string with __lhs followed by __rhs.


## operator ==
### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test equivalence of two strings.

- **@param** __lhs  First string.
- **@param** __rhs  Second string.
- **@return**  True if __lhs.compare(@a __rhs) == 0. False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator==(const _CharT* __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test equivalence of C string and string.

- **@param** __lhs  C string.
- **@param** __rhs  String.
- **@return**  True if __rhs.compare(__lhs) == 0.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const _CharT* __rhs)
Test equivalence of string and C string.

- **@param** __lhs  String.
- **@param** __rhs  C string.
- **@return**  True if __lhs.compare(__rhs) == 0.  False otherwise.


## operator != ()
### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test difference of two strings.

- **@param** __lhs  First string.
- **@param** __rhs  Second string.
- **@return**  True if __lhs.compare(__rhs) != 0.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator!=(const _CharT* __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test difference of C string and string.

- **@param** __lhs  C string.
- **@param** __rhs  String.
- **@return**  True if __rhs.compare(__lhs) != 0.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const _CharT* __rhs)
Test difference of string and C string.

- **@param** __lhs  String.
- **@param** __rhs  C string.
- **@return**  True if __lhs.compare(__rhs) != 0.  False otherwise.


# operator <()
### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test if string precedes string.

- **@param** __lhs  First string.
- **@param** __rhs  Second string.
- **@return**  True if __lhs precedes __rhs.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const _CharT* __rhs)
Test if string precedes C string.

- **@param** __lhs  String.
- **@param** __rhs  C string.
- **@return** True if __lhs precedes __rhs.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator<(const _CharT* __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test if C string precedes string.

- **@param** __lhs  C string.
- **@param** __rhs  String.
- **@return**  True if __lhs precedes __rhs. False otherwise.


# operator >()
### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test if string follows string.

- **@param** __lhs  First string.
- **@param** __rhs  Second string.
- **@return**  True if __lhs follows __rhs.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const _CharT* __rhs)
Test if string follows C string.

- **@param** __lhs  String.
- **@param** __rhs  C string.
- **@return**  True if __lhs follows __rhs.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator>(const _CharT* __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test if C string follows string.

- **@param** __lhs  C string.
- **@param** __rhs  String.
- **@return**  True if __lhs follows __rhs.  False otherwise.


# operator <= ()
### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test if string doesn't follow string.

- **@param** __lhs  First string.
- **@param** __rhs  Second string.
- **@return**  True if __lhs doesn't follow __rhs.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const _CharT* __rhs)
Test if string doesn't follow C string.

- **@param** __lhs  String.
- **@param** __rhs  C string.
- **@return**  True if __lhs doesn't follow __rhs.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator<=(const _CharT* __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test if C string doesn't follow string.

- **@param** __lhs  C string.
- **@param** __rhs  String.
- **@return**  True if __lhs doesn't follow __rhs.  False otherwise.


## operator >=()
### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test if string doesn't precede string.

- **@param** __lhs  First string.
- **@param** __rhs  Second string.
- **@return**  True if @a __lhs doesn't precede @a __rhs.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs, const _CharT* __rhs)
Test if string doesn't precede C string.

- **@param** __lhs  String.
- **@param** __rhs  C string.
- **@return**  True if __lhs doesn't precede __rhs.  False otherwise.


### template<typename _CharT, typename _Traits, typename _Alloc> inline bool operator>=(const _CharT* __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
Test if C string doesn't precede string.

- **@param** __lhs  C string.
- **@param** __rhs  String.
- **@return**  True if __lhs doesn't precede __rhs.  False otherwise.


## operator >>()
### template<typename _CharT, typename _Traits, typename _Alloc> basic_istream<_CharT, _Traits>& operator>>(basic_istream<_CharT, _Traits>& __is, basic_string<_CharT, _Traits, _Alloc>& __str);
Read stream into a string.

- **@param** __is  Input stream.
- **@param** __str  Buffer to store into.
- **@return**  Reference to the input stream.

Stores characters from __is into __str until whitespace is found, 
the end of the stream is encountered, or str.max_size() is reached.  
If is.width() is non-zero, that is the limit on the number of characters stored into __str.  Any previous
contents of __str are erased.


## operator <<()
### template<typename _CharT, typename _Traits, typename _Alloc> inline basic_ostream<_CharT, _Traits>& operator<<(basic_ostream<_CharT, _Traits>& __os, const basic_string<_CharT, _Traits, _Alloc>& __str)
Write string to a stream.

- **@param** __os  Output stream.
- **@param** __str  String to write out.
- **@return**  Reference to the output stream.

Output characters of @a __str into os following the same rules as for writing a C string.


# public function
## swap()
### template<typename _CharT, typename _Traits, typename _Alloc> inline void swap(basic_string<_CharT, _Traits, _Alloc>& __lhs, basic_string<_CharT, _Traits, _Alloc>& __rhs)
Swap contents of two strings.

- **@param** __lhs  First string.
- **@param** __rhs  Second string.

Exchanges the contents of __lhs and __rhs in constant time.


### void swap(basic_string& __s);
Swap contents with another string.

- **@param** __s  String to swap with.

Exchanges the contents of this string with that of @a __s in constant time.


## append()
### basic_string& append(const basic_string& __str)
Append a string to this string.

- **@param** __str  The string to append.
- **@return**  Reference to this string.


### basic_string& append(const basic_string& __str, size_type __pos, size_type __n = npos)
Append a substring.

- **@param** __str  The string to append.
- **@param** __pos  Index of the first character of str to append.
- **@param** __n  The number of characters to append.
- **@return**  Reference to this string.
- **@throw**  std::out_of_range if @a __pos is not a valid index.

This function appends __n characters from  __str starting at __pos to this string. 
If __n is is larger than the number of available characters in __str, 
the remainder of __str is appended.


### basic_string& append(const _CharT* __s, size_type __n)
Append a C substring.

- **@param** __s  The C string to append.
- **@param** __n  The number of characters to append.
- **@return**  Reference to this string.


### basic_string& append(const _CharT* __s)
Append a C string.

- **@param** __s  The C string to append.
- **@return**  Reference to this string.


### basic_string& append(size_type __n, _CharT __c)
Append multiple characters.

- **@param** __n  The number of characters to append.
- **@param** __c  The character to use.
- **@return**  Reference to this string.

Appends __n copies of __c to this string.


### basic_string& append(initializer_list<_CharT> __l)
Append an initializer_list of characters.

- **@param** __l  The initializer_list of characters to append.
- **@return**  Reference to this string.


### template<class _InputIterator> basic_string& append(_InputIterator __first, _InputIterator __last)
Append a range of characters.

- **@param** __first  Iterator referencing the first character to append.
- **@param** __last  Iterator marking the end of the range.
- **@return**  Reference to this string.

Appends characters in the range [__first,__last) to this string.


### template<typename _Tp> _If_sv<_Tp, basic_string&> append(const _Tp& __svt)
Append a string_view.

- **@param** __svt The object convertible to string_view to be appended.
- **@return**  Reference to this string.


### template<typename _Tp> _If_sv<_Tp, basic_string&> append(const _Tp& __svt, size_type __pos, size_type __n = npos)
Append a range of characters from a string_view.

- **@param** __svt The object convertible to string_view to be appended from.
- **@param** __pos The position in the string_view to append from.
- **@param** __n   The number of characters to append from the string_view.
- **@return**  Reference to this string.
       

## push_back()
### void push_back(_CharT __c)
Append a single character.

- **@param** __c  Character to append.                                 


## assign()
### basic_string& assign(const basic_string& __str)
Set value to contents of another string.

- **@param**  __str  Source string to use.
- **@return**  Reference to this string.


### basic_string& assign(basic_string&& __str)
Set value to contents of another string.

- **@param**  __str  Source string to use.
- **@return**  Reference to this string.

This function sets this string to the exact contents of __str.
__str is a valid, but unspecified string.


### basic_string& assign(const basic_string& __str, size_type __pos, size_type __n = npos)
Set value to a substring of a string.

- **@param** __str  The string to use.
- **@param** __pos  Index of the first character of str.
- **@param** __n  Number of characters to use.
- **@return**  Reference to this string.
- **@throw**  std::out_of_range if @a pos is not a valid index.

This function sets this string to the substring of __str consisting of __n characters at __pos.
If __n is larger than the number of available characters in __str, 
 the remainder of __str is used.


### basic_string& assign(const _CharT* __s, size_type __n)
Set value to a C substring.

- **@param** __s  The C string to use.
- **@param** __n  Number of characters to use.
- **@return**  Reference to this string.

This function sets the value of this string to the first __n
characters of __s.  If @a __n is is larger than the number of available characters 
in __s, the remainder of __s is used.


### basic_string& assign(const _CharT* __s)
Set value to contents of a C string.

- **@param** __s  The C string to use.
- **@return**  Reference to this string.

This function sets the value of this string to the value of __s.
The data is copied, so there is no dependence on __s once the function returns.


### basic_string& assign(size_type __n, _CharT __c)
Set value to multiple characters.

- **@param** __n  Length of the resulting string.
- **@param** __c  The character to use.
- **@return**  Reference to this string.

This function sets the value of this string to __n copies of character __c.


### basic_string& assign(initializer_list<_CharT> __l)
Set value to an initializer_list of characters.

- **@param** __l  The initializer_list of characters to assign.
- **@return**  Reference to this string.


### template<typename _Tp> _If_sv<_Tp, basic_string&> assign(const _Tp& __svt)
Set value from a string_view.

- **@param** __svt The source object convertible to string_view.
- **@return**  Reference to this string.


### template<typename _Tp> _If_sv<_Tp, basic_string&> assign(const _Tp& __svt, size_type __pos, size_type __n = npos)
Set value from a range of characters in a string_view.

- **@param** __svt  The source object convertible to string_view.
- **@param** __pos  The position in the string_view to assign from.
- **@param** __n  The number of characters to assign.
- **@return**  Reference to this string.


### basic_string& assign(_InputIterator __first, _InputIterator __last)
Insert multiple characters.

- **@param** __p  Iterator referencing location in string to insert at.
- **@param** __n  Number of characters to insert
- **@param** __c  The character to insert.
- **@throw**  std::length_error  If new length exceeds @c max_size().

Inserts __n copies of character __c starting at the position referenced 
by iterator __p.  If adding characters causes the length to exceed max_size(),
length_error is thrown. The value of the string doesn't change 
if an error is thrown.


## insert()
### template<class _InputIterator> void insert(iterator __p, _InputIterator __beg, _InputIterator __end)
Insert a range of characters.
- **@param** __p  Iterator referencing location in string to insert at.
- **@param** __beg  Start of range.
- **@param** __end  End of range.
- **@throw**  std::length_error  If new length exceeds @c max_size().

Inserts characters in range [__beg,__end).  
If adding characters causes the length to exceed max_size(),
length_error is thrown.  The value of the string doesn't change 
if an error is thrown.


### void insert(iterator __p, size_type __n, _CharT __c)
       

### iterator insert(const_iterator __p, size_type __n, _CharT __c)
Insert multiple characters.

- **@param** __p  Const_iterator referencing location in string to insert at.
- **@param** __n  Number of characters to insert
- **@param** __c  The character to insert.
- **@return**  Iterator referencing the first inserted char.
- **@throw**  std::length_error  If new length exceeds max_size().

Inserts __n copies of character __c starting at the position referenced 
by iterator __p.  If adding characters causes the length to exceed max_size(),
length_error is thrown. The value of the string doesn't change if an error is thrown.


### iterator insert(const_iterator __p, _InputIterator __beg, _InputIterator __end)
Insert a range of characters.

- **@param** __p  Const_iterator referencing location in string to insert at.
- **@param** __beg  Start of range.
- **@param** __end  End of range.
- **@return** Iterator referencing the first inserted char.
- **@throw** std::length_error  If new length exceeds @c max_size().

Inserts characters in range [beg,end).  
If adding characters causes the length to exceed max_size(), 
length_error is thrown. The value of the string doesn't change if an error is thrown.


### void insert(iterator __p, initializer_list<_CharT> __l)
Insert an initializer_list of characters.

- **@param** __p  Iterator referencing location in string to insert at.
- **@param** __l  The initializer_list of characters to insert.
- **@throw**  std::length_error  If new length exceeds @c max_size().


### basic_string& insert(size_type __pos1, const basic_string& __str)
Insert value of a string.

- **@param** __pos1  Iterator referencing location in string to insert at.
- **@param** __str  The string to insert.
- **@return**  Reference to this string.
- **@throw**  std::length_error  If new length exceeds @c max_size().

Inserts value of __str starting at __pos1. 
If adding characters causes the length to exceed max_size(),
length_error is thrown.  The value of the string doesn't change if an error is thrown.


### basic_string& insert(size_type __pos1, const basic_string& __str, size_type __pos2, size_type __n = npos)
Insert a substring.

- **@param** __pos1  Iterator referencing location in string to insert at.
- **@param** __str  The string to insert.
- **@param** __pos2  Start of characters in str to insert.
- **@param** __n  Number of characters to insert.
- **@return**  Reference to this string.
- **@throw** std::length_error  If new length exceeds max_size().
- **@throw**  std::out_of_range  If pos1 > size() or __pos2 > str.size().

Starting at pos1, insert __n character of __str beginning with __pos2.  
If adding characters causes the length to exceed max_size(), length_error is thrown.
If __pos1 is beyond the end of this string or __pos2 is beyond the end of __str,
out_of_range is thrown.  The value of the string doesn't change if an error is thrown.


### basic_string& insert(size_type __pos, const _CharT* __s, size_type __n)                   
Insert a C substring.

- **@param** __pos  Iterator referencing location in string to insert at.
- **@param** __s  The C string to insert.
- **@param** __n  The number of characters to insert.
- **@return**  Reference to this string.
- **@throw**  std::length_error  If new length exceeds max_size().
- **@throw**  std::out_of_range  If __pos is beyond the end of this string.

Inserts the first __n characters of __s starting at __pos.
If adding characters causes the length to exceed max_size(), length_error is thrown.
If __pos is beyond end(), out_of_range is thrown.
The value of the string doesn't change if an error is thrown.


### basic_string& insert(size_type __pos, const _CharT* __s)
Insert a C string.

- **@param** __pos  Iterator referencing location in string to insert at.
- **@param** __s  The C string to insert.
- **@return**  Reference to this string.
- **@throw**  std::length_error  If new length exceeds @c max_size().
- **@throw**  std::out_of_range  If @a pos is beyond the end of this string.

Inserts the first @a n characters of @a __s starting at @a __pos.  
If adding characters causes the length to exceed max_size(),
length_error is thrown.  If __pos is beyond end(), out_of_range is thrown. 
The value of the string doesn't change if an error is thrown.


### basic_string& insert(size_type __pos, size_type __n, _CharT __c)
Insert multiple characters.
- **@param** __pos  Index in string to insert at.
- **@param** __n  Number of characters to insert
- **@param** __c  The character to insert.
- **@return**  Reference to this string.
- **@throw**  std::length_error  If new length exceeds @c max_size().
- **@throw**  std::out_of_range  If @a __pos is beyond the end of this string.

Inserts __n copies of character __c starting at index __pos. 
If adding characters causes the length to exceed max_size(), 
length_error is thrown.  If @a __pos > length(), out_of_range is thrown. 
The value of the string doesn't change if an error is thrown.



### iterator insert(iterator __p, _CharT __c)
Insert one character.

- **@param** __p  Iterator referencing position in string to insert at.
- **@param** __c  The character to insert.
- **@return**  Iterator referencing newly inserted char.
- **@throw**  std::length_error  If new length exceeds @c max_size().

Inserts character __c at position referenced by __p.
If adding character causes the length to exceed max_size(), length_error is thrown.
If __p is beyond end of string, out_of_range is thrown. 
The value of the string doesn't change if an error is thrown.


### template<typename _Tp> _If_sv<_Tp, basic_string&> insert(size_type __pos, const _Tp& __svt)
Insert a string_view.

- **@param** __pos  Iterator referencing position in string to insert at.
- **@param** __svt  The object convertible to string_view to insert.
- **@return**  Reference to this string.       


### template<typename _Tp> _If_sv<_Tp, basic_string&> insert(size_type __pos1, const _Tp& __svt, size_type __pos2, size_type __n = npos)
Insert a string_view.

- **@param** __pos  Iterator referencing position in string to insert at.
- **@param** __svt  The object convertible to string_view to insert from.
- **@param** __pos  Iterator referencing position in string_view to insert from.
- **@param** __n    The number of characters to insert.
- **@return**  Reference to this string.


## erase()
### basic_string& erase(size_type __pos = 0, size_type __n = npos)
Remove characters.

- **@param** __pos  Index of first character to remove (default 0).
- **@param** __n  Number of characters to remove (default remainder).
- **@return**  Reference to this string.
- **@throw**  std::out_of_range  If @a pos is beyond the end of this string.

Removes __n characters from this string starting at __pos. 
The length of the string is reduced by __n. If there are < __n characters to remove, 
the remainder of the string is truncated.  If __p is beyond end of string,
out_of_range is thrown. The value of the string doesn't change if an error is thrown.


### iterator erase(iterator __position)
Remove one character.

- **@param** __position  Iterator referencing the character to remove.
- **@return**  iterator referencing same location after removal.

Removes the character at __position from this string. 
The value of the string doesn't change if an error is thrown.


### iterator erase(iterator __first, iterator __last)
Remove a range of characters.

- **@param** __first  Iterator referencing the first character to remove.
- **@param** __last  Iterator referencing the end of the range.
- **@return**  Iterator referencing location of first after removal.

Removes the characters in the range [first,last) from this string.
The value of the string doesn't change if an error is thrown. 
#if __cplusplus >= 201103L


## pop_back()
### void pop_back()
Remove the last character. The string must be non-empty


### basic_string& replace(size_type __pos, size_type __n, const basic_string& __str)
Replace characters with value from another string.

- **@param** __pos  Index of first character to replace.
- **@param** __n  Number of characters to be replaced.
- **@param** __str  String to insert.
*  @return  Reference to this string.
*  @throw  std::out_of_range  If @a pos is beyond the end of this
*  string.
*  @throw  std::length_error  If new length exceeds @c max_size().
*
*  Removes the characters in the range [__pos,__pos+__n) from
*  this string.  In place, the value of @a __str is inserted.
*  If @a __pos is beyond end of string, out_of_range is thrown.
*  If the length of the result exceeds max_size(), length_error
*  is thrown.  The value of the string doesn't change if an
*  error is thrown.


## replace()
### basic_string& replace(size_type __pos1, size_type __n1, const basic_string& __str, size_type __pos2, size_type __n2 = npos)
Replace characters with value from another string.

- **@param** __pos1  Index of first character to replace.
- **@param** __n1  Number of characters to be replaced.
- **@param** __str  String to insert.
- **@param** __pos2  Index of first character of str to use.
- **@param** __n2  Number of characters from str to use.
- **@return**  Reference to this string.
- **@throw**  std::out_of_range  If @a __pos1 > size() or @a __pos2 >  __str.size().
- **@throw**  std::length_error  If new length exceeds @c max_size().

Removes the characters in the range [__pos1,__pos1 + n) from this string.
In place, the value of __str is inserted. If __pos is beyond end of string, 
out_of_range is thrown.  If the length of the result exceeds max_size(), length_error is thrown. 
The value of the string doesn't change if an error is thrown.


### basic_string& replace(size_type __pos, size_type __n1, const _CharT* __s, size_type __n2);
Replace characters with value of a C substring.

- **@param** __pos  Index of first character to replace.
- **@param** __n1  Number of characters to be replaced.
- **@param** __s  C string to insert.
- **@param** __n2  Number of characters from @a s to use.
- **@return**  Reference to this string.
- **@throw**  std::out_of_range  If @a pos1 > size().
- **@throw**  std::length_error  If new length exceeds @c max_size().

Removes the characters in the range [__pos,__pos + __n1) from this string.  
In place, the first __n2 characters of __s are inserted, or all of __s if __n2 is too large.
If __pos is beyond end of string, out_of_range is thrown.  If the length of result exceeds max_size(), 
length_error is thrown.  The value of the string doesn't change if an error is thrown.


### basic_string& replace(size_type __pos, size_type __n1, const _CharT* __s)
Replace characters with value of a C string.

- **@param** __pos  Index of first character to replace.
- **@param** __n1  Number of characters to be replaced.
- **@param** __s  C string to insert.
- **@return**  Reference to this string.
- **@throw**  std::out_of_range  If @a pos > size().
- **@throw**  std::length_error  If new length exceeds max_size().

Removes the characters in the range [__pos,__pos + __n1) from this string.
In place, the characters of __s are inserted.  If __pos is beyond end of string, 
out_of_range is thrown.  If the length of result exceeds max_size(),
length_error is thrown.  The value of the string doesn't change if an error is thrown.


### basic_string& replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
Replace characters with multiple characters.

- **@param** __pos  Index of first character to replace.
- **@param** __n1  Number of characters to be replaced.
- **@param** __n2  Number of characters to insert.
- **@param** __c  Character to insert.
- **@return**  Reference to this string.
- **@throw**  std::out_of_range  If @a __pos > size().
- **@throw**  std::length_error  If new length exceeds max_size().

Removes the characters in the range [pos,pos + n1) from this string.  In place,
 __n2 copies of __c are inserted. If __pos is beyond end of string, out_of_range is thrown.
If the length of result exceeds max_size(), length_error is thrown.  
The value of the string doesn't change if an error is thrown.


### basic_string& replace(iterator __i1, iterator __i2, const basic_string& __str)
Replace range of characters with string.

- **@param** __i1  Iterator referencing start of range to replace.
- **@param** __i2  Iterator referencing end of range to replace.
- **@param** __str  String value to insert.
- **@return**  Reference to this string.
- **@throw**  std::length_error  If new length exceeds @c max_size().

Removes the characters in the range [__i1,__i2).  In place, the value of __str is inserted. 
If the length of result exceeds max_size(), length_error is thrown. The value of the string doesn't change if an error is thrown.


### basic_string& replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
Replace range of characters with C substring.

- **@param** __i1  Iterator referencing start of range to replace.
- **@param** __i2  Iterator referencing end of range to replace.
- **@param** __s  C string value to insert.
- **@param** __n  Number of characters from s to insert.
- **@return**  Reference to this string.
- **@throw**  std::length_error  If new length exceeds @c max_size().

Removes the characters in the range [__i1,__i2).  In place, the first __n characters of __s are inserted.
If the length of result exceeds max_size(), length_error is thrown. 
The value of the string doesn't change if an error is thrown.


### basic_string& replace(iterator __i1, iterator __i2, const _CharT* __s)
Replace range of characters with C string.

- **@param** __i1  Iterator referencing start of range to replace.
- **@param** __i2  Iterator referencing end of range to replace.
- **@param** __s  C string value to insert.
- **@return**  Reference to this string.
- **@throw**  std::length_error  If new length exceeds @c max_size().

Removes the characters in the range [__i1,__i2).  In place, the characters of __s are inserted. 
If the length of result exceeds max_size(), length_error is thrown. 
The value of the string doesn't change if an error is thrown.


### basic_string& replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
Replace range of characters with multiple characters

- **@param** __i1  Iterator referencing start of range to replace.
- **@param** __i2  Iterator referencing end of range to replace.
- **@param** __n  Number of characters to insert.
- **@param** __c  Character to insert.
- **@return**  Reference to this string.
- **@throw**  std::length_error  If new length exceeds max_size().

Removes the characters in the range [__i1,__i2).  In place, __n copies of __c are inserted. 
If the length of result exceeds max_size(), length_error is thrown.  
The value of the string doesn't change if an error is thrown.


### template<class _InputIterator>basic_string& replace(iterator __i1, iterator __i2, _InputIterator __k1, _InputIterator __k2)
Replace range of characters with range.

- **@param** __i1  Iterator referencing start of range to replace.
- **@param** __i2  Iterator referencing end of range to replace.
- **@param** __k1  Iterator referencing start of range to insert.
- **@param** __k2  Iterator referencing end of range to insert.
- **@return**  Reference to this string.
- **@throw**  std::length_error  If new length exceeds @c max_size().

Removes the characters in the range [__i1,__i2). In place, 
characters in the range [__k1,__k2) are inserted.  If the length of result exceeds max_size(), 
length_error is thrown. The value of the string doesn't change if an error is thrown.


### basic_string& replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
Specializations for the common case of pointer and iterator:
useful to avoid the overhead of temporary buffering in _M_replace.


### basic_string& replace(iterator __i1, iterator __i2, initializer_list<_CharT> __l)
Replace range of characters with initializer_list.

- **@param** __i1  Iterator referencing start of range to replace.
- **@param** __i2  Iterator referencing end of range to replace.
- **@param** __l  The initializer_list of characters to insert.
- **@return**  Reference to this string.
- **@throw**  std::length_error  If new length exceeds @c max_size().

Removes the characters in the range [__i1,__i2).  In place, characters in the range [__k1,__k2) are inserted.  
If the length of result exceeds max_size(), length_error is thrown.
The value of the string doesn't change if an error is thrown.


### template<typename _Tp> _If_sv<_Tp, basic_string&> replace(size_type __pos, size_type __n, const _Tp& __svt)
Replace range of characters with string_view.

- **@param** __pos  The position to replace at.
- **@param** __n    The number of characters to replace.
- **@param** __svt  The object convertible to string_view to insert.
- **@return**  Reference to this string.


### template<typename _Tp> _If_sv<_Tp, basic_string&> replace(size_type __pos1, size_type __n1, const _Tp& __svt, size_type __pos2, size_type __n2 = npos)
Replace range of characters with string_view.

- **@param** __pos1  The position to replace at.
- **@param** __n1    The number of characters to replace.
- **@param** __svt   The object convertible to string_view to insert from.
- **@param** __pos2  The position in the string_view to insert from.
- **@param** __n2    The number of characters to insert.
- **@return**  Reference to this string.


### template<typename _Tp> _If_sv<_Tp, basic_string&> replace(const_iterator __i1, const_iterator __i2, const _Tp& __svt)
Replace range of characters with string_view.

- **@param** __i1   An iterator referencing the start position to replace at.
- **@param** __i2   An iterator referencing the end position for the replace.
- **@param** __svt  The object convertible to string_view to insert from.
- **@return**  Reference to this string.


## copy()
### size_type copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
Copy substring into C string.

- **@param** __s  C string to copy value into.
- **@param** __n  Number of characters to copy.
- **@param** __pos  Index of first character to copy.
- **@return**  Number of characters actually copied
- **@throw**  std::out_of_range  If __pos > size().

Copies up to __n characters starting at __pos into the C string __s.  
If __pos is greater than size(), out_of_range is thrown.


## c_str()
### const _CharT* c_str() const
Return const pointer to null-terminated contents.

This is a handle to internal data.  Do not modify or dire things may happen.


## data()
### const _CharT* data() const _GLIBCXX_NOEXCEPT 
Return const pointer to contents.

This is a pointer to internal data.  It is undefined to modify
the contents through the returned pointer. To get a pointer that
 allows modifying the contents use @c &str[0] instead,
(or in C++17 the non-const @c str.data() overload).


### _CharT* data() noexcept
Return non-const pointer to contents.

This is a pointer to the character sequence held by the string.
Modifying the characters in the sequence is allowed.      


## get_allocator()
### allocator_type get_allocator() const
Return copy of allocator used to construct this string.


## find()
### size_type find(const _CharT* __s, size_type __pos, size_type __n) const
Find position of a C substring.

- **@param** __s  C string to locate.
- **@param** __pos  Index of character to search from.
- **@param** __n  Number of characters from @a s to search for.
- **@return**  Index of start of first occurrence.

Starting from __pos, searches forward for the first __n characters in __s within this string. 
If found, returns the index where it begins.  If not found, returns npos.


### size_type find(const basic_string& __str, size_type __pos = 0) const
Find position of a string.

- **@param** __str  String to locate.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of start of first occurrence.

Starting from __pos, searches forward for value of __str within this string. 
If found, returns the index where it begins.  If not found, returns npos.


### size_type find(const _CharT* __s, size_type __pos = 0) const
Find position of a C string.

- **@param** __s  C string to locate.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of start of first occurrence.

Starting from __pos, searches forward for the value of __s within this string. 
If found, returns the index where it begins.  If not found, returns npos.


### size_type find(_CharT __c, size_type __pos = 0) const
Find position of a character.

- **@param** __c  Character to locate.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of first occurrence.

Starting from __pos, searches forward for __c within this string.  If found, 
returns the index where it was found.  If not found, returns npos.


### template<typename _Tp> _If_sv<_Tp, size_type> find(const _Tp& __svt, size_type __pos = 0) const
Find position of a string_view.

- **@param** __svt  The object convertible to string_view to locate.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of start of first occurrence.


## rfind()
### size_type rfind(const basic_string& __str, size_type __pos = npos) const
Find last position of a string.

- **@param** __str  String to locate.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of start of last occurrence.

Starting from __pos, searches backward for value of  __str within this string.  
If found, returns the index where it begins. If not found, returns npos.       


### size_type rfind(const _CharT* __s, size_type __pos, size_type __n) const
Find last position of a C substring.

- **@param** __s  C string to locate.
- **@param** __pos  Index of character to search back from.
- **@param** __n  Number of characters from s to search for.
- **@return**  Index of start of last occurrence.

Starting from @a __pos, searches backward for the first __n characters in __s within this string. 
If found, returns the index where it begins.  If not found, returns npos.


### size_type rfind(const _CharT* __s, size_type __pos = npos) const
Find last position of a C string.

- **@param** __s  C string to locate.
- **@param** __pos  Index of character to start search at (default end).
- **@return**  Index of start of  last occurrence.

Starting from __pos, searches backward for the value of __s within this string. 
If found, returns the index where it begins. If not found, returns npos.


### size_type rfind(_CharT __c, size_type __pos = npos) const
Find last position of a character.

- **@param** __c  Character to locate.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of last occurrence.

Starting from __pos, searches backward for __c within this string.  If found, 
returns the index where it was found.  If not found, returns npos.


### template<typename _Tp> _If_sv<_Tp, size_type> rfind(const _Tp& __svt, size_type __pos = npos) const
Find last position of a string_view.

- **@param** __svt  The object convertible to string_view to locate.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of start of last occurrence.


## find_first_of()
### size_type find_first_of(const basic_string& __str, size_type __pos = 0) const
Find position of a character of string.

- **@param** __str  String containing characters to locate.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of first occurrence.

Starting from __pos, searches forward for one of the characters of __str within this string. 
If found, returns the index where it was found.  If not found, returns npos.


### size_type find_first_of(const _CharT* __s, size_type __pos = 0) const
Find position of a character of C string.

- **@param** __s  String containing characters to locate.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of first occurrence.

Starting from __pos, searches forward for one of the characters of __s within this string.
If found, returns the index where it was found.  If not found, returns npos.


### size_type find_first_of(_CharT __c, size_type __pos = 0) const
Find position of a character.

- **@param** __c  Character to locate.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of first occurrence.

Starting from __pos, searches forward for the character __c within this string. 
If found, returns the index where it was found.  If not found, returns npos.

Note: equivalent to find(__c, __pos).


### template<typename _Tp> _If_sv<_Tp, size_type> find_first_of(const _Tp& __svt, size_type __pos = 0) const
Find position of a character of a string_view.

- **@param** __svt  An object convertible to string_view containing characters to locate.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of first occurrence.


## find_last_of()
### size_type find_last_of(const basic_string& __str, size_type __pos = npos) const
Find last position of a character of string.

- **@param** __str  String containing characters to locate.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of last occurrence.

Starting from __pos, searches backward for one of the characters of __str within this string. 
If found, returns the index where it was found.  If not found, returns npos.


### size_type find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
Find last position of a character of C substring.

- **@param** __s  C string containing characters to locate.
- **@param** __pos  Index of character to search back from.
- **@param** __n  Number of characters from s to search for.
- **@return**  Index of last occurrence.

Starting from __pos, searches backward for one of the first __n characters of __s within this string.  
If found, returns the index where it was found.  If not found, returns npos.


### size_type find_last_of(const _CharT* __s, size_type __pos = npos) const
Find last position of a character of C string.

- **@param** __s  C string containing characters to locate.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of last occurrence.

Starting from __pos, searches backward for one of the characters of __s within this string. 
If found, returns the index where it was found. If not found, returns npos.


### size_type find_last_of(_CharT __c, size_type __pos = npos) const
Find last position of a character.

- **@param** __c  Character to locate.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of last occurrence.

Starting from __pos, searches backward for __c within this string.  If found, 
returns the index where it was found.  If not found, returns npos.

Note: equivalent to rfind(__c, __pos).


### template<typename _Tp> _If_sv<_Tp, size_type> find_last_of(const _Tp& __svt, size_type __pos = npos) const
Find last position of a character of string.

- **@param** __svt  An object convertible to string_view containing characters to locate.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of last occurrence.


## find_first_not_of()
### size_type find_first_not_of(const basic_string& __str, size_type __pos = 0) const
Find position of a character not in string.

- **@param** __str  String containing characters to avoid.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of first occurrence.

Starting from __pos, searches forward for a character not contained in __str within this string.  
If found, returns the index where it was found.  If not found, returns npos.


### size_type find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
Find position of a character not in C substring.

- **@param** __s  C string containing characters to avoid.
- **@param** __pos  Index of character to search from.
- **@param** __n  Number of characters from __s to consider.
- **@return**  Index of first occurrence.

Starting from __pos, searches forward for a character not contained 
in the first __n characters of __s within this string.  If found, 
returns the index where it was found. If not found, returns npos.


### size_type find_first_not_of(const _CharT* __s, size_type __pos = 0) const
Find position of a character not in C string.

- **@param** __s  C string containing characters to avoid.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of first occurrence.

Starting from __pos, searches forward for a character not contained in __s within this string. 
If found, returns the index where it was found.  If not found, returns npos.	      


### size_type find_first_not_of(_CharT __c, size_type __pos = 0) const
Find position of a different character.

- **@param** __c  Character to avoid.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of first occurrence.

Starting from __pos, searches forward for a character other than __c within this string.
If found, returns the index where it was found.  If not found, returns npos.


### template<typename _Tp> _If_sv<_Tp, size_type> find_first_not_of(const _Tp& __svt, size_type __pos = 0) const
Find position of a character not in a string_view.

- **@param** __svt  An object convertible to string_view containing characters to avoid.
- **@param** __pos  Index of character to search from (default 0).
- **@return**  Index of first occurrence.


### size_type find_last_not_of(const basic_string& __str, size_type __pos = npos) const
Find last position of a character not in string.

- **@param** __str  String containing characters to avoid.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of last occurrence.

Starting from __pos, searches backward for a character not contained in __str within this string. 
If found, returns the index where it was found.  If not found, returns npos.


### size_type find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
Find last position of a character not in C substring.

- **@param** __s  C string containing characters to avoid.
- **@param** __pos  Index of character to search back from.
- **@param** __n  Number of characters from s to consider.
- **@return**  Index of last occurrence.

Starting from __pos, searches backward for a character not contained in the first __n characters of __s within this string.
If found, returns the index where it was found.  If not found, returns npos.


### size_type find_last_not_of(const _CharT* __s, size_type __pos = npos) const
Find last position of a character not in C string.

- **@param** __s  C string containing characters to avoid.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of last occurrence.

Starting from __pos, searches backward for a character not contained in __s within this string. 
If found, returns the index where it was found. If not found, returns npos.


### size_type find_last_not_of(_CharT __c, size_type __pos = npos) const
Find last position of a different character.

- **@param** __c  Character to avoid.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of last occurrence.

Starting from __pos, searches backward for a character other than __c within this string. 
If found, returns the index where it was found.  If not found, returns npos.


### template<typename _Tp> _If_sv<_Tp, size_type> find_last_not_of(const _Tp& __svt, size_type __pos = npos) const
Find last position of a character not in a string_view.

- **@param** __svt  An object convertible to string_view containing characters to avoid.
- **@param** __pos  Index of character to search back from (default end).
- **@return**  Index of last occurrence.


## substr()
### basic_string substr(size_type __pos = 0, size_type __n = npos) const
Get a substring.
- **@param** __pos  Index of first character (default 0).
- **@param** __n  Number of characters in substring (default remainder).
- **@return**  The new string.
- **@throw**  std::out_of_range  If __pos > size().

Construct and return a new string using the __n characters starting at __pos. 
If the string is too short, use the remainder of the characters. 
If __pos is beyond the end of the string, out_of_range is thrown.


## compare()
### int compare(const basic_string& __str) const
Compare to a string.

- **@param** __str  String to compare against.
- **@return**  Integer < 0, 0, or > 0.

Returns an integer < 0 if this string is ordered before __str, 
0 if strings to compare as the smallest of size() and str.size(). 
The function then compares the two strings by calling traits::compare values are equivalent, 
or > 0 if this string is ordered after __str.  Determines the effective length rlen of the stare(data(), str.data(),rlen).
If the result of the comparison is nonzero returns it, otherwise the shorter one is ordered first.


### template<typename _Tp> _If_sv<_Tp, int> compare(size_type __pos, size_type __n, const _Tp& __svt) const
Compare to a string_view.

- **@param** __pos  A position in the string to start comparing from.
- **@param** __n    The number of characters to compare.
- **@param** __svt  An object convertible to string_view to compare against.
- **@return**  Integer < 0, 0, or > 0.


### template<typename _Tp> _If_sv<_Tp, int> compare(const _Tp& __svt) const
Compare to a string_view.

- **@param** __svt An object convertible to string_view to compare against.
- **@return**  Integer < 0, 0, or > 0.


### template<typename _Tp> _If_sv<_Tp, int> compare(size_type __pos1, size_type __n1, const _Tp& __svt, size_type __pos2, size_type __n2 = npos) const
Compare to a string_view.

- **@param** __pos1     A position in the string to start comparing from.
- **@param** __n1       The number of characters to compare.
- **@param** __svt      An object convertible to string_view to compare against.
- **@param** __pos2     A position in the string_view to start comparing from.
- **@param** __n2       The number of characters to compare.
- **@return**           Integer < 0, 0, or > 0.


### int compare(size_type __pos, size_type __n, const basic_string& __str) const;
Compare substring to a string.

- **@param** __pos      Index of first character of substring.
- **@param** __n        Number of characters in substring.
- **@param** __str      String to compare against.
- **@return**           Integer < 0, 0, or > 0.

Form the substring of this string from the __n characters starting at __pos.
Returns an integer < 0 if the substring is ordered before __str, 
0 if their values are equivalent, or > 0 if the substring is ordered after __str.
Determines the effective length rlen of the strings to compare as the smallest of the length of the substring
and __str.size(). The function then compares the two strings by calling
traits::compare(substring.data(),str.data(),rlen).  If the result of 
the comparison is nonzero returns it, otherwise the shorter one is ordered first.


### int compare(size_type __pos1, size_type __n1, const basic_string& __str, size_type __pos2, size_type __n2 = npos) const
Compare substring to a substring.

- **@param** __pos1     Index of first character of substring.
- **@param** __n1       Number of characters in substring.
- **@param** __str      String to compare against.
- **@param** __pos2     Index of first character of substring of str.
- **@param** __n2       Number of characters in substring of str.
- **@return**           Integer < 0, 0, or > 0.

Form the substring of this string from the __n1 characters starting at __pos1.
Form the substring of __str from the __n2 characters starting at __pos2.
Returns an integer < 0 if this substring is ordered before the substring of __str, 
0 if their values are equivalent, or > 0 if this substring is ordered after the substring of __str.
Determines the effective length rlen of the strings to compare as the smallest of 
the lengths of the substrings.  The function then compares the two strings by calling
traits::compare(substring.data(),str.substr(pos2,n2).data(),rlen).
If the result of the comparison is nonzero returns it, otherwise the shorter one is ordered first.


### int compare(const _CharT* __s) const
Compare to a C string.

- **@param** __s    C string to compare against.
- **@return**       Integer < 0, 0, or > 0.

Returns an integer < 0 if this string is ordered before __s, 
0 if their values are equivalent, or > 0 if this string is ordered after __s. 
Determines the effective length rlen of the strings to compare as the smallest of size() 
and the length of a string constructed from __s. The function then compares the two strings
by calling traits::compare(data(),s,rlen).  If the result of the comparison is nonzero returns it, 
otherwise the shorter one is ordered first.


### int compare(size_type __pos, size_type __n1, const _CharT* __s) const
Compare substring to a C string.

- **@param** __pos  Index of first character of substring.
- **@param** __n1   Number of characters in substring.
- **@param** __s    C string to compare against.
- **@return**       Integer < 0, 0, or > 0.

Form the substring of this string from the __n1 characters starting at pos.  
Returns an integer < 0 if the substring is ordered before __s, 
0 if their values are equivalent, or > 0 if the substring is ordered after __s.
Determines the effective length rlen of the strings to compare as the smallest of
the length of the substring and the length of a string constructed from __s. 
The function then compares the two string by calling
traits::compare(substring.data(),__s,rlen).  If the result of the comparison is 
nonzero returns it, otherwise the shorter one is ordered first.


### int compare(size_type __pos, size_type __n1, const _CharT* __s, size_type __n2) const;
Compare substring against a character array.

- **@param** __pos      Index of first character of substring.
- **@param** __n1       Number of characters in substring.
- **@param** __s        character %array to compare against.
- **@param** __n2       Number of characters of s.
- **@return**           Integer < 0, 0, or > 0.

Form the substring of this string from the __n1 characters starting at __pos.  
Form a string from the first __n2 characters of __s.  Returns an integer < 0
if this substring is ordered before the string from __s,
0 if their values are equivalent, or > 0 if this substring is ordered 
after the string from __s.  Determines the effective length rlen of the strings 
to compare as the smallest of the length of the substring and __n2.  
The function then compares the two strings by calling
traits::compare(substring.data(),s,rlen). If the result of the comparison is nonzero returns it,
 otherwise the shorter one is ordered first.

	      
# Iterators
## begin()
### iterator begin()
Returns a read/write iterator that points to the first character in the string.


### const_iterator begin() const
Returns a read-only (constant) iterator that points to the first character 
in the string.
       

## end()
### iterator end()
Returns a read/write iterator that points one past the last character 
in the string.


### const_iterator end() const
Returns a read-only (constant) iterator that points one past the last character 
in the string.


## rbegin()
### reverse_iterator rbegin()
Returns a read/write reverse iterator that points to the last character 
in the string. Iteration is done in reverse element order.


### const_reverse_iterator rbegin() const
Returns a read-only (constant) reverse iterator that points to the last character
 in the string.  Iteration is done in reverse element order.


## rend()
### reverse_iterator rend()
Returns a read/write reverse iterator that points to one before the first character
 in the %string.  Iteration is done in reverse element order.
 

### const_reverse_iterator rend() const
Returns a read-only (constant) reverse iterator that points to one 
before the first character in the %string. Iteration  is done in reverse element order.


## cbegin()
### const_iterator cbegin() const
Returns a read-only (constant) iterator that points to the first  character 
in the string.


## cend()
### const_iterator cend() const
Returns a read-only (constant) iterator that points one past the last character 
in the string.


## size()
### size_type size() const
Capacity: Returns the number of characters in the string, not including any
null-termination.


## length()
### size_type length() const
Returns the number of characters in the string, not including any null-termination.


## max_size()
### size_type max_size() const
Returns the size() of the largest possible string.


## resize()
### void resize(size_type __n, _CharT __c);
Resizes the string to the specified number of characters.

This function will resize the string to the specified number of characters.  
If the number is smaller than the string's current size the string is truncated,
 otherwise the string is extended and new elements are set to __c.

- **@param**  __n  Number of characters the %string should contain.
- **@param**  __c  Character to fill any new elements.


### void resize(size_type __n)
Resizes the string to the specified number of characters.

This function will resize the string to the specified length. 
If the new size is smaller than the string's current size the string is truncated, 
otherwise the %string is extended and new characters are default-constructed.  
For basic types such as char, this means setting them to 0.

- **@param**  __n  Number of characters the %string should contain.


## capacity()
### size_type capacity() const
Returns the total number of characters that the string can hold
before needing to allocate more memory.


## reserve()
### void reserve(size_type __res_arg = 0)
Attempt to preallocate enough memory for specified number of characters.

- **@param**  __res_arg  Number of characters required.
- **@throw**  std::length_error  If __res_arg exceeds @c max_size().

This function attempts to reserve enough memory for the string 
to hold the specified number of characters.  
If the number requested is more than max_size(), length_error is thrown.

The advantage of this function is that if optimal code is a necessity 
and the user can determine the string length that will be required, 
the user can reserve the memory in advance,
 and thus prevent a possible reallocation of memory and copying of string data.


## clear()
### void clear()
Erases the string, making it empty.


## empty()
### bool empty() const
Returns true if the %string is empty. Equivalent to  *this == "".


## at()
### const_reference at(size_type __n) const
Provides access to the data contained in the string.

- **@param** __n The index of the character to access.
- **@return**  Read-only (const) reference to the character.
- **@throw**  std::out_of_range  If @a n is an invalid index.

This function provides for safer data access. The parameter is first checked
that it is in the range of the string. The function throws out_of_range 
if the check fails.


### reference at(size_type __n)
Provides access to the data contained in the string.

- **@param** __n The index of the character to access.
- **@return**  Read/write reference to the character.
- **@throw**  std::out_of_range  If @a n is an invalid index.

This function provides for safer data access. The parameter is first checked 
that it is in the range of the string.  The function throws out_of_range 
if the check fails.


## front()
### reference front()
Returns a read/write reference to the data at the first element of the string.


### const_reference front() const
Returns a read-only (constant) reference to the data 
at the first element of the string.


## back()
### reference back()
Returns a read/write reference to the data at the last element of the string.


### const_reference back()
Returns a read-only (constant) reference to the data 
at the last element of the string.


## basic_istream()
### template<typename _CharT, typename _Traits, typename _Alloc> basic_istream<_CharT, _Traits>& getline(basic_istream<_CharT, _Traits>& __is, basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
Read a line from stream into a string.

- **@param** __is  Input stream.
- **@param** __str  Buffer to store into.
- **@param** __delim  Character marking end of line.
- **@return**  Reference to the input stream.

Stores characters from __is into __str until __delim is found, the end of the stream is encountered, 
or str.max_size() is reached.  Any previous contents of @a __str are erased. 
If __delim is encountered, it is extracted but not stored into __str.


### template<typename _CharT, typename _Traits, typename _Alloc> inline basic_istream<_CharT, _Traits>& getline(basic_istream<_CharT, _Traits>& __is, basic_string<_CharT, _Traits, _Alloc>& __str)
Read a line from stream into a string.

- **@param** __is  Input stream.
- **@param** __str  Buffer to store into.
- **@return**  Reference to the input stream.

Stores characters from is into __str until &apos;\n&apos; is found, the end of the stream is encountered, 
or str.max_size() is reached. Any previous contents of __str are erased. 
If end of line is encountered, it is extracted but not stored into __str.


### template<typename _CharT, typename _Traits, typename _Alloc> inline basic_istream<_CharT, _Traits>& getline(basic_istream<_CharT, _Traits>&& __is, basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
Read a line from an rvalue stream into a string.


### template<typename _CharT, typename _Traits, typename _Alloc> inline basic_istream<_CharT, _Traits>& getline(basic_istream<_CharT, _Traits>&& __is, basic_string<_CharT, _Traits, _Alloc>& __str)
Read a line from an rvalue stream into a string.


## getline()
### template<> basic_istream<char>& getline(basic_istream<char>& __in, basic_string<char>& __str, char __delim);


### template<> basic_istream<wchar_t>& getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str, wchar_t __delim);
 

## stoi()
### inline int stoi(const string& __str, size_t* __idx = 0, int __base = 10)


## stol()
### inline long stol(const string& __str, size_t* __idx = 0, int __base = 10)


## stoul()
### inline unsigned long stoul(const string& __str, size_t* __idx = 0, int __base = 10)


## stoll()
### inline long long stoll(const string& __str, size_t* __idx = 0, int __base = 10)


## stoull()
### inline unsigned long long stoull(const string& __str, size_t* __idx = 0, int __base = 10)


## stof()
### inline float stof(const string& __str, size_t* __idx = 0)


## stod()
### inline double stod(const string& __str, size_t* __idx = 0)


## stold()
### inline long double stold(const string& __str, size_t* __idx = 0)


## to_string()
### inline string to_string(int __val)


### inline string to_string(unsigned __val)


### inline string to_string(long __val)


### inline string to_string(unsigned long __val)


### inline string to_string(long long __val)


### inline string to_string(unsigned long long __val)


### inline string to_string(float __val)


### inline string to_string(double __val)


### inline string to_string(long double __val)


## to_wstring()
### inline wstring to_wstring(int __val)


### inline wstring to_wstring(unsigned __val)


### inline wstring to_wstring(long __val)


### inline wstring to_wstring(unsigned long __val)


### inline wstring to_wstring(long long __val)


### inline wstring to_wstring(unsigned long long __val)


### inline wstring to_wstring(float __val)


### inline wstring to_wstring(double __val)


### inline wstring to_wstring(long double __val)
  