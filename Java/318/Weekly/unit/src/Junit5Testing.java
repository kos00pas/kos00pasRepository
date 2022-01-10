package ucy.ece318;

import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.CsvSource;
import org.junit.jupiter.params.provider.ValueSource;
import org.junit.platform.commons.util.StringUtils;

import static org.junit.jupiter.api.Assertions.assertTrue;

public class Junit5Testing {
/*
    @ParameterizedTest
    @CsvSource({"a,1", "b,2", "foo,3"})
    public void testParameters(String name, int value) {
        System.out.println("csv data " + name + " value " + value);
    }


 */
    @ParameterizedTest
    @ValueSource(strings = { "radar" })
    void palindromes(String candidate) {
        assertTrue(StringUtils.containsWhitespace(candidate));
    }

}