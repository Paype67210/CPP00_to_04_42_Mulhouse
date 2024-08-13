/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:57:50 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 11:07:22 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    int count = 0;
    
    if (argc != 4)
    {
        std::cout << "Usage: ./Replace [filename] [string to replace] [string to replace with]" << std::endl;
        return 2;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty() || s2.empty())
    {
        std::cout << "Error: strings cannot be empty" << std::endl;
        return 1;
    }

    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }

    std::string line;
    std::string content;
    while (std::getline(file, line))
    {
        content += line + "\n";
    }
    file.close();

    std::string newcontent;
    size_t pos = 0;
    size_t prev_pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        newcontent += content.substr(prev_pos, pos - prev_pos);
        newcontent += s2;
        pos += s1.length();
        prev_pos = pos;
        count++;
    }

    newcontent += content.substr(prev_pos);
    std::ofstream output((filename + ".replace").c_str());
    if (!output.is_open())
    {
        std::cout << "Error: could not create output file" << std::endl;
        return 1;
    }
    output << newcontent;
    output.close();
    std::cout << "Replaced " << count << " occurences of \"" << s1 << "\" with \"" << s2 << "\"" << std::endl;

    return 0;
}
