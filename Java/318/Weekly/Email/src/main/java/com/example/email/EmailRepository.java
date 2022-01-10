package com.example.email;


import org.springframework.data.repository.CrudRepository;

public interface EmailRepository extends CrudRepository<SendEmail, Integer> {
    // Friend findFriendyId(Integer id);
}