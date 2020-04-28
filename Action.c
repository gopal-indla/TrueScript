//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://google.co.in/'", "snapshot=Action_1.inf");
	lr_start_transaction("01_search_hithub");
	truclient_step("3", "Type hithub in Search combobox", "snapshot=Action_3.inf");
	truclient_step("4", "Press key Enter on Search combobox", "snapshot=Action_4.inf");
	lr_end_transaction("01_search_hithub",0);

	return 0;
}
