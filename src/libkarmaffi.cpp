// libkarmaffi.cpp : Defines the exported functions for the DLL application.
//

#include "includes/libkarmaffi.hpp"

using namespace libkarmaffi;

namespace libkarmaffi {

	locked_runtime_variable::locked_runtime_variable(locked_runtime_variable_kind lrvk) : lrv_kind(lrvk) {

	}

	locked_runtime_variable::~locked_runtime_variable() {

	}

	const locked_runtime_variable_kind locked_runtime_variable::get_locked_runtime_variable_kind() {
		return lrv_kind;
	}

	locked_integer_variable::locked_integer_variable(int i) : locked_runtime_variable(locked_runtime_variable_kind::LOCKED_RUNTIME_VARIABLE_INTEGER), integer(i) {

	}

	locked_integer_variable::~locked_integer_variable() {

	}

	const int locked_integer_variable::get_locked_integer_variable() {
		return integer;
	}

	int locked_integer_variable::set_locked_integer_variable(int i) {
		integer = i;
		return integer;
	}

	locked_decimal_variable::locked_decimal_variable(float d) : locked_runtime_variable(locked_runtime_variable_kind::LOCKED_RUNTIME_VARIABLE_DECIMAL), decimal(d) {

	}

	locked_decimal_variable::~locked_decimal_variable() {

	}

	const float locked_decimal_variable::get_locked_decimal_variable() {
		return decimal;
	}

	float locked_decimal_variable::set_locked_decimal_variable(float d) {
		decimal = d;
		return decimal;
	}

	locked_string_variable::locked_string_variable(string s) : locked_runtime_variable(locked_runtime_variable_kind::LOCKED_RUNTIME_VARIABLE_STRING), str(s) {

	}

	locked_string_variable::~locked_string_variable() {

	}

	const string locked_string_variable::get_locked_string_variable() {
		return str;
	}

	string locked_string_variable::set_locked_string_variable(string s) {
		str = s;
		return str;
	}

	locked_boolean_variable::locked_boolean_variable(bool b) : locked_runtime_variable(locked_runtime_variable_kind::LOCKED_RUNTIME_VARIABLE_BOOLEAN), boolean(b) {

	}

	locked_boolean_variable::~locked_boolean_variable() {

	}

	const bool locked_boolean_variable::get_locked_boolean_variable() {
		return boolean;
	}

	bool locked_boolean_variable::set_locked_boolean_variable(bool b) {
		boolean = b;
		return boolean;
	}

	locked_list_variable::locked_list_variable(vector<shared_ptr<locked_runtime_variable>> l) : locked_runtime_variable(locked_runtime_variable_kind::LOCKED_RUNTIME_VARIABLE_LIST), list(l) {

	}

	locked_list_variable::~locked_list_variable() {

	}

	const vector<shared_ptr<locked_runtime_variable>> locked_list_variable::get_locked_list_variable() {
		return list;
	}

	vector<shared_ptr<locked_runtime_variable>> locked_list_variable::set_locked_list_variable(vector<shared_ptr<locked_runtime_variable>> l) {
		list = l;
		return list;
	}

	locked_tuple_variable::locked_tuple_variable(vector<shared_ptr<locked_runtime_variable>> t) : locked_runtime_variable(locked_runtime_variable_kind::LOCKED_RUNTIME_VARIABLE_TUPLE), tuple(t) {

	}

	locked_tuple_variable::~locked_tuple_variable() {

	}

	const vector<shared_ptr<locked_runtime_variable>> locked_tuple_variable::get_locked_tuple_variable() {
		return tuple;
	}

	vector<shared_ptr<locked_runtime_variable>> locked_tuple_variable::set_locked_tuple_variable(vector<shared_ptr<locked_runtime_variable>> t) {
		tuple = t;
		return tuple;
	}

	locked_nil_variable::locked_nil_variable() : locked_runtime_variable(locked_runtime_variable_kind::LOCKED_RUNTIME_VARIABLE_NIL) {

	}

	locked_nil_variable::~locked_nil_variable() {

	}
}