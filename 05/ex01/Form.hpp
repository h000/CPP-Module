/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpark <hpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 12:53:02 by hpark             #+#    #+#             */
/*   Updated: 2020/09/04 15:39:33 by hpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
#include <exception>

class	Bureaucrat;

class	Form
{
	private:
		Form();
		std::string	const	name;
		bool	_signed;
		int const	gradeToSign;
		int const	gradeToExec;
	public:
		Form(std::string const &name, int const sign, int const execute);
		Form(Form const &other);
		~Form();
		Form	&operator=(Form const &other);
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		std::string		getName() const;
		int				getGradeToSign() const;
		int				getGradeToExec() const;
		bool			isSigned() const;
		void			beSigned(Bureaucrat b);
};

std::ostream	&operator<<(std::ostream &os, Form const &f);

#endif