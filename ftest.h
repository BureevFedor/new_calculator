#ifndef FTEST_CHECK
#define FTEST_CHECK

#ifdef FTESTS

#define FTEST_CASE_START(name) cout << "Test case: " << name << endl;
#define FTEST(name, arg)\
    if(!(arg)){\
        num_of_failed++;\
        cout << name << " failed" << endl;\
    }\
    else{\
        num_of_passed++;\
        cout << name << " passed" << endl;\
    }

#define FTEST_CASE_END cout << endl;
#define FTEST_RUN return ftests();

int ftests()
{
    int num_of_failed = 0, num_of_passed = 0;

    FTEST_CASE_START("sum")
        FTEST("sum1", sum(1,4) == 5)
        FTEST("sum2", sum(1,2) == 3)
        FTEST("sum3", sum(4,4) == 8)
        FTEST("sum4", sum(33,9) == 42)
    FTEST_CASE_END

    FTEST_CASE_START("diff")
        FTEST("diff1", diff(1,4) == -3)
        FTEST("diff2", diff(5,0) == 5)
        FTEST("diff3", diff(6,7) == -1) 
        FTEST("diff4", diff(18,2) == 16)
    FTEST_CASE_END

    FTEST_CASE_START("mult")
        FTEST("mult1", mult(2,4) == 8)
        FTEST("mult2", mult(5,0) == 0)
        FTEST("mult3", mult(6,1) == 6) 
        FTEST("mult4", mult(4,4) == 16)
    FTEST_CASE_END
    
    FTEST_CASE_START("divi")
        FTEST("divi1", divi(4,2) == 2)
        FTEST("divi2", divi(6,6) == 1)
        FTEST("divi3", divi(5,1) == 5) 
        FTEST("divi4", divi(40,10) == 4)
    FTEST_CASE_END

    FTEST_CASE_START("power")
        FTEST("power1", power(4,2) == 16)
        FTEST("power2", power(6,2) == 36)
        FTEST("power3", power(1,1) == 1)
        FTEST("power4", power(40,2) == 1600)
    FTEST_CASE_END

    FTEST_CASE_START("power")
        FTEST("power1", power(4,2) == 16)
        FTEST("power2", power(6,2) == 36)
        FTEST("power3", power(1,1) == 1)
        FTEST("power4", power(40,2) == 1600)
    FTEST_CASE_END

    FTEST_CASE_START("numsys")
        FTEST("numsys1", numsys(4,2) == "100")
        FTEST("numsys2", numsys(6,3) == "20")
        FTEST("numsys3", numsys(156,10) == "156")
        FTEST("numsys4", numsys(15,16) == "F")
        FTEST("numsys4", numsys(29,30) == "T")
        FTEST("numsys4", numsys(15,1) == "111111111111111")
    FTEST_CASE_END

    cout << "number of passed tests: " << num_of_passed << endl << "number of failed tests: " << num_of_failed << endl;
    return num_of_failed;
}

#else
#define FTEST_RUN

#endif

#endif