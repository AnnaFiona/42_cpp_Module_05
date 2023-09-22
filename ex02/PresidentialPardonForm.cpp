#include "PresidentialPardonForm.hpp"

//con- and destructors
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = "target";
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& P) : AForm(P)
{
	*(this) = P;
}
PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& P)
{
	AForm::operator=(P);
	this->_target = P._target;
}
PresidentialPardonForm::~PresidentialPardonForm() {}

//getter
std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}