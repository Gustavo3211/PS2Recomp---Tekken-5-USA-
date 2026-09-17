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

// Function: sub_002E3390
// Address: 0x2e3390 - 0x2e3618
void sub_002E3390_0x2e3390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3390_0x2e3390");
#endif

    switch (ctx->pc) {
        case 0x2e33d8u: goto label_2e33d8;
        case 0x2e3438u: goto label_2e3438;
        case 0x2e34b0u: goto label_2e34b0;
        case 0x2e3548u: goto label_2e3548;
        case 0x2e35c0u: goto label_2e35c0;
        default: break;
    }

    ctx->pc = 0x2e3390u;

    // 0x2e3390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e3390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e3394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e3398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e339c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e33a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e33a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e33a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e33a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e33a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e33a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e33ac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e33acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2e33b0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2e33b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2e33b4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2e33b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2e33b8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2e33b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2e33bc: 0x8c960084  lw          $s6, 0x84($a0)
    ctx->pc = 0x2e33bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2e33c0: 0x12c00088  beqz        $s6, . + 4 + (0x88 << 2)
    ctx->pc = 0x2E33C0u;
    {
        const bool branch_taken_0x2e33c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E33C0u;
        // 0x2e33c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33c0) {
            ctx->pc = 0x2E35E4u;
            goto label_2e35e4;
        }
    }
    ctx->pc = 0x2E33C8u;
    // 0x2e33c8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2e33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e33cc: 0x245e08b7  addiu       $fp, $v0, 0x8B7
    ctx->pc = 0x2e33ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2231));
    // 0x2e33d0: 0x3d31821  addu        $v1, $fp, $s3
    ctx->pc = 0x2e33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x2e33d4: 0x0  nop
    ctx->pc = 0x2e33d4u;
    // NOP
label_2e33d8:
    // 0x2e33d8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2e33d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e33dc: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x2e33dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2e33e0: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2e33e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e33e4: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2E33E4u;
    {
        const bool branch_taken_0x2e33e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e33e4) {
            ctx->pc = 0x2E33E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E33E4u;
            // 0x2e33e8: 0x96c30002  lhu         $v1, 0x2($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E34D0u;
            goto label_2e34d0;
        }
    }
    ctx->pc = 0x2E33ECu;
    // 0x2e33ec: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2e33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2e33f0: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x2e33f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x2e33f4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2e33f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2e33f8: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x2E33F8u;
    {
        const bool branch_taken_0x2e33f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E33F8u;
        // 0x2e33fc: 0x2457fff0  addiu       $s7, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33f8) {
            ctx->pc = 0x2E35D4u;
            goto label_2e35d4;
        }
    }
    ctx->pc = 0x2E3400u;
    // 0x2e3400: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x2e3400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e3404: 0x50400074  beql        $v0, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x2E3404u;
    {
        const bool branch_taken_0x2e3404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3404) {
            ctx->pc = 0x2E3408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3404u;
            // 0x2e3408: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E35D8u;
            goto label_2e35d8;
        }
    }
    ctx->pc = 0x2E340Cu;
    // 0x2e340c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2e340cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e3410: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e3410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e3414: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e3414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e3418: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x2e3418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2e341c: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x2e341cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2e3420: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2e3420u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e3424: 0x1840006b  blez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2E3424u;
    {
        const bool branch_taken_0x2e3424 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3424u;
        // 0x2e3428: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3424) {
            ctx->pc = 0x2E35D4u;
            goto label_2e35d4;
        }
    }
    ctx->pc = 0x2E342Cu;
    // 0x2e342c: 0x2472000c  addiu       $s2, $v1, 0xC
    ctx->pc = 0x2e342cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2e3430: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e3430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3434: 0x0  nop
    ctx->pc = 0x2e3434u;
    // NOP
label_2e3438:
    // 0x2e3438: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2e3438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e343c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e3440: 0x2c830009  sltiu       $v1, $a0, 0x9
    ctx->pc = 0x2e3440u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e3444: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3444u;
    {
        const bool branch_taken_0x2e3444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3444u;
        // 0x2e3448: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3444) {
            ctx->pc = 0x2E3450u;
            goto label_2e3450;
        }
    }
    ctx->pc = 0x2E344Cu;
    // 0x2e344c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x2e344cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2e3450:
    // 0x2e3450: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2e3450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e3454: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2e3454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e3458: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e3458u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e345c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E345Cu;
    {
        const bool branch_taken_0x2e345c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E345Cu;
        // 0x2e3460: 0x82182a  slt         $v1, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e345c) {
            ctx->pc = 0x2E3470u;
            goto label_2e3470;
        }
    }
    ctx->pc = 0x2E3464u;
    // 0x2e3464: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E3464u;
    {
        const bool branch_taken_0x2e3464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3464u;
        // 0x2e3468: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3464) {
            ctx->pc = 0x2E34A4u;
            goto label_2e34a4;
        }
    }
    ctx->pc = 0x2E346Cu;
    // 0x2e346c: 0x0  nop
    ctx->pc = 0x2e346cu;
    // NOP
label_2e3470:
    // 0x2e3470: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3470u;
    {
        const bool branch_taken_0x2e3470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3470) {
            ctx->pc = 0x2E3474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3470u;
            // 0x2e3474: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3488u;
            goto label_2e3488;
        }
    }
    ctx->pc = 0x2E3478u;
    // 0x2e3478: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e3478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e347c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E347Cu;
    {
        const bool branch_taken_0x2e347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E347Cu;
        // 0x2e3480: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e347c) {
            ctx->pc = 0x2E349Cu;
            goto label_2e349c;
        }
    }
    ctx->pc = 0x2E3484u;
    // 0x2e3484: 0x0  nop
    ctx->pc = 0x2e3484u;
    // NOP
label_2e3488:
    // 0x2e3488: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3488u;
    {
        const bool branch_taken_0x2e3488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3488) {
            ctx->pc = 0x2E348Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3488u;
            // 0x2e348c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E34A8u;
            goto label_2e34a8;
        }
    }
    ctx->pc = 0x2E3490u;
    // 0x2e3490: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e3490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e3494: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2e3494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2e3498: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e3498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2e349c:
    // 0x2e349c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e34a0: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x2e34a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2e34a4:
    // 0x2e34a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e34a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e34a8:
    // 0x2e34a8: 0xc0c82f4  jal         func_320BD0
    ctx->pc = 0x2E34A8u;
    SET_GPR_U32(ctx, 31, 0x2E34B0u);
    ctx->pc = 0x2E34ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E34A8u;
    // 0x2e34ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320BD0u, 0x2E34A8u, 0x2E34B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E34B0u;
label_2e34b0:
    // 0x2e34b0: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2e34b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e34b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e34b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e34b8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2e34b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e34bc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E34BCu;
    {
        const bool branch_taken_0x2e34bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34BCu;
        // 0x2e34c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34bc) {
            ctx->pc = 0x2E3438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3438;
        }
    }
    ctx->pc = 0x2E34C4u;
    // 0x2e34c4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2E34C4u;
    {
        const bool branch_taken_0x2e34c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34C4u;
        // 0x2e34c8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34c4) {
            ctx->pc = 0x2E35D8u;
            goto label_2e35d8;
        }
    }
    ctx->pc = 0x2E34CCu;
    // 0x2e34cc: 0x0  nop
    ctx->pc = 0x2e34ccu;
    // NOP
label_2e34d0:
    // 0x2e34d0: 0x3d31021  addu        $v0, $fp, $s3
    ctx->pc = 0x2e34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x2e34d4: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2E34D4u;
    {
        const bool branch_taken_0x2e34d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34D4u;
        // 0x2e34d8: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34d4) {
            ctx->pc = 0x2E35D4u;
            goto label_2e35d4;
        }
    }
    ctx->pc = 0x2E34DCu;
    // 0x2e34dc: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x2e34dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e34e0: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x2E34E0u;
    {
        const bool branch_taken_0x2e34e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e34e0) {
            ctx->pc = 0x2E34E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E34E0u;
            // 0x2e34e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E35D8u;
            goto label_2e35d8;
        }
    }
    ctx->pc = 0x2E34E8u;
    // 0x2e34e8: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x2e34e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e34ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e34ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e34f0: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x2e34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2e34f4: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2e34f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e34f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e34fc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2e34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2e3500: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3500u;
    {
        const bool branch_taken_0x2e3500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3500u;
        // 0x2e3504: 0x84420004  lh          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3500) {
            ctx->pc = 0x2E3510u;
            goto label_2e3510;
        }
    }
    ctx->pc = 0x2E3508u;
    // 0x2e3508: 0x6230003  bgezl       $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3508u;
    {
        const bool branch_taken_0x2e3508 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2e3508) {
            ctx->pc = 0x2E350Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3508u;
            // 0x2e350c: 0x222102a  slt         $v0, $s1, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3518u;
            goto label_2e3518;
        }
    }
    ctx->pc = 0x2E3510u;
label_2e3510:
    // 0x2e3510: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3510u;
    {
        const bool branch_taken_0x2e3510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3510u;
        // 0x2e3514: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3510) {
            ctx->pc = 0x2E3524u;
            goto label_2e3524;
        }
    }
    ctx->pc = 0x2E3518u;
label_2e3518:
    // 0x2e3518: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2e3518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e351c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2e351cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2e3520: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2e3520u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2e3524:
    // 0x2e3524: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x2e3524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2e3528: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e3528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e352c: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x2e352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2e3530: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x2e3530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2e3534: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2e3534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e3538: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2E3538u;
    {
        const bool branch_taken_0x2e3538 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3538u;
        // 0x2e353c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3538) {
            ctx->pc = 0x2E35D4u;
            goto label_2e35d4;
        }
    }
    ctx->pc = 0x2E3540u;
    // 0x2e3540: 0x2477000c  addiu       $s7, $v1, 0xC
    ctx->pc = 0x2e3540u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2e3544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e3548:
    // 0x2e3548: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2e3548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2e354c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2e354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2e3550: 0x2c830009  sltiu       $v1, $a0, 0x9
    ctx->pc = 0x2e3550u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e3554: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3554u;
    {
        const bool branch_taken_0x2e3554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3554u;
        // 0x2e3558: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3554) {
            ctx->pc = 0x2E3560u;
            goto label_2e3560;
        }
    }
    ctx->pc = 0x2E355Cu;
    // 0x2e355c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x2e355cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2e3560:
    // 0x2e3560: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2e3560u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e3564: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2e3564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e3568: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e3568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e356c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E356Cu;
    {
        const bool branch_taken_0x2e356c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E356Cu;
        // 0x2e3570: 0x82182a  slt         $v1, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e356c) {
            ctx->pc = 0x2E3580u;
            goto label_2e3580;
        }
    }
    ctx->pc = 0x2E3574u;
    // 0x2e3574: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E3574u;
    {
        const bool branch_taken_0x2e3574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3574u;
        // 0x2e3578: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3574) {
            ctx->pc = 0x2E35B4u;
            goto label_2e35b4;
        }
    }
    ctx->pc = 0x2E357Cu;
    // 0x2e357c: 0x0  nop
    ctx->pc = 0x2e357cu;
    // NOP
label_2e3580:
    // 0x2e3580: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3580u;
    {
        const bool branch_taken_0x2e3580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3580) {
            ctx->pc = 0x2E3584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3580u;
            // 0x2e3584: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3598u;
            goto label_2e3598;
        }
    }
    ctx->pc = 0x2E3588u;
    // 0x2e3588: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e3588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e358c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E358Cu;
    {
        const bool branch_taken_0x2e358c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E358Cu;
        // 0x2e3590: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e358c) {
            ctx->pc = 0x2E35ACu;
            goto label_2e35ac;
        }
    }
    ctx->pc = 0x2E3594u;
    // 0x2e3594: 0x0  nop
    ctx->pc = 0x2e3594u;
    // NOP
label_2e3598:
    // 0x2e3598: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3598u;
    {
        const bool branch_taken_0x2e3598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3598) {
            ctx->pc = 0x2E359Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3598u;
            // 0x2e359c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E35B8u;
            goto label_2e35b8;
        }
    }
    ctx->pc = 0x2E35A0u;
    // 0x2e35a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e35a4: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2e35a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2e35a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2e35ac:
    // 0x2e35ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e35acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e35b0: 0x44a821  addu        $s5, $v0, $a0
    ctx->pc = 0x2e35b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2e35b4:
    // 0x2e35b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e35b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e35b8:
    // 0x2e35b8: 0xc0c82f4  jal         func_320BD0
    ctx->pc = 0x2E35B8u;
    SET_GPR_U32(ctx, 31, 0x2E35C0u);
    ctx->pc = 0x2E35BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E35B8u;
    // 0x2e35bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320BD0u, 0x2E35B8u, 0x2E35C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E35C0u;
label_2e35c0:
    // 0x2e35c0: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2e35c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e35c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e35c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e35c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2e35c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e35cc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E35CCu;
    {
        const bool branch_taken_0x2e35cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E35D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35CCu;
        // 0x2e35d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35cc) {
            ctx->pc = 0x2E3548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3548;
        }
    }
    ctx->pc = 0x2E35D4u;
label_2e35d4:
    // 0x2e35d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e35d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2e35d8:
    // 0x2e35d8: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x2e35d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e35dc: 0x1440ff7e  bnez        $v0, . + 4 + (-0x82 << 2)
    ctx->pc = 0x2E35DCu;
    {
        const bool branch_taken_0x2e35dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35DCu;
        // 0x2e35e0: 0x3d31821  addu        $v1, $fp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35dc) {
            ctx->pc = 0x2E33D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e33d8;
        }
    }
    ctx->pc = 0x2E35E4u;
label_2e35e4:
    // 0x2e35e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e35e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e35e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e35e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e35ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e35ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e35f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e35f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e35f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e35f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e35f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e35f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e35fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e35fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3600: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2e3600u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e3604: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2e3604u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3608: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2e3608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e360c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E360Cu;
        // 0x2e3610: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E360Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3614u;
    // 0x2e3614: 0x0  nop
    ctx->pc = 0x2e3614u;
    // NOP
    ctx->pc = 0x2e3618u;
}
