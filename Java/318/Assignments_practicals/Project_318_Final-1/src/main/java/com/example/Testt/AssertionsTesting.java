package com.example.Testt;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.RepeatedTest;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;
import org.testng.annotations.Test;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;


import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.junit.Assert;

public class AssertionsTesting {
    com.example.Testt.Tesstingg calculation = new com.example.Testt.Tesstingg();
    int sum=calculation.sum(2,5);// sum etoimi sinartisi
    int testSum =7;

    @Test
    public void testSum(){
        System.out.println("@Test sum():"+sum+"="+testSum);
        assertEquals(sum,testSum);
    }
    @Test
    @DisplayName("Custom test for positive number")
    public void isPositiveTest1(){
        int number=1;
        System.out.println("@Test is positive(): "+number);
        Assertions.assertEquals(true,calculation.isPositive(number));//isPositive etimi sinartisi
    }

    @RepeatedTest(10)
    @DisplayName("Custom test for positive number")
    void repetedTest(){
        double num=Math.random();
        assertTrue(num>0);
    }


    @ParameterizedTest
    @ValueSource(ints = {11})
    void paramTest(){
        double num=Math.random();
        assertTrue(num>0);
    }

    @Test
    public static void stringg() {
        String x = "temptestingg12@gmail.com";
        Assert.assertTrue(x.contains("@"));
    }





}
