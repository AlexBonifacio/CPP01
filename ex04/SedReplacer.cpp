#include "SedReplacer.hpp"

#include <iostream> //cerr 
#include <fstream> //ifstream ofstream

SedReplacer::SedReplacer(const std::string& filename, const std::string& s1, const std::string& s2)
	: filename_(filename), s1_(s1), s2_(s2)
{}

bool SedReplacer::custom_replace()
{
	if (!open_handler_())
		return false;
	if (!replace_handler_())
		return false;
	if (!new_file_handler_())
		return false;
	return true;
}

bool SedReplacer::open_handler_()
{
	std::ifstream	input_file(filename_.c_str());

	if (!input_file.is_open())
	{
		std::cerr << "Error: can not open input file" << "\n";
		return false;
	}

	std::string line;
	while (std::getline(input_file, line))
	{
		input_txt_ += line;
		if (!input_file.eof())
		{
			input_txt_ += "\n";
		}
	}

	input_file.close();
	return true;
}

bool	SedReplacer::replace_handler_()
{
	if (s1_.empty())
	{
		std::cerr << "Error: argument can't be empty\n";
		return false;
	}

	output_txt_ = input_txt_;
	std::size_t pos = output_txt_.find(s1_, 0);

	while (pos != std::string::npos)
	{
		output_txt_.erase(pos, s1_.length());
		output_txt_.insert(pos, s2_);
		pos = output_txt_.find(s1_, pos + s2_.length());
	}

	return true;
}

bool SedReplacer::new_file_handler_()
{
	std::string output_filename = filename_ + ".replace";
	std::ofstream output_file(output_filename.c_str());

	if (!output_file.is_open())
	{
		std::cerr << "Error: can not open ouput file" << "\n";
		return false;
	}

	output_file << output_txt_;
	output_file.close();
	return true;
}