#ifndef SEDREPLACER_HPP
#define SEDREPLACER_HPP

#include <string>

class SedReplacer
{
	public:
		SedReplacer(const std::string& filename, const std::string& s1, const std::string& s2);
		bool	custom_replace();
		
	private:
		bool	open_handler_();
		bool	replace_handler_();
		bool	new_file_handler_();

		std::string 	filename_;
		std::string 	s1_;
		std::string 	s2_;
		std::string 	input_txt_;
		std::string 	output_txt_;
};

#endif
