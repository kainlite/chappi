class User
{
public:
	User();
	User(std::string name);
	std::string name();
	void set_name(std::string const _name);

private:
	std::string _name;
};

User::User() {}

void User::set_name(std::string const name) {
	_name = name;
}

User::User(std::string name) {
	set_name(name);	
}

std::string User::name() {
	return _name;
}