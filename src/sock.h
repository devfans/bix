// ==================================================
//
// bix is a pure udp tool for fast bytes transfer
// By Stefan Liu (devfans@github) 2019
//
// ==================================================
#ifndef __BIX_SOCK_H__
#define __BIX_SOCK_H__

static void set_fd_non_blocking(int fd);

static void process_rev_data(int fd);

struct epoll_server {
  int epoll_fd;
  int sock_fd;
  struct epoll_event shared_event;
  struct epoll_events shared_events[];
};

struct epoll_server new_epoll_server();

#endif



