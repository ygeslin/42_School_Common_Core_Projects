/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   webserv.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:41:04 by ygeslin           #+#    #+#             */
/*   Updated: 2022/02/17 17:49:18 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEBSERV_HPP
#define WEBSERV_HPP

class webserv
{
	/* public attributes */
	public :
		std::string 		_file_name;
		t_http 				_config;
		std::vector<int>	listenPorts;

		/* CONSTRUCTOR */
		webserv ( void );

		/* SETTER */
		void setFileName(std::string name);

		/* GETTER */
		std::string const & getFileName() const;
		std::vector<int> const & getListenPorts() const;

		/* PARSING */
		void parseConfigFile ( void );
		void tokenizeConfigFile(std::string &src);
		void parseToken (std::vector<std::string> &vec);

		/* PARSING ERROR */
		void printHttpConfig ( void );
		void printServerConfig( void );

		void checkParseError( void );
		void listenCheck(void);
		void errorPageCheck(void);
		void errorReturnCheck(void);
		void limitExceptCheck(void);
		void fillDefaultSettings(void);
		void emptySettingCheck(void);

} ; // webserv class

#endif
