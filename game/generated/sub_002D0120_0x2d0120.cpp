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

// Function: sub_002D0120
// Address: 0x2d0120 - 0x2d0198
void sub_002D0120_0x2d0120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0120_0x2d0120");
#endif

    switch (ctx->pc) {
        case 0x2d0148u: goto label_2d0148;
        case 0x2d0168u: goto label_2d0168;
        default: break;
    }

    ctx->pc = 0x2d0120u;

    // 0x2d0120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0128: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d0128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d012c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d012cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0130: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d0130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d0134: 0x24120141  addiu       $s2, $zero, 0x141
    ctx->pc = 0x2d0134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x2d0138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d013c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d0140: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2d0140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d0144: 0x0  nop
    ctx->pc = 0x2d0144u;
    // NOP
label_2d0148:
    // 0x2d0148: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2d0148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d014c: 0x5052000b  beql        $v0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2D014Cu;
    {
        const bool branch_taken_0x2d014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2d014c) {
            ctx->pc = 0x2D0150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D014Cu;
            // 0x2d0150: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D017Cu;
            goto label_2d017c;
        }
    }
    ctx->pc = 0x2D0154u;
    // 0x2d0154: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0154u;
    {
        const bool branch_taken_0x2d0154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0154u;
        // 0x2d0158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0154) {
            ctx->pc = 0x2D016Cu;
            goto label_2d016c;
        }
    }
    ctx->pc = 0x2D015Cu;
    // 0x2d015c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0160: 0xc0b3f72  jal         func_2CFDC8
    ctx->pc = 0x2D0160u;
    SET_GPR_U32(ctx, 31, 0x2D0168u);
    ctx->pc = 0x2D0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0160u;
    // 0x2d0164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFDC8u, 0x2D0160u, 0x2D0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0168u;
label_2d0168:
    // 0x2d0168: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d0168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d016c:
    // 0x2d016c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d016cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0170: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D0170u;
    {
        const bool branch_taken_0x2d0170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0170u;
        // 0x2d0174: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0170) {
            ctx->pc = 0x2D0148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0148;
        }
    }
    ctx->pc = 0x2D0178u;
    // 0x2d0178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d017c:
    // 0x2d017c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d017cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d0180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0184: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d0184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0188: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d0188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d018c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D018Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D018Cu;
        // 0x2d0190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D018Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0194u;
    // 0x2d0194: 0x0  nop
    ctx->pc = 0x2d0194u;
    // NOP
    ctx->pc = 0x2d0198u;
}
