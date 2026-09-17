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

// Function: sub_004E4848
// Address: 0x4e4848 - 0x4e4a38
void sub_004E4848_0x4e4848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4848_0x4e4848");
#endif

    ctx->pc = 0x4e4848u;

    // 0x4e4848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e4848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e484c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4e484cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e4854: 0x24e301b4  addiu       $v1, $a3, 0x1B4
    ctx->pc = 0x4e4854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 436));
    // 0x4e4858: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4e4858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e485c: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4E485Cu;
    {
        const bool branch_taken_0x4e485c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E485Cu;
        // 0x4e4860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e485c) {
            ctx->pc = 0x4E4888u;
            goto label_4e4888;
        }
    }
    ctx->pc = 0x4E4864u;
    // 0x4e4864: 0xa4e0015e  sh          $zero, 0x15E($a3)
    ctx->pc = 0x4e4864u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e4868: 0xa4e2014a  sh          $v0, 0x14A($a3)
    ctx->pc = 0x4e4868u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e486c: 0xa4e00160  sh          $zero, 0x160($a3)
    ctx->pc = 0x4e486cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e4870: 0xa4e20162  sh          $v0, 0x162($a3)
    ctx->pc = 0x4e4870u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4874: 0xa4e2000e  sh          $v0, 0xE($a3)
    ctx->pc = 0x4e4874u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4878: 0xa4e001ba  sh          $zero, 0x1BA($a3)
    ctx->pc = 0x4e4878u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 442), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e487c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e487cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e4880: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e4880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e4884: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e4884u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e4888:
    // 0x4e4888: 0x8ce60140  lw          $a2, 0x140($a3)
    ctx->pc = 0x4e4888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 320)));
    // 0x4e488c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e4890: 0xac4611b4  sw          $a2, 0x11B4($v0)
    ctx->pc = 0x4e4890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F11B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11B4u, _value); } while (0);
    // 0x4e4894: 0x84c301b4  lh          $v1, 0x1B4($a2)
    ctx->pc = 0x4e4894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 436)));
    // 0x4e4898: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E4898u;
    {
        const bool branch_taken_0x4e4898 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4898u;
        // 0x4e489c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4898) {
            ctx->pc = 0x4E48A8u;
            goto label_4e48a8;
        }
    }
    ctx->pc = 0x4E48A0u;
    // 0x4e48a0: 0x8139308  j           func_4E4C20
    ctx->pc = 0x4E48A0u;
    ctx->pc = 0x4E48A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E48A0u;
    // 0x4e48a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C20u, 0x4E48A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E48A8u;
label_4e48a8:
    // 0x4e48a8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e48ac: 0x84c3016a  lh          $v1, 0x16A($a2)
    ctx->pc = 0x4e48acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 362)));
    // 0x4e48b0: 0x244811a0  addiu       $t0, $v0, 0x11A0
    ctx->pc = 0x4e48b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4512));
    // 0x4e48b4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4e48b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4e48b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11A0u));
    // 0x4e48bc: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4e48bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4e48c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e48c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e48c4: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x4e48c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e48c8: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4e48c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4e48cc: 0x84e3016a  lh          $v1, 0x16A($a3)
    ctx->pc = 0x4e48ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 362)));
    // 0x4e48d0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4e48d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e48d4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E48D4u;
    {
        const bool branch_taken_0x4e48d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e48d4) {
            ctx->pc = 0x4E48D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E48D4u;
            // 0x4e48d8: 0x24e6014a  addiu       $a2, $a3, 0x14A (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 330));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E48E8u;
            goto label_4e48e8;
        }
    }
    ctx->pc = 0x4E48DCu;
    // 0x4e48dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e48dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e48e0: 0x8139308  j           func_4E4C20
    ctx->pc = 0x4E48E0u;
    ctx->pc = 0x4E48E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E48E0u;
    // 0x4e48e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C20u, 0x4E48E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E48E8u;
label_4e48e8:
    // 0x4e48e8: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x4e48e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e48ec: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4e48ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e48f0: 0x24e901ba  addiu       $t1, $a3, 0x1BA
    ctx->pc = 0x4e48f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 442));
    // 0x4e48f4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4e48f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4e48f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e48f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e48fc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4e48fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4e4900: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4904: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4e4904u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e4908: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e4908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4e490c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4e490cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4e4910: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4914: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4e4914u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4e4918: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x4e4918u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e491c: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x4e491cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e4920: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4e4920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e4924: 0x952a0000  lhu         $t2, 0x0($t1)
    ctx->pc = 0x4e4924u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e4928: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x4e4928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4e492c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4e492cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4e4930: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x4e4930u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4e4934: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e4934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e4938: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4e4938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4e493c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4e493cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4e4940: 0x24c67de8  addiu       $a2, $a2, 0x7DE8
    ctx->pc = 0x4e4940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32232));
    // 0x4e4944: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4e4944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4e4948: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4e4948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e494c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E494Cu;
    {
        const bool branch_taken_0x4e494c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4E4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E494Cu;
        // 0x4e4950: 0x94c50000  lhu         $a1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e494c) {
            ctx->pc = 0x4E4960u;
            goto label_4e4960;
        }
    }
    ctx->pc = 0x4E4954u;
    // 0x4e4954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4958: 0x813926a  j           func_4E49A8
    ctx->pc = 0x4E4958u;
    ctx->pc = 0x4E495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4958u;
    // 0x4e495c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E49A8u;
    goto label_4e49a8;
    ctx->pc = 0x4E4960u;
label_4e4960:
    // 0x4e4960: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4e4960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e4964: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x4e4964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4e4968: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e4968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e496c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E496Cu;
    {
        const bool branch_taken_0x4e496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e496c) {
            ctx->pc = 0x4E4970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E496Cu;
            // 0x4e4970: 0x25420004  addiu       $v0, $t2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E4980u;
            goto label_4e4980;
        }
    }
    ctx->pc = 0x4E4974u;
    // 0x4e4974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4978: 0x813926a  j           func_4E49A8
    ctx->pc = 0x4E4978u;
    ctx->pc = 0x4E497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4978u;
    // 0x4e497c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E49A8u;
    goto label_4e49a8;
    ctx->pc = 0x4E4980u;
label_4e4980:
    // 0x4e4980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4984: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4e4984u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4988: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4e4988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e498c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e498cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e4990: 0xa4e20160  sh          $v0, 0x160($a3)
    ctx->pc = 0x4e4990u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4994: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4e4994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e4998: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x4e4998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x4e499c: 0xa4e20162  sh          $v0, 0x162($a3)
    ctx->pc = 0x4e499cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e49a0: 0x813926a  j           func_4E49A8
    ctx->pc = 0x4E49A0u;
    ctx->pc = 0x4E49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E49A0u;
    // 0x4e49a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E49A8u;
    goto label_4e49a8;
    ctx->pc = 0x4E49A8u;
label_4e49a8:
    // 0x4e49a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e49a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e49ac: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e49acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e49b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e49b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e49b4: 0x244811a8  addiu       $t0, $v0, 0x11A8
    ctx->pc = 0x4e49b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4520));
    // 0x4e49b8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4e49b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e49bc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e49bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e49c0: 0x84e50162  lh          $a1, 0x162($a3)
    ctx->pc = 0x4e49c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 354)));
    // 0x4e49c4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11A8u));
    // 0x4e49c8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4e49c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4e49cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e49ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e49d0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4e49d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4e49d4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4e49d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4e49d8: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4e49d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e49dc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E49DCu;
    {
        const bool branch_taken_0x4e49dc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E49DCu;
        // 0x4e49e0: 0x24e6015e  addiu       $a2, $a3, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e49dc) {
            ctx->pc = 0x4E49F0u;
            goto label_4e49f0;
        }
    }
    ctx->pc = 0x4E49E4u;
    // 0x4e49e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e49e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e49e8: 0x813930e  j           func_4E4C38
    ctx->pc = 0x4E49E8u;
    ctx->pc = 0x4E49ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E49E8u;
    // 0x4e49ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C38u, 0x4E49E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E49F0u;
label_4e49f0:
    // 0x4e49f0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e49f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e49f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4e49f8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4e49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e49fc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E49FCu;
    {
        const bool branch_taken_0x4e49fc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E49FCu;
        // 0x4e4a00: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e49fc) {
            ctx->pc = 0x4E4A10u;
            goto label_4e4a10;
        }
    }
    ctx->pc = 0x4E4A04u;
    // 0x4e4a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4a08: 0x813930e  j           func_4E4C38
    ctx->pc = 0x4E4A08u;
    ctx->pc = 0x4E4A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4A08u;
    // 0x4e4a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C38u, 0x4E4A08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E4A10u;
label_4e4a10:
    // 0x4e4a10: 0x94e20160  lhu         $v0, 0x160($a3)
    ctx->pc = 0x4e4a10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x4e4a14: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e4a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e4a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4a20: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4e4a20u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4a24: 0xac6011ac  sw          $zero, 0x11AC($v1)
    ctx->pc = 0x4e4a24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F11ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11ACu, _value); } while (0);
    // 0x4e4a28: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e4a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e4a2c: 0x8125e98  j           func_497A60
    ctx->pc = 0x4E4A2Cu;
    ctx->pc = 0x4E4A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4A2Cu;
    // 0x4e4a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497A60u, 0x4E4A2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E4A34u;
    // 0x4e4a34: 0x0  nop
    ctx->pc = 0x4e4a34u;
    // NOP
    ctx->pc = 0x4e4a38u;
}
