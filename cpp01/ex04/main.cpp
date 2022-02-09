/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggki <seonggki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:28:52 by seonggki          #+#    #+#             */
/*   Updated: 2022/02/09 17:54:15 by seonggki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::ifstream           fin;
    std::ofstream           fout;
    std::string             str;
    std::string             s1;
    std::string             s2;
    std::string::size_type  i;

    if (argc == 4)
    {
        fin.open(argv[1]);
        if (fin == 0)
        {
            std::cout << "Read Error" << std::endl;
            return (-1);
        }
        fout.open((std::string)argv[1] + ".replace");
        if (fout == 0)
        {
            std::cout << "Open Error" << std::endl;
            return (-1);
        }
        s1 = argv[2];
        s2 = argv[3];
        while (std::getline(fin, str).eof() == 0)
        {
            i = 0;
            while ((i = str.find(s1, i)) != std::string::npos)
            {
                str.replace(i, s1.size(), s2);
			   	i = i + s2.size();
            }
            fout << str << std::endl;
        }
       	i = 0;
        while ((i = str.find(s1, i)) != std::string::npos)
        {
            str.replace(i, s1.size(), s2);
            i = i + s2.size();
        }
        fout << str << std::endl;
        fin.close();
        fout.close();
    }
    else
        std::cout << "Input Error Filename s1 s2" << std::endl;
    return (0);
}
