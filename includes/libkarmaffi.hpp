#ifndef LIBKARMAFFI_LIBKARMAFFI_HPP
#define LIBKARMAFFI_LIBKARMAFFI_HPP

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::pair;
using std::shared_ptr;
using std::make_shared;

namespace libkarmaffi {

	enum locked_runtime_variable_kind {
		LOCKED_RUNTIME_VARIABLE_INTEGER, LOCKED_RUNTIME_VARIABLE_STRING, LOCKED_RUNTIME_VARIABLE_DECIMAL, LOCKED_RUNTIME_VARIABLE_BOOLEAN, LOCKED_RUNTIME_VARIABLE_LIST,
		LOCKED_RUNTIME_VARIABLE_TUPLE, LOCKED_RUNTIME_VARIABLE_NIL
	};

	class locked_runtime_variable {
		locked_runtime_variable_kind lrv_kind;
		public:
			locked_runtime_variable(locked_runtime_variable_kind lrvk);
			~locked_runtime_variable();
			const locked_runtime_variable_kind get_locked_runtime_variable_kind();
	};

	class locked_integer_variable : public locked_runtime_variable {
		int integer;
		public:
			locked_integer_variable(int i);
			~locked_integer_variable();
			const int get_locked_integer_variable();
			int set_locked_integer_variable(int i);
	};

	class locked_decimal_variable : public locked_runtime_variable {
		float decimal;
		public:
			locked_decimal_variable(float d);
			~locked_decimal_variable();
			const float get_locked_decimal_variable();
			float set_locked_decimal_variable(float f);
	};

	class locked_string_variable : public locked_runtime_variable {
		string str;
		public:
			locked_string_variable(string s);
			~locked_string_variable();
			const string get_locked_string_variable();
			string set_locked_string_variable(string s);
	};

	class locked_boolean_variable : public locked_runtime_variable {
		bool boolean;
		public:
			locked_boolean_variable(bool b);
			~locked_boolean_variable();
			const bool get_locked_boolean_variable();
			bool set_locked_boolean_variable(bool b);
	};

	class locked_list_variable : public locked_runtime_variable {
		vector<shared_ptr<locked_runtime_variable>> list;
		public:
			locked_list_variable(vector<shared_ptr<locked_runtime_variable>> l);
			~locked_list_variable();
			const vector<shared_ptr<locked_runtime_variable>> get_locked_list_variable();
			vector<shared_ptr<locked_runtime_variable>> set_locked_list_variable(vector<shared_ptr<locked_runtime_variable>> l);
	};

	class locked_tuple_variable : public locked_runtime_variable {
		vector<shared_ptr<locked_runtime_variable>> tuple;
		public:
			locked_tuple_variable(vector<shared_ptr<locked_runtime_variable>> t);
			~locked_tuple_variable();
			const vector<shared_ptr<locked_runtime_variable>> get_locked_tuple_variable();
			vector<shared_ptr<locked_runtime_variable>> set_locked_tuple_variable(vector<shared_ptr<locked_runtime_variable>> t);
	};

	class locked_nil_variable : public locked_runtime_variable {
		public:
			locked_nil_variable();
			~locked_nil_variable();
	};
}

#endif