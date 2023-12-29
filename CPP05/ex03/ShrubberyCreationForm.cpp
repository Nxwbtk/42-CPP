/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:37:07 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 00:40:28 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cp): AForm(cp.getName(), cp.getGradeToSign(), cp.getGradeToExecute()), _target(cp.getTarget())
{
};

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target ): AForm("Shrubbery", 145, 137), _target(target)
{

};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cp)
{
	if (this != &cp)
	{
		this->_target = cp._target;
	}
	return (*this);
};

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
};

void	ShrubberyCreationForm::createTree(void) const
{
	std::ofstream	tonmai;
	std::string		file_name = this->getTarget() + "_shrubbery";

	tonmai.open(file_name.c_str(), std::fstream::out | std::fstream::trunc);
	if (tonmai.is_open())
	{
		tonmai << "@@@@@@@@@@@@@&@@@@@@@@@@&&&&&&&&@@@&&@@@@@@@@@@@@@@@@@@@@@@@&&@&&&&&&&&&&&&&&&&&@&&&&&@@@@@&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&&&@@@@@&&&@&&&&&@&&@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&%%%%%%%%%%%%%%%%%%%&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@&&&&&&&&&&&&&&%%%%#####(((/////**/////(((######%%%%%&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@&&&&&&&&&&&%%%###(////////((((((((((((((((/((((((//**/(###%%%&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@&&&&&&&&&%%%##(/*///((((((((((((((((((((((/(((((((((((((((///,/(##%%%&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@&&&&&&&&&&%%##/*//(((((((((((((((((((((((((((((//(/(((((((((((((/(((/*,/(##%%&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@@@@@@@&@&&&&&&&&&%%##(*//((((((((((((((/((((((//((//////////////////(/////((((((((///*/(##%%&&&&&&&&&&&@&@@&@@@&@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&%%%#(/*////(/((((((((((/(/////////////////////////////////////((/((/(((((//**(##%%&&&&&&&&&&&&&&@&@@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@&@@@&&&&&&&%%%#/*//(((((((((((((((////////////////////////////////////////////////(/(((((//*/(##%&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@&&&&@&&&&&&&%%##//(((((((((((((((////////////*//************,(*%/&/**//*//////////////(((((((((//,((#%%&&&&&&&&&&&&&&&&@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@&&&&&&&&&&&%%#(,//((((((((((((((((/////////****,****,.#*,,,,.(/%(&,/****/**////////////////((((((((/*/(#%%&&&&&&&&&&&&&&&@&@&&@&@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@&&&&&&&&&&%%#(*/(((((((((((((((/////////*****,*,,#(%%@&(#%##&&//(/(,&%#/*,*******////////////(((((((((/,/(#%%&&&&&&&&&&&&&&&&&&&&@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@&@&&&&&&&&%%#((*/(((((((((((((///////**/***,.,*,(&(#%(@%@&/@@%&&&((@&##&/.%(%.,,,*******/////////(((((((((/*((#%&&&&&&&&&&&&&&&&&&@&&&@@" << std::endl;
		tonmai << "@@@@@@@@@@@&&@&&&&&&&&&%%#(*//(((((((((((////*/*********.,%...%&%(&@/@((@*&&#&@@@@@//#*%*%/&&,,,,,,,,******////////(/((((///(#%%&&&&&&&&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "@@@@@@@@@&@@&&&&&&&&&&%##/*/(((((((((///////****,,,,..,/*((%/#%&@&@##&@#%(#/###@@%(&#/#*@*(&,.#(,,,.,,,,*****///////(((/(((/*(#%%%&&&&&&&&&&&&&&&&&&@&" << std::endl;
		tonmai << "@@@@@@@@@@&@&&&&&&&&%%#(///((((((((/////****,**,&&&/,**/&%#/(##&%&&(@&(#&@&@/@#%@/@&@@%%&%((@&%@#%%@*,@#%,(*****////////(((//,((#%%&&&&&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "@@@@@@@@@@&&&&&&&&&&%#(///(((((//////****(,.(%,&*%(%*(&((&@#@*&%@@&@#&/&@&/@&#@#@@&&@&%#(@@&&@#@%%@@/@@@%%#,*,****///////(((//,((#%%&&&&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "@@@@@@@&@&&&&&&&&&%%#(///((((///////**(&@%@*%@@@@#(%%@#%@&#@@&@&##@&@@@@@#%%#(@@&@@@@@(&#&@(%&(&%&&@@@&&(%&@@(,,,**///////((///,((#%%&&&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "@@@&&&&&&&&&&&&&&&%#(/,/((/(/////***#,,/%@&@@%@%#&@##@/@/@@(&%@@&&@@&&#&@%&#%%%&@@&@&&@@&&@&@@&@@#@&(%@(@@&%*##,*,***////////////(##%%&&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "@@@&&&&&&&&&&&&&&&%#(*/(((///////**,&,@%*#%&%@@@%@@#%#&@@&@&@@@&%%&&%@&@@&&%#%&%@#@#%#%@#@&&@%@@@&@&@@@%&%&*@@&*,*****//////////*/(#%%%&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&%%((*//(////////**/,@@@&@@@*%*@%%&(&%@@@@%@%&@@@(((##@&@@@@&#@@#@@@@#@@@@@@@%&@@@&&@@%@%%@@(&@%(&/&***//////////,((#%%%&&&&&&&&&&&&&&" << std::endl;
		tonmai << "&&@&&&&&&&&&&&&&&%#(*//////////*,**%&&%#&&@@@@&&&&@@@%&&#@&@%@&&@@@@@@@@@@@@%@%&@@&@&@@@&@@@@&@@@@@%%&&@@&%&@&/(&%//%*****///////*/(#%%%%&&&&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&%%#(,/((/////**#(@&&@&@@@@%&@@@&@@&&&#@@@@&@@@@@@@@@@&&@&&@%&@&&@&@@@@(@&@@@@@@@@&@@@@(@@@&&&@%&@%&/(%*(/,**///////((#%%%&&&&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&%%(/,//////*//***,&@&@@@&@@@%@@@@@&@@@/(@#@@@@@@&@@&@@@@@@@%@@&@&@&@#@@&%@@&@&%@@#&@@&&&#@&&@&@@%#&*%&/#/******///*((#%%%&&&&&&&&&&&&&" << std::endl; 
		tonmai << "&&&&&&&&&&&&&&&&%%#(*///////*****#*@@@@@&@%%@@@&@&@&@%&@@@@@&@@@@@&@@@@@@@@&@%@@@@@@@@@@@&@##(@*@&@@@@&&&@&(@&&%@#%@#/(#/(,***/*/**/(#%%%%&%&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&%%%#/*//*/******.,,(@@@@@@@@@@&@%@@@&@@@@@&&@@@&@@@@&@@@&@&@%@@@@@@@@@&@&@@&@&@#&&@@%(@#&@@@@@&%(&&@##(**&/%*,******/(#%%%%&&%&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&%%%(/*********/@ .@#@@&@@&@@%@%@&@&@@@&@&@&@@@&@@&@@@@&@@&@@@&@@@@@&&@@@@@@@@@@@@%@%#@@@@&@%@@@@%@@&&(@%#/%,.,,*****/(#%%%%%%%%%%&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&%%%%#(/******,@**%#@&%@@@@@@@@@@@%@@@@&&@@&@@@(@@@@@@@@&*/@@%@@&&@@@@&@&@@@@@@@@@&@@@@&&&@@@@#&%&%@&##(#(.....,.,,,,*/(#%%%%%%%%%%%&%&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&%%%%#(/,,*****.,#&@@@&&@&&@@%@@@@@&@@&@@@%@&&@@@@@@&&&@@@*@@@&@@&&&@&@@@@%&@@@@@%&&@&@@&@&&@@@&@&@@&(((/(/,,..,,,*,,/((%#%%%%%%%%%%%&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&%&%%%%(/*,////***%.@&#@&&@(*@@&&&@%@@@&%@@&@@@@@@@&&&@*@&&@@%@@@@@@@@@@/@,,&@##@@&@%@#%@@@(&%&&&@@@(@@/****.,,**/,,**/((##&&%%%&&&&&%%%%%" << std::endl;
		tonmai << "&&&&&&&&&&&&&&%%%%%#(/*//*//*/@,%&%&&&#&%@@%&@@@&&&@@@@@%@&@@@@/&(@@@@&@&%@@@&@@#%#&@...%*@@&%&&@@#@%%#&&##%@%%@(@#****///*/(//**//(#####(%%#%&%%%&&%&" << std::endl;
		tonmai << "&&&&&&%&%%&%%%%&%%%%#(/,//(*/(((/@&&((&%@@@%%@&&&&@&**@@#&&&&....(,%&%@&&@@&@@&#%.*@@*((/.,&@&&&@#@(%&&&%#/&*%%&#(,////(/((/(*/,/*((#%&%&%%&&%%%&%%%%%" << std::endl;
		tonmai << "&&&&%&&%%%%#%%%%%#%###(/,#(#((/((((&#&&&&,,*&@@@@&@@,&/*(.*(&@*,,,***@&@@@#@&%@&&*@///**(,*/*&@(%%&/@&&#(#*,.,,/(#(((((###//(#**/(/#%&%#&#&#%&%%&%&%%%" << std::endl;
		tonmai << "&&&&&&&&&&&%&&&&%&&%%%#((,(#(#((#(###(/%(*#(/(/(@&,@(*@(@(((@%&%&*///*/@@@&(&&%%#%**/**/(&&&%*,**/&##.,.*****/*/#(####(((#((#*/(%%%%%&%%%%%%%%%&&&&&%%" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&%%&&&&%#(/,(((/(#(/(%###((####%#/#&#%&@@#/*///*/*(&&@#/&&@@&(&&/#@##&&%(/,,*,*(***,.*****////(((((###(((#(//*/((#(%#&%#%#%%%%%%&&%%&%%" << std::endl;
		tonmai << "&&&&&&&&&&&&&%%%&%&&&%%%%#(*,((##(#((#(%#(#(//%,&#(#%%(((((#//(((//(/%%#@&##&&@@&%,*(**/****/(*/****///*(#(########(#((((/*//((###&%&&%%%&%#%&&%&%%%&%" << std::endl;
		tonmai << "&&&&&&&&&&%&&&&&&&&&&&%%%%#(/,%##(%%#&%#%#%#&((%/*&#%&((###(##((/#((/&%(#&&&@&%/(/((((#((//(((((#/(((###(%##%##%##(#(((/,*//(#%#%%%&%&%&&%&&&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&&%%&%%&%%%##/**(####%#%#%##(########((((###(#(%(####(@@@#(&@&&/%/(((((#(((((#((((####(########%###(/#,*/((%%%%%&%%%&&&%%&&%&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&%%&&&&&&%%%%%##(/,#%#%%%#%#######%%#####%#(&%#####%(%/#&&&&&&&%/#((#(#%###%#######%#(#######%##%###(,/(###%%#%%&&%%&%%%%%&@&@&@@&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&#((/*.#%%%&#%%##%&%%%%%(#%&%####((#######@&%&%%######&#%#(###%###########%%%%%###(*,/(/(%%#%%%%&%%%%%&@&&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&&&&&&&&%&&&&%&@%#(#(/*/#%%%%%%&%#%%%&%&%#%%%##%##%#%%#.@(@%&((((%%%%#%%%%%#%%###%#%%%#%#####(**/(###(%%%&&&&&&&&&%&&%&&&&&&&&&@&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%%&%###(//,#%&%&&%%&&#&&#%%%%&%&%%%%%%%%&%#&*####&%#%#####%##%##&#%#%#%%##(.**/((#((#%#&&%%%%%%&%%&&&%&&&&%&&&%&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&#%&#%#%((//*,###%%%&%%%%&%#&#%%#%#&@@&&#@&&/&%,&(##%#%%#######%#####(.,,(((((#####%%%%#%%%%&%%%%%%&&%%%&%&&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%&%%#%##((/***/#%####%#&%%%%#@@@&@%@@%@@(@&%@@((####(((#(((/.,**//(#####%&%#%%%%%%%&&&&%%&%%%&&&&%&%&%&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%&&&&%&%%%#(##((//****,,,@@@%&&#@@&@@@/@@@%(#&#,(&&,.*(**//*((%##%%%%#%%%%#%%%%%&&%%%&&%%&&&&%&&&&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&&&%&&@&&&&&%%%&%%%%#%#&%%##(&@&&&@@&%@@#@@&#@(*&@&@@@@&&@%&((#(&#%%%%%%%%%%%%#%%%#%%%%%%&&%&&&%&%&&%&&&&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&%%%%%%%&%%%%%%##@@@/&@@@@%@@@@@@@@(&&&@@%@/@%%%&&@@%#%%%%%%%%%%%%&%%%%%%%%%&&&&%%%%&&&&&&&&&&&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&%%%%%%%%#%#%%/%@@@#@%@@&@&%@@#@#%@/&&&@@@@@@&/@@*&%@@#@&##%%%%%##%%#%%%%%%%%%%%%%%%%%%%%%%%%%%%&&&&&&&&&&&&&&&" << std::endl;
		tonmai << "&&&&&&&&&&&&&&&&&&&&&&&&%&%%%%%&%#%%&%%%%&%%%%%%###%&@&@#@@%@@@@/@&&@%#@#@@@@@@@@@@@@@@@&,&%&@*((%@###(#(##(%#(%(%(#&#&%##%%%%#####%%%%%%%%%%%%%&&&&&&" << std::endl;
		tonmai << "&&&@&&@&@&@&&&&@@@(#&&&&&&&%%%#%&&%&%%###%%@&@&%(@@@@@@@@@@@@@%@@@&@@@@@@(@@&@@@@@@%@(@@@*@@*&@,/@#%%/#&#%&/(*/%@@&&&%&@.%((%(%&%%%%&####%%%%%%%%&&&&&" << std::endl;
		tonmai << "@@@&@&&&&&&@@@@@&&(&@@&&@(%@@@@&#&%@@@@@/(%##@@@@@@@@&@@/@@&@@@@@@&@@@@#@@@/@@@@#/@@@@@#@#@@@@@&@@@@@@&&@&@&@@#@@.**//##%(/#@#&&&&/(&&#&%&&#&%%&&&&&&&" << std::endl;
		tonmai << "@@@@@@@&@@&@@&&&&&@@&@@@@@@@@@@@@@@@@@@@@@@@@@&@#@@@&%@@*@@@&@%@@&#@@@@&@@@@@#@*@&@@@@@@@@*@@@@@@@*@@@@&@&@@*@@@@*@%((*((%&(@@&&@&&%%@@&%&@%&&&&&&&&&&" << std::endl;
		tonmai << "@@@@@@@@@@@&@@@@@@@@@@%&@&@@&@@%&@@@(@@@@@@@%%@@@@@@@@#@*&@&@@/@@@@&&&@@@@@@@@@/@@@@@@@@&@(@@@@#**@@&*@@&&@@*@&%#%&@@&*@@@@@@@@@@&@/@%@@%/@@@%&@@&&&&&" << std::endl;
		tonmai << "@@@@@@@@@@@@&@&(#%&@@@%(&@@@@@@(%@@@@@@@@@@@@@@@@@@@%@@@#@@@/@%@&@@@@@@@@@@@@@@@@@&/(@@@@@(@@@@@@@@@,@@@@@@@@@@&//(#*((*@@@&(@@@@@%&@@@@@&@@@@@@@&@@@@" << std::endl;
		tonmai << "@@@@@@@@&@@@@&@@@&@@@@@@&@@@/@&&@&&&@&&@&@@@@&#(@@@(@@@@@@@@@@@@@@@%@@@@&@&&@@#@@&@@@@@@@&@#@@/@&@@@@@(@(@@@@&@@@@@/@@@&@#@&%@@&@@@@%%@@@@@&&@@%@@@&@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@&&@@@@&@&@@@@&@@@@@@#@@@&@@@@@@##@@@@@@@&@@#&&&@@@@&@@@@@@@@@&@@@@@,@@@@@&&&@#@@@&@@@@&@@@@@@@@@@@@@@@((@@@@&@&&@&&&&@&@@&&&&&@@&@@@@@" << std::endl;
		tonmai << "@@@@@@@@&&@@@@@@@@@@@@@@@@@@@@@@@@/@@@@@@@@@@@@@&@@@&@@@@@@/@%@@@@@@@@@%@&&@@@@@(@@@@@@@@@@@@@&&&,&@&@@&@@&&&@@/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
		tonmai << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@&@@&@@@@@@@@@@@@@@@@&@@@@@@@#@@&&&@@@@/@@@@&@@@@/@@@@@&@&&#@@@@@@&@@&&@@%&&&@@@&@@@@@@@@@@@&@@@@&&&@@@@@@&@@@&@@@@@@@" << std::endl;
	}
	tonmai.close();
};

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw NotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	std::cout << executor.getName() << " executes " << this->getName() << std::endl;
	this->createTree();
};