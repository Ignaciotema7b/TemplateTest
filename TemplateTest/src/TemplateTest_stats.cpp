#include "TemplateTest_stats.h"

json TemplateTest_stats::stats_to_json(unsigned stake)
{
	json resp;

	resp = Game_statistics::stats_to_json(stake);

	return resp;
}

void TemplateTest_stats::print_stats(unsigned apuesta)
{
	Game_statistics::print_stats(apuesta);


}
