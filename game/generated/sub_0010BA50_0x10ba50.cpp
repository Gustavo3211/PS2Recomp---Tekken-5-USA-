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

// Function: sub_0010BA50
// Address: 0x10ba50 - 0x10ba98
void sub_0010BA50_0x10ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BA50_0x10ba50");
#endif

    switch (ctx->pc) {
        case 0x10ba50u: goto label_10ba50;
        case 0x10ba54u: goto label_10ba54;
        case 0x10ba58u: goto label_10ba58;
        case 0x10ba5cu: goto label_10ba5c;
        case 0x10ba60u: goto label_10ba60;
        case 0x10ba64u: goto label_10ba64;
        case 0x10ba68u: goto label_10ba68;
        case 0x10ba6cu: goto label_10ba6c;
        case 0x10ba70u: goto label_10ba70;
        case 0x10ba74u: goto label_10ba74;
        case 0x10ba78u: goto label_10ba78;
        case 0x10ba7cu: goto label_10ba7c;
        case 0x10ba80u: goto label_10ba80;
        case 0x10ba84u: goto label_10ba84;
        case 0x10ba88u: goto label_10ba88;
        case 0x10ba8cu: goto label_10ba8c;
        case 0x10ba90u: goto label_10ba90;
        case 0x10ba94u: goto label_10ba94;
        default: break;
    }

    ctx->pc = 0x10ba50u;

label_10ba50:
    // 0x10ba50: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x10ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_10ba54:
    // 0x10ba54: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ba54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10ba58:
    // 0x10ba58: 0x8c431068  lw          $v1, 0x1068($v0)
    ctx->pc = 0x10ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4200)));
label_10ba5c:
    // 0x10ba5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10ba60:
    // 0x10ba60: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_10ba64:
    if (ctx->pc == 0x10BA64u) {
        ctx->pc = 0x10BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA60u;
        // 0x10ba64: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BA68u;
        goto label_10ba68;
    }
    ctx->pc = 0x10BA60u;
    {
        const bool branch_taken_0x10ba60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA60u;
        // 0x10ba64: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba60) {
            ctx->pc = 0x10BA80u;
            goto label_10ba80;
        }
    }
    ctx->pc = 0x10BA68u;
label_10ba68:
    // 0x10ba68: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x10ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_10ba6c:
    // 0x10ba6c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10ba6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10ba70:
    // 0x10ba70: 0x8c5c6500  lw          $gp, 0x6500($v0)
    ctx->pc = 0x10ba70u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25856)));
label_10ba74:
    // 0x10ba74: 0x60f809  jalr        $v1
label_10ba78:
    if (ctx->pc == 0x10BA78u) {
        ctx->pc = 0x10BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA74u;
        // 0x10ba78: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BA7Cu;
        goto label_10ba7c;
    }
    ctx->pc = 0x10BA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10BA7Cu);
        ctx->pc = 0x10BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA74u;
        // 0x10ba78: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA74u, 0x10BA7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BA7Cu;
label_10ba7c:
    // 0x10ba7c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x10ba7cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ba80:
    // 0x10ba80: 0xf  sync
    ctx->pc = 0x10ba80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_10ba84:
    // 0x10ba84: 0x42000038  ei
    ctx->pc = 0x10ba84u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_10ba88:
    // 0x10ba88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ba88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10ba8c:
    // 0x10ba8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ba8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ba90:
    // 0x10ba90: 0x3e00008  jr          $ra
label_10ba94:
    if (ctx->pc == 0x10BA94u) {
        ctx->pc = 0x10BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA90u;
        // 0x10ba94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BA98u;
        goto label_fallthrough_0x10ba90;
    }
    ctx->pc = 0x10BA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA90u;
        // 0x10ba94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10ba90:
    ctx->pc = 0x10BA98u;
}
