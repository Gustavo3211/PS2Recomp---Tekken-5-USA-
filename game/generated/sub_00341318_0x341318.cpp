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

// Function: sub_00341318
// Address: 0x341318 - 0x341410
void sub_00341318_0x341318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341318_0x341318");
#endif

    switch (ctx->pc) {
        case 0x341318u: goto label_341318;
        case 0x34131cu: goto label_34131c;
        case 0x341320u: goto label_341320;
        case 0x341324u: goto label_341324;
        case 0x341328u: goto label_341328;
        case 0x34132cu: goto label_34132c;
        case 0x341330u: goto label_341330;
        case 0x341334u: goto label_341334;
        case 0x341338u: goto label_341338;
        case 0x34133cu: goto label_34133c;
        case 0x341340u: goto label_341340;
        case 0x341344u: goto label_341344;
        case 0x341348u: goto label_341348;
        case 0x34134cu: goto label_34134c;
        case 0x341350u: goto label_341350;
        case 0x341354u: goto label_341354;
        case 0x341358u: goto label_341358;
        case 0x34135cu: goto label_34135c;
        case 0x341360u: goto label_341360;
        case 0x341364u: goto label_341364;
        case 0x341368u: goto label_341368;
        case 0x34136cu: goto label_34136c;
        case 0x341370u: goto label_341370;
        case 0x341374u: goto label_341374;
        case 0x341378u: goto label_341378;
        case 0x34137cu: goto label_34137c;
        case 0x341380u: goto label_341380;
        case 0x341384u: goto label_341384;
        case 0x341388u: goto label_341388;
        case 0x34138cu: goto label_34138c;
        case 0x341390u: goto label_341390;
        case 0x341394u: goto label_341394;
        case 0x341398u: goto label_341398;
        case 0x34139cu: goto label_34139c;
        case 0x3413a0u: goto label_3413a0;
        case 0x3413a4u: goto label_3413a4;
        case 0x3413a8u: goto label_3413a8;
        case 0x3413acu: goto label_3413ac;
        case 0x3413b0u: goto label_3413b0;
        case 0x3413b4u: goto label_3413b4;
        case 0x3413b8u: goto label_3413b8;
        case 0x3413bcu: goto label_3413bc;
        case 0x3413c0u: goto label_3413c0;
        case 0x3413c4u: goto label_3413c4;
        case 0x3413c8u: goto label_3413c8;
        case 0x3413ccu: goto label_3413cc;
        case 0x3413d0u: goto label_3413d0;
        case 0x3413d4u: goto label_3413d4;
        case 0x3413d8u: goto label_3413d8;
        case 0x3413dcu: goto label_3413dc;
        case 0x3413e0u: goto label_3413e0;
        case 0x3413e4u: goto label_3413e4;
        case 0x3413e8u: goto label_3413e8;
        case 0x3413ecu: goto label_3413ec;
        case 0x3413f0u: goto label_3413f0;
        case 0x3413f4u: goto label_3413f4;
        case 0x3413f8u: goto label_3413f8;
        case 0x3413fcu: goto label_3413fc;
        case 0x341400u: goto label_341400;
        case 0x341404u: goto label_341404;
        case 0x341408u: goto label_341408;
        case 0x34140cu: goto label_34140c;
        default: break;
    }

    ctx->pc = 0x341318u;

label_341318:
    // 0x341318: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x341318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_34131c:
    // 0x34131c: 0x24a4001e  addiu       $a0, $a1, 0x1E
    ctx->pc = 0x34131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
label_341320:
    // 0x341320: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x341320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_341324:
    // 0x341324: 0x0  nop
    ctx->pc = 0x341324u;
    // NOP
label_341328:
    // 0x341328: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x341328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_34132c:
    // 0x34132c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_341330:
    // 0x341330: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x341330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_341334:
    // 0x341334: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x341334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_341338:
    // 0x341338: 0x0  nop
    ctx->pc = 0x341338u;
    // NOP
label_34133c:
    // 0x34133c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
label_341340:
    if (ctx->pc == 0x341340u) {
        ctx->pc = 0x341340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34133Cu;
        // 0x341340: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341344u;
        goto label_341344;
    }
    ctx->pc = 0x34133Cu;
    {
        const bool branch_taken_0x34133c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x341340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34133Cu;
        // 0x341340: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34133c) {
            ctx->pc = 0x341328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341328;
        }
    }
    ctx->pc = 0x341344u;
label_341344:
    // 0x341344: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x341344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_341348:
    // 0x341348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34134c:
    // 0x34134c: 0xa0a30027  sb          $v1, 0x27($a1)
    ctx->pc = 0x34134cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 39), (uint8_t)GPR_U32(ctx, 3));
label_341350:
    // 0x341350: 0x3e00008  jr          $ra
label_341354:
    if (ctx->pc == 0x341354u) {
        ctx->pc = 0x341354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341350u;
        // 0x341354: 0xa0a30026  sb          $v1, 0x26($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341358u;
        goto label_341358;
    }
    ctx->pc = 0x341350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341350u;
        // 0x341354: 0xa0a30026  sb          $v1, 0x26($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341358u;
label_341358:
    // 0x341358: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x341358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34135c:
    // 0x34135c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_341360:
    // 0x341360: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x341360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341364:
    // 0x341364: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x341364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_341368:
    // 0x341368: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x341368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34136c:
    // 0x34136c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x34136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_341370:
    // 0x341370: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x341370u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_341374:
    // 0x341374: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x341374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_341378:
    // 0x341378: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x341378u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34137c:
    // 0x34137c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34137cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_341380:
    // 0x341380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x341380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_341384:
    // 0x341384: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x341384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_341388:
    // 0x341388: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x341388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_34138c:
    // 0x34138c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34138cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_341390:
    // 0x341390: 0x9695000a  lhu         $s5, 0xA($s4)
    ctx->pc = 0x341390u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_341394:
    // 0x341394: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_341398:
    if (ctx->pc == 0x341398u) {
        ctx->pc = 0x341398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341394u;
        // 0x341398: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34139Cu;
        goto label_34139c;
    }
    ctx->pc = 0x341394u;
    {
        const bool branch_taken_0x341394 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x341398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341394u;
        // 0x341398: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341394) {
            ctx->pc = 0x3413E0u;
            goto label_3413e0;
        }
    }
    ctx->pc = 0x34139Cu;
label_34139c:
    // 0x34139c: 0x0  nop
    ctx->pc = 0x34139cu;
    // NOP
label_3413a0:
    // 0x3413a0: 0x94b20002  lhu         $s2, 0x2($a1)
    ctx->pc = 0x3413a0u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3413a4:
    // 0x3413a4: 0x24b00018  addiu       $s0, $a1, 0x18
    ctx->pc = 0x3413a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_3413a8:
    // 0x3413a8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_3413ac:
    if (ctx->pc == 0x3413ACu) {
        ctx->pc = 0x3413ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413A8u;
        // 0x3413ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3413B0u;
        goto label_3413b0;
    }
    ctx->pc = 0x3413A8u;
    {
        const bool branch_taken_0x3413a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3413ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413A8u;
        // 0x3413ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3413a8) {
            ctx->pc = 0x3413D0u;
            goto label_3413d0;
        }
    }
    ctx->pc = 0x3413B0u;
label_3413b0:
    // 0x3413b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3413b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3413b4:
    // 0x3413b4: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x3413b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_3413b8:
    // 0x3413b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3413b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3413bc:
    // 0x3413bc: 0x2c0f809  jalr        $s6
label_3413c0:
    if (ctx->pc == 0x3413C0u) {
        ctx->pc = 0x3413C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413BCu;
        // 0x3413c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3413C4u;
        goto label_3413c4;
    }
    ctx->pc = 0x3413BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x3413C4u);
        ctx->pc = 0x3413C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413BCu;
        // 0x3413c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3413BCu, 0x3413C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3413C4u;
label_3413c4:
    // 0x3413c4: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x3413c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3413c8:
    // 0x3413c8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3413cc:
    if (ctx->pc == 0x3413CCu) {
        ctx->pc = 0x3413CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413C8u;
        // 0x3413cc: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3413D0u;
        goto label_3413d0;
    }
    ctx->pc = 0x3413C8u;
    {
        const bool branch_taken_0x3413c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3413CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413C8u;
        // 0x3413cc: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3413c8) {
            ctx->pc = 0x3413B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3413b0;
        }
    }
    ctx->pc = 0x3413D0u;
label_3413d0:
    // 0x3413d0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3413d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3413d4:
    // 0x3413d4: 0x2f5102b  sltu        $v0, $s7, $s5
    ctx->pc = 0x3413d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_3413d8:
    // 0x3413d8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3413dc:
    if (ctx->pc == 0x3413DCu) {
        ctx->pc = 0x3413DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413D8u;
        // 0x3413dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3413E0u;
        goto label_3413e0;
    }
    ctx->pc = 0x3413D8u;
    {
        const bool branch_taken_0x3413d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3413DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413D8u;
        // 0x3413dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3413d8) {
            ctx->pc = 0x3413A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3413a0;
        }
    }
    ctx->pc = 0x3413E0u;
label_3413e0:
    // 0x3413e0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3413e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3413e4:
    // 0x3413e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3413e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3413e8:
    // 0x3413e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3413e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3413ec:
    // 0x3413ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3413ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3413f0:
    // 0x3413f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3413f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3413f4:
    // 0x3413f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3413f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3413f8:
    // 0x3413f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3413f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3413fc:
    // 0x3413fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3413fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_341400:
    // 0x341400: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x341400u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_341404:
    // 0x341404: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x341404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_341408:
    // 0x341408: 0x3e00008  jr          $ra
label_34140c:
    if (ctx->pc == 0x34140Cu) {
        ctx->pc = 0x34140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341408u;
        // 0x34140c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341410u;
        goto label_fallthrough_0x341408;
    }
    ctx->pc = 0x341408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341408u;
        // 0x34140c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x341408:
    ctx->pc = 0x341410u;
}
