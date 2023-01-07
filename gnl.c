/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:18:20 by hahadiou          #+#    #+#             */
/*   Updated: 2022/10/18 19:26:13 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

char *gnl(int fd){char ret_line[100];char buffer;int i=0,rd=read(fd,&buffer,1);while(rd){ret_line[i++]=buffer;if(buffer=='\n')break;else rd=read(fd,&buffer,1);}char *s;int len=strlen(ret_line)+1;s=malloc(len);while(len--){s[len]=ret_line[len];}return(s);}
int 
