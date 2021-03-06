/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggki <seonggki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:40:39 by seonggki          #+#    #+#             */
/*   Updated: 2022/02/05 16:57:52 by seonggki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

class Contact
{
    private:
            int         index;
            std::string first_name;
            std::string last_name;
            std::string nick_name;
            std::string phone_number;
            std::string darkest_secret;

    public:
            Contact();
            ~Contact();
                void    fillContact(int i);
                void    displayContact(void) const;
                void    displayContactDetails(void) const;
};

#endif
