// Copyright 2018 J&JV

/**
 * @file        Node.hpp
 * @brief       ...
 *
 * @author      João Vítor (jv.venceslau.c@gmail.com)
 * @author      Josivan ()
 * @since       04/11/2018
 * @date        24/11/2018
 * @version     0.4
 */

#ifndef INCLUDE_NODE_HPP_
#define INCLUDE_NODE_HPP_

#include <forward_list>
#include <map>

/**
 * @brief ...
 *
 */
template <typename T>
class Node {
   public:
    Node();
    Node(T *m_type);
    Node(Node<T> &&) = default;
    Node(const Node<T> &) = default;
    Node<T> &operator=(Node<T> &&) = default;
    Node<T> &operator=(const Node<T> &) = default;
    ~Node();

    int set_color();
    int get_color();
    bool erase_color();
    
    int get_degree();

    T *get_type();
    bool set_type(T *m_type);

    std::forward_list<Node<T> *> get_neighbors();

    bool remove_neighbor(Node<T> *node);
    bool insert_neighbor(Node<T> *node);
    bool update_dsat();
    int get_dsat();
    bool update_dsat(int color);

    bool operator==(const Node<T> &other) const {
        return *m_type == *other.m_type;
    }
    bool operator!=(const Node<T> &other) const {
        return *m_type != *other.m_type;
    }

    friend std::ostream &operator<<(std::ostream &o, Node<T> const &node) {
        o << *node.get_type();
        return o;
    }

   private:
    T *m_type;
    int color = -1;
    int degree = 0;
    std::forward_list<Node<T> *> neighbors;
    std::map<int, int> dsat;
};

#include "Node.inl"

#endif  // INCLUDE_NODE_HPP_
