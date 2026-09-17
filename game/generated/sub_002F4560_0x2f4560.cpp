#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4560
// Address: 0x2f4560 - 0x2f46c8
void sub_002F4560_0x2f4560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4560_0x2f4560");
#endif

    switch (ctx->pc) {
        case 0x2f4560u: goto label_2f4560;
        case 0x2f4564u: goto label_2f4564;
        case 0x2f4568u: goto label_2f4568;
        case 0x2f456cu: goto label_2f456c;
        case 0x2f4570u: goto label_2f4570;
        case 0x2f4574u: goto label_2f4574;
        case 0x2f4578u: goto label_2f4578;
        case 0x2f457cu: goto label_2f457c;
        case 0x2f4580u: goto label_2f4580;
        case 0x2f4584u: goto label_2f4584;
        case 0x2f4588u: goto label_2f4588;
        case 0x2f458cu: goto label_2f458c;
        case 0x2f4590u: goto label_2f4590;
        case 0x2f4594u: goto label_2f4594;
        case 0x2f4598u: goto label_2f4598;
        case 0x2f459cu: goto label_2f459c;
        case 0x2f45a0u: goto label_2f45a0;
        case 0x2f45a4u: goto label_2f45a4;
        case 0x2f45a8u: goto label_2f45a8;
        case 0x2f45acu: goto label_2f45ac;
        case 0x2f45b0u: goto label_2f45b0;
        case 0x2f45b4u: goto label_2f45b4;
        case 0x2f45b8u: goto label_2f45b8;
        case 0x2f45bcu: goto label_2f45bc;
        case 0x2f45c0u: goto label_2f45c0;
        case 0x2f45c4u: goto label_2f45c4;
        case 0x2f45c8u: goto label_2f45c8;
        case 0x2f45ccu: goto label_2f45cc;
        case 0x2f45d0u: goto label_2f45d0;
        case 0x2f45d4u: goto label_2f45d4;
        case 0x2f45d8u: goto label_2f45d8;
        case 0x2f45dcu: goto label_2f45dc;
        case 0x2f45e0u: goto label_2f45e0;
        case 0x2f45e4u: goto label_2f45e4;
        case 0x2f45e8u: goto label_2f45e8;
        case 0x2f45ecu: goto label_2f45ec;
        case 0x2f45f0u: goto label_2f45f0;
        case 0x2f45f4u: goto label_2f45f4;
        case 0x2f45f8u: goto label_2f45f8;
        case 0x2f45fcu: goto label_2f45fc;
        case 0x2f4600u: goto label_2f4600;
        case 0x2f4604u: goto label_2f4604;
        case 0x2f4608u: goto label_2f4608;
        case 0x2f460cu: goto label_2f460c;
        case 0x2f4610u: goto label_2f4610;
        case 0x2f4614u: goto label_2f4614;
        case 0x2f4618u: goto label_2f4618;
        case 0x2f461cu: goto label_2f461c;
        case 0x2f4620u: goto label_2f4620;
        case 0x2f4624u: goto label_2f4624;
        case 0x2f4628u: goto label_2f4628;
        case 0x2f462cu: goto label_2f462c;
        case 0x2f4630u: goto label_2f4630;
        case 0x2f4634u: goto label_2f4634;
        case 0x2f4638u: goto label_2f4638;
        case 0x2f463cu: goto label_2f463c;
        case 0x2f4640u: goto label_2f4640;
        case 0x2f4644u: goto label_2f4644;
        case 0x2f4648u: goto label_2f4648;
        case 0x2f464cu: goto label_2f464c;
        case 0x2f4650u: goto label_2f4650;
        case 0x2f4654u: goto label_2f4654;
        case 0x2f4658u: goto label_2f4658;
        case 0x2f465cu: goto label_2f465c;
        case 0x2f4660u: goto label_2f4660;
        case 0x2f4664u: goto label_2f4664;
        case 0x2f4668u: goto label_2f4668;
        case 0x2f466cu: goto label_2f466c;
        case 0x2f4670u: goto label_2f4670;
        case 0x2f4674u: goto label_2f4674;
        case 0x2f4678u: goto label_2f4678;
        case 0x2f467cu: goto label_2f467c;
        case 0x2f4680u: goto label_2f4680;
        case 0x2f4684u: goto label_2f4684;
        case 0x2f4688u: goto label_2f4688;
        case 0x2f468cu: goto label_2f468c;
        case 0x2f4690u: goto label_2f4690;
        case 0x2f4694u: goto label_2f4694;
        case 0x2f4698u: goto label_2f4698;
        case 0x2f469cu: goto label_2f469c;
        case 0x2f46a0u: goto label_2f46a0;
        case 0x2f46a4u: goto label_2f46a4;
        case 0x2f46a8u: goto label_2f46a8;
        case 0x2f46acu: goto label_2f46ac;
        case 0x2f46b0u: goto label_2f46b0;
        case 0x2f46b4u: goto label_2f46b4;
        case 0x2f46b8u: goto label_2f46b8;
        case 0x2f46bcu: goto label_2f46bc;
        case 0x2f46c0u: goto label_2f46c0;
        case 0x2f46c4u: goto label_2f46c4;
        default: break;
    }

    ctx->pc = 0x2f4560u;

label_2f4560:
    // 0x2f4560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f4564:
    // 0x2f4564: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f4564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f4568:
    // 0x2f4568: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f4568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f456c:
    // 0x2f456c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2f4570:
    // 0x2f4570: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x2f4570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2f4574:
    // 0x2f4574: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f4574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f4578:
    // 0x2f4578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f457c:
    if (ctx->pc == 0x2F457Cu) {
        ctx->pc = 0x2F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4578u;
        // 0x2f457c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4580u;
        goto label_2f4580;
    }
    ctx->pc = 0x2F4578u;
    {
        const bool branch_taken_0x2f4578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4578u;
        // 0x2f457c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4578) {
            ctx->pc = 0x2F4590u;
            goto label_2f4590;
        }
    }
    ctx->pc = 0x2F4580u;
label_2f4580:
    // 0x2f4580: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f4580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f4584:
    // 0x2f4584: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f4588:
    // 0x2f4588: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f458c:
    if (ctx->pc == 0x2F458Cu) {
        ctx->pc = 0x2F4590u;
        goto label_2f4590;
    }
    ctx->pc = 0x2F4588u;
    {
        const bool branch_taken_0x2f4588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4588) {
            ctx->pc = 0x2F459Cu;
            goto label_2f459c;
        }
    }
    ctx->pc = 0x2F4590u;
label_2f4590:
    // 0x2f4590: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f4594:
    // 0x2f4594: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4598:
    // 0x2f4598: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f4598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f459c:
    // 0x2f459c: 0x5080001e  beql        $a0, $zero, . + 4 + (0x1E << 2)
label_2f45a0:
    if (ctx->pc == 0x2F45A0u) {
        ctx->pc = 0x2F45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F459Cu;
        // 0x2f45a0: 0x26050118  addiu       $a1, $s0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45A4u;
        goto label_2f45a4;
    }
    ctx->pc = 0x2F459Cu;
    {
        const bool branch_taken_0x2f459c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f459c) {
            ctx->pc = 0x2F45A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F459Cu;
            // 0x2f45a0: 0x26050118  addiu       $a1, $s0, 0x118 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4618u;
            goto label_2f4618;
        }
    }
    ctx->pc = 0x2F45A4u;
label_2f45a4:
    // 0x2f45a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f45a8:
    // 0x2f45a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f45ac:
    if (ctx->pc == 0x2F45ACu) {
        ctx->pc = 0x2F45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45A8u;
        // 0x2f45ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45B0u;
        goto label_2f45b0;
    }
    ctx->pc = 0x2F45A8u;
    {
        const bool branch_taken_0x2f45a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45A8u;
        // 0x2f45ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45a8) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F45B0u;
label_2f45b0:
    // 0x2f45b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f45b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f45b4:
    // 0x2f45b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f45b8:
    // 0x2f45b8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2f45bc:
    if (ctx->pc == 0x2F45BCu) {
        ctx->pc = 0x2F45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45B8u;
        // 0x2f45bc: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45C0u;
        goto label_2f45c0;
    }
    ctx->pc = 0x2F45B8u;
    {
        const bool branch_taken_0x2f45b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f45b8) {
            ctx->pc = 0x2F45BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F45B8u;
            // 0x2f45bc: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F45D0u;
            goto label_2f45d0;
        }
    }
    ctx->pc = 0x2F45C0u;
label_2f45c0:
    // 0x2f45c0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f45c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f45c4:
    // 0x2f45c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f45c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f45c8:
    // 0x2f45c8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f45cc:
    // 0x2f45cc: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x2f45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
label_2f45d0:
    // 0x2f45d0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f45d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f45d4:
    // 0x2f45d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f45d8:
    if (ctx->pc == 0x2F45D8u) {
        ctx->pc = 0x2F45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45D4u;
        // 0x2f45d8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45DCu;
        goto label_2f45dc;
    }
    ctx->pc = 0x2F45D4u;
    {
        const bool branch_taken_0x2f45d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f45d4) {
            ctx->pc = 0x2F45D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F45D4u;
            // 0x2f45d8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F45F0u;
            goto label_2f45f0;
        }
    }
    ctx->pc = 0x2F45DCu;
label_2f45dc:
    // 0x2f45dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f45e0:
    // 0x2f45e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f45e4:
    // 0x2f45e4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f45e8:
    if (ctx->pc == 0x2F45E8u) {
        ctx->pc = 0x2F45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45E4u;
        // 0x2f45e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45ECu;
        goto label_2f45ec;
    }
    ctx->pc = 0x2F45E4u;
    {
        const bool branch_taken_0x2f45e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45E4u;
        // 0x2f45e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45e4) {
            ctx->pc = 0x2F45F8u;
            goto label_2f45f8;
        }
    }
    ctx->pc = 0x2F45ECu;
label_2f45ec:
    // 0x2f45ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f45ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f45f0:
    // 0x2f45f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f45f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f45f4:
    // 0x2f45f4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f45f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f45f8:
    // 0x2f45f8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f45fc:
    // 0x2f45fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f45fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4600:
    // 0x2f4600: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f4600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f4604:
    // 0x2f4604: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f4604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4608:
    // 0x2f4608: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f4608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f460c:
    // 0x2f460c: 0x60f809  jalr        $v1
label_2f4610:
    if (ctx->pc == 0x2F4610u) {
        ctx->pc = 0x2F4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F460Cu;
        // 0x2f4610: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4614u;
        goto label_2f4614;
    }
    ctx->pc = 0x2F460Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4614u);
        ctx->pc = 0x2F4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F460Cu;
        // 0x2f4610: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F460Cu, 0x2F4614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4614u;
label_2f4614:
    // 0x2f4614: 0x26050118  addiu       $a1, $s0, 0x118
    ctx->pc = 0x2f4614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
label_2f4618:
    // 0x2f4618: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f461c:
    // 0x2f461c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f4620:
    if (ctx->pc == 0x2F4620u) {
        ctx->pc = 0x2F4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F461Cu;
        // 0x2f4620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4624u;
        goto label_2f4624;
    }
    ctx->pc = 0x2F461Cu;
    {
        const bool branch_taken_0x2f461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F461Cu;
        // 0x2f4620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f461c) {
            ctx->pc = 0x2F4634u;
            goto label_2f4634;
        }
    }
    ctx->pc = 0x2F4624u;
label_2f4624:
    // 0x2f4624: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f4624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f4628:
    // 0x2f4628: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f462c:
    // 0x2f462c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f4630:
    if (ctx->pc == 0x2F4630u) {
        ctx->pc = 0x2F4634u;
        goto label_2f4634;
    }
    ctx->pc = 0x2F462Cu;
    {
        const bool branch_taken_0x2f462c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f462c) {
            ctx->pc = 0x2F4640u;
            goto label_2f4640;
        }
    }
    ctx->pc = 0x2F4634u;
label_2f4634:
    // 0x2f4634: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f4638:
    // 0x2f4638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f463c:
    // 0x2f463c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f463cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4640:
    // 0x2f4640: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_2f4644:
    if (ctx->pc == 0x2F4644u) {
        ctx->pc = 0x2F4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4640u;
        // 0x2f4644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4648u;
        goto label_2f4648;
    }
    ctx->pc = 0x2F4640u;
    {
        const bool branch_taken_0x2f4640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4640u;
        // 0x2f4644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4640) {
            ctx->pc = 0x2F46BCu;
            goto label_2f46bc;
        }
    }
    ctx->pc = 0x2F4648u;
label_2f4648:
    // 0x2f4648: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f4648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f464c:
    // 0x2f464c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f4650:
    if (ctx->pc == 0x2F4650u) {
        ctx->pc = 0x2F4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F464Cu;
        // 0x2f4650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4654u;
        goto label_2f4654;
    }
    ctx->pc = 0x2F464Cu;
    {
        const bool branch_taken_0x2f464c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F464Cu;
        // 0x2f4650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f464c) {
            ctx->pc = 0x2F4664u;
            goto label_2f4664;
        }
    }
    ctx->pc = 0x2F4654u;
label_2f4654:
    // 0x2f4654: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f4654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f4658:
    // 0x2f4658: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f465c:
    // 0x2f465c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2f4660:
    if (ctx->pc == 0x2F4660u) {
        ctx->pc = 0x2F4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F465Cu;
        // 0x2f4660: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4664u;
        goto label_2f4664;
    }
    ctx->pc = 0x2F465Cu;
    {
        const bool branch_taken_0x2f465c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f465c) {
            ctx->pc = 0x2F4660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F465Cu;
            // 0x2f4660: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4674u;
            goto label_2f4674;
        }
    }
    ctx->pc = 0x2F4664u;
label_2f4664:
    // 0x2f4664: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f4668:
    // 0x2f4668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f466c:
    // 0x2f466c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f466cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4670:
    // 0x2f4670: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x2f4670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
label_2f4674:
    // 0x2f4674: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f4674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f4678:
    // 0x2f4678: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f467c:
    if (ctx->pc == 0x2F467Cu) {
        ctx->pc = 0x2F467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4678u;
        // 0x2f467c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4680u;
        goto label_2f4680;
    }
    ctx->pc = 0x2F4678u;
    {
        const bool branch_taken_0x2f4678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4678) {
            ctx->pc = 0x2F467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4678u;
            // 0x2f467c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4694u;
            goto label_2f4694;
        }
    }
    ctx->pc = 0x2F4680u;
label_2f4680:
    // 0x2f4680: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f4680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f4684:
    // 0x2f4684: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f4688:
    // 0x2f4688: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f468c:
    if (ctx->pc == 0x2F468Cu) {
        ctx->pc = 0x2F468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4688u;
        // 0x2f468c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4690u;
        goto label_2f4690;
    }
    ctx->pc = 0x2F4688u;
    {
        const bool branch_taken_0x2f4688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4688u;
        // 0x2f468c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4688) {
            ctx->pc = 0x2F469Cu;
            goto label_2f469c;
        }
    }
    ctx->pc = 0x2F4690u;
label_2f4690:
    // 0x2f4690: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f4690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4694:
    // 0x2f4694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4698:
    // 0x2f4698: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f469c:
    // 0x2f469c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f46a0:
    // 0x2f46a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f46a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f46a4:
    // 0x2f46a4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f46a8:
    // 0x2f46a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f46a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f46ac:
    // 0x2f46ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f46acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f46b0:
    // 0x2f46b0: 0x60f809  jalr        $v1
label_2f46b4:
    if (ctx->pc == 0x2F46B4u) {
        ctx->pc = 0x2F46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46B0u;
        // 0x2f46b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46B8u;
        goto label_2f46b8;
    }
    ctx->pc = 0x2F46B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F46B8u);
        ctx->pc = 0x2F46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46B0u;
        // 0x2f46b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F46B0u, 0x2F46B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F46B8u;
label_2f46b8:
    // 0x2f46b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f46b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f46bc:
    // 0x2f46bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f46bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f46c0:
    // 0x2f46c0: 0x3e00008  jr          $ra
label_2f46c4:
    if (ctx->pc == 0x2F46C4u) {
        ctx->pc = 0x2F46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46C0u;
        // 0x2f46c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46C8u;
        goto label_fallthrough_0x2f46c0;
    }
    ctx->pc = 0x2F46C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46C0u;
        // 0x2f46c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F46C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f46c0:
    ctx->pc = 0x2F46C8u;
}
