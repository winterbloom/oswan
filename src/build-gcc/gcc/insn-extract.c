/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 4759:  /* atomic_bit_test_and_complementsi_1 */
    case 4758:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 4761:  /* atomic_bit_test_and_resetsi_1 */
    case 4760:  /* atomic_bit_test_and_resethi_1 */
    case 4757:  /* atomic_bit_test_and_setsi_1 */
    case 4756:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4755:  /* atomic_xorsi */
    case 4754:  /* atomic_orsi */
    case 4753:  /* atomic_andsi */
    case 4752:  /* atomic_xorhi */
    case 4751:  /* atomic_orhi */
    case 4750:  /* atomic_andhi */
    case 4749:  /* atomic_xorqi */
    case 4748:  /* atomic_orqi */
    case 4747:  /* atomic_andqi */
    case 4746:  /* atomic_subsi */
    case 4745:  /* atomic_subhi */
    case 4744:  /* atomic_subqi */
    case 4743:  /* atomic_addsi */
    case 4742:  /* atomic_addhi */
    case 4741:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4740:  /* atomic_exchangesi */
    case 4739:  /* atomic_exchangehi */
    case 4738:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4737:  /* *atomic_fetch_add_cmpsi */
    case 4736:  /* *atomic_fetch_add_cmphi */
    case 4735:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 4734:  /* atomic_fetch_addsi */
    case 4733:  /* atomic_fetch_addhi */
    case 4732:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 4731:  /* atomic_compare_and_swapsi_1 */
    case 4730:  /* atomic_compare_and_swaphi_1 */
    case 4729:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4728:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4718:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4595:  /* avx512dq_vmfpclassv2df */
    case 4594:  /* avx512dq_vmfpclassv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 4549:  /* avx512vl_compressstorev2df_mask */
    case 4548:  /* avx512vl_compressstorev2di_mask */
    case 4547:  /* avx512vl_compressstorev4sf_mask */
    case 4546:  /* avx512vl_compressstorev4si_mask */
    case 4545:  /* avx512vl_compressstorev4df_mask */
    case 4544:  /* avx512vl_compressstorev4di_mask */
    case 4543:  /* avx512vl_compressstorev8sf_mask */
    case 4542:  /* avx512vl_compressstorev8si_mask */
    case 4541:  /* avx512f_compressstorev8df_mask */
    case 4540:  /* avx512f_compressstorev8di_mask */
    case 4539:  /* avx512f_compressstorev16sf_mask */
    case 4538:  /* avx512f_compressstorev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4525:  /* *avx512f_scatterdiv2df */
    case 4524:  /* *avx512f_scatterdiv2df */
    case 4523:  /* *avx512f_scatterdiv2di */
    case 4522:  /* *avx512f_scatterdiv2di */
    case 4521:  /* *avx512f_scatterdiv4sf */
    case 4520:  /* *avx512f_scatterdiv4sf */
    case 4519:  /* *avx512f_scatterdiv4si */
    case 4518:  /* *avx512f_scatterdiv4si */
    case 4517:  /* *avx512f_scatterdiv4df */
    case 4516:  /* *avx512f_scatterdiv4df */
    case 4515:  /* *avx512f_scatterdiv4di */
    case 4514:  /* *avx512f_scatterdiv4di */
    case 4513:  /* *avx512f_scatterdiv8sf */
    case 4512:  /* *avx512f_scatterdiv8sf */
    case 4511:  /* *avx512f_scatterdiv8si */
    case 4510:  /* *avx512f_scatterdiv8si */
    case 4509:  /* *avx512f_scatterdiv8df */
    case 4508:  /* *avx512f_scatterdiv8df */
    case 4507:  /* *avx512f_scatterdiv8di */
    case 4506:  /* *avx512f_scatterdiv8di */
    case 4505:  /* *avx512f_scatterdiv16sf */
    case 4504:  /* *avx512f_scatterdiv16sf */
    case 4503:  /* *avx512f_scatterdiv16si */
    case 4502:  /* *avx512f_scatterdiv16si */
    case 4501:  /* *avx512f_scattersiv2df */
    case 4500:  /* *avx512f_scattersiv2df */
    case 4499:  /* *avx512f_scattersiv2di */
    case 4498:  /* *avx512f_scattersiv2di */
    case 4497:  /* *avx512f_scattersiv4sf */
    case 4496:  /* *avx512f_scattersiv4sf */
    case 4495:  /* *avx512f_scattersiv4si */
    case 4494:  /* *avx512f_scattersiv4si */
    case 4493:  /* *avx512f_scattersiv4df */
    case 4492:  /* *avx512f_scattersiv4df */
    case 4491:  /* *avx512f_scattersiv4di */
    case 4490:  /* *avx512f_scattersiv4di */
    case 4489:  /* *avx512f_scattersiv8sf */
    case 4488:  /* *avx512f_scattersiv8sf */
    case 4487:  /* *avx512f_scattersiv8si */
    case 4486:  /* *avx512f_scattersiv8si */
    case 4485:  /* *avx512f_scattersiv8df */
    case 4484:  /* *avx512f_scattersiv8df */
    case 4483:  /* *avx512f_scattersiv8di */
    case 4482:  /* *avx512f_scattersiv8di */
    case 4481:  /* *avx512f_scattersiv16sf */
    case 4480:  /* *avx512f_scattersiv16sf */
    case 4479:  /* *avx512f_scattersiv16si */
    case 4478:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 4477:  /* *avx512f_gatherdiv2df_2 */
    case 4476:  /* *avx512f_gatherdiv2df_2 */
    case 4475:  /* *avx512f_gatherdiv2di_2 */
    case 4474:  /* *avx512f_gatherdiv2di_2 */
    case 4473:  /* *avx512f_gatherdiv4sf_2 */
    case 4472:  /* *avx512f_gatherdiv4sf_2 */
    case 4471:  /* *avx512f_gatherdiv4si_2 */
    case 4470:  /* *avx512f_gatherdiv4si_2 */
    case 4469:  /* *avx512f_gatherdiv4df_2 */
    case 4468:  /* *avx512f_gatherdiv4df_2 */
    case 4467:  /* *avx512f_gatherdiv4di_2 */
    case 4466:  /* *avx512f_gatherdiv4di_2 */
    case 4465:  /* *avx512f_gatherdiv8sf_2 */
    case 4464:  /* *avx512f_gatherdiv8sf_2 */
    case 4463:  /* *avx512f_gatherdiv8si_2 */
    case 4462:  /* *avx512f_gatherdiv8si_2 */
    case 4461:  /* *avx512f_gatherdiv8df_2 */
    case 4460:  /* *avx512f_gatherdiv8df_2 */
    case 4459:  /* *avx512f_gatherdiv8di_2 */
    case 4458:  /* *avx512f_gatherdiv8di_2 */
    case 4457:  /* *avx512f_gatherdiv16sf_2 */
    case 4456:  /* *avx512f_gatherdiv16sf_2 */
    case 4455:  /* *avx512f_gatherdiv16si_2 */
    case 4454:  /* *avx512f_gatherdiv16si_2 */
    case 4429:  /* *avx512f_gathersiv2df_2 */
    case 4428:  /* *avx512f_gathersiv2df_2 */
    case 4427:  /* *avx512f_gathersiv2di_2 */
    case 4426:  /* *avx512f_gathersiv2di_2 */
    case 4425:  /* *avx512f_gathersiv4sf_2 */
    case 4424:  /* *avx512f_gathersiv4sf_2 */
    case 4423:  /* *avx512f_gathersiv4si_2 */
    case 4422:  /* *avx512f_gathersiv4si_2 */
    case 4421:  /* *avx512f_gathersiv4df_2 */
    case 4420:  /* *avx512f_gathersiv4df_2 */
    case 4419:  /* *avx512f_gathersiv4di_2 */
    case 4418:  /* *avx512f_gathersiv4di_2 */
    case 4417:  /* *avx512f_gathersiv8sf_2 */
    case 4416:  /* *avx512f_gathersiv8sf_2 */
    case 4415:  /* *avx512f_gathersiv8si_2 */
    case 4414:  /* *avx512f_gathersiv8si_2 */
    case 4413:  /* *avx512f_gathersiv8df_2 */
    case 4412:  /* *avx512f_gathersiv8df_2 */
    case 4411:  /* *avx512f_gathersiv8di_2 */
    case 4410:  /* *avx512f_gathersiv8di_2 */
    case 4409:  /* *avx512f_gathersiv16sf_2 */
    case 4408:  /* *avx512f_gathersiv16sf_2 */
    case 4407:  /* *avx512f_gathersiv16si_2 */
    case 4406:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4453:  /* *avx512f_gatherdiv2df */
    case 4452:  /* *avx512f_gatherdiv2df */
    case 4451:  /* *avx512f_gatherdiv2di */
    case 4450:  /* *avx512f_gatherdiv2di */
    case 4449:  /* *avx512f_gatherdiv4sf */
    case 4448:  /* *avx512f_gatherdiv4sf */
    case 4447:  /* *avx512f_gatherdiv4si */
    case 4446:  /* *avx512f_gatherdiv4si */
    case 4445:  /* *avx512f_gatherdiv4df */
    case 4444:  /* *avx512f_gatherdiv4df */
    case 4443:  /* *avx512f_gatherdiv4di */
    case 4442:  /* *avx512f_gatherdiv4di */
    case 4441:  /* *avx512f_gatherdiv8sf */
    case 4440:  /* *avx512f_gatherdiv8sf */
    case 4439:  /* *avx512f_gatherdiv8si */
    case 4438:  /* *avx512f_gatherdiv8si */
    case 4437:  /* *avx512f_gatherdiv8df */
    case 4436:  /* *avx512f_gatherdiv8df */
    case 4435:  /* *avx512f_gatherdiv8di */
    case 4434:  /* *avx512f_gatherdiv8di */
    case 4433:  /* *avx512f_gatherdiv16sf */
    case 4432:  /* *avx512f_gatherdiv16sf */
    case 4431:  /* *avx512f_gatherdiv16si */
    case 4430:  /* *avx512f_gatherdiv16si */
    case 4405:  /* *avx512f_gathersiv2df */
    case 4404:  /* *avx512f_gathersiv2df */
    case 4403:  /* *avx512f_gathersiv2di */
    case 4402:  /* *avx512f_gathersiv2di */
    case 4401:  /* *avx512f_gathersiv4sf */
    case 4400:  /* *avx512f_gathersiv4sf */
    case 4399:  /* *avx512f_gathersiv4si */
    case 4398:  /* *avx512f_gathersiv4si */
    case 4397:  /* *avx512f_gathersiv4df */
    case 4396:  /* *avx512f_gathersiv4df */
    case 4395:  /* *avx512f_gathersiv4di */
    case 4394:  /* *avx512f_gathersiv4di */
    case 4393:  /* *avx512f_gathersiv8sf */
    case 4392:  /* *avx512f_gathersiv8sf */
    case 4391:  /* *avx512f_gathersiv8si */
    case 4390:  /* *avx512f_gathersiv8si */
    case 4389:  /* *avx512f_gathersiv8df */
    case 4388:  /* *avx512f_gathersiv8df */
    case 4387:  /* *avx512f_gathersiv8di */
    case 4386:  /* *avx512f_gathersiv8di */
    case 4385:  /* *avx512f_gathersiv16sf */
    case 4384:  /* *avx512f_gathersiv16sf */
    case 4383:  /* *avx512f_gathersiv16si */
    case 4382:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4381:  /* *avx2_gatherdiv8sf_4 */
    case 4380:  /* *avx2_gatherdiv8sf_4 */
    case 4379:  /* *avx2_gatherdiv8si_4 */
    case 4378:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4377:  /* *avx2_gatherdiv8sf_3 */
    case 4376:  /* *avx2_gatherdiv8sf_3 */
    case 4375:  /* *avx2_gatherdiv8si_3 */
    case 4374:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4373:  /* *avx2_gatherdiv8sf_2 */
    case 4372:  /* *avx2_gatherdiv8sf_2 */
    case 4371:  /* *avx2_gatherdiv8si_2 */
    case 4370:  /* *avx2_gatherdiv8si_2 */
    case 4369:  /* *avx2_gatherdiv4sf_2 */
    case 4368:  /* *avx2_gatherdiv4sf_2 */
    case 4367:  /* *avx2_gatherdiv4si_2 */
    case 4366:  /* *avx2_gatherdiv4si_2 */
    case 4365:  /* *avx2_gatherdiv4df_2 */
    case 4364:  /* *avx2_gatherdiv4df_2 */
    case 4363:  /* *avx2_gatherdiv4di_2 */
    case 4362:  /* *avx2_gatherdiv4di_2 */
    case 4361:  /* *avx2_gatherdiv2df_2 */
    case 4360:  /* *avx2_gatherdiv2df_2 */
    case 4359:  /* *avx2_gatherdiv2di_2 */
    case 4358:  /* *avx2_gatherdiv2di_2 */
    case 4341:  /* *avx2_gathersiv8sf_2 */
    case 4340:  /* *avx2_gathersiv8sf_2 */
    case 4339:  /* *avx2_gathersiv8si_2 */
    case 4338:  /* *avx2_gathersiv8si_2 */
    case 4337:  /* *avx2_gathersiv4sf_2 */
    case 4336:  /* *avx2_gathersiv4sf_2 */
    case 4335:  /* *avx2_gathersiv4si_2 */
    case 4334:  /* *avx2_gathersiv4si_2 */
    case 4333:  /* *avx2_gathersiv4df_2 */
    case 4332:  /* *avx2_gathersiv4df_2 */
    case 4331:  /* *avx2_gathersiv4di_2 */
    case 4330:  /* *avx2_gathersiv4di_2 */
    case 4329:  /* *avx2_gathersiv2df_2 */
    case 4328:  /* *avx2_gathersiv2df_2 */
    case 4327:  /* *avx2_gathersiv2di_2 */
    case 4326:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4357:  /* *avx2_gatherdiv8sf */
    case 4356:  /* *avx2_gatherdiv8sf */
    case 4355:  /* *avx2_gatherdiv8si */
    case 4354:  /* *avx2_gatherdiv8si */
    case 4353:  /* *avx2_gatherdiv4sf */
    case 4352:  /* *avx2_gatherdiv4sf */
    case 4351:  /* *avx2_gatherdiv4si */
    case 4350:  /* *avx2_gatherdiv4si */
    case 4349:  /* *avx2_gatherdiv4df */
    case 4348:  /* *avx2_gatherdiv4df */
    case 4347:  /* *avx2_gatherdiv4di */
    case 4346:  /* *avx2_gatherdiv4di */
    case 4345:  /* *avx2_gatherdiv2df */
    case 4344:  /* *avx2_gatherdiv2df */
    case 4343:  /* *avx2_gatherdiv2di */
    case 4342:  /* *avx2_gatherdiv2di */
    case 4325:  /* *avx2_gathersiv8sf */
    case 4324:  /* *avx2_gathersiv8sf */
    case 4323:  /* *avx2_gathersiv8si */
    case 4322:  /* *avx2_gathersiv8si */
    case 4321:  /* *avx2_gathersiv4sf */
    case 4320:  /* *avx2_gathersiv4sf */
    case 4319:  /* *avx2_gathersiv4si */
    case 4318:  /* *avx2_gathersiv4si */
    case 4317:  /* *avx2_gathersiv4df */
    case 4316:  /* *avx2_gathersiv4df */
    case 4315:  /* *avx2_gathersiv4di */
    case 4314:  /* *avx2_gathersiv4di */
    case 4313:  /* *avx2_gathersiv2df */
    case 4312:  /* *avx2_gathersiv2df */
    case 4311:  /* *avx2_gathersiv2di */
    case 4310:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4304:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4223:  /* avx2_maskstoreq256 */
    case 4222:  /* avx2_maskstored256 */
    case 4221:  /* avx2_maskstoreq */
    case 4220:  /* avx2_maskstored */
    case 4219:  /* avx_maskstorepd256 */
    case 4218:  /* avx_maskstoreps256 */
    case 4217:  /* avx_maskstorepd */
    case 4216:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 4215:  /* avx2_maskloadq256 */
    case 4214:  /* avx2_maskloadd256 */
    case 4213:  /* avx2_maskloadq */
    case 4212:  /* avx2_maskloadd */
    case 4211:  /* avx_maskloadpd256 */
    case 4210:  /* avx_maskloadps256 */
    case 4209:  /* avx_maskloadpd */
    case 4208:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4181:  /* *avx_vperm2f128v4df_nozero */
    case 4180:  /* *avx_vperm2f128v8sf_nozero */
    case 4179:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4175:  /* avx512bw_vpermt2varv32hi3_mask */
    case 4174:  /* avx512vl_vpermt2varv16hi3_mask */
    case 4173:  /* avx512vl_vpermt2varv8hi3_mask */
    case 4172:  /* avx512vl_vpermt2varv32qi3_mask */
    case 4171:  /* avx512vl_vpermt2varv16qi3_mask */
    case 4170:  /* avx512bw_vpermt2varv64qi3_mask */
    case 4169:  /* avx512vl_vpermt2varv2df3_mask */
    case 4168:  /* avx512vl_vpermt2varv2di3_mask */
    case 4167:  /* avx512vl_vpermt2varv4sf3_mask */
    case 4166:  /* avx512vl_vpermt2varv4si3_mask */
    case 4165:  /* avx512vl_vpermt2varv4df3_mask */
    case 4164:  /* avx512vl_vpermt2varv4di3_mask */
    case 4163:  /* avx512vl_vpermt2varv8sf3_mask */
    case 4162:  /* avx512vl_vpermt2varv8si3_mask */
    case 4161:  /* avx512f_vpermt2varv8df3_mask */
    case 4160:  /* avx512f_vpermt2varv8di3_mask */
    case 4159:  /* avx512f_vpermt2varv16sf3_mask */
    case 4158:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4121:  /* avx512bw_vpermi2varv32hi3_mask */
    case 4120:  /* avx512vl_vpermi2varv16hi3_mask */
    case 4119:  /* avx512vl_vpermi2varv8hi3_mask */
    case 4118:  /* avx512vl_vpermi2varv32qi3_mask */
    case 4117:  /* avx512vl_vpermi2varv16qi3_mask */
    case 4116:  /* avx512bw_vpermi2varv64qi3_mask */
    case 4115:  /* avx512vl_vpermi2varv2df3_mask */
    case 4114:  /* avx512vl_vpermi2varv2di3_mask */
    case 4113:  /* avx512vl_vpermi2varv4sf3_mask */
    case 4112:  /* avx512vl_vpermi2varv4si3_mask */
    case 4111:  /* avx512vl_vpermi2varv4df3_mask */
    case 4110:  /* avx512vl_vpermi2varv4di3_mask */
    case 4109:  /* avx512vl_vpermi2varv8sf3_mask */
    case 4108:  /* avx512vl_vpermi2varv8si3_mask */
    case 4107:  /* avx512f_vpermi2varv8df3_mask */
    case 4106:  /* avx512f_vpermi2varv8di3_mask */
    case 4105:  /* avx512f_vpermi2varv16sf3_mask */
    case 4104:  /* avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4055:  /* *avx_vpermilpv2df_mask */
    case 4053:  /* *avx_vpermilpv4df_mask */
    case 4051:  /* *avx512f_vpermilpv8df_mask */
    case 4049:  /* *avx_vpermilpv4sf_mask */
    case 4047:  /* *avx_vpermilpv8sf_mask */
    case 4045:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4187:  /* *ssse3_palignrv2df_perm */
    case 4186:  /* *ssse3_palignrv4sf_perm */
    case 4185:  /* *ssse3_palignrv2di_perm */
    case 4184:  /* *ssse3_palignrv4si_perm */
    case 4183:  /* *ssse3_palignrv8hi_perm */
    case 4182:  /* *ssse3_palignrv16qi_perm */
    case 4054:  /* *avx_vpermilpv2df */
    case 4052:  /* *avx_vpermilpv4df */
    case 4050:  /* *avx512f_vpermilpv8df */
    case 4048:  /* *avx_vpermilpv4sf */
    case 4046:  /* *avx_vpermilpv8sf */
    case 4044:  /* *avx512f_vpermilpv16sf */
    case 4043:  /* *avx_vperm_broadcast_v4df */
    case 4042:  /* *avx_vperm_broadcast_v8sf */
    case 4041:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4008:  /* avx_vbroadcastf128_v4df */
    case 4007:  /* avx_vbroadcastf128_v8sf */
    case 4006:  /* avx_vbroadcastf128_v4di */
    case 4005:  /* avx_vbroadcastf128_v8si */
    case 4004:  /* avx_vbroadcastf128_v16hi */
    case 4003:  /* avx_vbroadcastf128_v32qi */
    case 3992:  /* avx2_vbroadcasti128_v4di */
    case 3991:  /* avx2_vbroadcasti128_v8si */
    case 3990:  /* avx2_vbroadcasti128_v16hi */
    case 3989:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3830:  /* xop_maskcmp_uns2v2di3 */
    case 3829:  /* xop_maskcmp_uns2v4si3 */
    case 3828:  /* xop_maskcmp_uns2v8hi3 */
    case 3827:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 3826:  /* xop_maskcmp_unsv2di3 */
    case 3825:  /* xop_maskcmp_unsv4si3 */
    case 3824:  /* xop_maskcmp_unsv8hi3 */
    case 3823:  /* xop_maskcmp_unsv16qi3 */
    case 3822:  /* xop_maskcmpv2di3 */
    case 3821:  /* xop_maskcmpv4si3 */
    case 3820:  /* xop_maskcmpv8hi3 */
    case 3819:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3810:  /* xop_shlv2di3 */
    case 3809:  /* xop_shlv4si3 */
    case 3808:  /* xop_shlv8hi3 */
    case 3807:  /* xop_shlv16qi3 */
    case 3806:  /* xop_shav2di3 */
    case 3805:  /* xop_shav4si3 */
    case 3804:  /* xop_shav8hi3 */
    case 3803:  /* xop_shav16qi3 */
    case 3802:  /* xop_vrotlv2di3 */
    case 3801:  /* xop_vrotlv4si3 */
    case 3800:  /* xop_vrotlv8hi3 */
    case 3799:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 3790:  /* xop_pperm_pack_v8hi_v16qi */
    case 3789:  /* xop_pperm_pack_v4si_v8hi */
    case 3788:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 3777:  /* xop_phaddubq */
    case 3776:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 3781:  /* xop_phadduwq */
    case 3780:  /* xop_phaddwq */
    case 3775:  /* xop_phaddubd */
    case 3774:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 3786:  /* xop_phsubdq */
    case 3785:  /* xop_phsubwd */
    case 3784:  /* xop_phsubbw */
    case 3783:  /* xop_phaddudq */
    case 3782:  /* xop_phadddq */
    case 3779:  /* xop_phadduwd */
    case 3778:  /* xop_phaddwd */
    case 3773:  /* xop_phaddubw */
    case 3772:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3771:  /* xop_pcmov_v2df */
    case 3770:  /* xop_pcmov_v4df256 */
    case 3769:  /* xop_pcmov_v8df512 */
    case 3768:  /* xop_pcmov_v4sf */
    case 3767:  /* xop_pcmov_v8sf256 */
    case 3766:  /* xop_pcmov_v16sf512 */
    case 3765:  /* xop_pcmov_v2di */
    case 3764:  /* xop_pcmov_v4di256 */
    case 3763:  /* xop_pcmov_v8di512 */
    case 3762:  /* xop_pcmov_v4si */
    case 3761:  /* xop_pcmov_v8si256 */
    case 3760:  /* xop_pcmov_v16si512 */
    case 3759:  /* xop_pcmov_v8hi */
    case 3758:  /* xop_pcmov_v16hi256 */
    case 3757:  /* xop_pcmov_v16qi */
    case 3756:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3755:  /* xop_pmadcsswd */
    case 3754:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3753:  /* xop_pmacsswd */
    case 3752:  /* xop_pmacswd */
    case 3751:  /* xop_pmacssdqh */
    case 3750:  /* xop_pmacsdqh */
    case 3749:  /* xop_pmacssdql */
    case 3748:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3743:  /* avx512er_vmrsqrt28v2df_round */
    case 3741:  /* avx512er_vmrsqrt28v4sf_round */
    case 3731:  /* avx512er_vmrcp28v2df_round */
    case 3729:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 3711:  /* *avx512pf_scatterpfv8didf_mask */
    case 3710:  /* *avx512pf_scatterpfv8didf_mask */
    case 3709:  /* *avx512pf_scatterpfv8sidf_mask */
    case 3708:  /* *avx512pf_scatterpfv8sidf_mask */
    case 3707:  /* *avx512pf_scatterpfv8disf_mask */
    case 3706:  /* *avx512pf_scatterpfv8disf_mask */
    case 3705:  /* *avx512pf_scatterpfv16sisf_mask */
    case 3704:  /* *avx512pf_scatterpfv16sisf_mask */
    case 3703:  /* *avx512pf_gatherpfv8didf_mask */
    case 3702:  /* *avx512pf_gatherpfv8didf_mask */
    case 3701:  /* *avx512pf_gatherpfv8sidf_mask */
    case 3700:  /* *avx512pf_gatherpfv8sidf_mask */
    case 3699:  /* *avx512pf_gatherpfv8disf_mask */
    case 3698:  /* *avx512pf_gatherpfv8disf_mask */
    case 3697:  /* *avx512pf_gatherpfv16sisf_mask */
    case 3696:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 3695:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 3694:  /* sse4_2_pcmpistrm */
    case 3693:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 3692:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 3691:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 3690:  /* sse4_2_pcmpestrm */
    case 3689:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 3688:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 3687:  /* sse4_1_roundsd */
    case 3686:  /* sse4_1_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 3503:  /* *ssse3_pmulhrswv8hi3_mask */
    case 3501:  /* *avx2_pmulhrswv16hi3_mask */
    case 3499:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3504:  /* *ssse3_pmulhrswv4hi3 */
    case 3502:  /* *ssse3_pmulhrswv8hi3 */
    case 3500:  /* *avx2_pmulhrswv16hi3 */
    case 3498:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3495:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3494:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 3482:  /* avx2_phsubdv8si3 */
    case 3481:  /* avx2_phadddv8si3 */
    case 3476:  /* ssse3_phsubswv8hi3 */
    case 3475:  /* ssse3_phsubwv8hi3 */
    case 3474:  /* ssse3_phaddswv8hi3 */
    case 3473:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 3472:  /* avx2_phsubswv16hi3 */
    case 3471:  /* avx2_phsubwv16hi3 */
    case 3470:  /* avx2_phaddswv16hi3 */
    case 3469:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[10] = 1;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[11] = 1;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 1), 0);
      recog_data.dup_num[12] = 1;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[13] = 1;
      recog_data.dup_loc[14] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 1), 0);
      recog_data.dup_num[14] = 1;
      recog_data.dup_loc[15] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[15] = 2;
      recog_data.dup_loc[16] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[16] = 2;
      recog_data.dup_loc[17] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[17] = 2;
      recog_data.dup_loc[18] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[18] = 2;
      recog_data.dup_loc[19] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[19] = 2;
      recog_data.dup_loc[20] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[20] = 2;
      recog_data.dup_loc[21] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[21] = 2;
      recog_data.dup_loc[22] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[22] = 2;
      recog_data.dup_loc[23] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[23] = 2;
      recog_data.dup_loc[24] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[24] = 2;
      recog_data.dup_loc[25] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[25] = 2;
      recog_data.dup_loc[26] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[26] = 2;
      recog_data.dup_loc[27] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[27] = 2;
      recog_data.dup_loc[28] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[28] = 2;
      recog_data.dup_loc[29] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[29] = 2;
      break;

    case 3451:  /* *sse2_uavgv8hi3_mask */
    case 3449:  /* *avx2_uavgv16hi3_mask */
    case 3447:  /* *avx512bw_uavgv32hi3_mask */
    case 3445:  /* *sse2_uavgv16qi3_mask */
    case 3443:  /* *avx2_uavgv32qi3_mask */
    case 3441:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 3450:  /* *sse2_uavgv8hi3 */
    case 3448:  /* *avx2_uavgv16hi3 */
    case 3446:  /* *avx512bw_uavgv32hi3 */
    case 3444:  /* *sse2_uavgv16qi3 */
    case 3442:  /* *avx2_uavgv32qi3 */
    case 3440:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3422:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3421:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3420:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3419:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 3414:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3413:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 3899:  /* avx512f_permv8di_1_mask */
    case 3897:  /* avx512f_permv8df_1_mask */
    case 3408:  /* avx2_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3898:  /* avx512f_permv8di_1 */
    case 3896:  /* avx512f_permv8df_1 */
    case 3407:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3406:  /* avx512f_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3405:  /* avx512f_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4199:  /* vec_set_lo_v8sf_mask */
    case 4197:  /* vec_set_lo_v8si_mask */
    case 4191:  /* vec_set_lo_v4df_mask */
    case 4189:  /* vec_set_lo_v4di_mask */
    case 3384:  /* vec_set_lo_v8di_mask */
    case 3382:  /* vec_set_lo_v8df_mask */
    case 3376:  /* vec_set_lo_v16si_mask */
    case 3374:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3372:  /* avx512f_vinserti32x4_1_mask */
    case 3370:  /* avx512f_vinsertf32x4_1_mask */
    case 3368:  /* avx512dq_vinserti64x2_1_mask */
    case 3366:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3371:  /* *avx512f_vinserti32x4_1 */
    case 3369:  /* *avx512f_vinsertf32x4_1 */
    case 3367:  /* *avx512dq_vinserti64x2_1 */
    case 3365:  /* *avx512dq_vinsertf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3585:  /* sse4_1_packusdw_mask */
    case 3583:  /* avx2_packusdw_mask */
    case 3581:  /* avx512bw_packusdw_mask */
    case 3324:  /* sse2_packuswb_mask */
    case 3322:  /* avx2_packuswb_mask */
    case 3320:  /* avx512bw_packuswb_mask */
    case 3318:  /* sse2_packssdw_mask */
    case 3316:  /* avx2_packssdw_mask */
    case 3314:  /* avx512bw_packssdw_mask */
    case 3312:  /* sse2_packsswb_mask */
    case 3310:  /* avx2_packsswb_mask */
    case 3308:  /* avx512bw_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4593:  /* avx512dq_fpclassv2df_mask */
    case 4591:  /* avx512dq_fpclassv4df_mask */
    case 4589:  /* avx512dq_fpclassv8df_mask */
    case 4587:  /* avx512dq_fpclassv4sf_mask */
    case 4585:  /* avx512dq_fpclassv8sf_mask */
    case 4583:  /* avx512dq_fpclassv16sf_mask */
    case 4303:  /* *vcvtps2ph */
    case 3306:  /* avx512vl_testnmv2di3_mask */
    case 3304:  /* avx512vl_testnmv4di3_mask */
    case 3302:  /* avx512f_testnmv8di3_mask */
    case 3300:  /* avx512vl_testnmv4si3_mask */
    case 3298:  /* avx512vl_testnmv8si3_mask */
    case 3296:  /* avx512f_testnmv16si3_mask */
    case 3294:  /* avx512vl_testnmv8hi3_mask */
    case 3292:  /* avx512vl_testnmv16hi3_mask */
    case 3290:  /* avx512bw_testnmv32hi3_mask */
    case 3288:  /* avx512vl_testnmv32qi3_mask */
    case 3286:  /* avx512vl_testnmv16qi3_mask */
    case 3284:  /* avx512bw_testnmv64qi3_mask */
    case 3282:  /* avx512vl_testmv2di3_mask */
    case 3280:  /* avx512vl_testmv4di3_mask */
    case 3278:  /* avx512f_testmv8di3_mask */
    case 3276:  /* avx512vl_testmv4si3_mask */
    case 3274:  /* avx512vl_testmv8si3_mask */
    case 3272:  /* avx512f_testmv16si3_mask */
    case 3270:  /* avx512vl_testmv8hi3_mask */
    case 3268:  /* avx512vl_testmv16hi3_mask */
    case 3266:  /* avx512bw_testmv32hi3_mask */
    case 3264:  /* avx512vl_testmv32qi3_mask */
    case 3262:  /* avx512vl_testmv16qi3_mask */
    case 3260:  /* avx512bw_testmv64qi3_mask */
    case 3165:  /* avx512vl_gtv8hi3_mask */
    case 3163:  /* avx512vl_gtv16hi3_mask */
    case 3161:  /* avx512bw_gtv32hi3_mask */
    case 3159:  /* avx512vl_gtv32qi3_mask */
    case 3157:  /* avx512vl_gtv16qi3_mask */
    case 3155:  /* avx512bw_gtv64qi3_mask */
    case 3153:  /* avx512vl_gtv2di3_mask */
    case 3151:  /* avx512vl_gtv4di3_mask */
    case 3149:  /* avx512f_gtv8di3_mask */
    case 3147:  /* avx512vl_gtv4si3_mask */
    case 3145:  /* avx512vl_gtv8si3_mask */
    case 3143:  /* avx512f_gtv16si3_mask */
    case 3132:  /* avx512vl_eqv2di3_mask_1 */
    case 3130:  /* avx512vl_eqv4di3_mask_1 */
    case 3128:  /* avx512f_eqv8di3_mask_1 */
    case 3126:  /* avx512vl_eqv4si3_mask_1 */
    case 3124:  /* avx512vl_eqv8si3_mask_1 */
    case 3122:  /* avx512f_eqv16si3_mask_1 */
    case 3120:  /* avx512vl_eqv8hi3_mask_1 */
    case 3118:  /* avx512vl_eqv16hi3_mask_1 */
    case 3116:  /* avx512bw_eqv32hi3_mask_1 */
    case 3114:  /* avx512vl_eqv32qi3_mask_1 */
    case 3112:  /* avx512vl_eqv16qi3_mask_1 */
    case 3110:  /* avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2844:  /* *sse4_1_mulv2siv2di3_mask */
    case 2842:  /* *vec_widen_smult_even_v8si_mask */
    case 2840:  /* *vec_widen_smult_even_v16si_mask */
    case 2838:  /* *vec_widen_umult_even_v4si_mask */
    case 2836:  /* *vec_widen_umult_even_v8si_mask */
    case 2834:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2832:  /* *umulv8hi3_highpart_mask */
    case 2830:  /* *smulv8hi3_highpart_mask */
    case 2828:  /* *umulv16hi3_highpart_mask */
    case 2826:  /* *smulv16hi3_highpart_mask */
    case 2824:  /* *umulv32hi3_highpart_mask */
    case 2822:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2694:  /* avx512f_us_truncatev8div16qi2_mask_store */
    case 2693:  /* avx512f_truncatev8div16qi2_mask_store */
    case 2692:  /* avx512f_ss_truncatev8div16qi2_mask_store */
    case 2679:  /* avx512vl_us_truncatev2div2si2_mask_store */
    case 2678:  /* avx512vl_truncatev2div2si2_mask_store */
    case 2677:  /* avx512vl_ss_truncatev2div2si2_mask_store */
    case 2664:  /* avx512vl_us_truncatev2div2hi2_mask_store */
    case 2663:  /* avx512vl_truncatev2div2hi2_mask_store */
    case 2662:  /* avx512vl_ss_truncatev2div2hi2_mask_store */
    case 2652:  /* avx512vl_us_truncatev4div4hi2_mask_store */
    case 2651:  /* avx512vl_truncatev4div4hi2_mask_store */
    case 2650:  /* avx512vl_ss_truncatev4div4hi2_mask_store */
    case 2649:  /* avx512vl_us_truncatev4siv4hi2_mask_store */
    case 2648:  /* avx512vl_truncatev4siv4hi2_mask_store */
    case 2647:  /* avx512vl_ss_truncatev4siv4hi2_mask_store */
    case 2619:  /* avx512vl_us_truncatev8siv8qi2_mask_store */
    case 2618:  /* avx512vl_truncatev8siv8qi2_mask_store */
    case 2617:  /* avx512vl_ss_truncatev8siv8qi2_mask_store */
    case 2616:  /* avx512vl_us_truncatev8hiv8qi2_mask_store */
    case 2615:  /* avx512vl_truncatev8hiv8qi2_mask_store */
    case 2614:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store */
    case 2595:  /* avx512vl_us_truncatev4div4qi2_mask_store */
    case 2594:  /* avx512vl_truncatev4div4qi2_mask_store */
    case 2593:  /* avx512vl_ss_truncatev4div4qi2_mask_store */
    case 2592:  /* avx512vl_us_truncatev4siv4qi2_mask_store */
    case 2591:  /* avx512vl_truncatev4siv4qi2_mask_store */
    case 2590:  /* avx512vl_ss_truncatev4siv4qi2_mask_store */
    case 2571:  /* avx512vl_us_truncatev2div2qi2_mask_store */
    case 2570:  /* avx512vl_truncatev2div2qi2_mask_store */
    case 2569:  /* avx512vl_ss_truncatev2div2qi2_mask_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 2685:  /* *avx512f_us_truncatev8div16qi2_store */
    case 2684:  /* *avx512f_truncatev8div16qi2_store */
    case 2683:  /* *avx512f_ss_truncatev8div16qi2_store */
    case 2670:  /* *avx512vl_us_truncatev2div2si2_store */
    case 2669:  /* *avx512vl_truncatev2div2si2_store */
    case 2668:  /* *avx512vl_ss_truncatev2div2si2_store */
    case 2655:  /* *avx512vl_us_truncatev2div2hi2_store */
    case 2654:  /* *avx512vl_truncatev2div2hi2_store */
    case 2653:  /* *avx512vl_ss_truncatev2div2hi2_store */
    case 2634:  /* *avx512vl_us_truncatev4div4hi2_store */
    case 2633:  /* *avx512vl_truncatev4div4hi2_store */
    case 2632:  /* *avx512vl_ss_truncatev4div4hi2_store */
    case 2631:  /* *avx512vl_us_truncatev4siv4hi2_store */
    case 2630:  /* *avx512vl_truncatev4siv4hi2_store */
    case 2629:  /* *avx512vl_ss_truncatev4siv4hi2_store */
    case 2601:  /* *avx512vl_us_truncatev8siv8qi2_store */
    case 2600:  /* *avx512vl_truncatev8siv8qi2_store */
    case 2599:  /* *avx512vl_ss_truncatev8siv8qi2_store */
    case 2598:  /* *avx512vl_us_truncatev8hiv8qi2_store */
    case 2597:  /* *avx512vl_truncatev8hiv8qi2_store */
    case 2596:  /* *avx512vl_ss_truncatev8hiv8qi2_store */
    case 2577:  /* *avx512vl_us_truncatev4div4qi2_store */
    case 2576:  /* *avx512vl_truncatev4div4qi2_store */
    case 2575:  /* *avx512vl_ss_truncatev4div4qi2_store */
    case 2574:  /* *avx512vl_us_truncatev4siv4qi2_store */
    case 2573:  /* *avx512vl_truncatev4siv4qi2_store */
    case 2572:  /* *avx512vl_ss_truncatev4siv4qi2_store */
    case 2562:  /* *avx512vl_us_truncatev2div2qi2_store */
    case 2561:  /* *avx512vl_truncatev2div2qi2_store */
    case 2560:  /* *avx512vl_ss_truncatev2div2qi2_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2486:  /* sse2_shufpd_v2df */
    case 2485:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 2472:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3404:  /* avx512f_shuf_i32x4_1_mask */
    case 3402:  /* avx512f_shuf_f32x4_1_mask */
    case 2467:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3403:  /* avx512f_shuf_i32x4_1 */
    case 3401:  /* avx512f_shuf_f32x4_1 */
    case 2466:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4623:  /* avx512f_vgetmantv2df_round */
    case 4621:  /* avx512f_vgetmantv4sf_round */
    case 4581:  /* avx512dq_rangesv2df_round */
    case 4579:  /* avx512dq_rangesv4sf_round */
    case 2465:  /* avx512f_rndscalev2df_round */
    case 2463:  /* avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2437:  /* avx512f_sfixupimmv2df_mask_round */
    case 2435:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2436:  /* avx512f_sfixupimmv2df_mask */
    case 2434:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2433:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 2429:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2432:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 2428:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2431:  /* avx512f_sfixupimmv2df_round */
    case 2427:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2430:  /* avx512f_sfixupimmv2df */
    case 2426:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2425:  /* avx512vl_fixupimmv2df_mask_round */
    case 2423:  /* avx512vl_fixupimmv4df_mask_round */
    case 2421:  /* avx512f_fixupimmv8df_mask_round */
    case 2419:  /* avx512vl_fixupimmv4sf_mask_round */
    case 2417:  /* avx512vl_fixupimmv8sf_mask_round */
    case 2415:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2413:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 2409:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 2405:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 2401:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 2397:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 2393:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2411:  /* avx512vl_fixupimmv2df_round */
    case 2407:  /* avx512vl_fixupimmv4df_round */
    case 2403:  /* avx512f_fixupimmv8df_round */
    case 2399:  /* avx512vl_fixupimmv4sf_round */
    case 2395:  /* avx512vl_fixupimmv8sf_round */
    case 2391:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2424:  /* avx512vl_fixupimmv2df_mask */
    case 2422:  /* avx512vl_fixupimmv4df_mask */
    case 2420:  /* avx512f_fixupimmv8df_mask */
    case 2418:  /* avx512vl_fixupimmv4sf_mask */
    case 2416:  /* avx512vl_fixupimmv8sf_mask */
    case 2414:  /* avx512f_fixupimmv16sf_mask */
    case 2349:  /* avx512vl_vternlogv2di_mask */
    case 2348:  /* avx512vl_vternlogv4di_mask */
    case 2347:  /* avx512f_vternlogv8di_mask */
    case 2346:  /* avx512vl_vternlogv4si_mask */
    case 2345:  /* avx512vl_vternlogv8si_mask */
    case 2344:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2412:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 2408:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 2404:  /* avx512f_fixupimmv8df_maskz_1 */
    case 2400:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 2396:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 2392:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 2343:  /* avx512vl_vternlogv2di_maskz_1 */
    case 2341:  /* avx512vl_vternlogv4di_maskz_1 */
    case 2339:  /* avx512f_vternlogv8di_maskz_1 */
    case 2337:  /* avx512vl_vternlogv4si_maskz_1 */
    case 2335:  /* avx512vl_vternlogv8si_maskz_1 */
    case 2333:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3838:  /* xop_vpermil2v2df3 */
    case 3837:  /* xop_vpermil2v4df3 */
    case 3836:  /* xop_vpermil2v4sf3 */
    case 3835:  /* xop_vpermil2v8sf3 */
    case 3561:  /* sse4a_insertqi */
    case 2410:  /* avx512vl_fixupimmv2df */
    case 2406:  /* avx512vl_fixupimmv4df */
    case 2402:  /* avx512f_fixupimmv8df */
    case 2398:  /* avx512vl_fixupimmv4sf */
    case 2394:  /* avx512vl_fixupimmv8sf */
    case 2390:  /* avx512f_fixupimmv16sf */
    case 2342:  /* avx512vl_vternlogv2di */
    case 2340:  /* avx512vl_vternlogv4di */
    case 2338:  /* avx512f_vternlogv8di */
    case 2336:  /* avx512vl_vternlogv4si */
    case 2334:  /* avx512vl_vternlogv8si */
    case 2332:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 2377:  /* avx512f_sgetexpv2df_round */
    case 2375:  /* avx512f_sgetexpv4sf_round */
    case 2307:  /* avx512f_vmscalefv2df_round */
    case 2305:  /* avx512f_vmscalefv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2376:  /* avx512f_sgetexpv2df */
    case 2374:  /* avx512f_sgetexpv4sf */
    case 2306:  /* avx512f_vmscalefv2df */
    case 2304:  /* avx512f_vmscalefv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2236:  /* *avx512dq_vextracti64x2_1 */
    case 2234:  /* *avx512dq_vextractf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 3895:  /* avx2_permv4df_1_mask */
    case 3893:  /* avx2_permv4di_1_mask */
    case 3416:  /* sse2_pshuflw_1_mask */
    case 3410:  /* sse2_pshufd_1_mask */
    case 2241:  /* avx512f_vextracti32x4_1_mask */
    case 2239:  /* avx512f_vextractf32x4_1_mask */
    case 2233:  /* avx512f_vextracti32x4_1_maskm */
    case 2232:  /* avx512f_vextractf32x4_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2237:  /* avx512dq_vextracti64x2_1_mask */
    case 2235:  /* avx512dq_vextractf64x2_1_mask */
    case 2231:  /* avx512dq_vextracti64x2_1_maskm */
    case 2230:  /* avx512dq_vextractf64x2_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3434:  /* *vec_extractv4si_mem */
    case 3433:  /* *vec_extractv4si */
    case 3429:  /* *vec_extractv8hi_mem */
    case 3428:  /* *vec_extractv16qi_mem */
    case 3425:  /* *vec_extractv8hi */
    case 3424:  /* *vec_extractv16qi */
    case 2229:  /* *vec_extractv4sf_mem */
    case 2228:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 2226:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3423:  /* sse2_loadld */
    case 2224:  /* vec_setv4sf_0 */
    case 2223:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 2493:  /* sse2_movsd */
    case 2214:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4206:  /* vec_set_lo_v32qi */
    case 4204:  /* vec_set_lo_v16hi */
    case 4198:  /* vec_set_lo_v8sf */
    case 4196:  /* vec_set_lo_v8si */
    case 4190:  /* vec_set_lo_v4df */
    case 4188:  /* vec_set_lo_v4di */
    case 3383:  /* vec_set_lo_v8di */
    case 3381:  /* vec_set_lo_v8df */
    case 3375:  /* vec_set_lo_v16si */
    case 3373:  /* vec_set_lo_v16sf */
    case 2492:  /* sse2_loadlpd */
    case 2213:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3391:  /* *avx512dq_shuf_f64x2_1 */
    case 3389:  /* *avx512dq_shuf_i64x2_1 */
    case 2470:  /* avx_shufpd256_1 */
    case 2209:  /* sse_shufps_v4sf */
    case 2208:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3392:  /* avx512dq_shuf_f64x2_1_mask */
    case 3390:  /* avx512dq_shuf_i64x2_1_mask */
    case 2471:  /* avx_shufpd256_1_mask */
    case 2207:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3400:  /* avx512vl_shuf_f32x4_1_mask */
    case 3398:  /* avx512vl_shuf_i32x4_1_mask */
    case 3396:  /* avx512f_shuf_i64x2_1_mask */
    case 3394:  /* avx512f_shuf_f64x2_1_mask */
    case 2469:  /* avx512f_shufpd512_1_mask */
    case 2206:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3399:  /* avx512vl_shuf_f32x4_1 */
    case 3397:  /* avx512vl_shuf_i32x4_1 */
    case 3395:  /* avx512f_shuf_i64x2_1 */
    case 3393:  /* avx512f_shuf_f64x2_1 */
    case 2468:  /* avx512f_shufpd512_1 */
    case 2205:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 2204:  /* avx512f_movsldup512_mask */
    case 2202:  /* sse3_movsldup_mask */
    case 2200:  /* avx_movsldup256_mask */
    case 2198:  /* avx512f_movshdup512_mask */
    case 2196:  /* sse3_movshdup_mask */
    case 2194:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2203:  /* *avx512f_movsldup512 */
    case 2201:  /* sse3_movsldup */
    case 2199:  /* avx_movsldup256 */
    case 2197:  /* *avx512f_movshdup512 */
    case 2195:  /* sse3_movshdup */
    case 2193:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3360:  /* vec_interleave_lowv4si_mask */
    case 3358:  /* avx512f_interleave_lowv16si_mask */
    case 3356:  /* avx2_interleave_lowv8si_mask */
    case 3354:  /* vec_interleave_highv4si_mask */
    case 3352:  /* avx512f_interleave_highv16si_mask */
    case 3350:  /* avx2_interleave_highv8si_mask */
    case 3348:  /* vec_interleave_lowv8hi_mask */
    case 3346:  /* avx2_interleave_lowv16hi_mask */
    case 3344:  /* avx512bw_interleave_lowv32hi_mask */
    case 3342:  /* vec_interleave_highv8hi_mask */
    case 3340:  /* avx2_interleave_highv16hi_mask */
    case 3338:  /* avx512bw_interleave_highv32hi_mask */
    case 3336:  /* vec_interleave_lowv16qi_mask */
    case 3334:  /* avx2_interleave_lowv32qi_mask */
    case 3332:  /* avx512bw_interleave_lowv64qi_mask */
    case 3330:  /* vec_interleave_highv16qi_mask */
    case 3328:  /* avx2_interleave_highv32qi_mask */
    case 3326:  /* avx512bw_interleave_highv64qi_mask */
    case 2484:  /* vec_interleave_lowv2di_mask */
    case 2482:  /* avx512f_interleave_lowv8di_mask */
    case 2480:  /* avx2_interleave_lowv4di_mask */
    case 2478:  /* vec_interleave_highv2di_mask */
    case 2476:  /* avx512f_interleave_highv8di_mask */
    case 2474:  /* avx2_interleave_highv4di_mask */
    case 2302:  /* avx512vl_unpcklpd128_mask */
    case 2301:  /* *avx_unpcklpd256_mask */
    case 2299:  /* *avx512f_unpcklpd512_mask */
    case 2296:  /* avx512vl_unpckhpd128_mask */
    case 2295:  /* avx_unpckhpd256_mask */
    case 2293:  /* avx512f_unpckhpd512_mask */
    case 2191:  /* unpcklps128_mask */
    case 2190:  /* avx_unpcklps256_mask */
    case 2188:  /* avx512f_unpcklps512_mask */
    case 2186:  /* vec_interleave_highv4sf_mask */
    case 2184:  /* avx_unpckhps256_mask */
    case 2182:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2176:  /* *avx512vl_cvtmask2qv2di */
    case 2175:  /* *avx512vl_cvtmask2qv4di */
    case 2174:  /* *avx512f_cvtmask2qv8di */
    case 2173:  /* *avx512vl_cvtmask2dv4si */
    case 2172:  /* *avx512vl_cvtmask2dv8si */
    case 2171:  /* *avx512f_cvtmask2dv16si */
    case 2170:  /* *avx512vl_cvtmask2wv8hi */
    case 2169:  /* *avx512vl_cvtmask2wv16hi */
    case 2168:  /* *avx512bw_cvtmask2wv32hi */
    case 2167:  /* *avx512vl_cvtmask2bv32qi */
    case 2166:  /* *avx512vl_cvtmask2bv16qi */
    case 2165:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4294:  /* vcvtph2ps_mask */
    case 2062:  /* ufix_notruncv2dfv2si2_mask */
    case 2052:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4018:  /* avx512dq_broadcastv8sf_mask */
    case 4016:  /* avx512dq_broadcastv16sf_mask */
    case 4014:  /* avx512dq_broadcastv4si_mask */
    case 4012:  /* avx512dq_broadcastv8si_mask */
    case 4010:  /* avx512dq_broadcastv16si_mask */
    case 3941:  /* avx512vl_vec_dupv8hi_mask */
    case 3939:  /* avx512vl_vec_dupv16hi_mask */
    case 3937:  /* avx512bw_vec_dupv32hi_mask */
    case 3935:  /* avx512vl_vec_dupv32qi_mask */
    case 3933:  /* avx512vl_vec_dupv16qi_mask */
    case 3931:  /* avx512bw_vec_dupv64qi_mask */
    case 3929:  /* avx512vl_vec_dupv2df_mask */
    case 3927:  /* avx512vl_vec_dupv4df_mask */
    case 3925:  /* avx512f_vec_dupv8df_mask */
    case 3923:  /* avx512vl_vec_dupv4sf_mask */
    case 3921:  /* avx512vl_vec_dupv8sf_mask */
    case 3919:  /* avx512f_vec_dupv16sf_mask */
    case 3917:  /* avx512vl_vec_dupv2di_mask */
    case 3915:  /* avx512vl_vec_dupv4di_mask */
    case 3913:  /* avx512f_vec_dupv8di_mask */
    case 3911:  /* avx512vl_vec_dupv4si_mask */
    case 3909:  /* avx512vl_vec_dupv8si_mask */
    case 3907:  /* avx512f_vec_dupv16si_mask */
    case 3664:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 3662:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 3652:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 3650:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 3648:  /* avx2_zero_extendv4hiv4di2_mask */
    case 3646:  /* avx2_sign_extendv4hiv4di2_mask */
    case 3640:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 3638:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 3636:  /* avx2_zero_extendv4qiv4di2_mask */
    case 3634:  /* avx2_sign_extendv4qiv4di2_mask */
    case 3632:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 3630:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 3628:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 3626:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 3616:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 3614:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 3612:  /* avx2_zero_extendv8qiv8si2_mask */
    case 3610:  /* avx2_sign_extendv8qiv8si2_mask */
    case 3604:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 3602:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 2178:  /* sse2_cvtps2pd_mask */
    case 2130:  /* sse2_cvttpd2dq_mask */
    case 2124:  /* ufix_truncv2sfv2di2_mask */
    case 2122:  /* fix_truncv2sfv2di2_mask */
    case 2072:  /* ufix_truncv2dfv2si2_mask */
    case 2043:  /* sse2_cvtdq2pd_mask */
    case 2039:  /* ufloatv2siv2df2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2691:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 2690:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 2689:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 2676:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 2675:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 2674:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 2661:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 2660:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 2659:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 2646:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 2645:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 2644:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 2643:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 2642:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 2641:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 2613:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 2612:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 2611:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 2610:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 2609:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 2608:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 2589:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 2588:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 2587:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 2586:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 2585:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 2584:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 2568:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 2567:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 2566:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 2033:  /* *ufloatv2div2sf2_mask_1 */
    case 2032:  /* *floatv2div2sf2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2688:  /* avx512f_us_truncatev8div16qi2_mask */
    case 2687:  /* avx512f_truncatev8div16qi2_mask */
    case 2686:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 2673:  /* avx512vl_us_truncatev2div2si2_mask */
    case 2672:  /* avx512vl_truncatev2div2si2_mask */
    case 2671:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 2658:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 2657:  /* avx512vl_truncatev2div2hi2_mask */
    case 2656:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 2640:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 2639:  /* avx512vl_truncatev4div4hi2_mask */
    case 2638:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 2637:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 2636:  /* avx512vl_truncatev4siv4hi2_mask */
    case 2635:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 2607:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 2606:  /* avx512vl_truncatev8siv8qi2_mask */
    case 2605:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 2604:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 2603:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 2602:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 2583:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 2582:  /* avx512vl_truncatev4div4qi2_mask */
    case 2581:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 2580:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 2579:  /* avx512vl_truncatev4siv4qi2_mask */
    case 2578:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 2565:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 2564:  /* avx512vl_truncatev2div2qi2_mask */
    case 2563:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 2031:  /* ufloatv2div2sf2_mask */
    case 2030:  /* floatv2div2sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1958:  /* avx512dq_cvtps2uqqv2di_mask */
    case 1950:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4302:  /* avx512f_vcvtph2ps512_mask_round */
    case 3739:  /* avx512er_rsqrt28v8df_mask_round */
    case 3735:  /* avx512er_rsqrt28v16sf_mask_round */
    case 3727:  /* avx512er_rcp28v8df_mask_round */
    case 3723:  /* avx512er_rcp28v16sf_mask_round */
    case 3719:  /* avx512er_exp2v8df_mask_round */
    case 3715:  /* avx512er_exp2v16sf_mask_round */
    case 2373:  /* avx512vl_getexpv2df_mask_round */
    case 2369:  /* avx512vl_getexpv4df_mask_round */
    case 2365:  /* avx512f_getexpv8df_mask_round */
    case 2361:  /* avx512vl_getexpv4sf_mask_round */
    case 2357:  /* avx512vl_getexpv8sf_mask_round */
    case 2353:  /* avx512f_getexpv16sf_mask_round */
    case 2104:  /* ufix_notruncv8dfv8di2_mask_round */
    case 2096:  /* fix_notruncv8dfv8di2_mask_round */
    case 2060:  /* ufix_notruncv4dfv4si2_mask_round */
    case 2056:  /* ufix_notruncv8dfv8si2_mask_round */
    case 2047:  /* avx512f_cvtpd2dq512_mask_round */
    case 1954:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 1946:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 1942:  /* avx512vl_ufix_notruncv4sfv4si_mask_round */
    case 1938:  /* avx512vl_ufix_notruncv8sfv8si_mask_round */
    case 1934:  /* avx512f_ufix_notruncv16sfv16si_mask_round */
    case 1930:  /* avx512f_fix_notruncv16sfv16si_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1987:  /* sse2_cvttsd2si_round */
    case 1982:  /* avx512f_vcvttsd2usi_round */
    case 1978:  /* avx512f_vcvttss2usi_round */
    case 1899:  /* sse_cvttss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1984:  /* sse2_cvtsd2si_round */
    case 1980:  /* avx512f_vcvtsd2usi_round */
    case 1976:  /* avx512f_vcvtss2usi_round */
    case 1896:  /* sse_cvtss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2135:  /* sse2_cvtss2sd_round */
    case 2132:  /* sse2_cvtsd2ss_round */
    case 1901:  /* cvtusi2ss32_round */
    case 1894:  /* sse_cvtsi2ss_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4293:  /* vcvtph2ps */
    case 2061:  /* ufix_notruncv2dfv2si2 */
    case 2051:  /* sse2_cvtpd2dq */
    case 1891:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2136:  /* *sse2_vd_cvtss2sd */
    case 2134:  /* sse2_cvtss2sd */
    case 2133:  /* *sse2_vd_cvtsd2ss */
    case 2131:  /* sse2_cvtsd2ss */
    case 1974:  /* sse2_cvtsi2sd */
    case 1902:  /* cvtusi2sd32 */
    case 1900:  /* cvtusi2ss32 */
    case 1893:  /* sse_cvtsi2ss */
    case 1890:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1889:  /* *fma4i_vmfnmsub_v2df */
    case 1888:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1887:  /* *fma4i_vmfnmadd_v2df */
    case 1886:  /* *fma4i_vmfnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1885:  /* *fma4i_vmfmsub_v2df */
    case 1884:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1883:  /* *fma4i_vmfmadd_v2df */
    case 1882:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1881:  /* *fmai_fnmsub_v2df_round */
    case 1879:  /* *fmai_fnmsub_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1880:  /* *fmai_fnmsub_v2df */
    case 1878:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1877:  /* *fmai_fnmadd_v2df_round */
    case 1875:  /* *fmai_fnmadd_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1876:  /* *fmai_fnmadd_v2df */
    case 1874:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1873:  /* *fmai_fmsub_v2df */
    case 1871:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1872:  /* *fmai_fmsub_v2df */
    case 1870:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1869:  /* *fmai_fmadd_v2df */
    case 1867:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1868:  /* *fmai_fmadd_v2df */
    case 1866:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1865:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 1863:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 1861:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 1859:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 1857:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 1855:  /* avx512f_fmsubadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1864:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 1862:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 1860:  /* avx512f_fmsubadd_v8df_mask3 */
    case 1858:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 1856:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 1854:  /* avx512f_fmsubadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1853:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 1851:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 1849:  /* avx512f_fmsubadd_v8df_mask_round */
    case 1847:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 1845:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 1843:  /* avx512f_fmsubadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1852:  /* avx512vl_fmsubadd_v2df_mask */
    case 1850:  /* avx512vl_fmsubadd_v4df_mask */
    case 1848:  /* avx512f_fmsubadd_v8df_mask */
    case 1846:  /* avx512vl_fmsubadd_v4sf_mask */
    case 1844:  /* avx512vl_fmsubadd_v8sf_mask */
    case 1842:  /* avx512f_fmsubadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1837:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 1828:  /* fma_fmsubadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1841:  /* fma_fmsubadd_v2df_maskz_1 */
    case 1839:  /* fma_fmsubadd_v4df_maskz_1 */
    case 1836:  /* fma_fmsubadd_v8df_maskz_1 */
    case 1832:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 1830:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 1827:  /* fma_fmsubadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1835:  /* *fma_fmsubadd_v8df_round */
    case 1826:  /* *fma_fmsubadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1840:  /* *fma_fmsubadd_v2df */
    case 1838:  /* *fma_fmsubadd_v4df */
    case 1834:  /* *fma_fmsubadd_v8df */
    case 1833:  /* *fma_fmsubadd_df */
    case 1831:  /* *fma_fmsubadd_v4sf */
    case 1829:  /* *fma_fmsubadd_v8sf */
    case 1825:  /* *fma_fmsubadd_v16sf */
    case 1824:  /* *fma_fmsubadd_sf */
    case 1823:  /* *fma_fmsubadd_v2df */
    case 1822:  /* *fma_fmsubadd_v4df */
    case 1821:  /* *fma_fmsubadd_v4sf */
    case 1820:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 1819:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 1817:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 1815:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 1813:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 1811:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 1809:  /* avx512f_fmaddsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1818:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 1816:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 1814:  /* avx512f_fmaddsub_v8df_mask3 */
    case 1812:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 1810:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 1808:  /* avx512f_fmaddsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1807:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 1805:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 1803:  /* avx512f_fmaddsub_v8df_mask_round */
    case 1801:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 1799:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 1797:  /* avx512f_fmaddsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4684:  /* vpamdd52huqv2di_mask */
    case 4683:  /* vpamdd52luqv2di_mask */
    case 4682:  /* vpamdd52huqv4di_mask */
    case 4681:  /* vpamdd52luqv4di_mask */
    case 4680:  /* vpamdd52huqv8di_mask */
    case 4679:  /* vpamdd52luqv8di_mask */
    case 1806:  /* avx512vl_fmaddsub_v2df_mask */
    case 1804:  /* avx512vl_fmaddsub_v4df_mask */
    case 1802:  /* avx512f_fmaddsub_v8df_mask */
    case 1800:  /* avx512vl_fmaddsub_v4sf_mask */
    case 1798:  /* avx512vl_fmaddsub_v8sf_mask */
    case 1796:  /* avx512f_fmaddsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4573:  /* avx512dq_rangepv8df_mask_round */
    case 4565:  /* avx512dq_rangepv16sf_mask_round */
    case 1791:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 1782:  /* fma_fmaddsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4710:  /* avx5124vnniw_vp4dpwssds_maskz */
    case 4707:  /* avx5124vnniw_vp4dpwssd_maskz */
    case 4704:  /* avx5124fmaddps_4fnmaddss_maskz */
    case 4701:  /* avx5124fmaddps_4fnmaddps_maskz */
    case 4698:  /* avx5124fmaddps_4fmaddss_maskz */
    case 4695:  /* avx5124fmaddps_4fmaddps_maskz */
    case 4678:  /* vpamdd52huqv2di_maskz_1 */
    case 4676:  /* vpamdd52luqv2di_maskz_1 */
    case 4674:  /* vpamdd52huqv4di_maskz_1 */
    case 4672:  /* vpamdd52luqv4di_maskz_1 */
    case 4670:  /* vpamdd52huqv8di_maskz_1 */
    case 4668:  /* vpamdd52luqv8di_maskz_1 */
    case 4629:  /* avx512bw_dbpsadbwv32hi_mask */
    case 4627:  /* avx512bw_dbpsadbwv16hi_mask */
    case 4625:  /* avx512bw_dbpsadbwv8hi_mask */
    case 4577:  /* avx512dq_rangepv2df_mask */
    case 4575:  /* avx512dq_rangepv4df_mask */
    case 4572:  /* avx512dq_rangepv8df_mask */
    case 4569:  /* avx512dq_rangepv4sf_mask */
    case 4567:  /* avx512dq_rangepv8sf_mask */
    case 4564:  /* avx512dq_rangepv16sf_mask */
    case 4157:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 4155:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 4153:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 4151:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 4149:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 4147:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 4145:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 4143:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 4141:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 4139:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 4137:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 4135:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 4133:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 4131:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 4129:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 4127:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 4125:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 4123:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 4103:  /* avx512bw_vpermi2varv32hi3_maskz_1 */
    case 4101:  /* avx512vl_vpermi2varv16hi3_maskz_1 */
    case 4099:  /* avx512vl_vpermi2varv8hi3_maskz_1 */
    case 4097:  /* avx512vl_vpermi2varv32qi3_maskz_1 */
    case 4095:  /* avx512vl_vpermi2varv16qi3_maskz_1 */
    case 4093:  /* avx512bw_vpermi2varv64qi3_maskz_1 */
    case 4091:  /* avx512vl_vpermi2varv2df3_maskz_1 */
    case 4089:  /* avx512vl_vpermi2varv2di3_maskz_1 */
    case 4087:  /* avx512vl_vpermi2varv4sf3_maskz_1 */
    case 4085:  /* avx512vl_vpermi2varv4si3_maskz_1 */
    case 4083:  /* avx512vl_vpermi2varv4df3_maskz_1 */
    case 4081:  /* avx512vl_vpermi2varv4di3_maskz_1 */
    case 4079:  /* avx512vl_vpermi2varv8sf3_maskz_1 */
    case 4077:  /* avx512vl_vpermi2varv8si3_maskz_1 */
    case 4075:  /* avx512f_vpermi2varv8df3_maskz_1 */
    case 4073:  /* avx512f_vpermi2varv8di3_maskz_1 */
    case 4071:  /* avx512f_vpermi2varv16sf3_maskz_1 */
    case 4069:  /* avx512f_vpermi2varv16si3_maskz_1 */
    case 3523:  /* ssse3_palignrv16qi_mask */
    case 3522:  /* avx2_palignrv32qi_mask */
    case 3521:  /* avx512bw_palignrv64qi_mask */
    case 2389:  /* avx512vl_alignv2di_mask */
    case 2387:  /* avx512vl_alignv4di_mask */
    case 2385:  /* avx512f_alignv8di_mask */
    case 2383:  /* avx512vl_alignv4si_mask */
    case 2381:  /* avx512vl_alignv8si_mask */
    case 2379:  /* avx512f_alignv16si_mask */
    case 1795:  /* fma_fmaddsub_v2df_maskz_1 */
    case 1793:  /* fma_fmaddsub_v4df_maskz_1 */
    case 1790:  /* fma_fmaddsub_v8df_maskz_1 */
    case 1786:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 1784:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 1781:  /* fma_fmaddsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1773:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 1771:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 1769:  /* avx512f_fnmsub_v8df_mask3_round */
    case 1767:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 1765:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 1763:  /* avx512f_fnmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1772:  /* avx512vl_fnmsub_v2df_mask3 */
    case 1770:  /* avx512vl_fnmsub_v4df_mask3 */
    case 1768:  /* avx512f_fnmsub_v8df_mask3 */
    case 1766:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 1764:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 1762:  /* avx512f_fnmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1759:  /* avx512f_fnmsub_v8df_mask_round */
    case 1755:  /* avx512f_fnmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1761:  /* avx512vl_fnmsub_v2df_mask */
    case 1760:  /* avx512vl_fnmsub_v4df_mask */
    case 1758:  /* avx512f_fnmsub_v8df_mask */
    case 1757:  /* avx512vl_fnmsub_v4sf_mask */
    case 1756:  /* avx512vl_fnmsub_v8sf_mask */
    case 1754:  /* avx512f_fnmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1749:  /* fma_fnmsub_v8df_maskz_1_round */
    case 1740:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 1735:  /* *fma_fnmsub_v4df */
    case 1731:  /* *fma_fnmsub_v8sf */
    case 1727:  /* *fma_fnmsub_v2df */
    case 1723:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1753:  /* fma_fnmsub_v2df_maskz_1 */
    case 1751:  /* fma_fnmsub_v4df_maskz_1 */
    case 1748:  /* fma_fnmsub_v8df_maskz_1 */
    case 1744:  /* fma_fnmsub_v4sf_maskz_1 */
    case 1742:  /* fma_fnmsub_v8sf_maskz_1 */
    case 1739:  /* fma_fnmsub_v16sf_maskz_1 */
    case 1734:  /* *fma_fnmsub_v4df */
    case 1730:  /* *fma_fnmsub_v8sf */
    case 1726:  /* *fma_fnmsub_v2df */
    case 1722:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1747:  /* *fma_fnmsub_v8df_round */
    case 1738:  /* *fma_fnmsub_v16sf_round */
    case 1733:  /* *fma_fnmsub_v4df */
    case 1729:  /* *fma_fnmsub_v8sf */
    case 1725:  /* *fma_fnmsub_v2df */
    case 1721:  /* *fma_fnmsub_v4sf */
    case 1719:  /* *fma_fnmsub_df */
    case 1717:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1752:  /* *fma_fnmsub_v2df */
    case 1750:  /* *fma_fnmsub_v4df */
    case 1746:  /* *fma_fnmsub_v8df */
    case 1745:  /* *fma_fnmsub_df */
    case 1743:  /* *fma_fnmsub_v4sf */
    case 1741:  /* *fma_fnmsub_v8sf */
    case 1737:  /* *fma_fnmsub_v16sf */
    case 1736:  /* *fma_fnmsub_sf */
    case 1732:  /* *fma_fnmsub_v4df */
    case 1728:  /* *fma_fnmsub_v8sf */
    case 1724:  /* *fma_fnmsub_v2df */
    case 1720:  /* *fma_fnmsub_v4sf */
    case 1718:  /* *fma_fnmsub_df */
    case 1716:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1713:  /* avx512f_fnmadd_v8df_mask3_round */
    case 1709:  /* avx512f_fnmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1715:  /* avx512vl_fnmadd_v2df_mask3 */
    case 1714:  /* avx512vl_fnmadd_v4df_mask3 */
    case 1712:  /* avx512f_fnmadd_v8df_mask3 */
    case 1711:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 1710:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 1708:  /* avx512f_fnmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1705:  /* avx512f_fnmadd_v8df_mask_round */
    case 1701:  /* avx512f_fnmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1707:  /* avx512vl_fnmadd_v2df_mask */
    case 1706:  /* avx512vl_fnmadd_v4df_mask */
    case 1704:  /* avx512f_fnmadd_v8df_mask */
    case 1703:  /* avx512vl_fnmadd_v4sf_mask */
    case 1702:  /* avx512vl_fnmadd_v8sf_mask */
    case 1700:  /* avx512f_fnmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1695:  /* fma_fnmadd_v8df_maskz_1_round */
    case 1686:  /* fma_fnmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1699:  /* fma_fnmadd_v2df_maskz_1 */
    case 1697:  /* fma_fnmadd_v4df_maskz_1 */
    case 1694:  /* fma_fnmadd_v8df_maskz_1 */
    case 1690:  /* fma_fnmadd_v4sf_maskz_1 */
    case 1688:  /* fma_fnmadd_v8sf_maskz_1 */
    case 1685:  /* fma_fnmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1673:  /* avx512f_fmsub_v8df_mask3_round */
    case 1669:  /* avx512f_fmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1675:  /* avx512vl_fmsub_v2df_mask3 */
    case 1674:  /* avx512vl_fmsub_v4df_mask3 */
    case 1672:  /* avx512f_fmsub_v8df_mask3 */
    case 1671:  /* avx512vl_fmsub_v4sf_mask3 */
    case 1670:  /* avx512vl_fmsub_v8sf_mask3 */
    case 1668:  /* avx512f_fmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1667:  /* avx512vl_fmsub_v2df_mask_round */
    case 1665:  /* avx512vl_fmsub_v4df_mask_round */
    case 1663:  /* avx512f_fmsub_v8df_mask_round */
    case 1661:  /* avx512vl_fmsub_v4sf_mask_round */
    case 1659:  /* avx512vl_fmsub_v8sf_mask_round */
    case 1657:  /* avx512f_fmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1666:  /* avx512vl_fmsub_v2df_mask */
    case 1664:  /* avx512vl_fmsub_v4df_mask */
    case 1662:  /* avx512f_fmsub_v8df_mask */
    case 1660:  /* avx512vl_fmsub_v4sf_mask */
    case 1658:  /* avx512vl_fmsub_v8sf_mask */
    case 1656:  /* avx512f_fmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1651:  /* fma_fmsub_v8df_maskz_1_round */
    case 1642:  /* fma_fmsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1655:  /* fma_fmsub_v2df_maskz_1 */
    case 1653:  /* fma_fmsub_v4df_maskz_1 */
    case 1650:  /* fma_fmsub_v8df_maskz_1 */
    case 1646:  /* fma_fmsub_v4sf_maskz_1 */
    case 1644:  /* fma_fmsub_v8sf_maskz_1 */
    case 1641:  /* fma_fmsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1649:  /* *fma_fmsub_v8df_round */
    case 1640:  /* *fma_fmsub_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1654:  /* *fma_fmsub_v2df */
    case 1652:  /* *fma_fmsub_v4df */
    case 1648:  /* *fma_fmsub_v8df */
    case 1647:  /* *fma_fmsub_df */
    case 1645:  /* *fma_fmsub_v4sf */
    case 1643:  /* *fma_fmsub_v8sf */
    case 1639:  /* *fma_fmsub_v16sf */
    case 1638:  /* *fma_fmsub_sf */
    case 1637:  /* *fma_fmsub_v4df */
    case 1636:  /* *fma_fmsub_v8sf */
    case 1635:  /* *fma_fmsub_v2df */
    case 1634:  /* *fma_fmsub_v4sf */
    case 1633:  /* *fma_fmsub_df */
    case 1632:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1631:  /* avx512vl_fmadd_v2df_mask3_round */
    case 1629:  /* avx512vl_fmadd_v4df_mask3_round */
    case 1627:  /* avx512f_fmadd_v8df_mask3_round */
    case 1625:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 1623:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 1621:  /* avx512f_fmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1630:  /* avx512vl_fmadd_v2df_mask3 */
    case 1628:  /* avx512vl_fmadd_v4df_mask3 */
    case 1626:  /* avx512f_fmadd_v8df_mask3 */
    case 1624:  /* avx512vl_fmadd_v4sf_mask3 */
    case 1622:  /* avx512vl_fmadd_v8sf_mask3 */
    case 1620:  /* avx512f_fmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1617:  /* avx512f_fmadd_v8df_mask_round */
    case 1613:  /* avx512f_fmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1619:  /* avx512vl_fmadd_v2df_mask */
    case 1618:  /* avx512vl_fmadd_v4df_mask */
    case 1616:  /* avx512f_fmadd_v8df_mask */
    case 1615:  /* avx512vl_fmadd_v4sf_mask */
    case 1614:  /* avx512vl_fmadd_v8sf_mask */
    case 1612:  /* avx512f_fmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1607:  /* fma_fmadd_v8df_maskz_1_round */
    case 1598:  /* fma_fmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1611:  /* fma_fmadd_v2df_maskz_1 */
    case 1609:  /* fma_fmadd_v4df_maskz_1 */
    case 1606:  /* fma_fmadd_v8df_maskz_1 */
    case 1602:  /* fma_fmadd_v4sf_maskz_1 */
    case 1600:  /* fma_fmadd_v8sf_maskz_1 */
    case 1597:  /* fma_fmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1605:  /* *fma_fmadd_v8df_round */
    case 1596:  /* *fma_fmadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4203:  /* vec_set_hi_v8sf_mask */
    case 4201:  /* vec_set_hi_v8si_mask */
    case 4195:  /* vec_set_hi_v4df_mask */
    case 4193:  /* vec_set_hi_v4di_mask */
    case 3388:  /* vec_set_hi_v8di_mask */
    case 3386:  /* vec_set_hi_v8df_mask */
    case 3380:  /* vec_set_hi_v16si_mask */
    case 3378:  /* vec_set_hi_v16sf_mask */
    case 3186:  /* *andnotv2di3_mask */
    case 3185:  /* *andnotv4di3_mask */
    case 3184:  /* *andnotv8di3_mask */
    case 3183:  /* *andnotv4si3_mask */
    case 3182:  /* *andnotv8si3_mask */
    case 3181:  /* *andnotv16si3_mask */
    case 2144:  /* *sse2_cvtpd2ps_mask */
    case 1539:  /* avx512f_andnotv8df3_mask */
    case 1537:  /* avx512f_andnotv16sf3_mask */
    case 1535:  /* sse2_andnotv2df3_mask */
    case 1533:  /* avx_andnotv4df3_mask */
    case 1531:  /* sse_andnotv4sf3_mask */
    case 1529:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1527:  /* sse2_ucomi_round */
    case 1525:  /* sse_ucomi_round */
    case 1523:  /* sse2_comi_round */
    case 1521:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1526:  /* sse2_ucomi */
    case 1524:  /* sse_ucomi */
    case 1522:  /* sse2_comi */
    case 1520:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1513:  /* avx512f_vmcmpv2df3_mask_round */
    case 1511:  /* avx512f_vmcmpv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1512:  /* avx512f_vmcmpv2df3_mask */
    case 1510:  /* avx512f_vmcmpv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1509:  /* avx512f_vmcmpv2df3_round */
    case 1507:  /* avx512f_vmcmpv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1508:  /* avx512f_vmcmpv2df3 */
    case 1506:  /* avx512f_vmcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 1465:  /* avx512f_cmpv8df3_mask_round */
    case 1457:  /* avx512f_cmpv16sf3_mask_round */
    case 1449:  /* avx512f_cmpv8di3_mask_round */
    case 1441:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4571:  /* avx512dq_rangepv8df_round */
    case 4563:  /* avx512dq_rangepv16sf_round */
    case 1789:  /* *fma_fmaddsub_v8df_round */
    case 1780:  /* *fma_fmaddsub_v16sf_round */
    case 1464:  /* avx512f_cmpv8df3_round */
    case 1456:  /* avx512f_cmpv16sf3_round */
    case 1448:  /* avx512f_cmpv8di3_round */
    case 1440:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1505:  /* avx512vl_ucmpv2di3_mask */
    case 1503:  /* avx512vl_ucmpv4di3_mask */
    case 1501:  /* avx512f_ucmpv8di3_mask */
    case 1499:  /* avx512vl_ucmpv4si3_mask */
    case 1497:  /* avx512vl_ucmpv8si3_mask */
    case 1495:  /* avx512f_ucmpv16si3_mask */
    case 1493:  /* avx512vl_ucmpv8hi3_mask */
    case 1491:  /* avx512vl_ucmpv16hi3_mask */
    case 1489:  /* avx512bw_ucmpv32hi3_mask */
    case 1487:  /* avx512vl_ucmpv32qi3_mask */
    case 1485:  /* avx512vl_ucmpv16qi3_mask */
    case 1483:  /* avx512bw_ucmpv64qi3_mask */
    case 1481:  /* avx512vl_cmpv8hi3_mask */
    case 1479:  /* avx512vl_cmpv16hi3_mask */
    case 1477:  /* avx512bw_cmpv32hi3_mask */
    case 1475:  /* avx512vl_cmpv32qi3_mask */
    case 1473:  /* avx512vl_cmpv16qi3_mask */
    case 1471:  /* avx512bw_cmpv64qi3_mask */
    case 1469:  /* avx512vl_cmpv2df3_mask */
    case 1467:  /* avx512vl_cmpv4df3_mask */
    case 1463:  /* avx512f_cmpv8df3_mask */
    case 1461:  /* avx512vl_cmpv4sf3_mask */
    case 1459:  /* avx512vl_cmpv8sf3_mask */
    case 1455:  /* avx512f_cmpv16sf3_mask */
    case 1453:  /* avx512vl_cmpv2di3_mask */
    case 1451:  /* avx512vl_cmpv4di3_mask */
    case 1447:  /* avx512f_cmpv8di3_mask */
    case 1445:  /* avx512vl_cmpv4si3_mask */
    case 1443:  /* avx512vl_cmpv8si3_mask */
    case 1439:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1437:  /* sse2_vmmaskcmpv2df3 */
    case 1436:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4622:  /* avx512f_vgetmantv2df */
    case 4620:  /* avx512f_vgetmantv4sf */
    case 4580:  /* avx512dq_rangesv2df */
    case 4578:  /* avx512dq_rangesv4sf */
    case 2464:  /* avx512f_rndscalev2df */
    case 2462:  /* avx512f_rndscalev4sf */
    case 1427:  /* avx_vmcmpv2df3 */
    case 1426:  /* avx_vmcmpv4sf3 */
    case 1421:  /* reducesv2df */
    case 1420:  /* reducesv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3484:  /* ssse3_phsubdv4si3 */
    case 3483:  /* ssse3_phadddv4si3 */
    case 3480:  /* ssse3_phsubswv4hi3 */
    case 3479:  /* ssse3_phsubwv4hi3 */
    case 3478:  /* ssse3_phaddswv4hi3 */
    case 3477:  /* ssse3_phaddwv4hi3 */
    case 1407:  /* sse3_hsubv4sf3 */
    case 1406:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1405:  /* avx_hsubv8sf3 */
    case 1404:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1403:  /* *sse3_hsubv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1402:  /* *sse3_haddv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1400:  /* *sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1399:  /* avx_hsubv4df3 */
    case 1398:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 4619:  /* avx512vl_getmantv2df_mask_round */
    case 4615:  /* avx512vl_getmantv4df_mask_round */
    case 4611:  /* avx512f_getmantv8df_mask_round */
    case 4607:  /* avx512vl_getmantv4sf_mask_round */
    case 4603:  /* avx512vl_getmantv8sf_mask_round */
    case 4599:  /* avx512f_getmantv16sf_mask_round */
    case 2461:  /* avx512vl_rndscalev2df_mask_round */
    case 2457:  /* avx512vl_rndscalev4df_mask_round */
    case 2453:  /* avx512f_rndscalev8df_mask_round */
    case 2449:  /* avx512vl_rndscalev4sf_mask_round */
    case 2445:  /* avx512vl_rndscalev8sf_mask_round */
    case 2441:  /* avx512f_rndscalev16sf_mask_round */
    case 2331:  /* avx512vl_scalefv2df_mask_round */
    case 2327:  /* avx512vl_scalefv4df_mask_round */
    case 2323:  /* avx512f_scalefv8df_mask_round */
    case 2319:  /* avx512vl_scalefv4sf_mask_round */
    case 2315:  /* avx512vl_scalefv8sf_mask_round */
    case 2311:  /* avx512f_scalefv16sf_mask_round */
    case 1377:  /* ieee_minv8df3_mask_round */
    case 1373:  /* ieee_maxv8df3_mask_round */
    case 1361:  /* ieee_minv16sf3_mask_round */
    case 1357:  /* ieee_maxv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4709:  /* avx5124vnniw_vp4dpwssds_mask */
    case 4706:  /* avx5124vnniw_vp4dpwssd_mask */
    case 4703:  /* avx5124fmaddps_4fnmaddss_mask */
    case 4700:  /* avx5124fmaddps_4fnmaddps_mask */
    case 4697:  /* avx5124fmaddps_4fmaddss_mask */
    case 4694:  /* avx5124fmaddps_4fmaddps_mask */
    case 4690:  /* vpmultishiftqbv32qi_mask */
    case 4688:  /* vpmultishiftqbv16qi_mask */
    case 4686:  /* vpmultishiftqbv64qi_mask */
    case 4618:  /* avx512vl_getmantv2df_mask */
    case 4614:  /* avx512vl_getmantv4df_mask */
    case 4610:  /* avx512f_getmantv8df_mask */
    case 4606:  /* avx512vl_getmantv4sf_mask */
    case 4602:  /* avx512vl_getmantv8sf_mask */
    case 4598:  /* avx512f_getmantv16sf_mask */
    case 4309:  /* avx512f_vcvtps2ph512_mask */
    case 4307:  /* vcvtps2ph256_mask */
    case 4067:  /* avx_vpermilvarv2df3_mask */
    case 4065:  /* avx_vpermilvarv4df3_mask */
    case 4063:  /* avx512f_vpermilvarv8df3_mask */
    case 4061:  /* avx_vpermilvarv4sf3_mask */
    case 4059:  /* avx_vpermilvarv8sf3_mask */
    case 4057:  /* avx512f_vpermilvarv16sf3_mask */
    case 3891:  /* avx512bw_permvarv32hi_mask */
    case 3889:  /* avx512vl_permvarv16hi_mask */
    case 3887:  /* avx512vl_permvarv8hi_mask */
    case 3885:  /* avx512vl_permvarv32qi_mask */
    case 3883:  /* avx512vl_permvarv16qi_mask */
    case 3881:  /* avx512bw_permvarv64qi_mask */
    case 3879:  /* avx2_permvarv4df_mask */
    case 3877:  /* avx2_permvarv4di_mask */
    case 3875:  /* avx512f_permvarv8df_mask */
    case 3873:  /* avx512f_permvarv8di_mask */
    case 3871:  /* avx512f_permvarv16sf_mask */
    case 3869:  /* avx512f_permvarv16si_mask */
    case 3867:  /* avx2_permvarv8sf_mask */
    case 3865:  /* avx2_permvarv8si_mask */
    case 3510:  /* ssse3_pshufbv16qi3_mask */
    case 3508:  /* avx2_pshufbv32qi3_mask */
    case 3506:  /* avx512bw_pshufbv64qi3_mask */
    case 3493:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 3491:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 3489:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 3418:  /* avx512bw_pshufhwv32hi_mask */
    case 3412:  /* avx512bw_pshuflwv32hi_mask */
    case 2850:  /* avx512bw_pmaddwd512v8hi_mask */
    case 2848:  /* avx512bw_pmaddwd512v16hi_mask */
    case 2846:  /* avx512bw_pmaddwd512v32hi_mask */
    case 2460:  /* avx512vl_rndscalev2df_mask */
    case 2456:  /* avx512vl_rndscalev4df_mask */
    case 2452:  /* avx512f_rndscalev8df_mask */
    case 2448:  /* avx512vl_rndscalev4sf_mask */
    case 2444:  /* avx512vl_rndscalev8sf_mask */
    case 2440:  /* avx512f_rndscalev16sf_mask */
    case 2330:  /* avx512vl_scalefv2df_mask */
    case 2326:  /* avx512vl_scalefv4df_mask */
    case 2322:  /* avx512f_scalefv8df_mask */
    case 2318:  /* avx512vl_scalefv4sf_mask */
    case 2314:  /* avx512vl_scalefv8sf_mask */
    case 2310:  /* avx512f_scalefv16sf_mask */
    case 1419:  /* reducepv2df_mask */
    case 1417:  /* reducepv4df_mask */
    case 1415:  /* reducepv8df_mask */
    case 1413:  /* reducepv4sf_mask */
    case 1411:  /* reducepv8sf_mask */
    case 1409:  /* reducepv16sf_mask */
    case 1385:  /* ieee_minv2df3_mask */
    case 1383:  /* ieee_maxv2df3_mask */
    case 1381:  /* ieee_minv4df3_mask */
    case 1379:  /* ieee_maxv4df3_mask */
    case 1376:  /* ieee_minv8df3_mask */
    case 1372:  /* ieee_maxv8df3_mask */
    case 1369:  /* ieee_minv4sf3_mask */
    case 1367:  /* ieee_maxv4sf3_mask */
    case 1365:  /* ieee_minv8sf3_mask */
    case 1363:  /* ieee_maxv8sf3_mask */
    case 1360:  /* ieee_minv16sf3_mask */
    case 1356:  /* ieee_maxv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4617:  /* avx512vl_getmantv2df_round */
    case 4613:  /* avx512vl_getmantv4df_round */
    case 4609:  /* avx512f_getmantv8df_round */
    case 4605:  /* avx512vl_getmantv4sf_round */
    case 4601:  /* avx512vl_getmantv8sf_round */
    case 4597:  /* avx512f_getmantv16sf_round */
    case 2459:  /* avx512vl_rndscalev2df_round */
    case 2455:  /* avx512vl_rndscalev4df_round */
    case 2451:  /* avx512f_rndscalev8df_round */
    case 2447:  /* avx512vl_rndscalev4sf_round */
    case 2443:  /* avx512vl_rndscalev8sf_round */
    case 2439:  /* avx512f_rndscalev16sf_round */
    case 2329:  /* avx512vl_scalefv2df_round */
    case 2325:  /* avx512vl_scalefv4df_round */
    case 2321:  /* avx512f_scalefv8df_round */
    case 2317:  /* avx512vl_scalefv4sf_round */
    case 2313:  /* avx512vl_scalefv8sf_round */
    case 2309:  /* avx512f_scalefv16sf_round */
    case 1375:  /* ieee_minv8df3_round */
    case 1371:  /* ieee_maxv8df3_round */
    case 1359:  /* ieee_minv16sf3_round */
    case 1355:  /* ieee_maxv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1288:  /* sse2_vmsqrtv2df2_round */
    case 1286:  /* sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2148:  /* avx512f_cvtps2pd512_mask_round */
    case 2140:  /* avx512f_cvtpd2ps512_mask_round */
    case 2116:  /* ufix_truncv8sfv8di2_mask_round */
    case 2112:  /* fix_truncv8sfv8di2_mask_round */
    case 2084:  /* ufix_truncv8dfv8di2_mask_round */
    case 2080:  /* fix_truncv8dfv8di2_mask_round */
    case 2070:  /* ufix_truncv8dfv8si2_mask_round */
    case 2066:  /* fix_truncv8dfv8si2_mask_round */
    case 2023:  /* ufloatv8div8sf2_mask_round */
    case 2019:  /* floatv8div8sf2_mask_round */
    case 2015:  /* ufloatv2div2df2_mask_round */
    case 2011:  /* floatv2div2df2_mask_round */
    case 2007:  /* ufloatv4div4df2_mask_round */
    case 2003:  /* floatv4div4df2_mask_round */
    case 1999:  /* ufloatv8div8df2_mask_round */
    case 1995:  /* floatv8div8df2_mask_round */
    case 1966:  /* ufix_truncv16sfv16si2_mask_round */
    case 1962:  /* fix_truncv16sfv16si2_mask_round */
    case 1922:  /* ufloatv4siv4sf2_mask_round */
    case 1918:  /* ufloatv8siv8sf2_mask_round */
    case 1914:  /* ufloatv16siv16sf2_mask_round */
    case 1906:  /* floatv16siv16sf2_mask_round */
    case 1693:  /* *fma_fnmadd_v8df_round */
    case 1684:  /* *fma_fnmadd_v16sf_round */
    case 1280:  /* avx512f_sqrtv8df2_mask_round */
    case 1272:  /* avx512f_sqrtv16sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4714:  /* vpopcountv8di_mask */
    case 4712:  /* vpopcountv16si_mask */
    case 4641:  /* clzv2di2_mask */
    case 4639:  /* clzv4di2_mask */
    case 4637:  /* clzv8di2_mask */
    case 4635:  /* clzv4si2_mask */
    case 4633:  /* clzv8si2_mask */
    case 4631:  /* clzv16si2_mask */
    case 4034:  /* avx512dq_broadcastv4df_mask_1 */
    case 4032:  /* avx512dq_broadcastv4di_mask_1 */
    case 4030:  /* avx512dq_broadcastv8df_mask_1 */
    case 4028:  /* avx512dq_broadcastv8di_mask_1 */
    case 4026:  /* avx512dq_broadcastv16si_mask_1 */
    case 4024:  /* avx512dq_broadcastv16sf_mask_1 */
    case 4022:  /* avx512vl_broadcastv8sf_mask_1 */
    case 4020:  /* avx512vl_broadcastv8si_mask_1 */
    case 3985:  /* avx512vl_vec_dup_gprv2df_mask */
    case 3983:  /* avx512vl_vec_dup_gprv4df_mask */
    case 3981:  /* avx512f_vec_dup_gprv8df_mask */
    case 3979:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 3977:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 3975:  /* avx512f_vec_dup_gprv16sf_mask */
    case 3973:  /* avx512vl_vec_dup_gprv2di_mask */
    case 3971:  /* avx512vl_vec_dup_gprv4di_mask */
    case 3969:  /* avx512f_vec_dup_gprv8di_mask */
    case 3967:  /* avx512vl_vec_dup_gprv4si_mask */
    case 3965:  /* avx512vl_vec_dup_gprv8si_mask */
    case 3963:  /* avx512f_vec_dup_gprv16si_mask */
    case 3961:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 3959:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 3957:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 3955:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 3953:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 3951:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 3949:  /* avx512f_broadcastv8di_mask */
    case 3947:  /* avx512f_broadcastv8df_mask */
    case 3945:  /* avx512f_broadcastv16si_mask */
    case 3943:  /* avx512f_broadcastv16sf_mask */
    case 3660:  /* avx2_zero_extendv4siv4di2_mask */
    case 3658:  /* avx2_sign_extendv4siv4di2_mask */
    case 3656:  /* avx512f_zero_extendv8siv8di2_mask */
    case 3654:  /* avx512f_sign_extendv8siv8di2_mask */
    case 3644:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 3642:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 3624:  /* avx2_zero_extendv8hiv8si2_mask */
    case 3622:  /* avx2_sign_extendv8hiv8si2_mask */
    case 3620:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 3618:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 3608:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 3606:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 3600:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 3598:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 3596:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 3594:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 3551:  /* absv8hi2_mask */
    case 3550:  /* absv16hi2_mask */
    case 3549:  /* absv32hi2_mask */
    case 3548:  /* absv32qi2_mask */
    case 3547:  /* absv16qi2_mask */
    case 3546:  /* absv64qi2_mask */
    case 3545:  /* absv2di2_mask */
    case 3544:  /* absv4di2_mask */
    case 3543:  /* absv8di2_mask */
    case 3542:  /* absv4si2_mask */
    case 3541:  /* absv8si2_mask */
    case 3540:  /* absv16si2_mask */
    case 2544:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 2543:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 2542:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 2541:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 2540:  /* avx512vl_truncatev8siv8hi2_mask */
    case 2539:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 2538:  /* avx512vl_us_truncatev4div4si2_mask */
    case 2537:  /* avx512vl_truncatev4div4si2_mask */
    case 2536:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 2526:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 2525:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 2524:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 2520:  /* avx512f_us_truncatev8div8hi2_mask */
    case 2519:  /* avx512f_truncatev8div8hi2_mask */
    case 2518:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 2517:  /* avx512f_us_truncatev8div8si2_mask */
    case 2516:  /* avx512f_truncatev8div8si2_mask */
    case 2515:  /* avx512f_ss_truncatev8div8si2_mask */
    case 2514:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 2513:  /* avx512f_truncatev16siv16hi2_mask */
    case 2512:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 2511:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 2510:  /* avx512f_truncatev16siv16qi2_mask */
    case 2509:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 2495:  /* vec_dupv2df_mask */
    case 2281:  /* vec_extract_hi_v8sf_mask */
    case 2280:  /* vec_extract_hi_v8si_mask */
    case 2279:  /* vec_extract_hi_v8sf_maskm */
    case 2278:  /* vec_extract_hi_v8si_maskm */
    case 2277:  /* vec_extract_lo_v8sf_maskm */
    case 2276:  /* vec_extract_lo_v8si_maskm */
    case 2275:  /* vec_extract_lo_v8sf_mask */
    case 2273:  /* vec_extract_lo_v8si_mask */
    case 2271:  /* vec_extract_hi_v4df_mask */
    case 2269:  /* vec_extract_hi_v4di_mask */
    case 2267:  /* vec_extract_lo_v4df_mask */
    case 2265:  /* vec_extract_lo_v4di_mask */
    case 2263:  /* vec_extract_lo_v16si_mask */
    case 2261:  /* vec_extract_lo_v16sf_mask */
    case 2259:  /* vec_extract_hi_v16si_mask */
    case 2257:  /* vec_extract_hi_v16sf_mask */
    case 2255:  /* vec_extract_hi_v16si_maskm */
    case 2254:  /* vec_extract_hi_v16sf_maskm */
    case 2253:  /* vec_extract_hi_v8di_mask */
    case 2251:  /* vec_extract_hi_v8df_mask */
    case 2249:  /* vec_extract_hi_v8di_maskm */
    case 2248:  /* vec_extract_hi_v8df_maskm */
    case 2247:  /* vec_extract_lo_v8di_mask */
    case 2245:  /* vec_extract_lo_v8df_mask */
    case 2243:  /* vec_extract_lo_v8di_maskm */
    case 2242:  /* vec_extract_lo_v8df_maskm */
    case 2150:  /* avx_cvtps2pd256_mask */
    case 2147:  /* avx512f_cvtps2pd512_mask */
    case 2142:  /* avx_cvtpd2ps256_mask */
    case 2139:  /* avx512f_cvtpd2ps512_mask */
    case 2128:  /* ufix_truncv4sfv4si2_mask */
    case 2126:  /* ufix_truncv8sfv8si2_mask */
    case 2120:  /* ufix_truncv4sfv4di2_mask */
    case 2118:  /* fix_truncv4sfv4di2_mask */
    case 2115:  /* ufix_truncv8sfv8di2_mask */
    case 2111:  /* fix_truncv8sfv8di2_mask */
    case 2092:  /* ufix_truncv2dfv2di2_mask */
    case 2090:  /* fix_truncv2dfv2di2_mask */
    case 2088:  /* ufix_truncv4dfv4di2_mask */
    case 2086:  /* fix_truncv4dfv4di2_mask */
    case 2083:  /* ufix_truncv8dfv8di2_mask */
    case 2079:  /* fix_truncv8dfv8di2_mask */
    case 2076:  /* ufix_truncv4dfv4si2_mask */
    case 2074:  /* fix_truncv4dfv4si2_mask */
    case 2069:  /* ufix_truncv8dfv8si2_mask */
    case 2065:  /* fix_truncv8dfv8si2_mask */
    case 2037:  /* ufloatv4siv4df2_mask */
    case 2035:  /* ufloatv8siv8df2_mask */
    case 2027:  /* ufloatv4div4sf2_mask */
    case 2025:  /* floatv4div4sf2_mask */
    case 2022:  /* ufloatv8div8sf2_mask */
    case 2018:  /* floatv8div8sf2_mask */
    case 2014:  /* ufloatv2div2df2_mask */
    case 2010:  /* floatv2div2df2_mask */
    case 2006:  /* ufloatv4div4df2_mask */
    case 2002:  /* floatv4div4df2_mask */
    case 1998:  /* ufloatv8div8df2_mask */
    case 1994:  /* floatv8div8df2_mask */
    case 1991:  /* floatv4siv4df2_mask */
    case 1989:  /* floatv8siv8df2_mask */
    case 1970:  /* fix_truncv4sfv4si2_mask */
    case 1968:  /* fix_truncv8sfv8si2_mask */
    case 1965:  /* ufix_truncv16sfv16si2_mask */
    case 1961:  /* fix_truncv16sfv16si2_mask */
    case 1921:  /* ufloatv4siv4sf2_mask */
    case 1917:  /* ufloatv8siv8sf2_mask */
    case 1913:  /* ufloatv16siv16sf2_mask */
    case 1910:  /* floatv4siv4sf2_mask */
    case 1908:  /* floatv8siv8sf2_mask */
    case 1905:  /* floatv16siv16sf2_mask */
    case 1698:  /* *fma_fnmadd_v2df */
    case 1696:  /* *fma_fnmadd_v4df */
    case 1692:  /* *fma_fnmadd_v8df */
    case 1691:  /* *fma_fnmadd_df */
    case 1689:  /* *fma_fnmadd_v4sf */
    case 1687:  /* *fma_fnmadd_v8sf */
    case 1683:  /* *fma_fnmadd_v16sf */
    case 1682:  /* *fma_fnmadd_sf */
    case 1681:  /* *fma_fnmadd_v4df */
    case 1680:  /* *fma_fnmadd_v8sf */
    case 1679:  /* *fma_fnmadd_v2df */
    case 1678:  /* *fma_fnmadd_v4sf */
    case 1677:  /* *fma_fnmadd_df */
    case 1676:  /* *fma_fnmadd_sf */
    case 1284:  /* sse2_sqrtv2df2_mask */
    case 1282:  /* avx_sqrtv4df2_mask */
    case 1279:  /* avx512f_sqrtv8df2_mask */
    case 1276:  /* sse_sqrtv4sf2_mask */
    case 1274:  /* avx_sqrtv8sf2_mask */
    case 1271:  /* avx512f_sqrtv16sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4653:  /* conflictv2di_mask */
    case 4651:  /* conflictv4di_mask */
    case 4649:  /* conflictv8di_mask */
    case 4647:  /* conflictv4si_mask */
    case 4645:  /* conflictv8si_mask */
    case 4643:  /* conflictv16si_mask */
    case 4301:  /* avx512f_vcvtph2ps512_mask */
    case 4298:  /* vcvtph2ps256_mask */
    case 4296:  /* *vcvtph2ps_load_mask */
    case 3738:  /* avx512er_rsqrt28v8df_mask */
    case 3734:  /* avx512er_rsqrt28v16sf_mask */
    case 3726:  /* avx512er_rcp28v8df_mask */
    case 3722:  /* avx512er_rcp28v16sf_mask */
    case 3718:  /* avx512er_exp2v8df_mask */
    case 3714:  /* avx512er_exp2v16sf_mask */
    case 2372:  /* avx512vl_getexpv2df_mask */
    case 2368:  /* avx512vl_getexpv4df_mask */
    case 2364:  /* avx512f_getexpv8df_mask */
    case 2360:  /* avx512vl_getexpv4sf_mask */
    case 2356:  /* avx512vl_getexpv8sf_mask */
    case 2352:  /* avx512f_getexpv16sf_mask */
    case 2108:  /* ufix_notruncv2dfv2di2_mask */
    case 2106:  /* ufix_notruncv4dfv4di2_mask */
    case 2103:  /* ufix_notruncv8dfv8di2_mask */
    case 2100:  /* fix_notruncv2dfv2di2_mask */
    case 2098:  /* fix_notruncv4dfv4di2_mask */
    case 2095:  /* fix_notruncv8dfv8di2_mask */
    case 2059:  /* ufix_notruncv4dfv4si2_mask */
    case 2055:  /* ufix_notruncv8dfv8si2_mask */
    case 2049:  /* avx_cvtpd2dq256_mask */
    case 2046:  /* avx512f_cvtpd2dq512_mask */
    case 1956:  /* avx512dq_cvtps2uqqv4di_mask */
    case 1953:  /* avx512dq_cvtps2uqqv8di_mask */
    case 1948:  /* avx512dq_cvtps2qqv4di_mask */
    case 1945:  /* avx512dq_cvtps2qqv8di_mask */
    case 1941:  /* avx512vl_ufix_notruncv4sfv4si_mask */
    case 1937:  /* avx512vl_ufix_notruncv8sfv8si_mask */
    case 1933:  /* avx512f_ufix_notruncv16sfv16si_mask */
    case 1929:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 1926:  /* sse2_fix_notruncv4sfv4si_mask */
    case 1924:  /* avx_fix_notruncv8sfv8si_mask */
    case 1302:  /* rsqrt14v2df_mask */
    case 1300:  /* rsqrt14v4df_mask */
    case 1298:  /* rsqrt14v8df_mask */
    case 1296:  /* rsqrt14v4sf_mask */
    case 1294:  /* rsqrt14v8sf_mask */
    case 1292:  /* rsqrt14v16sf_mask */
    case 1266:  /* rcp14v2df_mask */
    case 1264:  /* rcp14v4df_mask */
    case 1262:  /* rcp14v8df_mask */
    case 1260:  /* rcp14v4sf_mask */
    case 1258:  /* rcp14v8sf_mask */
    case 1256:  /* rcp14v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3818:  /* *xop_vmfrczv2df2 */
    case 3817:  /* *xop_vmfrczv4sf2 */
    case 3742:  /* avx512er_vmrsqrt28v2df */
    case 3740:  /* avx512er_vmrsqrt28v4sf */
    case 3730:  /* avx512er_vmrcp28v2df */
    case 3728:  /* avx512er_vmrcp28v4sf */
    case 2050:  /* *avx_cvtpd2dq256_2 */
    case 1305:  /* sse_vmrsqrtv4sf2 */
    case 1304:  /* rsqrt14v2df */
    case 1303:  /* rsqrt14v4sf */
    case 1268:  /* srcp14v2df */
    case 1267:  /* srcp14v4sf */
    case 1254:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1393:  /* sse2_vmsminv2df3_round */
    case 1391:  /* sse2_vmsmaxv2df3_round */
    case 1389:  /* sse_vmsminv4sf3_round */
    case 1387:  /* sse_vmsmaxv4sf3_round */
    case 1235:  /* sse2_vmdivv2df3_round */
    case 1233:  /* sse2_vmmulv2df3_round */
    case 1231:  /* sse_vmdivv4sf3_round */
    case 1229:  /* sse_vmmulv4sf3_round */
    case 1203:  /* sse2_vmsubv2df3_round */
    case 1201:  /* sse2_vmaddv2df3_round */
    case 1199:  /* sse_vmsubv4sf3_round */
    case 1197:  /* sse_vmaddv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1392:  /* sse2_vmsminv2df3 */
    case 1390:  /* sse2_vmsmaxv2df3 */
    case 1388:  /* sse_vmsminv4sf3 */
    case 1386:  /* sse_vmsmaxv4sf3 */
    case 1234:  /* sse2_vmdivv2df3 */
    case 1232:  /* sse2_vmmulv2df3 */
    case 1230:  /* sse_vmdivv4sf3 */
    case 1228:  /* sse_vmmulv4sf3 */
    case 1202:  /* sse2_vmsubv2df3 */
    case 1200:  /* sse2_vmaddv2df3 */
    case 1198:  /* sse_vmsubv4sf3 */
    case 1196:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1353:  /* *sminv2df3_mask_round */
    case 1349:  /* *smaxv2df3_mask_round */
    case 1345:  /* *sminv4df3_mask_round */
    case 1341:  /* *smaxv4df3_mask_round */
    case 1337:  /* *sminv8df3_mask_round */
    case 1333:  /* *smaxv8df3_mask_round */
    case 1329:  /* *sminv4sf3_mask_round */
    case 1325:  /* *smaxv4sf3_mask_round */
    case 1321:  /* *sminv8sf3_mask_round */
    case 1317:  /* *smaxv8sf3_mask_round */
    case 1313:  /* *sminv16sf3_mask_round */
    case 1309:  /* *smaxv16sf3_mask_round */
    case 1247:  /* avx512f_divv8df3_mask_round */
    case 1239:  /* avx512f_divv16sf3_mask_round */
    case 1227:  /* *mulv2df3_mask_round */
    case 1223:  /* *mulv4df3_mask_round */
    case 1219:  /* *mulv8df3_mask_round */
    case 1215:  /* *mulv4sf3_mask_round */
    case 1211:  /* *mulv8sf3_mask_round */
    case 1207:  /* *mulv16sf3_mask_round */
    case 1195:  /* *subv2df3_mask_round */
    case 1191:  /* *addv2df3_mask_round */
    case 1187:  /* *subv4df3_mask_round */
    case 1183:  /* *addv4df3_mask_round */
    case 1179:  /* *subv8df3_mask_round */
    case 1175:  /* *addv8df3_mask_round */
    case 1171:  /* *subv4sf3_mask_round */
    case 1167:  /* *addv4sf3_mask_round */
    case 1163:  /* *subv8sf3_mask_round */
    case 1159:  /* *addv8sf3_mask_round */
    case 1155:  /* *subv16sf3_mask_round */
    case 1151:  /* *addv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4280:  /* avx512bw_lshrvv32hi_mask */
    case 4278:  /* avx512bw_ashlvv32hi_mask */
    case 4276:  /* avx512vl_lshrvv16hi_mask */
    case 4274:  /* avx512vl_ashlvv16hi_mask */
    case 4272:  /* avx512vl_lshrvv8hi_mask */
    case 4270:  /* avx512vl_ashlvv8hi_mask */
    case 4268:  /* avx2_lshrvv2di_mask */
    case 4266:  /* avx2_ashlvv2di_mask */
    case 4264:  /* avx2_lshrvv4di_mask */
    case 4262:  /* avx2_ashlvv4di_mask */
    case 4260:  /* avx512f_lshrvv8di_mask */
    case 4258:  /* avx512f_ashlvv8di_mask */
    case 4256:  /* avx2_lshrvv4si_mask */
    case 4254:  /* avx2_ashlvv4si_mask */
    case 4252:  /* avx2_lshrvv8si_mask */
    case 4250:  /* avx2_ashlvv8si_mask */
    case 4248:  /* avx512f_lshrvv16si_mask */
    case 4246:  /* avx512f_ashlvv16si_mask */
    case 4244:  /* avx512bw_ashrvv32hi_mask */
    case 4242:  /* avx512vl_ashrvv16hi_mask */
    case 4240:  /* avx512vl_ashrvv8hi_mask */
    case 4238:  /* avx512f_ashrvv8di_mask */
    case 4236:  /* avx2_ashrvv4di_mask */
    case 4234:  /* avx2_ashrvv2di_mask */
    case 4232:  /* avx512f_ashrvv16si_mask */
    case 4230:  /* avx2_ashrvv8si_mask */
    case 4228:  /* avx2_ashrvv4si_mask */
    case 3258:  /* *xorv8hi3 */
    case 3256:  /* *iorv8hi3 */
    case 3254:  /* *andv8hi3 */
    case 3252:  /* *xorv16hi3 */
    case 3250:  /* *iorv16hi3 */
    case 3248:  /* *andv16hi3 */
    case 3246:  /* *xorv32hi3 */
    case 3244:  /* *iorv32hi3 */
    case 3242:  /* *andv32hi3 */
    case 3240:  /* *xorv16qi3 */
    case 3238:  /* *iorv16qi3 */
    case 3236:  /* *andv16qi3 */
    case 3234:  /* *xorv32qi3 */
    case 3232:  /* *iorv32qi3 */
    case 3230:  /* *andv32qi3 */
    case 3228:  /* *xorv64qi3 */
    case 3226:  /* *iorv64qi3 */
    case 3224:  /* *andv64qi3 */
    case 3222:  /* xorv2di3_mask */
    case 3220:  /* iorv2di3_mask */
    case 3218:  /* andv2di3_mask */
    case 3216:  /* xorv4di3_mask */
    case 3214:  /* iorv4di3_mask */
    case 3212:  /* andv4di3_mask */
    case 3210:  /* xorv8di3_mask */
    case 3208:  /* iorv8di3_mask */
    case 3206:  /* andv8di3_mask */
    case 3204:  /* xorv4si3_mask */
    case 3202:  /* iorv4si3_mask */
    case 3200:  /* andv4si3_mask */
    case 3198:  /* xorv8si3_mask */
    case 3196:  /* iorv8si3_mask */
    case 3194:  /* andv8si3_mask */
    case 3192:  /* xorv16si3_mask */
    case 3190:  /* iorv16si3_mask */
    case 3188:  /* andv16si3_mask */
    case 3102:  /* *sse4_1_uminv4si3_mask */
    case 3100:  /* *sse4_1_umaxv4si3_mask */
    case 3098:  /* *sse4_1_uminv8hi3_mask */
    case 3096:  /* *sse4_1_umaxv8hi3_mask */
    case 3092:  /* *sse4_1_sminv4si3_mask */
    case 3090:  /* *sse4_1_smaxv4si3_mask */
    case 3088:  /* *sse4_1_sminv16qi3_mask */
    case 3086:  /* *sse4_1_smaxv16qi3_mask */
    case 3084:  /* uminv8hi3_mask */
    case 3082:  /* umaxv8hi3_mask */
    case 3080:  /* sminv8hi3_mask */
    case 3078:  /* smaxv8hi3_mask */
    case 3076:  /* uminv16hi3_mask */
    case 3074:  /* umaxv16hi3_mask */
    case 3072:  /* sminv16hi3_mask */
    case 3070:  /* smaxv16hi3_mask */
    case 3068:  /* uminv32hi3_mask */
    case 3066:  /* umaxv32hi3_mask */
    case 3064:  /* sminv32hi3_mask */
    case 3062:  /* smaxv32hi3_mask */
    case 3060:  /* uminv32qi3_mask */
    case 3058:  /* umaxv32qi3_mask */
    case 3056:  /* sminv32qi3_mask */
    case 3054:  /* smaxv32qi3_mask */
    case 3052:  /* uminv16qi3_mask */
    case 3050:  /* umaxv16qi3_mask */
    case 3048:  /* sminv16qi3_mask */
    case 3046:  /* smaxv16qi3_mask */
    case 3044:  /* uminv64qi3_mask */
    case 3042:  /* umaxv64qi3_mask */
    case 3040:  /* sminv64qi3_mask */
    case 3038:  /* smaxv64qi3_mask */
    case 3036:  /* *avx512f_uminv2di3_mask */
    case 3034:  /* *avx512f_umaxv2di3_mask */
    case 3032:  /* *avx512f_sminv2di3_mask */
    case 3030:  /* *avx512f_smaxv2di3_mask */
    case 3028:  /* *avx512f_uminv4di3_mask */
    case 3026:  /* *avx512f_umaxv4di3_mask */
    case 3024:  /* *avx512f_sminv4di3_mask */
    case 3022:  /* *avx512f_smaxv4di3_mask */
    case 3020:  /* *avx512f_uminv8di3_mask */
    case 3018:  /* *avx512f_umaxv8di3_mask */
    case 3016:  /* *avx512f_sminv8di3_mask */
    case 3014:  /* *avx512f_smaxv8di3_mask */
    case 3012:  /* *avx512f_uminv4si3_mask */
    case 3010:  /* *avx512f_umaxv4si3_mask */
    case 3008:  /* *avx512f_sminv4si3_mask */
    case 3006:  /* *avx512f_smaxv4si3_mask */
    case 3004:  /* *avx512f_uminv8si3_mask */
    case 3002:  /* *avx512f_umaxv8si3_mask */
    case 3000:  /* *avx512f_sminv8si3_mask */
    case 2998:  /* *avx512f_smaxv8si3_mask */
    case 2996:  /* *avx512f_uminv16si3_mask */
    case 2994:  /* *avx512f_umaxv16si3_mask */
    case 2992:  /* *avx512f_sminv16si3_mask */
    case 2990:  /* *avx512f_smaxv16si3_mask */
    case 2976:  /* avx512vl_rorv2di_mask */
    case 2974:  /* avx512vl_rolv2di_mask */
    case 2972:  /* avx512vl_rorv4di_mask */
    case 2970:  /* avx512vl_rolv4di_mask */
    case 2968:  /* avx512f_rorv8di_mask */
    case 2966:  /* avx512f_rolv8di_mask */
    case 2964:  /* avx512vl_rorv4si_mask */
    case 2962:  /* avx512vl_rolv4si_mask */
    case 2960:  /* avx512vl_rorv8si_mask */
    case 2958:  /* avx512vl_rolv8si_mask */
    case 2956:  /* avx512f_rorv16si_mask */
    case 2954:  /* avx512f_rolv16si_mask */
    case 2952:  /* avx512vl_rorvv2di_mask */
    case 2950:  /* avx512vl_rolvv2di_mask */
    case 2948:  /* avx512vl_rorvv4di_mask */
    case 2946:  /* avx512vl_rolvv4di_mask */
    case 2944:  /* avx512f_rorvv8di_mask */
    case 2942:  /* avx512f_rolvv8di_mask */
    case 2940:  /* avx512vl_rorvv4si_mask */
    case 2938:  /* avx512vl_rolvv4si_mask */
    case 2936:  /* avx512vl_rorvv8si_mask */
    case 2934:  /* avx512vl_rolvv8si_mask */
    case 2932:  /* avx512f_rorvv16si_mask */
    case 2930:  /* avx512f_rolvv16si_mask */
    case 2922:  /* lshrv8di3_mask */
    case 2920:  /* ashlv8di3_mask */
    case 2918:  /* lshrv16si3_mask */
    case 2916:  /* ashlv16si3_mask */
    case 2914:  /* lshrv2di3_mask */
    case 2912:  /* ashlv2di3_mask */
    case 2910:  /* lshrv4di3_mask */
    case 2908:  /* ashlv4di3_mask */
    case 2906:  /* lshrv4si3_mask */
    case 2904:  /* ashlv4si3_mask */
    case 2902:  /* lshrv8si3_mask */
    case 2900:  /* ashlv8si3_mask */
    case 2898:  /* lshrv8hi3_mask */
    case 2896:  /* ashlv8hi3_mask */
    case 2894:  /* lshrv16hi3_mask */
    case 2892:  /* ashlv16hi3_mask */
    case 2890:  /* lshrv32hi3_mask */
    case 2888:  /* ashlv32hi3_mask */
    case 2886:  /* ashrv8di3_mask */
    case 2884:  /* ashrv16si3_mask */
    case 2882:  /* ashrv4di3_mask */
    case 2880:  /* ashrv32hi3_mask */
    case 2878:  /* ashrv2di3_mask */
    case 2872:  /* ashrv4si3_mask */
    case 2870:  /* ashrv8si3_mask */
    case 2868:  /* ashrv8hi3_mask */
    case 2866:  /* ashrv16hi3_mask */
    case 2864:  /* *sse4_1_mulv4si3_mask */
    case 2862:  /* *avx2_mulv8si3_mask */
    case 2860:  /* *avx512f_mulv16si3_mask */
    case 2858:  /* avx512dq_mulv2di3_mask */
    case 2856:  /* avx512dq_mulv4di3_mask */
    case 2854:  /* avx512dq_mulv8di3_mask */
    case 2820:  /* *mulv8hi3_mask */
    case 2818:  /* *mulv16hi3_mask */
    case 2816:  /* *mulv32hi3_mask */
    case 2814:  /* *sse2_ussubv8hi3_mask */
    case 2812:  /* *sse2_sssubv8hi3_mask */
    case 2810:  /* *sse2_usaddv8hi3_mask */
    case 2808:  /* *sse2_ssaddv8hi3_mask */
    case 2806:  /* *avx2_ussubv16hi3_mask */
    case 2804:  /* *avx2_sssubv16hi3_mask */
    case 2802:  /* *avx2_usaddv16hi3_mask */
    case 2800:  /* *avx2_ssaddv16hi3_mask */
    case 2798:  /* *avx512bw_ussubv32hi3_mask */
    case 2796:  /* *avx512bw_sssubv32hi3_mask */
    case 2794:  /* *avx512bw_usaddv32hi3_mask */
    case 2792:  /* *avx512bw_ssaddv32hi3_mask */
    case 2790:  /* *sse2_ussubv16qi3_mask */
    case 2788:  /* *sse2_sssubv16qi3_mask */
    case 2786:  /* *sse2_usaddv16qi3_mask */
    case 2784:  /* *sse2_ssaddv16qi3_mask */
    case 2782:  /* *avx2_ussubv32qi3_mask */
    case 2780:  /* *avx2_sssubv32qi3_mask */
    case 2778:  /* *avx2_usaddv32qi3_mask */
    case 2776:  /* *avx2_ssaddv32qi3_mask */
    case 2774:  /* *avx512bw_ussubv64qi3_mask */
    case 2772:  /* *avx512bw_sssubv64qi3_mask */
    case 2770:  /* *avx512bw_usaddv64qi3_mask */
    case 2768:  /* *avx512bw_ssaddv64qi3_mask */
    case 2766:  /* *subv8hi3_mask */
    case 2765:  /* *addv8hi3_mask */
    case 2764:  /* *subv16hi3_mask */
    case 2763:  /* *addv16hi3_mask */
    case 2762:  /* *subv32hi3_mask */
    case 2761:  /* *addv32hi3_mask */
    case 2760:  /* *subv32qi3_mask */
    case 2759:  /* *addv32qi3_mask */
    case 2758:  /* *subv16qi3_mask */
    case 2757:  /* *addv16qi3_mask */
    case 2756:  /* *subv64qi3_mask */
    case 2755:  /* *addv64qi3_mask */
    case 2754:  /* *subv2di3_mask */
    case 2753:  /* *addv2di3_mask */
    case 2752:  /* *subv4di3_mask */
    case 2751:  /* *addv4di3_mask */
    case 2750:  /* *subv8di3_mask */
    case 2749:  /* *addv8di3_mask */
    case 2748:  /* *subv4si3_mask */
    case 2747:  /* *addv4si3_mask */
    case 2746:  /* *subv8si3_mask */
    case 2745:  /* *addv8si3_mask */
    case 2744:  /* *subv16si3_mask */
    case 2743:  /* *addv16si3_mask */
    case 2742:  /* *subv2di3 */
    case 2740:  /* *addv2di3 */
    case 2738:  /* *subv4di3 */
    case 2736:  /* *addv4di3 */
    case 2734:  /* *subv8di3 */
    case 2732:  /* *addv8di3 */
    case 2730:  /* *subv4si3 */
    case 2728:  /* *addv4si3 */
    case 2726:  /* *subv8si3 */
    case 2724:  /* *addv8si3 */
    case 2722:  /* *subv16si3 */
    case 2720:  /* *addv16si3 */
    case 2718:  /* *subv8hi3 */
    case 2716:  /* *addv8hi3 */
    case 2714:  /* *subv16hi3 */
    case 2712:  /* *addv16hi3 */
    case 2710:  /* *subv32hi3 */
    case 2708:  /* *addv32hi3 */
    case 2706:  /* *subv16qi3 */
    case 2704:  /* *addv16qi3 */
    case 2702:  /* *subv32qi3 */
    case 2700:  /* *addv32qi3 */
    case 2698:  /* *subv64qi3 */
    case 2696:  /* *addv64qi3 */
    case 1575:  /* *xorv8df3_mask */
    case 1573:  /* *iorv8df3_mask */
    case 1571:  /* *andv8df3_mask */
    case 1569:  /* *xorv16sf3_mask */
    case 1567:  /* *iorv16sf3_mask */
    case 1565:  /* *andv16sf3_mask */
    case 1563:  /* *xorv2df3_mask */
    case 1561:  /* *iorv2df3_mask */
    case 1559:  /* *andv2df3_mask */
    case 1557:  /* *xorv4df3_mask */
    case 1555:  /* *iorv4df3_mask */
    case 1553:  /* *andv4df3_mask */
    case 1551:  /* *xorv4sf3_mask */
    case 1549:  /* *iorv4sf3_mask */
    case 1547:  /* *andv4sf3_mask */
    case 1545:  /* *xorv8sf3_mask */
    case 1543:  /* *iorv8sf3_mask */
    case 1541:  /* *andv8sf3_mask */
    case 1352:  /* *sminv2df3_mask */
    case 1348:  /* *smaxv2df3_mask */
    case 1344:  /* *sminv4df3_mask */
    case 1340:  /* *smaxv4df3_mask */
    case 1336:  /* *sminv8df3_mask */
    case 1332:  /* *smaxv8df3_mask */
    case 1328:  /* *sminv4sf3_mask */
    case 1324:  /* *smaxv4sf3_mask */
    case 1320:  /* *sminv8sf3_mask */
    case 1316:  /* *smaxv8sf3_mask */
    case 1312:  /* *sminv16sf3_mask */
    case 1308:  /* *smaxv16sf3_mask */
    case 1251:  /* sse2_divv2df3_mask */
    case 1249:  /* avx_divv4df3_mask */
    case 1246:  /* avx512f_divv8df3_mask */
    case 1243:  /* sse_divv4sf3_mask */
    case 1241:  /* avx_divv8sf3_mask */
    case 1238:  /* avx512f_divv16sf3_mask */
    case 1226:  /* *mulv2df3_mask */
    case 1222:  /* *mulv4df3_mask */
    case 1218:  /* *mulv8df3_mask */
    case 1214:  /* *mulv4sf3_mask */
    case 1210:  /* *mulv8sf3_mask */
    case 1206:  /* *mulv16sf3_mask */
    case 1194:  /* *subv2df3_mask */
    case 1190:  /* *addv2df3_mask */
    case 1186:  /* *subv4df3_mask */
    case 1182:  /* *addv4df3_mask */
    case 1178:  /* *subv8df3_mask */
    case 1174:  /* *addv8df3_mask */
    case 1170:  /* *subv4sf3_mask */
    case 1166:  /* *addv4sf3_mask */
    case 1162:  /* *subv8sf3_mask */
    case 1158:  /* *addv8sf3_mask */
    case 1154:  /* *subv16sf3_mask */
    case 1150:  /* *addv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1351:  /* *sminv2df3_round */
    case 1347:  /* *smaxv2df3_round */
    case 1343:  /* *sminv4df3_round */
    case 1339:  /* *smaxv4df3_round */
    case 1335:  /* *sminv8df3_round */
    case 1331:  /* *smaxv8df3_round */
    case 1327:  /* *sminv4sf3_round */
    case 1323:  /* *smaxv4sf3_round */
    case 1319:  /* *sminv8sf3_round */
    case 1315:  /* *smaxv8sf3_round */
    case 1311:  /* *sminv16sf3_round */
    case 1307:  /* *smaxv16sf3_round */
    case 1245:  /* avx512f_divv8df3_round */
    case 1237:  /* avx512f_divv16sf3_round */
    case 1225:  /* *mulv2df3_round */
    case 1221:  /* *mulv4df3_round */
    case 1217:  /* *mulv8df3_round */
    case 1213:  /* *mulv4sf3_round */
    case 1209:  /* *mulv8sf3_round */
    case 1205:  /* *mulv16sf3_round */
    case 1193:  /* *subv2df3_round */
    case 1189:  /* *addv2df3_round */
    case 1185:  /* *subv4df3_round */
    case 1181:  /* *addv4df3_round */
    case 1177:  /* *subv8df3_round */
    case 1173:  /* *addv8df3_round */
    case 1169:  /* *subv4sf3_round */
    case 1165:  /* *addv4sf3_round */
    case 1161:  /* *subv8sf3_round */
    case 1157:  /* *addv8sf3_round */
    case 1153:  /* *subv16sf3_round */
    case 1149:  /* *addv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1141:  /* kunpckdi */
    case 1140:  /* kunpcksi */
    case 1139:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3681:  /* ptesttf2 */
    case 3680:  /* avx_ptestv4df */
    case 3679:  /* avx_ptestv8sf */
    case 3678:  /* avx_ptestv4di */
    case 3677:  /* avx_ptestv8si */
    case 3676:  /* avx_ptestv16hi */
    case 3675:  /* avx_ptestv32qi */
    case 3674:  /* sse4_1_ptestv2df */
    case 3673:  /* sse4_1_ptestv4sf */
    case 3672:  /* sse4_1_ptestv2di */
    case 3671:  /* sse4_1_ptestv4si */
    case 3670:  /* sse4_1_ptestv8hi */
    case 3669:  /* sse4_1_ptestv16qi */
    case 3668:  /* avx_vtestpd */
    case 3667:  /* avx_vtestpd256 */
    case 3666:  /* avx_vtestps */
    case 3665:  /* avx_vtestps256 */
    case 1138:  /* kortestdi */
    case 1137:  /* kortestsi */
    case 1136:  /* kortesthi */
    case 1135:  /* kortestqi */
    case 1134:  /* ktestdi */
    case 1133:  /* ktestsi */
    case 1132:  /* ktesthi */
    case 1131:  /* ktestqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1114:  /* kxnordi */
    case 1113:  /* kxnorsi */
    case 1112:  /* kxnorhi */
    case 1111:  /* kxnorqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1080:  /* avx512vl_storev8hi_mask */
    case 1079:  /* avx512vl_storev16hi_mask */
    case 1078:  /* avx512bw_storev32hi_mask */
    case 1077:  /* avx512vl_storev32qi_mask */
    case 1076:  /* avx512vl_storev16qi_mask */
    case 1075:  /* avx512bw_storev64qi_mask */
    case 1074:  /* avx512vl_storev2df_mask */
    case 1073:  /* avx512vl_storev4df_mask */
    case 1072:  /* avx512f_storev8df_mask */
    case 1071:  /* avx512vl_storev4sf_mask */
    case 1070:  /* avx512vl_storev8sf_mask */
    case 1069:  /* avx512f_storev16sf_mask */
    case 1068:  /* avx512vl_storev2di_mask */
    case 1067:  /* avx512vl_storev4di_mask */
    case 1066:  /* avx512f_storev8di_mask */
    case 1065:  /* avx512vl_storev4si_mask */
    case 1064:  /* avx512vl_storev8si_mask */
    case 1063:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 3591:  /* avx2_pblenddv4si */
    case 3590:  /* avx2_pblenddv8si */
    case 3589:  /* *avx2_pblendw */
    case 3588:  /* sse4_1_pblendw */
    case 3566:  /* sse4_1_blendpd */
    case 3565:  /* avx_blendpd256 */
    case 3564:  /* sse4_1_blendps */
    case 3563:  /* avx_blendps256 */
    case 1062:  /* avx512vl_blendmv8hi */
    case 1061:  /* avx512vl_blendmv16hi */
    case 1060:  /* avx512bw_blendmv32hi */
    case 1059:  /* avx512vl_blendmv32qi */
    case 1058:  /* avx512vl_blendmv16qi */
    case 1057:  /* avx512bw_blendmv64qi */
    case 1056:  /* avx512vl_blendmv2df */
    case 1055:  /* avx512vl_blendmv4df */
    case 1054:  /* avx512f_blendmv8df */
    case 1053:  /* avx512vl_blendmv4sf */
    case 1052:  /* avx512vl_blendmv8sf */
    case 1051:  /* avx512f_blendmv16sf */
    case 1050:  /* avx512vl_blendmv2di */
    case 1049:  /* avx512vl_blendmv4di */
    case 1048:  /* avx512f_blendmv8di */
    case 1047:  /* avx512vl_blendmv4si */
    case 1046:  /* avx512vl_blendmv8si */
    case 1045:  /* avx512f_blendmv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3846:  /* *avx_vzeroall */
    case 1005:  /* *mmx_femms */
    case 1004:  /* *mmx_emms */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 3462:  /* *sse2_maskmovdqu */
    case 3461:  /* *sse2_maskmovdqu */
    case 1003:  /* *mmx_maskmovq */
    case 1002:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3894:  /* avx2_permv4df_1 */
    case 3892:  /* avx2_permv4di_1 */
    case 3415:  /* sse2_pshuflw_1 */
    case 3409:  /* sse2_pshufd_1 */
    case 2240:  /* *avx512f_vextracti32x4_1 */
    case 2238:  /* *avx512f_vextractf32x4_1 */
    case 991:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3427:  /* *vec_extractv8hi_zext */
    case 3426:  /* *vec_extractv16qi_zext */
    case 990:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 3364:  /* sse4_1_pinsrq */
    case 3363:  /* sse4_1_pinsrd */
    case 3362:  /* sse2_pinsrw */
    case 3361:  /* sse4_1_pinsrb */
    case 2225:  /* *vec_setv4sf_sse4_1 */
    case 989:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3359:  /* vec_interleave_lowv4si */
    case 3357:  /* *avx512f_interleave_lowv16si */
    case 3355:  /* avx2_interleave_lowv8si */
    case 3353:  /* vec_interleave_highv4si */
    case 3351:  /* *avx512f_interleave_highv16si */
    case 3349:  /* avx2_interleave_highv8si */
    case 3347:  /* vec_interleave_lowv8hi */
    case 3345:  /* avx2_interleave_lowv16hi */
    case 3343:  /* *avx512bw_interleave_lowv32hi */
    case 3341:  /* vec_interleave_highv8hi */
    case 3339:  /* avx2_interleave_highv16hi */
    case 3337:  /* avx512bw_interleave_highv32hi */
    case 3335:  /* vec_interleave_lowv16qi */
    case 3333:  /* avx2_interleave_lowv32qi */
    case 3331:  /* avx512bw_interleave_lowv64qi */
    case 3329:  /* vec_interleave_highv16qi */
    case 3327:  /* avx2_interleave_highv32qi */
    case 3325:  /* avx512bw_interleave_highv64qi */
    case 2483:  /* vec_interleave_lowv2di */
    case 2481:  /* *avx512f_interleave_lowv8di */
    case 2479:  /* avx2_interleave_lowv4di */
    case 2477:  /* vec_interleave_highv2di */
    case 2475:  /* *avx512f_interleave_highv8di */
    case 2473:  /* avx2_interleave_highv4di */
    case 2303:  /* *vec_interleave_lowv2df */
    case 2300:  /* *avx_unpcklpd256 */
    case 2298:  /* *avx512f_unpcklpd512 */
    case 2297:  /* *vec_interleave_highv2df */
    case 2294:  /* avx_unpckhpd256 */
    case 2292:  /* *avx512f_unpckhpd512 */
    case 2192:  /* vec_interleave_lowv4sf */
    case 2189:  /* avx_unpcklps256 */
    case 2187:  /* *avx512f_unpcklps512 */
    case 2185:  /* vec_interleave_highv4sf */
    case 2183:  /* avx_unpckhps256 */
    case 2181:  /* *avx512f_unpckhps512 */
    case 2180:  /* sse_movlhps */
    case 2179:  /* sse_movhlps */
    case 988:  /* mmx_punpckldq */
    case 987:  /* mmx_punpckhdq */
    case 986:  /* mmx_punpcklwd */
    case 985:  /* mmx_punpckhwd */
    case 984:  /* mmx_punpcklbw */
    case 983:  /* mmx_punpckhbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 3584:  /* sse4_1_packusdw */
    case 3582:  /* avx2_packusdw */
    case 3580:  /* avx512bw_packusdw */
    case 3323:  /* sse2_packuswb */
    case 3321:  /* avx2_packuswb */
    case 3319:  /* avx512bw_packuswb */
    case 3317:  /* sse2_packssdw */
    case 3315:  /* avx2_packssdw */
    case 3313:  /* avx512bw_packssdw */
    case 3311:  /* sse2_packsswb */
    case 3309:  /* avx2_packsswb */
    case 3307:  /* avx512bw_packsswb */
    case 982:  /* mmx_packuswb */
    case 981:  /* mmx_packssdw */
    case 980:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 2843:  /* *sse4_1_mulv2siv2di3 */
    case 2841:  /* *vec_widen_smult_even_v8si */
    case 2839:  /* *vec_widen_smult_even_v16si */
    case 2837:  /* *vec_widen_umult_even_v4si */
    case 2835:  /* *vec_widen_umult_even_v8si */
    case 2833:  /* *vec_widen_umult_even_v16si */
    case 949:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 999:  /* *mmx_uavgv4hi3 */
    case 998:  /* *mmx_uavgv8qi3 */
    case 948:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 3497:  /* ssse3_pmaddubsw */
    case 3496:  /* ssse3_pmaddubsw128 */
    case 3487:  /* avx2_pmaddubsw256 */
    case 2852:  /* *sse2_pmaddwd */
    case 2851:  /* *avx2_pmaddwd */
    case 947:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2831:  /* *umulv8hi3_highpart */
    case 2829:  /* *smulv8hi3_highpart */
    case 2827:  /* *umulv16hi3_highpart */
    case 2825:  /* *smulv16hi3_highpart */
    case 2823:  /* *umulv32hi3_highpart */
    case 2821:  /* *smulv32hi3_highpart */
    case 946:  /* *mmx_umulv4hi3_highpart */
    case 945:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 921:  /* mmx_pi2fw */
    case 920:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1397:  /* sse3_addsubv4sf3 */
    case 1396:  /* avx_addsubv8sf3 */
    case 1395:  /* sse3_addsubv2df3 */
    case 1394:  /* avx_addsubv4df3 */
    case 915:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3486:  /* ssse3_phsubdv2si3 */
    case 3485:  /* ssse3_phadddv2si3 */
    case 1401:  /* sse3_hsubv2df3 */
    case 914:  /* mmx_hsubv2sf3 */
    case 913:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 892:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 890:  /* *bnd64_stx */
    case 889:  /* *bnd32_stx */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 4;
      break;

    case 888:  /* *bnd64_ldx */
    case 887:  /* *bnd32_ldx */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 886:  /* *bnd64_cn */
    case 885:  /* *bnd64_cu */
    case 884:  /* *bnd64_cl */
    case 883:  /* *bnd32_cn */
    case 882:  /* *bnd32_cu */
    case 881:  /* *bnd32_cl */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 878:  /* *bnd64_mk */
    case 877:  /* *bnd32_mk */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 866:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 860:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3468:  /* sse3_monitor_di */
    case 3467:  /* sse3_monitor_si */
    case 893:  /* *wrpkru */
    case 874:  /* monitorx_di */
    case 873:  /* monitorx_si */
    case 872:  /* mwaitx */
    case 859:  /* *lwp_lwpvalsi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 852:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 3466:  /* sse3_mwait */
    case 850:  /* xrstors */
    case 849:  /* xrstor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 842:  /* rdtscp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 826:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 822:  /* adjust_stack_and_probedi */
    case 821:  /* adjust_stack_and_probesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1610:  /* *fma_fmadd_v2df */
    case 1608:  /* *fma_fmadd_v4df */
    case 1604:  /* *fma_fmadd_v8df */
    case 1603:  /* *fma_fmadd_df */
    case 1601:  /* *fma_fmadd_v4sf */
    case 1599:  /* *fma_fmadd_v8sf */
    case 1595:  /* *fma_fmadd_v16sf */
    case 1594:  /* *fma_fmadd_sf */
    case 1593:  /* *fma_fmadd_v4df */
    case 1592:  /* *fma_fmadd_v8sf */
    case 1591:  /* *fma_fmadd_v2df */
    case 1590:  /* *fma_fmadd_v4sf */
    case 1589:  /* *fma_fmadd_df */
    case 1588:  /* *fma_fmadd_sf */
    case 1044:  /* avx512vl_loadv8hi_mask */
    case 1043:  /* avx512vl_loadv16hi_mask */
    case 1042:  /* avx512bw_loadv32hi_mask */
    case 1041:  /* avx512vl_loadv32qi_mask */
    case 1040:  /* avx512vl_loadv16qi_mask */
    case 1039:  /* avx512bw_loadv64qi_mask */
    case 1038:  /* avx512vl_loadv2df_mask */
    case 1037:  /* avx512vl_loadv4df_mask */
    case 1036:  /* avx512f_loadv8df_mask */
    case 1035:  /* avx512vl_loadv4sf_mask */
    case 1034:  /* avx512vl_loadv8sf_mask */
    case 1033:  /* avx512f_loadv16sf_mask */
    case 1032:  /* avx512vl_loadv2di_mask */
    case 1031:  /* avx512vl_loadv4di_mask */
    case 1030:  /* avx512f_loadv8di_mask */
    case 1029:  /* avx512vl_loadv4si_mask */
    case 1028:  /* avx512vl_loadv8si_mask */
    case 1027:  /* avx512f_loadv16si_mask */
    case 804:  /* *xop_pcmov_df */
    case 803:  /* *xop_pcmov_sf */
    case 802:  /* *movsfcc_1_387 */
    case 801:  /* *movdfcc_1 */
    case 800:  /* *movxfcc_1 */
    case 799:  /* *movqicc_noc */
    case 798:  /* *movsicc_noc */
    case 797:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 793:  /* *strlenqi_1 */
    case 792:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 791:  /* *cmpstrnqi_1 */
    case 790:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 789:  /* *cmpstrnqi_nz_1 */
    case 788:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 787:  /* *rep_stosqi */
    case 786:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 785:  /* *rep_stossi */
    case 784:  /* *rep_stossi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 783:  /* *strsetqi_1 */
    case 782:  /* *strsetqi_1 */
    case 781:  /* *strsethi_1 */
    case 780:  /* *strsethi_1 */
    case 779:  /* *strsetsi_1 */
    case 778:  /* *strsetsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 777:  /* *rep_movqi */
    case 776:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 775:  /* *rep_movsi */
    case 774:  /* *rep_movsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 773:  /* *strmovqi_1 */
    case 772:  /* *strmovqi_1 */
    case 771:  /* *strmovhi_1 */
    case 770:  /* *strmovhi_1 */
    case 769:  /* *strmovsi_1 */
    case 768:  /* *strmovsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 752:  /* fistdi2_ceil_with_temp */
    case 751:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 760:  /* fistsi2_ceil_with_temp */
    case 759:  /* fistsi2_floor_with_temp */
    case 758:  /* fisthi2_ceil_with_temp */
    case 757:  /* fisthi2_floor_with_temp */
    case 750:  /* fistdi2_ceil */
    case 749:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 4723:  /* atomic_storedi_fpu */
    case 4719:  /* atomic_loaddi_fpu */
    case 756:  /* fistsi2_ceil */
    case 755:  /* fistsi2_floor */
    case 754:  /* fisthi2_ceil */
    case 753:  /* fisthi2_floor */
    case 742:  /* frndintxf2_mask_pm_i387 */
    case 740:  /* frndintxf2_trunc_i387 */
    case 739:  /* frndintxf2_ceil_i387 */
    case 738:  /* frndintxf2_floor_i387 */
    case 737:  /* frndintdf2_trunc_i387 */
    case 736:  /* frndintdf2_ceil_i387 */
    case 735:  /* frndintdf2_floor_i387 */
    case 734:  /* frndintsf2_trunc_i387 */
    case 733:  /* frndintsf2_ceil_i387 */
    case 732:  /* frndintsf2_floor_i387 */
    case 716:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 832:  /* stack_tls_protect_set_di */
    case 831:  /* stack_tls_protect_set_si */
    case 830:  /* stack_protect_set_di */
    case 829:  /* stack_protect_set_si */
    case 722:  /* fistsi2_with_temp */
    case 721:  /* fisthi2_with_temp */
    case 715:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 708:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 703:  /* fyl2xp1_extenddfxf3_i387 */
    case 702:  /* fyl2xp1_extendsfxf3_i387 */
    case 700:  /* fyl2x_extenddfxf3_i387 */
    case 699:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 697:  /* fpatan_extenddfxf3_i387 */
    case 696:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 836:  /* stack_tls_protect_test_di */
    case 835:  /* stack_tls_protect_test_si */
    case 834:  /* stack_protect_test_di */
    case 833:  /* stack_protect_test_si */
    case 701:  /* fyl2xp1xf3_i387 */
    case 698:  /* fyl2xxf3_i387 */
    case 695:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 694:  /* fptan_extenddfxf4_i387 */
    case 693:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 692:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 706:  /* fxtract_extenddfxf3_i387 */
    case 705:  /* fxtract_extendsfxf3_i387 */
    case 691:  /* sincos_extenddfxf3_i387 */
    case 690:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 704:  /* fxtractxf3_i387 */
    case 689:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 682:  /* fprem1xf4_i387 */
    case 681:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 672:  /* *fop_xf_6_i387 */
    case 671:  /* *fop_xf_6_i387 */
    case 660:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 670:  /* *fop_xf_5_i387 */
    case 669:  /* *fop_xf_5_i387 */
    case 666:  /* *fop_xf_3_i387 */
    case 665:  /* *fop_xf_3_i387 */
    case 659:  /* *fop_df_5_i387 */
    case 657:  /* *fop_df_3_i387 */
    case 656:  /* *fop_sf_3_i387 */
    case 655:  /* *fop_df_3_i387 */
    case 654:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 668:  /* *fop_xf_4_i387 */
    case 667:  /* *fop_xf_4_i387 */
    case 664:  /* *fop_xf_2_i387 */
    case 663:  /* *fop_xf_2_i387 */
    case 658:  /* *fop_df_4_i387 */
    case 653:  /* *fop_df_2_i387 */
    case 652:  /* *fop_sf_2_i387 */
    case 651:  /* *fop_df_2_i387 */
    case 650:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 4727:  /* storedi_via_sse */
    case 4726:  /* loaddi_via_sse */
    case 4725:  /* storedi_via_fpu */
    case 4724:  /* loaddi_via_fpu */
    case 4666:  /* avx512f_pd512_256pd */
    case 4665:  /* avx512f_ps512_256ps */
    case 4664:  /* avx512f_si512_256si */
    case 4663:  /* avx512f_pd512_pd */
    case 4662:  /* avx512f_ps512_ps */
    case 4661:  /* avx512f_si512_si */
    case 4652:  /* *conflictv2di */
    case 4650:  /* *conflictv4di */
    case 4648:  /* *conflictv8di */
    case 4646:  /* *conflictv4si */
    case 4644:  /* *conflictv8si */
    case 4642:  /* *conflictv16si */
    case 4299:  /* *avx512f_vcvtph2ps512 */
    case 4297:  /* vcvtph2ps256 */
    case 4295:  /* *vcvtph2ps_load */
    case 4226:  /* avx_pd256_pd */
    case 4225:  /* avx_ps256_ps */
    case 4224:  /* avx_si256_si */
    case 3843:  /* aesimc */
    case 3816:  /* xop_frczv4df2 */
    case 3815:  /* xop_frczv8sf2 */
    case 3814:  /* xop_frczv2df2 */
    case 3813:  /* xop_frczv4sf2 */
    case 3812:  /* xop_frczdf2 */
    case 3811:  /* xop_frczsf2 */
    case 3736:  /* *avx512er_rsqrt28v8df */
    case 3732:  /* *avx512er_rsqrt28v16sf */
    case 3724:  /* *avx512er_rcp28v8df */
    case 3720:  /* *avx512er_rcp28v16sf */
    case 3716:  /* avx512er_exp2v8df */
    case 3712:  /* avx512er_exp2v16sf */
    case 3592:  /* sse4_1_phminposuw */
    case 3577:  /* sse4_1_movntdqa */
    case 3576:  /* avx2_movntdqa */
    case 3575:  /* avx512f_movntdqa */
    case 3556:  /* sse4a_movntdf */
    case 3555:  /* sse4a_movntsf */
    case 3460:  /* sse2_pmovmskb */
    case 3459:  /* avx2_pmovmskb */
    case 3458:  /* sse2_movmskpd */
    case 3457:  /* avx_movmskpd256 */
    case 3456:  /* sse_movmskps */
    case 3455:  /* avx_movmskps256 */
    case 2370:  /* avx512vl_getexpv2df */
    case 2366:  /* avx512vl_getexpv4df */
    case 2362:  /* avx512f_getexpv8df */
    case 2358:  /* avx512vl_getexpv4sf */
    case 2354:  /* avx512vl_getexpv8sf */
    case 2350:  /* avx512f_getexpv16sf */
    case 2164:  /* avx512vl_cvtq2maskv2di */
    case 2163:  /* avx512vl_cvtq2maskv4di */
    case 2162:  /* avx512f_cvtq2maskv8di */
    case 2161:  /* avx512vl_cvtd2maskv4si */
    case 2160:  /* avx512vl_cvtd2maskv8si */
    case 2159:  /* avx512f_cvtd2maskv16si */
    case 2158:  /* avx512vl_cvtw2maskv8hi */
    case 2157:  /* avx512vl_cvtw2maskv16hi */
    case 2156:  /* avx512bw_cvtw2maskv32hi */
    case 2155:  /* avx512vl_cvtb2maskv32qi */
    case 2154:  /* avx512vl_cvtb2maskv16qi */
    case 2153:  /* avx512bw_cvtb2maskv64qi */
    case 2107:  /* ufix_notruncv2dfv2di2 */
    case 2105:  /* ufix_notruncv4dfv4di2 */
    case 2101:  /* ufix_notruncv8dfv8di2 */
    case 2099:  /* fix_notruncv2dfv2di2 */
    case 2097:  /* fix_notruncv4dfv4di2 */
    case 2093:  /* fix_notruncv8dfv8di2 */
    case 2057:  /* ufix_notruncv4dfv4si2 */
    case 2053:  /* ufix_notruncv8dfv8si2 */
    case 2048:  /* avx_cvtpd2dq256 */
    case 2044:  /* avx512f_cvtpd2dq512 */
    case 1985:  /* sse2_cvtsd2si_2 */
    case 1972:  /* sse2_cvtpd2pi */
    case 1955:  /* *avx512dq_cvtps2uqqv4di */
    case 1951:  /* *avx512dq_cvtps2uqqv8di */
    case 1947:  /* *avx512dq_cvtps2qqv4di */
    case 1943:  /* *avx512dq_cvtps2qqv8di */
    case 1939:  /* *avx512vl_ufix_notruncv4sfv4si */
    case 1935:  /* *avx512vl_ufix_notruncv8sfv8si */
    case 1931:  /* *avx512f_ufix_notruncv16sfv16si */
    case 1927:  /* avx512f_fix_notruncv16sfv16si */
    case 1925:  /* sse2_fix_notruncv4sfv4si */
    case 1923:  /* avx_fix_notruncv8sfv8si */
    case 1897:  /* sse_cvtss2si_2 */
    case 1301:  /* *rsqrt14v2df */
    case 1299:  /* *rsqrt14v4df */
    case 1297:  /* *rsqrt14v8df */
    case 1295:  /* *rsqrt14v4sf */
    case 1293:  /* *rsqrt14v8sf */
    case 1291:  /* *rsqrt14v16sf */
    case 1290:  /* sse_rsqrtv4sf2 */
    case 1289:  /* avx_rsqrtv8sf2 */
    case 1265:  /* *rcp14v2df */
    case 1263:  /* *rcp14v4df */
    case 1261:  /* *rcp14v8df */
    case 1259:  /* *rcp14v4sf */
    case 1257:  /* *rcp14v8sf */
    case 1255:  /* *rcp14v16sf */
    case 1253:  /* sse_rcpv4sf2 */
    case 1252:  /* avx_rcpv8sf2 */
    case 1094:  /* sse2_movntv2di */
    case 1093:  /* avx_movntv4di */
    case 1092:  /* avx512f_movntv8di */
    case 1091:  /* sse2_movntv2df */
    case 1090:  /* avx_movntv4df */
    case 1089:  /* avx512f_movntv8df */
    case 1088:  /* sse_movntv4sf */
    case 1087:  /* avx_movntv8sf */
    case 1086:  /* avx512f_movntv16sf */
    case 1085:  /* sse2_movntisi */
    case 1084:  /* sse3_lddqu */
    case 1083:  /* avx_lddqu256 */
    case 1001:  /* mmx_pmovmskb */
    case 911:  /* mmx_rsqrtv2sf2 */
    case 908:  /* mmx_rcpv2sf2 */
    case 900:  /* sse_movntq */
    case 891:  /* move_size_reloc_si */
    case 848:  /* xsaves */
    case 847:  /* xsavec */
    case 846:  /* xsaveopt */
    case 845:  /* xsave */
    case 840:  /* rdpmc */
    case 766:  /* movmsk_df */
    case 765:  /* fxamdf2_i387_with_temp */
    case 764:  /* fxamsf2_i387_with_temp */
    case 763:  /* fxamxf2_i387 */
    case 762:  /* fxamdf2_i387 */
    case 761:  /* fxamsf2_i387 */
    case 720:  /* fistsi2 */
    case 719:  /* fisthi2 */
    case 718:  /* *fistsi2_1 */
    case 717:  /* *fisthi2_1 */
    case 714:  /* *fistdi2_1 */
    case 713:  /* rintdf2_frndint */
    case 712:  /* rintsf2_frndint */
    case 711:  /* rintxf2 */
    case 707:  /* *f2xm1xf2_i387 */
    case 684:  /* *cosxf2_i387 */
    case 683:  /* *sinxf2_i387 */
    case 678:  /* *rsqrtsf2_sse */
    case 674:  /* truncxfdf2_i387_noop_unspec */
    case 673:  /* truncxfsf2_i387_noop_unspec */
    case 647:  /* *rcpsf2_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 644:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 643:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 642:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 639:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 641:  /* *add_tp_di */
    case 640:  /* *add_tp_si */
    case 638:  /* *add_tp_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 633:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 632:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 631:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 630:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 629:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 628:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 627:  /* bswaphi_lowpart */
    case 626:  /* *bswaphi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 622:  /* *popcounthi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 619:  /* *tbm_tzmsk_si */
    case 618:  /* *tbm_t1mskc_si */
    case 617:  /* *tbm_blsic_si */
    case 613:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 612:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 610:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 4722:  /* atomic_storesi_1 */
    case 4721:  /* atomic_storehi_1 */
    case 4720:  /* atomic_storeqi_1 */
    case 4689:  /* vpmultishiftqbv32qi */
    case 4687:  /* vpmultishiftqbv16qi */
    case 4685:  /* vpmultishiftqbv64qi */
    case 4659:  /* sha256msg2 */
    case 4658:  /* sha256msg1 */
    case 4656:  /* sha1nexte */
    case 4655:  /* sha1msg2 */
    case 4654:  /* sha1msg1 */
    case 4616:  /* avx512vl_getmantv2df */
    case 4612:  /* avx512vl_getmantv4df */
    case 4608:  /* avx512f_getmantv8df */
    case 4604:  /* avx512vl_getmantv4sf */
    case 4600:  /* avx512vl_getmantv8sf */
    case 4596:  /* avx512f_getmantv16sf */
    case 4592:  /* avx512dq_fpclassv2df */
    case 4590:  /* avx512dq_fpclassv4df */
    case 4588:  /* avx512dq_fpclassv8df */
    case 4586:  /* avx512dq_fpclassv4sf */
    case 4584:  /* avx512dq_fpclassv8sf */
    case 4582:  /* avx512dq_fpclassv16sf */
    case 4308:  /* *avx512f_vcvtps2ph512 */
    case 4306:  /* vcvtps2ph256 */
    case 4305:  /* *vcvtps2ph_store */
    case 4066:  /* avx_vpermilvarv2df3 */
    case 4064:  /* avx_vpermilvarv4df3 */
    case 4062:  /* avx512f_vpermilvarv8df3 */
    case 4060:  /* avx_vpermilvarv4sf3 */
    case 4058:  /* avx_vpermilvarv8sf3 */
    case 4056:  /* avx512f_vpermilvarv16sf3 */
    case 3890:  /* avx512bw_permvarv32hi */
    case 3888:  /* avx512vl_permvarv16hi */
    case 3886:  /* avx512vl_permvarv8hi */
    case 3884:  /* avx512vl_permvarv32qi */
    case 3882:  /* avx512vl_permvarv16qi */
    case 3880:  /* avx512bw_permvarv64qi */
    case 3878:  /* avx2_permvarv4df */
    case 3876:  /* avx2_permvarv4di */
    case 3874:  /* avx512f_permvarv8df */
    case 3872:  /* avx512f_permvarv8di */
    case 3870:  /* avx512f_permvarv16sf */
    case 3868:  /* avx512f_permvarv16si */
    case 3866:  /* avx2_permvarv8sf */
    case 3864:  /* avx2_permvarv8si */
    case 3844:  /* aeskeygenassist */
    case 3842:  /* aesdeclast */
    case 3841:  /* aesdec */
    case 3840:  /* aesenclast */
    case 3839:  /* aesenc */
    case 3685:  /* sse4_1_roundpd */
    case 3684:  /* avx_roundpd256 */
    case 3683:  /* sse4_1_roundps */
    case 3682:  /* avx_roundps256 */
    case 3562:  /* sse4a_insertq */
    case 3560:  /* sse4a_extrq */
    case 3520:  /* ssse3_psignv2si3 */
    case 3519:  /* ssse3_psignv4hi3 */
    case 3518:  /* ssse3_psignv8qi3 */
    case 3517:  /* ssse3_psignv4si3 */
    case 3516:  /* avx2_psignv8si3 */
    case 3515:  /* ssse3_psignv8hi3 */
    case 3514:  /* avx2_psignv16hi3 */
    case 3513:  /* ssse3_psignv16qi3 */
    case 3512:  /* avx2_psignv32qi3 */
    case 3511:  /* ssse3_pshufbv8qi3 */
    case 3509:  /* ssse3_pshufbv16qi3 */
    case 3507:  /* avx2_pshufbv32qi3 */
    case 3505:  /* avx512bw_pshufbv64qi3 */
    case 3492:  /* avx512bw_pmaddubsw512v32hi */
    case 3490:  /* avx512bw_pmaddubsw512v16hi */
    case 3488:  /* avx512bw_pmaddubsw512v8hi */
    case 3454:  /* sse2_psadbw */
    case 3453:  /* avx2_psadbw */
    case 3452:  /* avx512f_psadbw */
    case 3417:  /* *avx512bw_pshufhwv32hi */
    case 3411:  /* *avx512bw_pshuflwv32hi */
    case 3305:  /* avx512vl_testnmv2di3 */
    case 3303:  /* avx512vl_testnmv4di3 */
    case 3301:  /* avx512f_testnmv8di3 */
    case 3299:  /* avx512vl_testnmv4si3 */
    case 3297:  /* avx512vl_testnmv8si3 */
    case 3295:  /* avx512f_testnmv16si3 */
    case 3293:  /* avx512vl_testnmv8hi3 */
    case 3291:  /* avx512vl_testnmv16hi3 */
    case 3289:  /* avx512bw_testnmv32hi3 */
    case 3287:  /* avx512vl_testnmv32qi3 */
    case 3285:  /* avx512vl_testnmv16qi3 */
    case 3283:  /* avx512bw_testnmv64qi3 */
    case 3281:  /* avx512vl_testmv2di3 */
    case 3279:  /* avx512vl_testmv4di3 */
    case 3277:  /* avx512f_testmv8di3 */
    case 3275:  /* avx512vl_testmv4si3 */
    case 3273:  /* avx512vl_testmv8si3 */
    case 3271:  /* avx512f_testmv16si3 */
    case 3269:  /* avx512vl_testmv8hi3 */
    case 3267:  /* avx512vl_testmv16hi3 */
    case 3265:  /* avx512bw_testmv32hi3 */
    case 3263:  /* avx512vl_testmv32qi3 */
    case 3261:  /* avx512vl_testmv16qi3 */
    case 3259:  /* avx512bw_testmv64qi3 */
    case 3164:  /* avx512vl_gtv8hi3 */
    case 3162:  /* avx512vl_gtv16hi3 */
    case 3160:  /* avx512bw_gtv32hi3 */
    case 3158:  /* avx512vl_gtv32qi3 */
    case 3156:  /* avx512vl_gtv16qi3 */
    case 3154:  /* avx512bw_gtv64qi3 */
    case 3152:  /* avx512vl_gtv2di3 */
    case 3150:  /* avx512vl_gtv4di3 */
    case 3148:  /* avx512f_gtv8di3 */
    case 3146:  /* avx512vl_gtv4si3 */
    case 3144:  /* avx512vl_gtv8si3 */
    case 3142:  /* avx512f_gtv16si3 */
    case 3131:  /* avx512vl_eqv2di3_1 */
    case 3129:  /* avx512vl_eqv4di3_1 */
    case 3127:  /* avx512f_eqv8di3_1 */
    case 3125:  /* avx512vl_eqv4si3_1 */
    case 3123:  /* avx512vl_eqv8si3_1 */
    case 3121:  /* avx512f_eqv16si3_1 */
    case 3119:  /* avx512vl_eqv8hi3_1 */
    case 3117:  /* avx512vl_eqv16hi3_1 */
    case 3115:  /* avx512bw_eqv32hi3_1 */
    case 3113:  /* avx512vl_eqv32qi3_1 */
    case 3111:  /* avx512vl_eqv16qi3_1 */
    case 3109:  /* avx512bw_eqv64qi3_1 */
    case 2849:  /* avx512bw_pmaddwd512v8hi */
    case 2847:  /* avx512bw_pmaddwd512v16hi */
    case 2845:  /* avx512bw_pmaddwd512v32hi */
    case 2458:  /* avx512vl_rndscalev2df */
    case 2454:  /* avx512vl_rndscalev4df */
    case 2450:  /* avx512f_rndscalev8df */
    case 2446:  /* avx512vl_rndscalev4sf */
    case 2442:  /* avx512vl_rndscalev8sf */
    case 2438:  /* avx512f_rndscalev16sf */
    case 2328:  /* avx512vl_scalefv2df */
    case 2324:  /* avx512vl_scalefv4df */
    case 2320:  /* avx512f_scalefv8df */
    case 2316:  /* avx512vl_scalefv4sf */
    case 2312:  /* avx512vl_scalefv8sf */
    case 2308:  /* avx512f_scalefv16sf */
    case 1418:  /* *reducepv2df */
    case 1416:  /* *reducepv4df */
    case 1414:  /* *reducepv8df */
    case 1412:  /* *reducepv4sf */
    case 1410:  /* *reducepv8sf */
    case 1408:  /* *reducepv16sf */
    case 1384:  /* ieee_minv2df3 */
    case 1382:  /* ieee_maxv2df3 */
    case 1380:  /* ieee_minv4df3 */
    case 1378:  /* ieee_maxv4df3 */
    case 1374:  /* ieee_minv8df3 */
    case 1370:  /* ieee_maxv8df3 */
    case 1368:  /* ieee_minv4sf3 */
    case 1366:  /* ieee_maxv4sf3 */
    case 1364:  /* ieee_minv8sf3 */
    case 1362:  /* ieee_maxv8sf3 */
    case 1358:  /* ieee_minv16sf3 */
    case 1354:  /* ieee_maxv16sf3 */
    case 1000:  /* mmx_psadbw */
    case 912:  /* mmx_rsqit1v2sf3 */
    case 910:  /* mmx_rcpit2v2sf3 */
    case 909:  /* mmx_rcpit1v2sf3 */
    case 907:  /* mmx_ieee_minv2sf3 */
    case 906:  /* mmx_ieee_maxv2sf3 */
    case 839:  /* sse4_2_crc32si */
    case 838:  /* sse4_2_crc32hi */
    case 837:  /* sse4_2_crc32qi */
    case 812:  /* *ieee_smindf3 */
    case 811:  /* *ieee_smaxdf3 */
    case 810:  /* *ieee_sminsf3 */
    case 809:  /* *ieee_smaxsf3 */
    case 710:  /* sse4_1_rounddf2 */
    case 709:  /* sse4_1_roundsf2 */
    case 609:  /* bmi2_pext_si3 */
    case 608:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 607:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 606:  /* *bmi2_bzhi_si3_1 */
    case 605:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 616:  /* *tbm_blsfill_si */
    case 615:  /* *tbm_blcs_si */
    case 614:  /* *tbm_blcmsk_si */
    case 611:  /* *tbm_blcfill_si */
    case 604:  /* *bmi_blsr_si */
    case 603:  /* *bmi_blsmsk_si */
    case 602:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 601:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 824:  /* probe_stack_rangedi */
    case 823:  /* probe_stack_rangesi */
    case 600:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4300:  /* *avx512f_vcvtph2ps512_round */
    case 3737:  /* *avx512er_rsqrt28v8df_round */
    case 3733:  /* *avx512er_rsqrt28v16sf_round */
    case 3725:  /* *avx512er_rcp28v8df_round */
    case 3721:  /* *avx512er_rcp28v16sf_round */
    case 3717:  /* avx512er_exp2v8df_round */
    case 3713:  /* avx512er_exp2v16sf_round */
    case 2371:  /* avx512vl_getexpv2df_round */
    case 2367:  /* avx512vl_getexpv4df_round */
    case 2363:  /* avx512f_getexpv8df_round */
    case 2359:  /* avx512vl_getexpv4sf_round */
    case 2355:  /* avx512vl_getexpv8sf_round */
    case 2351:  /* avx512f_getexpv16sf_round */
    case 2102:  /* ufix_notruncv8dfv8di2_round */
    case 2094:  /* fix_notruncv8dfv8di2_round */
    case 2058:  /* ufix_notruncv4dfv4si2_round */
    case 2054:  /* ufix_notruncv8dfv8si2_round */
    case 2045:  /* avx512f_cvtpd2dq512_round */
    case 1952:  /* *avx512dq_cvtps2uqqv8di_round */
    case 1944:  /* *avx512dq_cvtps2qqv8di_round */
    case 1940:  /* *avx512vl_ufix_notruncv4sfv4si_round */
    case 1936:  /* *avx512vl_ufix_notruncv8sfv8si_round */
    case 1932:  /* *avx512f_ufix_notruncv16sfv16si_round */
    case 1928:  /* avx512f_fix_notruncv16sfv16si_round */
    case 597:  /* *lzcnt_si_falsedep */
    case 596:  /* *tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 820:  /* probe_stack_di */
    case 819:  /* probe_stack_si */
    case 818:  /* allocate_stack_worker_probe_di */
    case 817:  /* allocate_stack_worker_probe_si */
    case 748:  /* *fistdi2_ceil_1 */
    case 747:  /* *fistdi2_floor_1 */
    case 746:  /* *fistsi2_ceil_1 */
    case 745:  /* *fistsi2_floor_1 */
    case 744:  /* *fisthi2_ceil_1 */
    case 743:  /* *fisthi2_floor_1 */
    case 741:  /* frndintxf2_mask_pm */
    case 731:  /* frndintxf2_trunc */
    case 730:  /* frndintxf2_ceil */
    case 729:  /* frndintxf2_floor */
    case 728:  /* frndintdf2_trunc */
    case 727:  /* frndintdf2_ceil */
    case 726:  /* frndintdf2_floor */
    case 725:  /* frndintsf2_trunc */
    case 724:  /* frndintsf2_ceil */
    case 723:  /* frndintsf2_floor */
    case 599:  /* lzcnt_hi */
    case 598:  /* tzcnt_hi */
    case 595:  /* lzcnt_si */
    case 594:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 591:  /* *bsrhi */
    case 590:  /* bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 2146:  /* avx512f_cvtps2pd512_round */
    case 2138:  /* *avx512f_cvtpd2ps512_round */
    case 2114:  /* ufix_truncv8sfv8di2_round */
    case 2110:  /* fix_truncv8sfv8di2_round */
    case 2082:  /* ufix_truncv8dfv8di2_round */
    case 2078:  /* fix_truncv8dfv8di2_round */
    case 2068:  /* ufix_truncv8dfv8si2_round */
    case 2064:  /* fix_truncv8dfv8si2_round */
    case 2021:  /* ufloatv8div8sf2_round */
    case 2017:  /* floatv8div8sf2_round */
    case 2013:  /* ufloatv2div2df2_round */
    case 2009:  /* floatv2div2df2_round */
    case 2005:  /* ufloatv4div4df2_round */
    case 2001:  /* floatv4div4df2_round */
    case 1997:  /* ufloatv8div8df2_round */
    case 1993:  /* floatv8div8df2_round */
    case 1964:  /* ufix_truncv16sfv16si2_round */
    case 1960:  /* fix_truncv16sfv16si2_round */
    case 1920:  /* ufloatv4siv4sf2_round */
    case 1916:  /* ufloatv8siv8sf2_round */
    case 1912:  /* ufloatv16siv16sf2_round */
    case 1904:  /* floatv16siv16sf2_round */
    case 1278:  /* avx512f_sqrtv8df2_round */
    case 1270:  /* avx512f_sqrtv16sf2_round */
    case 621:  /* *popcountsi2_falsedep */
    case 593:  /* *clzsi2_lzcnt_falsedep */
    case 589:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 586:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 587:  /* *bsfsi_1 */
    case 585:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3558:  /* sse4a_vmmovntv2df */
    case 3557:  /* sse4a_vmmovntv4sf */
    case 1983:  /* sse2_cvtsd2si */
    case 1979:  /* avx512f_vcvtsd2usi */
    case 1975:  /* avx512f_vcvtss2usi */
    case 1957:  /* *avx512dq_cvtps2uqqv2di */
    case 1949:  /* *avx512dq_cvtps2qqv2di */
    case 1895:  /* sse_cvtss2si */
    case 688:  /* *cos_extenddfxf2_i387 */
    case 687:  /* *sin_extenddfxf2_i387 */
    case 686:  /* *cos_extendsfxf2_i387 */
    case 685:  /* *sin_extendsfxf2_i387 */
    case 580:  /* set_got_offset_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 579:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 864:  /* rdseedsi_1 */
    case 863:  /* rdseedhi_1 */
    case 862:  /* rdrandsi_1 */
    case 861:  /* rdrandhi_1 */
    case 851:  /* fnstenv */
    case 578:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 574:  /* simple_return_indirect_internal */
    case 573:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 3465:  /* sse2_clflush */
    case 3463:  /* sse_ldmxcsr */
    case 876:  /* clzero_di */
    case 875:  /* clzero_si */
    case 871:  /* clflushopt */
    case 870:  /* clwb */
    case 868:  /* xabort */
    case 856:  /* *lwp_llwpcbdi1 */
    case 855:  /* *lwp_llwpcbsi1 */
    case 844:  /* fxrstor */
    case 583:  /* split_stack_return */
    case 577:  /* pad */
    case 576:  /* nops */
    case 569:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 4717:  /* mfence_sse2 */
    case 4716:  /* *sse_sfence */
    case 4715:  /* *sse2_lfence */
    case 865:  /* *pause */
    case 568:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3847:  /* avx_vzeroupper */
    case 869:  /* xtest_1 */
    case 867:  /* xend */
    case 854:  /* fnclex */
    case 825:  /* trap */
    case 767:  /* cld */
    case 582:  /* leave */
    case 581:  /* eh_return_internal */
    case 575:  /* nop */
    case 572:  /* simple_return_internal_long */
    case 571:  /* interrupt_return */
    case 570:  /* simple_return_internal */
    case 567:  /* blockage */
      break;

    case 566:  /* *sibcall_value_pop_memory */
    case 565:  /* *sibcall_value_pop */
    case 564:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 559:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 558:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4207:  /* vec_set_hi_v32qi */
    case 4205:  /* vec_set_hi_v16hi */
    case 4202:  /* vec_set_hi_v8sf */
    case 4200:  /* vec_set_hi_v8si */
    case 4194:  /* vec_set_hi_v4df */
    case 4192:  /* vec_set_hi_v4di */
    case 3387:  /* vec_set_hi_v8di */
    case 3385:  /* vec_set_hi_v8df */
    case 3379:  /* vec_set_hi_v16si */
    case 3377:  /* vec_set_hi_v16sf */
    case 3180:  /* *andnotv2di3 */
    case 3179:  /* *andnotv4di3 */
    case 3178:  /* *andnotv4si3 */
    case 3177:  /* *andnotv8si3 */
    case 3176:  /* *andnotv8hi3 */
    case 3175:  /* *andnotv16hi3 */
    case 3174:  /* *andnotv32hi3 */
    case 3173:  /* *andnotv16qi3 */
    case 3172:  /* *andnotv32qi3 */
    case 3171:  /* *andnotv64qi3 */
    case 3170:  /* *andnotv8di3 */
    case 3169:  /* *andnotv16si3 */
    case 2667:  /* *avx512vl_us_truncatev2div2si2 */
    case 2666:  /* *avx512vl_truncatev2div2si2 */
    case 2665:  /* *avx512vl_ss_truncatev2div2si2 */
    case 2628:  /* *avx512vl_us_truncatev4siv4hi2 */
    case 2627:  /* *avx512vl_truncatev4siv4hi2 */
    case 2626:  /* *avx512vl_ss_truncatev4siv4hi2 */
    case 2625:  /* *avx512vl_us_truncatev2div2hi2 */
    case 2624:  /* *avx512vl_truncatev2div2hi2 */
    case 2623:  /* *avx512vl_ss_truncatev2div2hi2 */
    case 2622:  /* *avx512vl_us_truncatev4div4hi2 */
    case 2621:  /* *avx512vl_truncatev4div4hi2 */
    case 2620:  /* *avx512vl_ss_truncatev4div4hi2 */
    case 2559:  /* *avx512vl_us_truncatev8hiv8qi2 */
    case 2558:  /* *avx512vl_truncatev8hiv8qi2 */
    case 2557:  /* *avx512vl_ss_truncatev8hiv8qi2 */
    case 2556:  /* *avx512vl_us_truncatev4siv4qi2 */
    case 2555:  /* *avx512vl_truncatev4siv4qi2 */
    case 2554:  /* *avx512vl_ss_truncatev4siv4qi2 */
    case 2553:  /* *avx512vl_us_truncatev8siv8qi2 */
    case 2552:  /* *avx512vl_truncatev8siv8qi2 */
    case 2551:  /* *avx512vl_ss_truncatev8siv8qi2 */
    case 2550:  /* *avx512vl_us_truncatev2div2qi2 */
    case 2549:  /* *avx512vl_truncatev2div2qi2 */
    case 2548:  /* *avx512vl_ss_truncatev2div2qi2 */
    case 2547:  /* *avx512vl_us_truncatev4div4qi2 */
    case 2546:  /* *avx512vl_truncatev4div4qi2 */
    case 2545:  /* *avx512vl_ss_truncatev4div4qi2 */
    case 2491:  /* sse2_loadhpd */
    case 2211:  /* sse_loadhps */
    case 2143:  /* *sse2_cvtpd2ps */
    case 1578:  /* *andnottf3 */
    case 1577:  /* *andnotdf3 */
    case 1576:  /* *andnotsf3 */
    case 1538:  /* avx512f_andnotv8df3 */
    case 1536:  /* avx512f_andnotv16sf3 */
    case 1534:  /* sse2_andnotv2df3 */
    case 1532:  /* avx_andnotv4df3 */
    case 1530:  /* sse_andnotv4sf3 */
    case 1528:  /* avx_andnotv8sf3 */
    case 1287:  /* sse2_vmsqrtv2df2 */
    case 1285:  /* sse_vmsqrtv4sf2 */
    case 970:  /* mmx_andnotv2si3 */
    case 969:  /* mmx_andnotv4hi3 */
    case 968:  /* mmx_andnotv8qi3 */
    case 561:  /* *sibcall_value */
    case 560:  /* *sibcall_value */
    case 557:  /* *call_value */
    case 556:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 555:  /* *sibcall_pop_memory */
    case 554:  /* *sibcall_pop */
    case 553:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 548:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 547:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 544:  /* *tablejump_1 */
    case 543:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 542:  /* *indirect_jump */
    case 541:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 540:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 539:  /* *jccxf_si_r_i387 */
    case 538:  /* *jccdf_si_r_i387 */
    case 537:  /* *jccsf_si_r_i387 */
    case 536:  /* *jccxf_hi_r_i387 */
    case 535:  /* *jccdf_hi_r_i387 */
    case 534:  /* *jccsf_hi_r_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 533:  /* *jccxf_si_i387 */
    case 532:  /* *jccdf_si_i387 */
    case 531:  /* *jccsf_si_i387 */
    case 530:  /* *jccxf_hi_i387 */
    case 529:  /* *jccdf_hi_i387 */
    case 528:  /* *jccsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 527:  /* *jccuxf_r_i387 */
    case 526:  /* *jccudf_r_i387 */
    case 525:  /* *jccusf_r_i387 */
    case 521:  /* *jccdf_r_i387 */
    case 520:  /* *jccsf_r_i387 */
    case 517:  /* *jccxf_r_i387 */
    case 515:  /* *jccxf_0_r_i387 */
    case 514:  /* *jccdf_0_r_i387 */
    case 513:  /* *jccsf_0_r_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 524:  /* *jccuxf_i387 */
    case 523:  /* *jccudf_i387 */
    case 522:  /* *jccusf_i387 */
    case 519:  /* *jccdf_i387 */
    case 518:  /* *jccsf_i387 */
    case 516:  /* *jccxf_i387 */
    case 512:  /* *jccxf_0_i387 */
    case 511:  /* *jccdf_0_i387 */
    case 510:  /* *jccsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 509:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 508:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1519:  /* avx512f_maskcmpv2df3 */
    case 1518:  /* avx512f_maskcmpv4df3 */
    case 1517:  /* avx512f_maskcmpv8df3 */
    case 1516:  /* avx512f_maskcmpv4sf3 */
    case 1515:  /* avx512f_maskcmpv8sf3 */
    case 1514:  /* avx512f_maskcmpv16sf3 */
    case 1435:  /* sse2_maskcmpv2df3 */
    case 1434:  /* avx_maskcmpv4df3 */
    case 1433:  /* sse_maskcmpv4sf3 */
    case 1432:  /* avx_maskcmpv8sf3 */
    case 1431:  /* *sse2_maskcmpv2df3_comm */
    case 1430:  /* *avx_maskcmpv4df3_comm */
    case 1429:  /* *sse_maskcmpv4sf3_comm */
    case 1428:  /* *avx_maskcmpv8sf3_comm */
    case 662:  /* *fop_xf_1_i387 */
    case 661:  /* *fop_xf_comm_i387 */
    case 649:  /* *fop_df_1 */
    case 648:  /* *fop_sf_1 */
    case 646:  /* *fop_df_comm */
    case 645:  /* *fop_sf_comm */
    case 507:  /* setcc_df_sse */
    case 506:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 501:  /* *jcc_btdi_mask */
    case 500:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 499:  /* *jcc_btdi_1 */
    case 498:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 497:  /* *jcc_btdi */
    case 496:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 495:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 483:  /* ix86_rotrdi3_doubleword */
    case 482:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 4292:  /* avx_vec_concatv8df */
    case 4291:  /* avx_vec_concatv16sf */
    case 4290:  /* avx_vec_concatv8di */
    case 4289:  /* avx_vec_concatv16si */
    case 4288:  /* avx_vec_concatv32hi */
    case 4287:  /* avx_vec_concatv64qi */
    case 4286:  /* avx_vec_concatv4df */
    case 4285:  /* avx_vec_concatv8sf */
    case 4284:  /* avx_vec_concatv4di */
    case 4283:  /* avx_vec_concatv8si */
    case 4282:  /* avx_vec_concatv16hi */
    case 4281:  /* avx_vec_concatv32qi */
    case 4279:  /* avx512bw_lshrvv32hi */
    case 4277:  /* avx512bw_ashlvv32hi */
    case 4275:  /* avx512vl_lshrvv16hi */
    case 4273:  /* avx512vl_ashlvv16hi */
    case 4271:  /* avx512vl_lshrvv8hi */
    case 4269:  /* avx512vl_ashlvv8hi */
    case 4267:  /* avx2_lshrvv2di */
    case 4265:  /* avx2_ashlvv2di */
    case 4263:  /* avx2_lshrvv4di */
    case 4261:  /* avx2_ashlvv4di */
    case 4259:  /* avx512f_lshrvv8di */
    case 4257:  /* avx512f_ashlvv8di */
    case 4255:  /* avx2_lshrvv4si */
    case 4253:  /* avx2_ashlvv4si */
    case 4251:  /* avx2_lshrvv8si */
    case 4249:  /* avx2_ashlvv8si */
    case 4247:  /* avx512f_lshrvv16si */
    case 4245:  /* avx512f_ashlvv16si */
    case 4243:  /* avx512bw_ashrvv32hi */
    case 4241:  /* avx512vl_ashrvv16hi */
    case 4239:  /* avx512vl_ashrvv8hi */
    case 4237:  /* avx512f_ashrvv8di */
    case 4235:  /* avx2_ashrvv4di */
    case 4233:  /* avx2_ashrvv2di */
    case 4231:  /* avx512f_ashrvv16si */
    case 4229:  /* avx2_ashrvv8si */
    case 4227:  /* avx2_ashrvv4si */
    case 3798:  /* xop_rotrv2di3 */
    case 3797:  /* xop_rotrv4si3 */
    case 3796:  /* xop_rotrv8hi3 */
    case 3795:  /* xop_rotrv16qi3 */
    case 3794:  /* xop_rotlv2di3 */
    case 3793:  /* xop_rotlv4si3 */
    case 3792:  /* xop_rotlv8hi3 */
    case 3791:  /* xop_rotlv16qi3 */
    case 3439:  /* vec_concatv2di */
    case 3438:  /* *vec_concatv4si */
    case 3437:  /* *vec_concatv2si */
    case 3436:  /* *vec_concatv2si_sse4_1 */
    case 3257:  /* *xorv8hi3 */
    case 3255:  /* *iorv8hi3 */
    case 3253:  /* *andv8hi3 */
    case 3251:  /* *xorv16hi3 */
    case 3249:  /* *iorv16hi3 */
    case 3247:  /* *andv16hi3 */
    case 3245:  /* *xorv32hi3 */
    case 3243:  /* *iorv32hi3 */
    case 3241:  /* *andv32hi3 */
    case 3239:  /* *xorv16qi3 */
    case 3237:  /* *iorv16qi3 */
    case 3235:  /* *andv16qi3 */
    case 3233:  /* *xorv32qi3 */
    case 3231:  /* *iorv32qi3 */
    case 3229:  /* *andv32qi3 */
    case 3227:  /* *xorv64qi3 */
    case 3225:  /* *iorv64qi3 */
    case 3223:  /* *andv64qi3 */
    case 3221:  /* *xorv2di3 */
    case 3219:  /* *iorv2di3 */
    case 3217:  /* *andv2di3 */
    case 3215:  /* *xorv4di3 */
    case 3213:  /* *iorv4di3 */
    case 3211:  /* *andv4di3 */
    case 3209:  /* *xorv8di3 */
    case 3207:  /* *iorv8di3 */
    case 3205:  /* *andv8di3 */
    case 3203:  /* *xorv4si3 */
    case 3201:  /* *iorv4si3 */
    case 3199:  /* *andv4si3 */
    case 3197:  /* *xorv8si3 */
    case 3195:  /* *iorv8si3 */
    case 3193:  /* *andv8si3 */
    case 3191:  /* *xorv16si3 */
    case 3189:  /* *iorv16si3 */
    case 3187:  /* *andv16si3 */
    case 3168:  /* sse2_gtv4si3 */
    case 3167:  /* sse2_gtv8hi3 */
    case 3166:  /* sse2_gtv16qi3 */
    case 3141:  /* avx2_gtv4di3 */
    case 3140:  /* avx2_gtv8si3 */
    case 3139:  /* avx2_gtv16hi3 */
    case 3138:  /* avx2_gtv32qi3 */
    case 3137:  /* sse4_2_gtv2di3 */
    case 3136:  /* *sse2_eqv4si3 */
    case 3135:  /* *sse2_eqv8hi3 */
    case 3134:  /* *sse2_eqv16qi3 */
    case 3133:  /* *sse4_1_eqv2di3 */
    case 3108:  /* *avx2_eqv4di3 */
    case 3107:  /* *avx2_eqv8si3 */
    case 3106:  /* *avx2_eqv16hi3 */
    case 3105:  /* *avx2_eqv32qi3 */
    case 3104:  /* *uminv16qi3 */
    case 3103:  /* *umaxv16qi3 */
    case 3101:  /* *sse4_1_uminv4si3 */
    case 3099:  /* *sse4_1_umaxv4si3 */
    case 3097:  /* *sse4_1_uminv8hi3 */
    case 3095:  /* *sse4_1_umaxv8hi3 */
    case 3094:  /* *sminv8hi3 */
    case 3093:  /* *smaxv8hi3 */
    case 3091:  /* *sse4_1_sminv4si3 */
    case 3089:  /* *sse4_1_smaxv4si3 */
    case 3087:  /* *sse4_1_sminv16qi3 */
    case 3085:  /* *sse4_1_smaxv16qi3 */
    case 3083:  /* *uminv8hi3 */
    case 3081:  /* *umaxv8hi3 */
    case 3079:  /* *sminv8hi3 */
    case 3077:  /* *smaxv8hi3 */
    case 3075:  /* *uminv16hi3 */
    case 3073:  /* *umaxv16hi3 */
    case 3071:  /* *sminv16hi3 */
    case 3069:  /* *smaxv16hi3 */
    case 3067:  /* *uminv32hi3 */
    case 3065:  /* *umaxv32hi3 */
    case 3063:  /* *sminv32hi3 */
    case 3061:  /* *smaxv32hi3 */
    case 3059:  /* *uminv32qi3 */
    case 3057:  /* *umaxv32qi3 */
    case 3055:  /* *sminv32qi3 */
    case 3053:  /* *smaxv32qi3 */
    case 3051:  /* *uminv16qi3 */
    case 3049:  /* *umaxv16qi3 */
    case 3047:  /* *sminv16qi3 */
    case 3045:  /* *smaxv16qi3 */
    case 3043:  /* *uminv64qi3 */
    case 3041:  /* *umaxv64qi3 */
    case 3039:  /* *sminv64qi3 */
    case 3037:  /* *smaxv64qi3 */
    case 3035:  /* *avx512f_uminv2di3 */
    case 3033:  /* *avx512f_umaxv2di3 */
    case 3031:  /* *avx512f_sminv2di3 */
    case 3029:  /* *avx512f_smaxv2di3 */
    case 3027:  /* *avx512f_uminv4di3 */
    case 3025:  /* *avx512f_umaxv4di3 */
    case 3023:  /* *avx512f_sminv4di3 */
    case 3021:  /* *avx512f_smaxv4di3 */
    case 3019:  /* *avx512f_uminv8di3 */
    case 3017:  /* *avx512f_umaxv8di3 */
    case 3015:  /* *avx512f_sminv8di3 */
    case 3013:  /* *avx512f_smaxv8di3 */
    case 3011:  /* *avx512f_uminv4si3 */
    case 3009:  /* *avx512f_umaxv4si3 */
    case 3007:  /* *avx512f_sminv4si3 */
    case 3005:  /* *avx512f_smaxv4si3 */
    case 3003:  /* *avx512f_uminv8si3 */
    case 3001:  /* *avx512f_umaxv8si3 */
    case 2999:  /* *avx512f_sminv8si3 */
    case 2997:  /* *avx512f_smaxv8si3 */
    case 2995:  /* *avx512f_uminv16si3 */
    case 2993:  /* *avx512f_umaxv16si3 */
    case 2991:  /* *avx512f_sminv16si3 */
    case 2989:  /* *avx512f_smaxv16si3 */
    case 2988:  /* *avx2_uminv8si3 */
    case 2987:  /* *avx2_umaxv8si3 */
    case 2986:  /* *avx2_sminv8si3 */
    case 2985:  /* *avx2_smaxv8si3 */
    case 2984:  /* *avx2_uminv16hi3 */
    case 2983:  /* *avx2_umaxv16hi3 */
    case 2982:  /* *avx2_sminv16hi3 */
    case 2981:  /* *avx2_smaxv16hi3 */
    case 2980:  /* *avx2_uminv32qi3 */
    case 2979:  /* *avx2_umaxv32qi3 */
    case 2978:  /* *avx2_sminv32qi3 */
    case 2977:  /* *avx2_smaxv32qi3 */
    case 2975:  /* avx512vl_rorv2di */
    case 2973:  /* avx512vl_rolv2di */
    case 2971:  /* avx512vl_rorv4di */
    case 2969:  /* avx512vl_rolv4di */
    case 2967:  /* avx512f_rorv8di */
    case 2965:  /* avx512f_rolv8di */
    case 2963:  /* avx512vl_rorv4si */
    case 2961:  /* avx512vl_rolv4si */
    case 2959:  /* avx512vl_rorv8si */
    case 2957:  /* avx512vl_rolv8si */
    case 2955:  /* avx512f_rorv16si */
    case 2953:  /* avx512f_rolv16si */
    case 2951:  /* avx512vl_rorvv2di */
    case 2949:  /* avx512vl_rolvv2di */
    case 2947:  /* avx512vl_rorvv4di */
    case 2945:  /* avx512vl_rolvv4di */
    case 2943:  /* avx512f_rorvv8di */
    case 2941:  /* avx512f_rolvv8di */
    case 2939:  /* avx512vl_rorvv4si */
    case 2937:  /* avx512vl_rolvv4si */
    case 2935:  /* avx512vl_rorvv8si */
    case 2933:  /* avx512vl_rolvv8si */
    case 2931:  /* avx512f_rorvv16si */
    case 2929:  /* avx512f_rolvv16si */
    case 2928:  /* sse2_lshrv1ti3 */
    case 2927:  /* avx2_lshrv2ti3 */
    case 2926:  /* avx512bw_lshrv4ti3 */
    case 2925:  /* sse2_ashlv1ti3 */
    case 2924:  /* avx2_ashlv2ti3 */
    case 2923:  /* avx512bw_ashlv4ti3 */
    case 2921:  /* lshrv8di3 */
    case 2919:  /* ashlv8di3 */
    case 2917:  /* lshrv16si3 */
    case 2915:  /* ashlv16si3 */
    case 2913:  /* lshrv2di3 */
    case 2911:  /* ashlv2di3 */
    case 2909:  /* lshrv4di3 */
    case 2907:  /* ashlv4di3 */
    case 2905:  /* lshrv4si3 */
    case 2903:  /* ashlv4si3 */
    case 2901:  /* lshrv8si3 */
    case 2899:  /* ashlv8si3 */
    case 2897:  /* lshrv8hi3 */
    case 2895:  /* ashlv8hi3 */
    case 2893:  /* lshrv16hi3 */
    case 2891:  /* ashlv16hi3 */
    case 2889:  /* lshrv32hi3 */
    case 2887:  /* ashlv32hi3 */
    case 2885:  /* ashrv8di3 */
    case 2883:  /* ashrv16si3 */
    case 2881:  /* ashrv4di3 */
    case 2879:  /* ashrv32hi3 */
    case 2877:  /* *ashrv2di3 */
    case 2876:  /* ashrv4si3 */
    case 2875:  /* ashrv8si3 */
    case 2874:  /* ashrv8hi3 */
    case 2873:  /* ashrv16hi3 */
    case 2871:  /* *ashrv4si3 */
    case 2869:  /* *ashrv8si3 */
    case 2867:  /* *ashrv8hi3 */
    case 2865:  /* *ashrv16hi3 */
    case 2863:  /* *sse4_1_mulv4si3 */
    case 2861:  /* *avx2_mulv8si3 */
    case 2859:  /* *avx512f_mulv16si3 */
    case 2857:  /* avx512dq_mulv2di3 */
    case 2855:  /* avx512dq_mulv4di3 */
    case 2853:  /* avx512dq_mulv8di3 */
    case 2819:  /* *mulv8hi3 */
    case 2817:  /* *mulv16hi3 */
    case 2815:  /* *mulv32hi3 */
    case 2813:  /* *sse2_ussubv8hi3 */
    case 2811:  /* *sse2_sssubv8hi3 */
    case 2809:  /* *sse2_usaddv8hi3 */
    case 2807:  /* *sse2_ssaddv8hi3 */
    case 2805:  /* *avx2_ussubv16hi3 */
    case 2803:  /* *avx2_sssubv16hi3 */
    case 2801:  /* *avx2_usaddv16hi3 */
    case 2799:  /* *avx2_ssaddv16hi3 */
    case 2797:  /* *avx512bw_ussubv32hi3 */
    case 2795:  /* *avx512bw_sssubv32hi3 */
    case 2793:  /* *avx512bw_usaddv32hi3 */
    case 2791:  /* *avx512bw_ssaddv32hi3 */
    case 2789:  /* *sse2_ussubv16qi3 */
    case 2787:  /* *sse2_sssubv16qi3 */
    case 2785:  /* *sse2_usaddv16qi3 */
    case 2783:  /* *sse2_ssaddv16qi3 */
    case 2781:  /* *avx2_ussubv32qi3 */
    case 2779:  /* *avx2_sssubv32qi3 */
    case 2777:  /* *avx2_usaddv32qi3 */
    case 2775:  /* *avx2_ssaddv32qi3 */
    case 2773:  /* *avx512bw_ussubv64qi3 */
    case 2771:  /* *avx512bw_sssubv64qi3 */
    case 2769:  /* *avx512bw_usaddv64qi3 */
    case 2767:  /* *avx512bw_ssaddv64qi3 */
    case 2741:  /* *subv2di3 */
    case 2739:  /* *addv2di3 */
    case 2737:  /* *subv4di3 */
    case 2735:  /* *addv4di3 */
    case 2733:  /* *subv8di3 */
    case 2731:  /* *addv8di3 */
    case 2729:  /* *subv4si3 */
    case 2727:  /* *addv4si3 */
    case 2725:  /* *subv8si3 */
    case 2723:  /* *addv8si3 */
    case 2721:  /* *subv16si3 */
    case 2719:  /* *addv16si3 */
    case 2717:  /* *subv8hi3 */
    case 2715:  /* *addv8hi3 */
    case 2713:  /* *subv16hi3 */
    case 2711:  /* *addv16hi3 */
    case 2709:  /* *subv32hi3 */
    case 2707:  /* *addv32hi3 */
    case 2705:  /* *subv16qi3 */
    case 2703:  /* *addv16qi3 */
    case 2701:  /* *subv32qi3 */
    case 2699:  /* *addv32qi3 */
    case 2697:  /* *subv64qi3 */
    case 2695:  /* *addv64qi3 */
    case 2496:  /* vec_concatv2df */
    case 2222:  /* *vec_concatv4sf */
    case 2221:  /* *vec_concatv2sf_sse */
    case 2220:  /* *vec_concatv2sf_sse4_1 */
    case 1587:  /* *xortf3 */
    case 1586:  /* *iortf3 */
    case 1585:  /* *andtf3 */
    case 1584:  /* *xordf3 */
    case 1583:  /* *iordf3 */
    case 1582:  /* *anddf3 */
    case 1581:  /* *xorsf3 */
    case 1580:  /* *iorsf3 */
    case 1579:  /* *andsf3 */
    case 1574:  /* *xorv8df3 */
    case 1572:  /* *iorv8df3 */
    case 1570:  /* *andv8df3 */
    case 1568:  /* *xorv16sf3 */
    case 1566:  /* *iorv16sf3 */
    case 1564:  /* *andv16sf3 */
    case 1562:  /* *xorv2df3 */
    case 1560:  /* *iorv2df3 */
    case 1558:  /* *andv2df3 */
    case 1556:  /* *xorv4df3 */
    case 1554:  /* *iorv4df3 */
    case 1552:  /* *andv4df3 */
    case 1550:  /* *xorv4sf3 */
    case 1548:  /* *iorv4sf3 */
    case 1546:  /* *andv4sf3 */
    case 1544:  /* *xorv8sf3 */
    case 1542:  /* *iorv8sf3 */
    case 1540:  /* *andv8sf3 */
    case 1350:  /* *sminv2df3 */
    case 1346:  /* *smaxv2df3 */
    case 1342:  /* *sminv4df3 */
    case 1338:  /* *smaxv4df3 */
    case 1334:  /* *sminv8df3 */
    case 1330:  /* *smaxv8df3 */
    case 1326:  /* *sminv4sf3 */
    case 1322:  /* *smaxv4sf3 */
    case 1318:  /* *sminv8sf3 */
    case 1314:  /* *smaxv8sf3 */
    case 1310:  /* *sminv16sf3 */
    case 1306:  /* *smaxv16sf3 */
    case 1250:  /* sse2_divv2df3 */
    case 1248:  /* avx_divv4df3 */
    case 1244:  /* avx512f_divv8df3 */
    case 1242:  /* sse_divv4sf3 */
    case 1240:  /* avx_divv8sf3 */
    case 1236:  /* avx512f_divv16sf3 */
    case 1224:  /* *mulv2df3 */
    case 1220:  /* *mulv4df3 */
    case 1216:  /* *mulv8df3 */
    case 1212:  /* *mulv4sf3 */
    case 1208:  /* *mulv8sf3 */
    case 1204:  /* *mulv16sf3 */
    case 1192:  /* *subv2df3 */
    case 1188:  /* *addv2df3 */
    case 1184:  /* *subv4df3 */
    case 1180:  /* *addv4df3 */
    case 1176:  /* *subv8df3 */
    case 1172:  /* *addv8df3 */
    case 1168:  /* *subv4sf3 */
    case 1164:  /* *addv4sf3 */
    case 1160:  /* *subv8sf3 */
    case 1156:  /* *addv8sf3 */
    case 1152:  /* *subv16sf3 */
    case 1148:  /* *addv16sf3 */
    case 995:  /* *mmx_concatv2si */
    case 979:  /* *mmx_xorv2si3 */
    case 978:  /* *mmx_iorv2si3 */
    case 977:  /* *mmx_andv2si3 */
    case 976:  /* *mmx_xorv4hi3 */
    case 975:  /* *mmx_iorv4hi3 */
    case 974:  /* *mmx_andv4hi3 */
    case 973:  /* *mmx_xorv8qi3 */
    case 972:  /* *mmx_iorv8qi3 */
    case 971:  /* *mmx_andv8qi3 */
    case 967:  /* mmx_gtv2si3 */
    case 966:  /* mmx_gtv4hi3 */
    case 965:  /* mmx_gtv8qi3 */
    case 964:  /* *mmx_eqv2si3 */
    case 963:  /* *mmx_eqv4hi3 */
    case 962:  /* *mmx_eqv8qi3 */
    case 961:  /* mmx_lshrv1di3 */
    case 960:  /* mmx_ashlv1di3 */
    case 959:  /* mmx_lshrv2si3 */
    case 958:  /* mmx_ashlv2si3 */
    case 957:  /* mmx_lshrv4hi3 */
    case 956:  /* mmx_ashlv4hi3 */
    case 955:  /* mmx_ashrv2si3 */
    case 954:  /* mmx_ashrv4hi3 */
    case 953:  /* *mmx_uminv8qi3 */
    case 952:  /* *mmx_umaxv8qi3 */
    case 951:  /* *mmx_sminv4hi3 */
    case 950:  /* *mmx_smaxv4hi3 */
    case 944:  /* *mmx_mulv4hi3 */
    case 943:  /* *mmx_ussubv4hi3 */
    case 942:  /* *mmx_sssubv4hi3 */
    case 941:  /* *mmx_usaddv4hi3 */
    case 940:  /* *mmx_ssaddv4hi3 */
    case 939:  /* *mmx_ussubv8qi3 */
    case 938:  /* *mmx_sssubv8qi3 */
    case 937:  /* *mmx_usaddv8qi3 */
    case 936:  /* *mmx_ssaddv8qi3 */
    case 935:  /* *mmx_subv1di3 */
    case 934:  /* *mmx_addv1di3 */
    case 933:  /* *mmx_subv2si3 */
    case 932:  /* *mmx_addv2si3 */
    case 931:  /* *mmx_subv4hi3 */
    case 930:  /* *mmx_addv4hi3 */
    case 929:  /* *mmx_subv8qi3 */
    case 928:  /* *mmx_addv8qi3 */
    case 925:  /* *mmx_concatv2sf */
    case 918:  /* mmx_gev2sf3 */
    case 917:  /* mmx_gtv2sf3 */
    case 916:  /* *mmx_eqv2sf3 */
    case 905:  /* *mmx_sminv2sf3 */
    case 904:  /* *mmx_smaxv2sf3 */
    case 903:  /* *mmx_mulv2sf3 */
    case 902:  /* *mmx_subv2sf3 */
    case 901:  /* *mmx_addv2sf3 */
    case 808:  /* smindf3 */
    case 807:  /* smaxdf3 */
    case 806:  /* sminsf3 */
    case 805:  /* smaxsf3 */
    case 484:  /* *bmi2_rorxsi3_1 */
    case 451:  /* *bmi2_ashrsi3_1 */
    case 450:  /* *bmi2_lshrsi3_1 */
    case 428:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 481:  /* *rotrdi3_mask */
    case 480:  /* *rotldi3_mask */
    case 479:  /* *rotrsi3_mask */
    case 478:  /* *rotlsi3_mask */
    case 445:  /* *ashrdi3_mask */
    case 444:  /* *lshrdi3_mask */
    case 443:  /* *ashrsi3_mask */
    case 442:  /* *lshrsi3_mask */
    case 427:  /* *ashldi3_mask */
    case 426:  /* *ashlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 448:  /* x86_shrd */
    case 425:  /* x86_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 414:  /* copysigntf3_var */
    case 413:  /* copysigndf3_var */
    case 412:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 4708:  /* avx5124vnniw_vp4dpwssds */
    case 4705:  /* avx5124vnniw_vp4dpwssd */
    case 4702:  /* avx5124fmaddps_4fnmaddss */
    case 4699:  /* avx5124fmaddps_4fnmaddps */
    case 4696:  /* avx5124fmaddps_4fmaddss */
    case 4693:  /* avx5124fmaddps_4fmaddps */
    case 4677:  /* vpamdd52huqv2di */
    case 4675:  /* vpamdd52luqv2di */
    case 4673:  /* vpamdd52huqv4di */
    case 4671:  /* vpamdd52luqv4di */
    case 4669:  /* vpamdd52huqv8di */
    case 4667:  /* vpamdd52luqv8di */
    case 4660:  /* sha256rnds2 */
    case 4657:  /* sha1rnds4 */
    case 4628:  /* *avx512bw_dbpsadbwv32hi */
    case 4626:  /* *avx512bw_dbpsadbwv16hi */
    case 4624:  /* *avx512bw_dbpsadbwv8hi */
    case 4576:  /* avx512dq_rangepv2df */
    case 4574:  /* avx512dq_rangepv4df */
    case 4570:  /* avx512dq_rangepv8df */
    case 4568:  /* avx512dq_rangepv4sf */
    case 4566:  /* avx512dq_rangepv8sf */
    case 4562:  /* avx512dq_rangepv16sf */
    case 4561:  /* avx512vl_expandv2df_mask */
    case 4560:  /* avx512vl_expandv2di_mask */
    case 4559:  /* avx512vl_expandv4sf_mask */
    case 4558:  /* avx512vl_expandv4si_mask */
    case 4557:  /* avx512vl_expandv4df_mask */
    case 4556:  /* avx512vl_expandv4di_mask */
    case 4555:  /* avx512vl_expandv8sf_mask */
    case 4554:  /* avx512vl_expandv8si_mask */
    case 4553:  /* avx512f_expandv8df_mask */
    case 4552:  /* avx512f_expandv8di_mask */
    case 4551:  /* avx512f_expandv16sf_mask */
    case 4550:  /* avx512f_expandv16si_mask */
    case 4537:  /* avx512vl_compressv2df_mask */
    case 4536:  /* avx512vl_compressv2di_mask */
    case 4535:  /* avx512vl_compressv4sf_mask */
    case 4534:  /* avx512vl_compressv4si_mask */
    case 4533:  /* avx512vl_compressv4df_mask */
    case 4532:  /* avx512vl_compressv4di_mask */
    case 4531:  /* avx512vl_compressv8sf_mask */
    case 4530:  /* avx512vl_compressv8si_mask */
    case 4529:  /* avx512f_compressv8df_mask */
    case 4528:  /* avx512f_compressv8di_mask */
    case 4527:  /* avx512f_compressv16sf_mask */
    case 4526:  /* avx512f_compressv16si_mask */
    case 4178:  /* *avx_vperm2f128v4df_full */
    case 4177:  /* *avx_vperm2f128v8sf_full */
    case 4176:  /* *avx_vperm2f128v8si_full */
    case 4156:  /* avx512bw_vpermt2varv32hi3 */
    case 4154:  /* avx512vl_vpermt2varv16hi3 */
    case 4152:  /* avx512vl_vpermt2varv8hi3 */
    case 4150:  /* avx512vl_vpermt2varv32qi3 */
    case 4148:  /* avx512vl_vpermt2varv16qi3 */
    case 4146:  /* avx512bw_vpermt2varv64qi3 */
    case 4144:  /* avx512vl_vpermt2varv2df3 */
    case 4142:  /* avx512vl_vpermt2varv2di3 */
    case 4140:  /* avx512vl_vpermt2varv4sf3 */
    case 4138:  /* avx512vl_vpermt2varv4si3 */
    case 4136:  /* avx512vl_vpermt2varv4df3 */
    case 4134:  /* avx512vl_vpermt2varv4di3 */
    case 4132:  /* avx512vl_vpermt2varv8sf3 */
    case 4130:  /* avx512vl_vpermt2varv8si3 */
    case 4128:  /* avx512f_vpermt2varv8df3 */
    case 4126:  /* avx512f_vpermt2varv8di3 */
    case 4124:  /* avx512f_vpermt2varv16sf3 */
    case 4122:  /* avx512f_vpermt2varv16si3 */
    case 4102:  /* avx512bw_vpermi2varv32hi3 */
    case 4100:  /* avx512vl_vpermi2varv16hi3 */
    case 4098:  /* avx512vl_vpermi2varv8hi3 */
    case 4096:  /* avx512vl_vpermi2varv32qi3 */
    case 4094:  /* avx512vl_vpermi2varv16qi3 */
    case 4092:  /* avx512bw_vpermi2varv64qi3 */
    case 4090:  /* avx512vl_vpermi2varv2df3 */
    case 4088:  /* avx512vl_vpermi2varv2di3 */
    case 4086:  /* avx512vl_vpermi2varv4sf3 */
    case 4084:  /* avx512vl_vpermi2varv4si3 */
    case 4082:  /* avx512vl_vpermi2varv4df3 */
    case 4080:  /* avx512vl_vpermi2varv4di3 */
    case 4078:  /* avx512vl_vpermi2varv8sf3 */
    case 4076:  /* avx512vl_vpermi2varv8si3 */
    case 4074:  /* avx512f_vpermi2varv8df3 */
    case 4072:  /* avx512f_vpermi2varv8di3 */
    case 4070:  /* avx512f_vpermi2varv16sf3 */
    case 4068:  /* avx512f_vpermi2varv16si3 */
    case 3900:  /* avx2_permv2ti */
    case 3845:  /* pclmulqdq */
    case 3834:  /* xop_pcom_tfv2di3 */
    case 3833:  /* xop_pcom_tfv4si3 */
    case 3832:  /* xop_pcom_tfv8hi3 */
    case 3831:  /* xop_pcom_tfv16qi3 */
    case 3787:  /* xop_pperm */
    case 3587:  /* sse4_1_pblendvb */
    case 3586:  /* avx2_pblendvb */
    case 3579:  /* sse4_1_mpsadbw */
    case 3578:  /* avx2_mpsadbw */
    case 3574:  /* sse4_1_dppd */
    case 3573:  /* avx_dppd256 */
    case 3572:  /* sse4_1_dpps */
    case 3571:  /* avx_dpps256 */
    case 3570:  /* sse4_1_blendvpd */
    case 3569:  /* avx_blendvpd256 */
    case 3568:  /* sse4_1_blendvps */
    case 3567:  /* avx_blendvps256 */
    case 3559:  /* sse4a_extrqi */
    case 3527:  /* ssse3_palignrdi */
    case 3526:  /* ssse3_palignrti */
    case 3525:  /* avx2_palignrv2ti */
    case 3524:  /* avx512bw_palignrv4ti */
    case 2388:  /* *avx512vl_alignv2di */
    case 2386:  /* *avx512vl_alignv4di */
    case 2384:  /* *avx512f_alignv8di */
    case 2382:  /* *avx512vl_alignv4si */
    case 2380:  /* *avx512vl_alignv8si */
    case 2378:  /* *avx512f_alignv16si */
    case 1794:  /* *fma_fmaddsub_v2df */
    case 1792:  /* *fma_fmaddsub_v4df */
    case 1788:  /* *fma_fmaddsub_v8df */
    case 1787:  /* *fma_fmaddsub_df */
    case 1785:  /* *fma_fmaddsub_v4sf */
    case 1783:  /* *fma_fmaddsub_v8sf */
    case 1779:  /* *fma_fmaddsub_v16sf */
    case 1778:  /* *fma_fmaddsub_sf */
    case 1777:  /* *fma_fmaddsub_v2df */
    case 1776:  /* *fma_fmaddsub_v4df */
    case 1775:  /* *fma_fmaddsub_v4sf */
    case 1774:  /* *fma_fmaddsub_v8sf */
    case 1504:  /* avx512vl_ucmpv2di3 */
    case 1502:  /* avx512vl_ucmpv4di3 */
    case 1500:  /* avx512f_ucmpv8di3 */
    case 1498:  /* avx512vl_ucmpv4si3 */
    case 1496:  /* avx512vl_ucmpv8si3 */
    case 1494:  /* avx512f_ucmpv16si3 */
    case 1492:  /* avx512vl_ucmpv8hi3 */
    case 1490:  /* avx512vl_ucmpv16hi3 */
    case 1488:  /* avx512bw_ucmpv32hi3 */
    case 1486:  /* avx512vl_ucmpv32qi3 */
    case 1484:  /* avx512vl_ucmpv16qi3 */
    case 1482:  /* avx512bw_ucmpv64qi3 */
    case 1480:  /* avx512vl_cmpv8hi3 */
    case 1478:  /* avx512vl_cmpv16hi3 */
    case 1476:  /* avx512bw_cmpv32hi3 */
    case 1474:  /* avx512vl_cmpv32qi3 */
    case 1472:  /* avx512vl_cmpv16qi3 */
    case 1470:  /* avx512bw_cmpv64qi3 */
    case 1468:  /* avx512vl_cmpv2df3 */
    case 1466:  /* avx512vl_cmpv4df3 */
    case 1462:  /* avx512f_cmpv8df3 */
    case 1460:  /* avx512vl_cmpv4sf3 */
    case 1458:  /* avx512vl_cmpv8sf3 */
    case 1454:  /* avx512f_cmpv16sf3 */
    case 1452:  /* avx512vl_cmpv2di3 */
    case 1450:  /* avx512vl_cmpv4di3 */
    case 1446:  /* avx512f_cmpv8di3 */
    case 1444:  /* avx512vl_cmpv4si3 */
    case 1442:  /* avx512vl_cmpv8si3 */
    case 1438:  /* avx512f_cmpv16si3 */
    case 1425:  /* avx_cmpv2df3 */
    case 1424:  /* avx_cmpv4df3 */
    case 1423:  /* avx_cmpv4sf3 */
    case 1422:  /* avx_cmpv8sf3 */
    case 411:  /* copysigntf3_const */
    case 410:  /* copysigndf3_const */
    case 409:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1147:  /* *absnegv2df2 */
    case 1146:  /* *absnegv4df2 */
    case 1145:  /* *absnegv8df2 */
    case 1144:  /* *absnegv4sf2 */
    case 1143:  /* *absnegv8sf2 */
    case 1142:  /* *absnegv16sf2 */
    case 396:  /* *absnegtf2_sse */
    case 395:  /* *absnegxf2_i387 */
    case 394:  /* *absnegdf2 */
    case 393:  /* *absnegsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 392:  /* *negvdi3 */
    case 391:  /* *negvsi3 */
    case 390:  /* *negvhi3 */
    case 389:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 423:  /* *one_cmpldi2_2 */
    case 422:  /* *one_cmplsi2_2 */
    case 421:  /* *one_cmplhi2_2 */
    case 420:  /* *one_cmplqi2_2 */
    case 388:  /* *negdi2_cmpz */
    case 387:  /* *negsi2_cmpz */
    case 386:  /* *neghi2_cmpz */
    case 385:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 343:  /* *andn_di_ccno */
    case 342:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1110:  /* kandndi */
    case 1109:  /* kandnsi */
    case 1108:  /* kandnhi */
    case 1107:  /* kandnqi */
    case 563:  /* *sibcall_value_memory */
    case 562:  /* *sibcall_value_memory */
    case 341:  /* *andnhi_1 */
    case 340:  /* *andnqi_1 */
    case 339:  /* *andnsi_1 */
    case 338:  /* *andndi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 378:  /* *xorqi_ext_1_cc */
    case 336:  /* *andqi_ext_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 365:  /* *xorqi_2_slp */
    case 364:  /* *iorqi_2_slp */
    case 334:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 324:  /* *testqi_ext_3 */
    case 323:  /* *testqi_ext_3 */
    case 322:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 321:  /* *testqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 320:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 315:  /* udivmodhiqi3 */
    case 308:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 314:  /* *udivmodsi4_noext */
    case 313:  /* *udivmodhi4_noext */
    case 307:  /* *divmodsi4_noext */
    case 306:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 312:  /* *udivmodsi4_pow2 */
    case 311:  /* *udivmodsi4 */
    case 310:  /* *udivmodhi4 */
    case 309:  /* udivmodsi4_1 */
    case 305:  /* *divmodsi4 */
    case 304:  /* *divmodhi4 */
    case 303:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 302:  /* *umulsi3_highpart_1 */
    case 301:  /* *smulsi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 300:  /* *umulqihi3_1 */
    case 299:  /* *mulqihi3_1 */
    case 298:  /* *mulsidi3_1 */
    case 297:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 296:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 293:  /* *umulvsi4 */
    case 292:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 284:  /* *adddi3_cc_overflow_2 */
    case 283:  /* *addsi3_cc_overflow_2 */
    case 282:  /* *addhi3_cc_overflow_2 */
    case 281:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 280:  /* *addsi3_cconly_overflow_2 */
    case 279:  /* *addhi3_cconly_overflow_2 */
    case 278:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 277:  /* *adddi3_cc_overflow_1 */
    case 276:  /* *addsi3_cc_overflow_1 */
    case 275:  /* *addhi3_cc_overflow_1 */
    case 274:  /* *addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 273:  /* *addsi3_cconly_overflow_1 */
    case 272:  /* *addhi3_cconly_overflow_1 */
    case 271:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 270:  /* subborrowdi */
    case 269:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 268:  /* subdi3_carry */
    case 267:  /* subsi3_carry */
    case 266:  /* subhi3_carry */
    case 265:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 264:  /* addcarrydi */
    case 263:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[4] = 1;
      break;

    case 262:  /* adddi3_carry */
    case 261:  /* addsi3_carry */
    case 260:  /* addhi3_carry */
    case 259:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 258:  /* *subdi_3 */
    case 257:  /* *subsi_3 */
    case 256:  /* *subhi_3 */
    case 255:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 229:  /* *leahi_general_3b */
    case 228:  /* *leaqi_general_3b */
    case 227:  /* *leahi_general_3 */
    case 226:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3747:  /* xop_pmacssdd */
    case 3746:  /* xop_pmacsdd */
    case 3745:  /* xop_pmacssww */
    case 3744:  /* xop_pmacsww */
    case 235:  /* *leasi_general_4 */
    case 234:  /* *leasi_general_4 */
    case 233:  /* *leahi_general_4 */
    case 232:  /* *leahi_general_4 */
    case 231:  /* *leaqi_general_4 */
    case 230:  /* *leaqi_general_4 */
    case 225:  /* *leahi_general_2b */
    case 224:  /* *leaqi_general_2b */
    case 223:  /* *leahi_general_2 */
    case 222:  /* *leaqi_general_2 */
    case 221:  /* *leahi_general_1 */
    case 220:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 291:  /* *mulvsi4_1 */
    case 290:  /* *mulvhi4_1 */
    case 254:  /* *subvdi4_1 */
    case 253:  /* *subvsi4_1 */
    case 252:  /* *subvhi4_1 */
    case 251:  /* *subvqi4_1 */
    case 219:  /* *addvdi4_1 */
    case 218:  /* *addvsi4_1 */
    case 217:  /* *addvhi4_1 */
    case 216:  /* *addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 295:  /* *umulvqi4 */
    case 294:  /* *mulvqi4 */
    case 289:  /* *mulvhi4 */
    case 288:  /* *mulvsi4 */
    case 250:  /* *subvdi4 */
    case 249:  /* *subvsi4 */
    case 248:  /* *subvhi4 */
    case 247:  /* *subvqi4 */
    case 215:  /* *addvdi4 */
    case 214:  /* *addvsi4 */
    case 213:  /* *addvhi4 */
    case 212:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 377:  /* *xorqi_ext_2 */
    case 376:  /* *iorqi_ext_2 */
    case 337:  /* *andqi_ext_2 */
    case 211:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 375:  /* *xorqi_ext_1 */
    case 374:  /* *iorqi_ext_1 */
    case 335:  /* andqi_ext_1 */
    case 210:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 477:  /* *ashrdi3_cconly */
    case 476:  /* *lshrdi3_cconly */
    case 475:  /* *ashrsi3_cconly */
    case 474:  /* *lshrsi3_cconly */
    case 473:  /* *ashrhi3_cconly */
    case 472:  /* *lshrhi3_cconly */
    case 471:  /* *ashrqi3_cconly */
    case 470:  /* *lshrqi3_cconly */
    case 441:  /* *ashldi3_cconly */
    case 440:  /* *ashlsi3_cconly */
    case 439:  /* *ashlhi3_cconly */
    case 438:  /* *ashlqi3_cconly */
    case 373:  /* *xordi_3 */
    case 372:  /* *iordi_3 */
    case 371:  /* *xorsi_3 */
    case 370:  /* *iorsi_3 */
    case 369:  /* *xorhi_3 */
    case 368:  /* *iorhi_3 */
    case 367:  /* *xorqi_3 */
    case 366:  /* *iorqi_3 */
    case 209:  /* *adddi_5 */
    case 208:  /* *addsi_5 */
    case 207:  /* *addhi_5 */
    case 206:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 202:  /* *adddi_3 */
    case 201:  /* *addsi_3 */
    case 200:  /* *addhi_3 */
    case 199:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 469:  /* *ashrdi3_cmp */
    case 468:  /* *lshrdi3_cmp */
    case 467:  /* *ashrsi3_cmp */
    case 466:  /* *lshrsi3_cmp */
    case 465:  /* *ashrhi3_cmp */
    case 464:  /* *lshrhi3_cmp */
    case 463:  /* *ashrqi3_cmp */
    case 462:  /* *lshrqi3_cmp */
    case 437:  /* *ashldi3_cmp */
    case 436:  /* *ashlsi3_cmp */
    case 435:  /* *ashlhi3_cmp */
    case 434:  /* *ashlqi3_cmp */
    case 363:  /* *xordi_2 */
    case 362:  /* *iordi_2 */
    case 361:  /* *xorsi_2 */
    case 360:  /* *iorsi_2 */
    case 359:  /* *xorhi_2 */
    case 358:  /* *iorhi_2 */
    case 357:  /* *xorqi_2 */
    case 356:  /* *iorqi_2 */
    case 333:  /* *andsi_2 */
    case 332:  /* *andhi_2 */
    case 331:  /* *andqi_2 */
    case 330:  /* *andqi_2_maybe_si */
    case 246:  /* *subdi_2 */
    case 245:  /* *subsi_2 */
    case 244:  /* *subhi_2 */
    case 243:  /* *subqi_2 */
    case 198:  /* *adddi_2 */
    case 197:  /* *addsi_2 */
    case 196:  /* *addhi_2 */
    case 195:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 494:  /* *rotrqi3_1_slp */
    case 493:  /* *rotlqi3_1_slp */
    case 461:  /* *ashrqi3_1_slp */
    case 460:  /* *lshrqi3_1_slp */
    case 433:  /* *ashlqi3_1_slp */
    case 355:  /* *xorqi_1_slp */
    case 354:  /* *iorqi_1_slp */
    case 329:  /* *andqi_1_slp */
    case 242:  /* *subqi_1_slp */
    case 194:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1130:  /* klshiftrtdi */
    case 1129:  /* kashiftdi */
    case 1128:  /* klshiftrtsi */
    case 1127:  /* kashiftsi */
    case 1126:  /* klshiftrthi */
    case 1125:  /* kashifthi */
    case 1124:  /* klshiftrtqi */
    case 1123:  /* kashiftqi */
    case 1122:  /* kadddi */
    case 1121:  /* kaddsi */
    case 1120:  /* kaddhi */
    case 1119:  /* kaddqi */
    case 1106:  /* kxordi */
    case 1105:  /* kiordi */
    case 1104:  /* kanddi */
    case 1103:  /* kxorsi */
    case 1102:  /* kiorsi */
    case 1101:  /* kandsi */
    case 1100:  /* kxorhi */
    case 1099:  /* kiorhi */
    case 1098:  /* kandhi */
    case 1097:  /* kxorqi */
    case 1096:  /* kiorqi */
    case 1095:  /* kandqi */
    case 816:  /* pro_epilogue_adjust_stack_di_sub */
    case 815:  /* pro_epilogue_adjust_stack_si_sub */
    case 814:  /* pro_epilogue_adjust_stack_di_add */
    case 813:  /* pro_epilogue_adjust_stack_si_add */
    case 492:  /* *rotrhi3_1 */
    case 491:  /* *rotlhi3_1 */
    case 490:  /* *rotrqi3_1 */
    case 489:  /* *rotlqi3_1 */
    case 488:  /* *rotrdi3_1 */
    case 487:  /* *rotldi3_1 */
    case 486:  /* *rotrsi3_1 */
    case 485:  /* *rotlsi3_1 */
    case 459:  /* *ashrhi3_1 */
    case 458:  /* *lshrhi3_1 */
    case 457:  /* *ashrqi3_1 */
    case 456:  /* *lshrqi3_1 */
    case 455:  /* *ashrdi3_1 */
    case 454:  /* *lshrdi3_1 */
    case 453:  /* *ashrsi3_1 */
    case 452:  /* *lshrsi3_1 */
    case 449:  /* ashrsi3_cvt */
    case 447:  /* *ashrdi3_doubleword */
    case 446:  /* *lshrdi3_doubleword */
    case 432:  /* *ashlqi3_1 */
    case 431:  /* *ashlhi3_1 */
    case 430:  /* *ashldi3_1 */
    case 429:  /* *ashlsi3_1 */
    case 424:  /* *ashldi3_doubleword */
    case 353:  /* *xorqi_1 */
    case 352:  /* *iorqi_1 */
    case 351:  /* *xordi_1 */
    case 350:  /* *iordi_1 */
    case 349:  /* *xorsi_1 */
    case 348:  /* *iorsi_1 */
    case 347:  /* *xorhi_1 */
    case 346:  /* *iorhi_1 */
    case 345:  /* *xordi3_doubleword */
    case 344:  /* *iordi3_doubleword */
    case 328:  /* *andqi_1 */
    case 327:  /* *andsi_1 */
    case 326:  /* *andhi_1 */
    case 325:  /* *anddi3_doubleword */
    case 287:  /* *mulqi3_1 */
    case 286:  /* *mulsi3_1 */
    case 285:  /* *mulhi3_1 */
    case 241:  /* *subdi_1 */
    case 240:  /* *subsi_1 */
    case 239:  /* *subhi_1 */
    case 238:  /* *subqi_1 */
    case 237:  /* *subti3_doubleword */
    case 236:  /* *subdi3_doubleword */
    case 193:  /* *addqi_1 */
    case 192:  /* *addhi_1 */
    case 191:  /* *adddi_1 */
    case 190:  /* *addsi_1 */
    case 189:  /* *addti3_doubleword */
    case 188:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 186:  /* *floatunssixf2_i387_with_xmm */
    case 185:  /* *floatunssidf2_i387_with_xmm */
    case 184:  /* *floatunssisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 183:  /* floatdixf2_i387_with_xmm */
    case 182:  /* floatdidf2_i387_with_xmm */
    case 181:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 163:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 167:  /* fix_truncsi_i387_with_temp */
    case 166:  /* fix_trunchi_i387_with_temp */
    case 162:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 165:  /* fix_truncsi_i387 */
    case 164:  /* fix_trunchi_i387 */
    case 158:  /* fix_truncdi_i387_fisttp_with_temp */
    case 157:  /* fix_truncsi_i387_fisttp_with_temp */
    case 156:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 147:  /* *fixuns_truncdf_1 */
    case 146:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1082:  /* movdi_to_sse */
    case 584:  /* ffssi2_no_cmove */
    case 155:  /* fix_truncdi_i387_fisttp */
    case 154:  /* fix_truncsi_i387_fisttp */
    case 153:  /* fix_trunchi_i387_fisttp */
    case 141:  /* *truncxfdf2_mixed */
    case 140:  /* *truncxfsf2_mixed */
    case 138:  /* *truncdfsf_i387 */
    case 137:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 128:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1118:  /* knotdi */
    case 1117:  /* knotsi */
    case 1116:  /* knothi */
    case 1115:  /* knotqi */
    case 796:  /* *x86_movsicc_0_m1_neg */
    case 795:  /* *x86_movsicc_0_m1_se */
    case 794:  /* *x86_movsicc_0_m1 */
    case 623:  /* popcounthi2 */
    case 620:  /* popcountsi2 */
    case 592:  /* clzsi2_lzcnt */
    case 588:  /* ctzsi2 */
    case 384:  /* *negdi2_1 */
    case 383:  /* *negsi2_1 */
    case 382:  /* *neghi2_1 */
    case 381:  /* *negqi2_1 */
    case 380:  /* *negti2_doubleword */
    case 379:  /* *negdi2_doubleword */
    case 161:  /* *fix_truncdi_i387_1 */
    case 160:  /* *fix_truncsi_i387_1 */
    case 159:  /* *fix_trunchi_i387_1 */
    case 121:  /* zero_extendqihi2_and */
    case 118:  /* zero_extendhisi2_and */
    case 117:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 104:  /* *insvqi_3 */
    case 103:  /* *insvqi_3 */
    case 102:  /* *insvqi_2 */
    case 101:  /* *insvqi_2 */
    case 100:  /* *insvqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4040:  /* avx512cd_maskw_vec_dupv4si */
    case 4039:  /* avx512cd_maskw_vec_dupv8si */
    case 4038:  /* avx512cd_maskw_vec_dupv16si */
    case 4037:  /* avx512cd_maskb_vec_dupv2di */
    case 4036:  /* avx512cd_maskb_vec_dupv4di */
    case 4035:  /* avx512cd_maskb_vec_dupv8di */
    case 4017:  /* *avx512dq_broadcastv8sf */
    case 4015:  /* *avx512dq_broadcastv16sf */
    case 4013:  /* *avx512dq_broadcastv4si */
    case 4011:  /* *avx512dq_broadcastv8si */
    case 4009:  /* *avx512dq_broadcastv16si */
    case 3940:  /* avx512vl_vec_dupv8hi */
    case 3938:  /* avx512vl_vec_dupv16hi */
    case 3936:  /* avx512bw_vec_dupv32hi */
    case 3934:  /* avx512vl_vec_dupv32qi */
    case 3932:  /* avx512vl_vec_dupv16qi */
    case 3930:  /* avx512bw_vec_dupv64qi */
    case 3928:  /* avx512vl_vec_dupv2df */
    case 3926:  /* avx512vl_vec_dupv4df */
    case 3924:  /* avx512f_vec_dupv8df */
    case 3922:  /* avx512vl_vec_dupv4sf */
    case 3920:  /* avx512vl_vec_dupv8sf */
    case 3918:  /* avx512f_vec_dupv16sf */
    case 3916:  /* avx512vl_vec_dupv2di */
    case 3914:  /* avx512vl_vec_dupv4di */
    case 3912:  /* avx512f_vec_dupv8di */
    case 3910:  /* avx512vl_vec_dupv4si */
    case 3908:  /* avx512vl_vec_dupv8si */
    case 3906:  /* avx512f_vec_dupv16si */
    case 3905:  /* avx512bw_vec_dupv64qi_1 */
    case 3904:  /* avx512bw_vec_dupv32hi_1 */
    case 3903:  /* avx512f_vec_dupv8di_1 */
    case 3902:  /* avx512f_vec_dupv16si_1 */
    case 3901:  /* avx2_vec_dupv4df */
    case 3863:  /* avx2_pbroadcastv4di_1 */
    case 3862:  /* avx2_pbroadcastv8si_1 */
    case 3861:  /* avx2_pbroadcastv16hi_1 */
    case 3860:  /* avx2_pbroadcastv32qi_1 */
    case 3859:  /* avx2_pbroadcastv2di */
    case 3858:  /* avx2_pbroadcastv4di */
    case 3857:  /* avx2_pbroadcastv4si */
    case 3856:  /* avx2_pbroadcastv8si */
    case 3855:  /* avx2_pbroadcastv8hi */
    case 3854:  /* avx2_pbroadcastv16hi */
    case 3853:  /* avx2_pbroadcastv32hi */
    case 3852:  /* avx2_pbroadcastv16qi */
    case 3851:  /* avx2_pbroadcastv32qi */
    case 3850:  /* avx2_pbroadcastv64qi */
    case 3849:  /* avx2_pbroadcastv8di */
    case 3848:  /* avx2_pbroadcastv16si */
    case 3663:  /* sse4_1_zero_extendv2siv2di2 */
    case 3661:  /* sse4_1_sign_extendv2siv2di2 */
    case 3651:  /* sse4_1_zero_extendv2hiv2di2 */
    case 3649:  /* sse4_1_sign_extendv2hiv2di2 */
    case 3647:  /* avx2_zero_extendv4hiv4di2 */
    case 3645:  /* avx2_sign_extendv4hiv4di2 */
    case 3639:  /* sse4_1_zero_extendv2qiv2di2 */
    case 3637:  /* sse4_1_sign_extendv2qiv2di2 */
    case 3635:  /* avx2_zero_extendv4qiv4di2 */
    case 3633:  /* avx2_sign_extendv4qiv4di2 */
    case 3631:  /* avx512f_zero_extendv8qiv8di2 */
    case 3629:  /* avx512f_sign_extendv8qiv8di2 */
    case 3627:  /* sse4_1_zero_extendv4hiv4si2 */
    case 3625:  /* sse4_1_sign_extendv4hiv4si2 */
    case 3615:  /* sse4_1_zero_extendv4qiv4si2 */
    case 3613:  /* sse4_1_sign_extendv4qiv4si2 */
    case 3611:  /* avx2_zero_extendv8qiv8si2 */
    case 3609:  /* avx2_sign_extendv8qiv8si2 */
    case 3603:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 3601:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 3432:  /* *vec_extractv4si_0_zext_sse4 */
    case 2682:  /* *avx512f_us_truncatev8div16qi2 */
    case 2681:  /* *avx512f_truncatev8div16qi2 */
    case 2680:  /* *avx512f_ss_truncatev8div16qi2 */
    case 2219:  /* avx512f_vec_dupv8df_1 */
    case 2218:  /* avx512f_vec_dupv16sf_1 */
    case 2217:  /* avx2_vec_dupv8sf_1 */
    case 2216:  /* avx2_vec_dupv4sf */
    case 2215:  /* avx2_vec_dupv8sf */
    case 2177:  /* sse2_cvtps2pd */
    case 2152:  /* vec_unpacks_lo_v16sf */
    case 2151:  /* *avx_cvtps2pd256_2 */
    case 2129:  /* sse2_cvttpd2dq */
    case 2123:  /* ufix_truncv2sfv2di2 */
    case 2121:  /* fix_truncv2sfv2di2 */
    case 2071:  /* ufix_truncv2dfv2si2 */
    case 2042:  /* sse2_cvtdq2pd */
    case 2041:  /* avx_cvtdq2pd256_2 */
    case 2040:  /* avx512f_cvtdq2pd512_2 */
    case 2038:  /* ufloatv2siv2df2 */
    case 2029:  /* *ufloatv2div2sf2 */
    case 2028:  /* *floatv2div2sf2 */
    case 1986:  /* sse2_cvttsd2si */
    case 1981:  /* avx512f_vcvttsd2usi */
    case 1977:  /* avx512f_vcvttss2usi */
    case 1898:  /* sse_cvttss2si */
    case 1892:  /* sse_cvttps2pi */
    case 1081:  /* sse2_movq128 */
    case 993:  /* *vec_dupv4hi */
    case 677:  /* sqrt_extenddfxf2_i387 */
    case 676:  /* sqrt_extendsfxf2_i387 */
    case 408:  /* *negextenddfxf2 */
    case 407:  /* *absextenddfxf2 */
    case 406:  /* *negextendsfxf2 */
    case 405:  /* *absextendsfxf2 */
    case 404:  /* *negextendsfdf2 */
    case 403:  /* *absextendsfdf2 */
    case 97:  /* *extzvqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 552:  /* *sibcall_memory */
    case 551:  /* *sibcall_memory */
    case 92:  /* *movstricthi_xor */
    case 91:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 115:  /* *swapdf */
    case 114:  /* *swapsf */
    case 113:  /* swapxf */
    case 88:  /* *swaphi */
    case 87:  /* *swapqi */
    case 86:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 4713:  /* vpopcountv8di */
    case 4711:  /* vpopcountv16si */
    case 4640:  /* clzv2di2 */
    case 4638:  /* clzv4di2 */
    case 4636:  /* clzv8di2 */
    case 4634:  /* clzv4si2 */
    case 4632:  /* clzv8si2 */
    case 4630:  /* clzv16si2 */
    case 4033:  /* *avx512dq_broadcastv4df_1 */
    case 4031:  /* *avx512dq_broadcastv4di_1 */
    case 4029:  /* *avx512dq_broadcastv8df_1 */
    case 4027:  /* *avx512dq_broadcastv8di_1 */
    case 4025:  /* *avx512dq_broadcastv16si_1 */
    case 4023:  /* *avx512dq_broadcastv16sf_1 */
    case 4021:  /* *avx512vl_broadcastv8sf_1 */
    case 4019:  /* *avx512vl_broadcastv8si_1 */
    case 4002:  /* vec_dupv4df */
    case 4001:  /* vec_dupv4di */
    case 4000:  /* vec_dupv8sf */
    case 3999:  /* vec_dupv8si */
    case 3998:  /* *vec_dupv4si */
    case 3997:  /* *vec_dupv8si */
    case 3996:  /* *vec_dupv8hi */
    case 3995:  /* *vec_dupv16hi */
    case 3994:  /* *vec_dupv16qi */
    case 3993:  /* *vec_dupv32qi */
    case 3988:  /* *vec_dupv2di */
    case 3987:  /* *vec_dupv4si */
    case 3986:  /* vec_dupv4sf */
    case 3984:  /* *avx512vl_vec_dup_gprv2df */
    case 3982:  /* *avx512vl_vec_dup_gprv4df */
    case 3980:  /* *avx512f_vec_dup_gprv8df */
    case 3978:  /* *avx512vl_vec_dup_gprv4sf */
    case 3976:  /* *avx512vl_vec_dup_gprv8sf */
    case 3974:  /* *avx512f_vec_dup_gprv16sf */
    case 3972:  /* *avx512vl_vec_dup_gprv2di */
    case 3970:  /* *avx512vl_vec_dup_gprv4di */
    case 3968:  /* *avx512f_vec_dup_gprv8di */
    case 3966:  /* *avx512vl_vec_dup_gprv4si */
    case 3964:  /* *avx512vl_vec_dup_gprv8si */
    case 3962:  /* *avx512f_vec_dup_gprv16si */
    case 3960:  /* *avx512vl_vec_dup_gprv8hi */
    case 3958:  /* *avx512vl_vec_dup_gprv16hi */
    case 3956:  /* *avx512bw_vec_dup_gprv32hi */
    case 3954:  /* *avx512vl_vec_dup_gprv32qi */
    case 3952:  /* *avx512vl_vec_dup_gprv16qi */
    case 3950:  /* *avx512bw_vec_dup_gprv64qi */
    case 3948:  /* *avx512f_broadcastv8di */
    case 3946:  /* *avx512f_broadcastv8df */
    case 3944:  /* *avx512f_broadcastv16si */
    case 3942:  /* *avx512f_broadcastv16sf */
    case 3659:  /* avx2_zero_extendv4siv4di2 */
    case 3657:  /* avx2_sign_extendv4siv4di2 */
    case 3655:  /* avx512f_zero_extendv8siv8di2 */
    case 3653:  /* avx512f_sign_extendv8siv8di2 */
    case 3643:  /* avx512f_zero_extendv8hiv8di2 */
    case 3641:  /* avx512f_sign_extendv8hiv8di2 */
    case 3623:  /* avx2_zero_extendv8hiv8si2 */
    case 3621:  /* avx2_sign_extendv8hiv8si2 */
    case 3619:  /* avx512f_zero_extendv16hiv16si2 */
    case 3617:  /* avx512f_sign_extendv16hiv16si2 */
    case 3607:  /* *avx512f_zero_extendv16qiv16si2 */
    case 3605:  /* *avx512f_sign_extendv16qiv16si2 */
    case 3599:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 3597:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 3595:  /* avx2_zero_extendv16qiv16hi2 */
    case 3593:  /* avx2_sign_extendv16qiv16hi2 */
    case 3554:  /* absv2si2 */
    case 3553:  /* absv4hi2 */
    case 3552:  /* absv8qi2 */
    case 3539:  /* *absv2di2 */
    case 3538:  /* *absv4di2 */
    case 3537:  /* *absv8di2 */
    case 3536:  /* *absv4si2 */
    case 3535:  /* *absv8si2 */
    case 3534:  /* *absv16si2 */
    case 3533:  /* *absv8hi2 */
    case 3532:  /* *absv16hi2 */
    case 3531:  /* *absv32hi2 */
    case 3530:  /* *absv16qi2 */
    case 3529:  /* *absv32qi2 */
    case 3528:  /* *absv64qi2 */
    case 3435:  /* *vec_extractv2di_1 */
    case 3431:  /* *vec_extractv2di_0_sse */
    case 3430:  /* *vec_extractv4si_0 */
    case 2535:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 2534:  /* *avx512vl_truncatev16hiv16qi2 */
    case 2533:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 2532:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 2531:  /* *avx512vl_truncatev8siv8hi2 */
    case 2530:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 2529:  /* *avx512vl_us_truncatev4div4si2 */
    case 2528:  /* *avx512vl_truncatev4div4si2 */
    case 2527:  /* *avx512vl_ss_truncatev4div4si2 */
    case 2523:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 2522:  /* avx512bw_truncatev32hiv32qi2 */
    case 2521:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 2508:  /* *avx512f_us_truncatev8div8hi2 */
    case 2507:  /* *avx512f_truncatev8div8hi2 */
    case 2506:  /* *avx512f_ss_truncatev8div8hi2 */
    case 2505:  /* *avx512f_us_truncatev8div8si2 */
    case 2504:  /* *avx512f_truncatev8div8si2 */
    case 2503:  /* *avx512f_ss_truncatev8div8si2 */
    case 2502:  /* *avx512f_us_truncatev16siv16hi2 */
    case 2501:  /* *avx512f_truncatev16siv16hi2 */
    case 2500:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 2499:  /* *avx512f_us_truncatev16siv16qi2 */
    case 2498:  /* *avx512f_truncatev16siv16qi2 */
    case 2497:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 2494:  /* vec_dupv2df */
    case 2490:  /* *vec_extractv2df_0_sse */
    case 2489:  /* sse2_storelpd */
    case 2488:  /* *vec_extractv2df_1_sse */
    case 2487:  /* sse2_storehpd */
    case 2291:  /* vec_extract_hi_v32qi */
    case 2290:  /* vec_extract_lo_v32qi */
    case 2289:  /* vec_extract_hi_v64qi */
    case 2288:  /* vec_extract_lo_v64qi */
    case 2287:  /* vec_extract_hi_v16hi */
    case 2286:  /* vec_extract_lo_v16hi */
    case 2285:  /* vec_extract_hi_v32hi */
    case 2284:  /* vec_extract_lo_v32hi */
    case 2283:  /* vec_extract_hi_v8sf */
    case 2282:  /* vec_extract_hi_v8si */
    case 2274:  /* vec_extract_lo_v8sf */
    case 2272:  /* vec_extract_lo_v8si */
    case 2270:  /* vec_extract_hi_v4df */
    case 2268:  /* vec_extract_hi_v4di */
    case 2266:  /* vec_extract_lo_v4df */
    case 2264:  /* vec_extract_lo_v4di */
    case 2262:  /* vec_extract_lo_v16si */
    case 2260:  /* vec_extract_lo_v16sf */
    case 2258:  /* vec_extract_hi_v16si */
    case 2256:  /* vec_extract_hi_v16sf */
    case 2252:  /* vec_extract_hi_v8di */
    case 2250:  /* vec_extract_hi_v8df */
    case 2246:  /* vec_extract_lo_v8di */
    case 2244:  /* vec_extract_lo_v8df */
    case 2227:  /* *vec_extractv4sf_0 */
    case 2212:  /* sse_storelps */
    case 2210:  /* sse_storehps */
    case 2149:  /* avx_cvtps2pd256 */
    case 2145:  /* avx512f_cvtps2pd512 */
    case 2141:  /* avx_cvtpd2ps256 */
    case 2137:  /* *avx512f_cvtpd2ps512 */
    case 2127:  /* ufix_truncv4sfv4si2 */
    case 2125:  /* ufix_truncv8sfv8si2 */
    case 2119:  /* ufix_truncv4sfv4di2 */
    case 2117:  /* fix_truncv4sfv4di2 */
    case 2113:  /* ufix_truncv8sfv8di2 */
    case 2109:  /* fix_truncv8sfv8di2 */
    case 2091:  /* ufix_truncv2dfv2di2 */
    case 2089:  /* fix_truncv2dfv2di2 */
    case 2087:  /* ufix_truncv4dfv4di2 */
    case 2085:  /* fix_truncv4dfv4di2 */
    case 2081:  /* ufix_truncv8dfv8di2 */
    case 2077:  /* fix_truncv8dfv8di2 */
    case 2075:  /* ufix_truncv4dfv4si2 */
    case 2073:  /* fix_truncv4dfv4si2 */
    case 2067:  /* ufix_truncv8dfv8si2 */
    case 2063:  /* fix_truncv8dfv8si2 */
    case 2036:  /* ufloatv4siv4df2 */
    case 2034:  /* ufloatv8siv8df2 */
    case 2026:  /* ufloatv4div4sf2 */
    case 2024:  /* floatv4div4sf2 */
    case 2020:  /* ufloatv8div8sf2 */
    case 2016:  /* floatv8div8sf2 */
    case 2012:  /* ufloatv2div2df2 */
    case 2008:  /* floatv2div2df2 */
    case 2004:  /* ufloatv4div4df2 */
    case 2000:  /* floatv4div4df2 */
    case 1996:  /* ufloatv8div8df2 */
    case 1992:  /* floatv8div8df2 */
    case 1990:  /* floatv4siv4df2 */
    case 1988:  /* floatv8siv8df2 */
    case 1973:  /* sse2_cvttpd2pi */
    case 1971:  /* sse2_cvtpi2pd */
    case 1969:  /* fix_truncv4sfv4si2 */
    case 1967:  /* fix_truncv8sfv8si2 */
    case 1963:  /* ufix_truncv16sfv16si2 */
    case 1959:  /* fix_truncv16sfv16si2 */
    case 1919:  /* ufloatv4siv4sf2 */
    case 1915:  /* ufloatv8siv8sf2 */
    case 1911:  /* ufloatv16siv16sf2 */
    case 1909:  /* floatv4siv4sf2 */
    case 1907:  /* floatv8siv8sf2 */
    case 1903:  /* floatv16siv16sf2 */
    case 1283:  /* sse2_sqrtv2df2 */
    case 1281:  /* avx_sqrtv4df2 */
    case 1277:  /* avx512f_sqrtv8df2 */
    case 1275:  /* sse_sqrtv4sf2 */
    case 1273:  /* avx_sqrtv8sf2 */
    case 1269:  /* avx512f_sqrtv16sf2 */
    case 997:  /* *vec_extractv2si_1 */
    case 996:  /* *vec_extractv2si_0 */
    case 994:  /* *vec_dupv2si */
    case 992:  /* mmx_pswapdv2si2 */
    case 927:  /* *vec_extractv2sf_1 */
    case 926:  /* *vec_extractv2sf_0 */
    case 924:  /* *vec_dupv2sf */
    case 923:  /* mmx_pswapdv2sf2 */
    case 922:  /* mmx_floatv2si2 */
    case 919:  /* mmx_pf2id */
    case 680:  /* *sqrtdf2_sse */
    case 679:  /* *sqrtsf2_sse */
    case 675:  /* sqrtxf2 */
    case 625:  /* *bswapsi2 */
    case 624:  /* *bswapsi2_movbe */
    case 419:  /* *one_cmplqi2_1 */
    case 418:  /* *one_cmpldi2_1 */
    case 417:  /* *one_cmplsi2_1 */
    case 416:  /* *one_cmplhi2_1 */
    case 415:  /* *one_cmpldi2_doubleword */
    case 402:  /* *negxf2_1 */
    case 401:  /* *absxf2_1 */
    case 400:  /* *negdf2_1 */
    case 399:  /* *absdf2_1 */
    case 398:  /* *negsf2_1 */
    case 397:  /* *abssf2_1 */
    case 180:  /* *floatdidf2_i387 */
    case 179:  /* *floatdisf2_i387 */
    case 178:  /* *floatsidf2_i387 */
    case 177:  /* *floatsisf2_i387 */
    case 176:  /* *floatsidf2_mixed */
    case 175:  /* *floatsisf2_mixed */
    case 174:  /* floatdixf2 */
    case 173:  /* floatsixf2 */
    case 172:  /* floathixf2 */
    case 171:  /* floathidf2 */
    case 170:  /* floathisf2 */
    case 152:  /* fix_truncdi_fisttp_i387_1 */
    case 151:  /* fix_truncsi_fisttp_i387_1 */
    case 150:  /* fix_trunchi_fisttp_i387_1 */
    case 149:  /* fix_truncdfsi_sse */
    case 148:  /* fix_truncsfsi_sse */
    case 145:  /* *truncxfdf2_i387 */
    case 144:  /* *truncxfsf2_i387 */
    case 143:  /* truncxfdf2_i387_noop */
    case 142:  /* truncxfsf2_i387_noop */
    case 139:  /* *truncdfsf2_i387_1 */
    case 136:  /* *truncdfsf_fast_i387 */
    case 135:  /* *truncdfsf_fast_mixed */
    case 134:  /* *extenddfxf2_i387 */
    case 133:  /* *extendsfxf2_i387 */
    case 132:  /* *extendsfdf2 */
    case 131:  /* extendqihi2 */
    case 130:  /* extendqisi2 */
    case 129:  /* extendhisi2 */
    case 127:  /* *zextsi_doubleword */
    case 126:  /* *zexthi_doubleword */
    case 125:  /* *zextqi_doubleword */
    case 124:  /* *zexthi_doubleword_and */
    case 123:  /* *zextqi_doubleword_and */
    case 122:  /* *zero_extendqihi2 */
    case 120:  /* *zero_extendhisi2 */
    case 119:  /* *zero_extendqisi2 */
    case 116:  /* *zero_extendsidi2 */
    case 96:  /* *extzvsi */
    case 95:  /* *extzvhi */
    case 94:  /* *extvsi */
    case 93:  /* *extvhi */
    case 85:  /* *movabsdi_2 */
    case 84:  /* *movabssi_2 */
    case 83:  /* *movabshi_2 */
    case 82:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 550:  /* *sibcall */
    case 549:  /* *sibcall */
    case 546:  /* *call */
    case 545:  /* *call */
    case 505:  /* *setcc_qi_slp */
    case 99:  /* insvsi_1 */
    case 98:  /* insvhi_1 */
    case 90:  /* *movstricthi_1 */
    case 89:  /* *movstrictqi_1 */
    case 81:  /* *movabsdi_1 */
    case 80:  /* *movabssi_1 */
    case 79:  /* *movabshi_1 */
    case 78:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 502:  /* *setcc_si_1_and */
    case 70:  /* *movsi_or */
    case 69:  /* *movsi_xor */
    case 64:  /* *popdi1_epilogue */
    case 63:  /* *popsi1_epilogue */
    case 60:  /* *pushdi2_prologue */
    case 59:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 4692:  /* *movv64si_internal */
    case 4691:  /* *movv64sf_internal */
    case 1026:  /* movv2df_internal */
    case 1025:  /* movv4df_internal */
    case 1024:  /* movv8df_internal */
    case 1023:  /* movv4sf_internal */
    case 1022:  /* movv8sf_internal */
    case 1021:  /* movv16sf_internal */
    case 1020:  /* movv1ti_internal */
    case 1019:  /* movv2ti_internal */
    case 1018:  /* movv4ti_internal */
    case 1017:  /* movv2di_internal */
    case 1016:  /* movv4di_internal */
    case 1015:  /* movv8di_internal */
    case 1014:  /* movv4si_internal */
    case 1013:  /* movv8si_internal */
    case 1012:  /* movv16si_internal */
    case 1011:  /* movv8hi_internal */
    case 1010:  /* movv16hi_internal */
    case 1009:  /* movv32hi_internal */
    case 1008:  /* movv16qi_internal */
    case 1007:  /* movv32qi_internal */
    case 1006:  /* movv64qi_internal */
    case 899:  /* *movv2sf_internal */
    case 898:  /* *movv1di_internal */
    case 897:  /* *movv2si_internal */
    case 896:  /* *movv4hi_internal */
    case 895:  /* *movv8qi_internal */
    case 880:  /* *movbnd64_internal_mpx */
    case 879:  /* *movbnd32_internal_mpx */
    case 827:  /* *prefetch_3dnow */
    case 504:  /* *setcc_qi */
    case 503:  /* *setcc_si_1_movzbl */
    case 187:  /* *leasi */
    case 112:  /* *movsf_internal */
    case 111:  /* *movdf_internal */
    case 110:  /* *movxf_internal */
    case 109:  /* *movtf_internal */
    case 108:  /* *pushsf */
    case 107:  /* *pushdf */
    case 106:  /* *pushxf */
    case 105:  /* *pushtf */
    case 77:  /* *movqi_internal */
    case 76:  /* *movhi_internal */
    case 75:  /* *movsi_internal */
    case 74:  /* *movdi_internal */
    case 73:  /* *movti_internal */
    case 72:  /* *movoi_internal_avx */
    case 71:  /* *movxi_internal_avx512f */
    case 68:  /* *popfldi1 */
    case 67:  /* *popflsi1 */
    case 66:  /* *pushfldi2 */
    case 65:  /* *pushflsi2 */
    case 62:  /* *popdi1 */
    case 61:  /* *popsi1 */
    case 58:  /* *pushhi2 */
    case 57:  /* *pushqi2 */
    case 56:  /* *pushsi2 */
    case 55:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 169:  /* x86_fldcw_1 */
    case 48:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 3464:  /* sse_stmxcsr */
    case 894:  /* rdpid */
    case 858:  /* lwp_slwpcbdi */
    case 857:  /* lwp_slwpcbsi */
    case 853:  /* fnstsw */
    case 843:  /* fxsave */
    case 841:  /* rdtsc */
    case 828:  /* *prefetch_prefetchwt1 */
    case 637:  /* *load_tp_di */
    case 636:  /* *load_tp_si */
    case 635:  /* *load_tp_x32_zext */
    case 634:  /* *load_tp_x32 */
    case 168:  /* x86_fnstcw_1 */
    case 47:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 46:  /* *cmpxf_si_cc_i387 */
    case 45:  /* *cmpdf_si_cc_i387 */
    case 44:  /* *cmpsf_si_cc_i387 */
    case 43:  /* *cmpxf_hi_cc_i387 */
    case 42:  /* *cmpdf_hi_cc_i387 */
    case 41:  /* *cmpsf_hi_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 40:  /* *cmpxf_si_i387 */
    case 39:  /* *cmpdf_si_i387 */
    case 38:  /* *cmpsf_si_i387 */
    case 37:  /* *cmpxf_hi_i387 */
    case 36:  /* *cmpdf_hi_i387 */
    case 35:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 205:  /* *addsi_4 */
    case 204:  /* *addhi_4 */
    case 203:  /* *addqi_4 */
    case 34:  /* *cmpuxf_cc_i387 */
    case 33:  /* *cmpudf_cc_i387 */
    case 32:  /* *cmpusf_cc_i387 */
    case 28:  /* *cmpdf_cc_i387 */
    case 27:  /* *cmpsf_cc_i387 */
    case 24:  /* *cmpxf_cc_i387 */
    case 22:  /* *cmpxf_0_cc_i387 */
    case 21:  /* *cmpdf_0_cc_i387 */
    case 20:  /* *cmpsf_0_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 31:  /* *cmpuxf_i387 */
    case 30:  /* *cmpudf_i387 */
    case 29:  /* *cmpusf_i387 */
    case 26:  /* *cmpdf_i387 */
    case 25:  /* *cmpsf_i387 */
    case 23:  /* *cmpxf_i387 */
    case 19:  /* *cmpxf_0_i387 */
    case 18:  /* *cmpdf_0_i387 */
    case 17:  /* *cmpsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 16:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 15:  /* *cmpqi_ext_3 */
    case 14:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 13:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 319:  /* *testsi_1 */
    case 318:  /* *testhi_1 */
    case 317:  /* *testqi_1 */
    case 316:  /* *testqi_1_maybe_si */
    case 12:  /* *cmpdi_minus_1 */
    case 11:  /* *cmpsi_minus_1 */
    case 10:  /* *cmphi_minus_1 */
    case 9:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 54:  /* *cmpiuxf_i387 */
    case 53:  /* *cmpixf_i387 */
    case 52:  /* *cmpiudf */
    case 51:  /* *cmpiusf */
    case 50:  /* *cmpidf */
    case 49:  /* *cmpisf */
    case 8:  /* *cmpdi_1 */
    case 7:  /* *cmpsi_1 */
    case 6:  /* *cmphi_1 */
    case 5:  /* *cmpqi_1 */
    case 4:  /* *cmpdi_ccno_1 */
    case 3:  /* *cmpsi_ccno_1 */
    case 2:  /* *cmphi_ccno_1 */
    case 1:  /* *cmpqi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
