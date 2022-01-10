package com.example.demo_before_practical3;

import org.springframework.data.repository.CrudRepository;

public interface FriendRepository extends CrudRepository<Friend , Integer> {
    //<<idos poy tha filaksis , idos id
    //prosekse ine interface oxi class
}
