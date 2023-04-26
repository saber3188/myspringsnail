# myspringsnail
基本实现想法
负载均衡服务器，运用进程池，io复用（epoll监听），统一事件源（处理信号）
一.
config.xml文件：
    存储配置信息，包括监听ip，port，以及逻辑ip地址
main.cpp：
    解析config.xml文件，将监听ip，port存储在m_host中
    