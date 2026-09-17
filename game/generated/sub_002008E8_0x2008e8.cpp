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

// Function: sub_002008E8
// Address: 0x2008e8 - 0x2009d0
void sub_002008E8_0x2008e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002008E8_0x2008e8");
#endif

    switch (ctx->pc) {
        case 0x200910u: goto label_200910;
        case 0x20091cu: goto label_20091c;
        case 0x200928u: goto label_200928;
        case 0x200930u: goto label_200930;
        case 0x20094cu: goto label_20094c;
        case 0x200958u: goto label_200958;
        case 0x200960u: goto label_200960;
        case 0x200978u: goto label_200978;
        case 0x200998u: goto label_200998;
        case 0x2009a4u: goto label_2009a4;
        default: break;
    }

    ctx->pc = 0x2008e8u;

    // 0x2008e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2008ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2008ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2008f0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2008f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2008f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2008f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2008f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2008f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2008fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2008fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200904: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x200904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x200908: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x200908u;
    SET_GPR_U32(ctx, 31, 0x200910u);
    ctx->pc = 0x20090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200908u;
    // 0x20090c: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x200908u, 0x200910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200910u;
label_200910:
    // 0x200910: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200914: 0xc09d486  jal         func_275218
    ctx->pc = 0x200914u;
    SET_GPR_U32(ctx, 31, 0x20091Cu);
    ctx->pc = 0x200918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200914u;
    // 0x200918: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x200914u, 0x20091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20091Cu;
label_20091c:
    // 0x20091c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20091cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200920: 0xc080216  jal         func_200858
    ctx->pc = 0x200920u;
    SET_GPR_U32(ctx, 31, 0x200928u);
    ctx->pc = 0x200924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200920u;
    // 0x200924: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200858u, 0x200920u, 0x200928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200928u;
label_200928:
    // 0x200928: 0xc080216  jal         func_200858
    ctx->pc = 0x200928u;
    SET_GPR_U32(ctx, 31, 0x200930u);
    ctx->pc = 0x20092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200928u;
    // 0x20092c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200858u, 0x200928u, 0x200930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200930u;
label_200930:
    // 0x200930: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x200930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x200934: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x200934u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x200938: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x200938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20093c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x20093Cu;
    {
        const bool branch_taken_0x20093c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20093c) {
            ctx->pc = 0x200988u;
            goto label_200988;
        }
    }
    ctx->pc = 0x200944u;
    // 0x200944: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x200944u;
    SET_GPR_U32(ctx, 31, 0x20094Cu);
    ctx->pc = 0x200948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200944u;
    // 0x200948: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x200944u, 0x20094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20094Cu;
label_20094c:
    // 0x20094c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200950: 0xc09d480  jal         func_275200
    ctx->pc = 0x200950u;
    SET_GPR_U32(ctx, 31, 0x200958u);
    ctx->pc = 0x200954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200950u;
    // 0x200954: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x200950u, 0x200958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200958u;
label_200958:
    // 0x200958: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x200958u;
    {
        const bool branch_taken_0x200958 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x20095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200958u;
        // 0x20095c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200958) {
            ctx->pc = 0x200988u;
            goto label_200988;
        }
    }
    ctx->pc = 0x200960u;
label_200960:
    // 0x200960: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x200960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x200964: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x200964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x200968: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x200968u;
    {
        const bool branch_taken_0x200968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200968) {
            ctx->pc = 0x20096Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200968u;
            // 0x20096c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20097Cu;
            goto label_20097c;
        }
    }
    ctx->pc = 0x200970u;
    // 0x200970: 0xc080216  jal         func_200858
    ctx->pc = 0x200970u;
    SET_GPR_U32(ctx, 31, 0x200978u);
    ctx->pc = 0x200974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200970u;
    // 0x200974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200858u, 0x200970u, 0x200978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200978u;
label_200978:
    // 0x200978: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x200978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20097c:
    // 0x20097c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x20097cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x200980: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x200980u;
    {
        const bool branch_taken_0x200980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200980u;
        // 0x200984: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200980) {
            ctx->pc = 0x200960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200960;
        }
    }
    ctx->pc = 0x200988u;
label_200988:
    // 0x200988: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x200988u;
    {
        const bool branch_taken_0x200988 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x20098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200988u;
        // 0x20098c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200988) {
            ctx->pc = 0x2009B0u;
            goto label_2009b0;
        }
    }
    ctx->pc = 0x200990u;
    // 0x200990: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200994: 0x0  nop
    ctx->pc = 0x200994u;
    // NOP
label_200998:
    // 0x200998: 0x267308d0  addiu       $s3, $s3, 0x8D0
    ctx->pc = 0x200998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
    // 0x20099c: 0xc080216  jal         func_200858
    ctx->pc = 0x20099Cu;
    SET_GPR_U32(ctx, 31, 0x2009A4u);
    ctx->pc = 0x2009A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20099Cu;
    // 0x2009a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200858u, 0x20099Cu, 0x2009A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009A4u;
label_2009a4:
    // 0x2009a4: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x2009a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2009a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2009A8u;
    {
        const bool branch_taken_0x2009a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2009ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009A8u;
        // 0x2009ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009a8) {
            ctx->pc = 0x200998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200998;
        }
    }
    ctx->pc = 0x2009B0u;
label_2009b0:
    // 0x2009b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2009b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2009b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2009b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2009b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2009b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2009bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2009bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2009c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2009c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2009c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2009c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2009c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2009C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2009CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009C8u;
        // 0x2009cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2009C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2009D0u;
}
