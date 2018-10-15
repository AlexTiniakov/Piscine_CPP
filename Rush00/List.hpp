/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvikhrov <yvikhrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 15:36:11 by yvikhrov          #+#    #+#             */
/*   Updated: 2018/10/07 15:41:04 by yvikhrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_HPP
# define LIST_HPP

template <typename T>
struct ListNode {
    ListNode<T> *next;
    ListNode<T> *prev;
    T & data;

    ListNode(T & data) : next(NULL), prev(NULL), data(data) {}
};

template <typename T>
struct List {
    ListNode<T> *begin;
    ListNode<T> *end;
    int size;

    List() : begin(NULL) , end(NULL) , size(0) {}

    void PushBack(T & data) {
        ListNode<T> *node = new ListNode<T>(data);

        if (size == 0) {
            begin = node;
            end = node;
        } else {
            end->next = node;
            node->prev = end;
            end = node;
        }

        ++size;
    }

    typedef bool (*ListRemovePredicate)(T const& data, void *ctx);

    ListNode<T> *Remove(ListNode<T> *node) {
        ListNode<T> *ret = NULL;

        if (node->prev) {
            node->prev->next = node->next;
        } else {
            begin = node->next;
            begin->prev = NULL;
        }

        if (node->next) {
            ret = node->next;
            node->next->prev = node->prev;
        } else {
            end = node->prev;
            end->next = NULL;
        }
        delete node;

        return ret;
    }

    void RemoveIf(ListRemovePredicate predicate, void *ctx) {
        ListNode<T> *node = begin;
        while (node) {
            if (predicate(node->data, ctx))
                node = Remove(node);
            else
                node = node->next;
        }
    }
};

#endif
