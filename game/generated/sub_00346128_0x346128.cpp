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

// Function: sub_00346128
// Address: 0x346128 - 0x3461d0
void sub_00346128_0x346128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346128_0x346128");
#endif

    switch (ctx->pc) {
        case 0x346150u: goto label_346150;
        case 0x346164u: goto label_346164;
        case 0x346180u: goto label_346180;
        case 0x346190u: goto label_346190;
        case 0x3461a0u: goto label_3461a0;
        default: break;
    }

    ctx->pc = 0x346128u;

    // 0x346128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34612c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346134: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x346134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x346138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34613c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x346140: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x346140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x346144: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x346144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x346148: 0xc0d2436  jal         func_3490D8
    ctx->pc = 0x346148u;
    SET_GPR_U32(ctx, 31, 0x346150u);
    ctx->pc = 0x34614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346148u;
    // 0x34614c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3490D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3490D8u, 0x346148u, 0x346150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346150u;
label_346150:
    // 0x346150: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x346150u;
    {
        const bool branch_taken_0x346150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346150) {
            ctx->pc = 0x346154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346150u;
            // 0x346154: 0x96320002  lhu         $s2, 0x2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346170u;
            goto label_346170;
        }
    }
    ctx->pc = 0x346158u;
    // 0x346158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34615c: 0xc0d2404  jal         func_349010
    ctx->pc = 0x34615Cu;
    SET_GPR_U32(ctx, 31, 0x346164u);
    ctx->pc = 0x346160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34615Cu;
    // 0x346160: 0x94850002  lhu         $a1, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349010u, 0x34615Cu, 0x346164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346164u;
label_346164:
    // 0x346164: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x346164u;
    {
        const bool branch_taken_0x346164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346164u;
        // 0x346168: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346164) {
            ctx->pc = 0x3461B4u;
            goto label_3461b4;
        }
    }
    ctx->pc = 0x34616Cu;
    // 0x34616c: 0x0  nop
    ctx->pc = 0x34616cu;
    // NOP
label_346170:
    // 0x346170: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x346170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x346174: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x346174u;
    {
        const bool branch_taken_0x346174 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x346178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346174u;
        // 0x346178: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346174) {
            ctx->pc = 0x3461ACu;
            goto label_3461ac;
        }
    }
    ctx->pc = 0x34617Cu;
    // 0x34617c: 0x0  nop
    ctx->pc = 0x34617cu;
    // NOP
label_346180:
    // 0x346180: 0xce000028  pref        0x00, 0x28($s0)
    ctx->pc = 0x346180u;
    // PREF instruction (ignored)
    // 0x346184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346188: 0xc0d2476  jal         func_3491D8
    ctx->pc = 0x346188u;
    SET_GPR_U32(ctx, 31, 0x346190u);
    ctx->pc = 0x34618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346188u;
    // 0x34618c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3491D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3491D8u, 0x346188u, 0x346190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346190u;
label_346190:
    // 0x346190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x346194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346198: 0xc0d181a  jal         func_346068
    ctx->pc = 0x346198u;
    SET_GPR_U32(ctx, 31, 0x3461A0u);
    ctx->pc = 0x34619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346198u;
    // 0x34619c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346068u, 0x346198u, 0x3461A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3461A0u;
label_3461a0:
    // 0x3461a0: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x3461a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3461a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3461A4u;
    {
        const bool branch_taken_0x3461a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3461A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461A4u;
        // 0x3461a8: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3461a4) {
            ctx->pc = 0x346180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346180;
        }
    }
    ctx->pc = 0x3461ACu;
label_3461ac:
    // 0x3461ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3461acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3461b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3461b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3461b4:
    // 0x3461b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3461b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3461b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3461b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3461bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3461bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3461c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3461c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3461c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3461c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3461c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3461C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3461CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461C8u;
        // 0x3461cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3461C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3461D0u;
}
