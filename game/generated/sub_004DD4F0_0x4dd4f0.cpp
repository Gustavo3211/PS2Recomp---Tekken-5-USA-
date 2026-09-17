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

// Function: sub_004DD4F0
// Address: 0x4dd4f0 - 0x4dd630
void sub_004DD4F0_0x4dd4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD4F0_0x4dd4f0");
#endif

    ctx->pc = 0x4dd4f0u;

    // 0x4dd4f0: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4dd4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4dd4f4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4dd4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4dd4f8: 0x25081140  addiu       $t0, $t0, 0x1140
    ctx->pc = 0x4dd4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4416));
    // 0x4dd4fc: 0x24e61120  addiu       $a2, $a3, 0x1120
    ctx->pc = 0x4dd4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4384));
    // 0x4dd500: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4dd500u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1140u));
    // 0x4dd504: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4dd504u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd508: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4dd508u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4dd50c: 0x248b0136  addiu       $t3, $a0, 0x136
    ctx->pc = 0x4dd50cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 310));
    // 0x4dd510: 0x84a20138  lh          $v0, 0x138($a1)
    ctx->pc = 0x4dd510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 312)));
    // 0x4dd514: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4dd514u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4dd518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd51c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4dd51cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd520: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4dd520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4dd524: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd528: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4dd528u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4dd52c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd530: 0x84850162  lh          $a1, 0x162($a0)
    ctx->pc = 0x4dd530u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 354)));
    // 0x4dd534: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4dd534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd538: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4dd538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4dd53c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4dd53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4dd540: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd544: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4dd544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4dd548: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4dd548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd54c: 0xa4820138  sh          $v0, 0x138($a0)
    ctx->pc = 0x4dd54cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 312), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dd550: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4dd550u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dd554: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dd554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd558: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4dd558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4dd55c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4dd55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dd560: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dd560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dd564: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dd564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dd568: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4dd568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4dd56c: 0x94830136  lhu         $v1, 0x136($a0)
    ctx->pc = 0x4dd56cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 310)));
    // 0x4dd570: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4dd570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd574: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4dd574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4dd578: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd57c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DD57Cu;
    {
        const bool branch_taken_0x4dd57c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD57Cu;
        // 0x4dd580: 0x25871124  addiu       $a3, $t4, 0x1124 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd57c) {
            ctx->pc = 0x4DD590u;
            goto label_4dd590;
        }
    }
    ctx->pc = 0x4DD584u;
    // 0x4dd584: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4dd584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dd588: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4DD588u;
    {
        const bool branch_taken_0x4dd588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD588u;
        // 0x4dd58c: 0x3443ffff  ori         $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd588) {
            ctx->pc = 0x4DD598u;
            goto label_4dd598;
        }
    }
    ctx->pc = 0x4DD590u;
label_4dd590:
    // 0x4dd590: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4dd590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dd594: 0x491824  and         $v1, $v0, $t1
    ctx->pc = 0x4dd594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_4dd598:
    // 0x4dd598: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4dd598u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4dd59c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4dd59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4dd5a0: 0x24841128  addiu       $a0, $a0, 0x1128
    ctx->pc = 0x4dd5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x4dd5a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4dd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd5a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dd5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1128u));
    // 0x4dd5ac: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4dd5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4dd5b0: 0x95881124  lhu         $t0, 0x1124($t4)
    ctx->pc = 0x4dd5b0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4388)));
    // 0x4dd5b4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4dd5b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd5b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd5bc: 0x85460000  lh          $a2, 0x0($t2)
    ctx->pc = 0x4dd5bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dd5c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd5c4: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4dd5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dd5c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4dd5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4dd5cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd5d0: 0x82c00  sll         $a1, $t0, 16
    ctx->pc = 0x4dd5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4dd5d4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4dd5d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dd5d8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4dd5d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dd5dc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4dd5dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4dd5e0: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4dd5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4dd5e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd5e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dd5e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dd5ec: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4dd5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4dd5f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd5f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4dd5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4dd5f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd5fc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4dd5fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dd600: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4dd600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4dd604: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4dd604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4dd608: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd60c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4dd60cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4dd610: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4dd610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dd614: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4dd614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4dd618: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4dd618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4dd61c: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x4dd61cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x4dd620: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4dd620u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4dd624: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4dd624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dd628: 0x3e00008  jr          $ra
    ctx->pc = 0x4DD628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD628u;
        // 0x4dd62c: 0xa5620000  sh          $v0, 0x0($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DD630u;
}
