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

// Function: sub_0035E108
// Address: 0x35e108 - 0x35e180
void sub_0035E108_0x35e108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E108_0x35e108");
#endif

    switch (ctx->pc) {
        case 0x35e154u: goto label_35e154;
        case 0x35e170u: goto label_35e170;
        default: break;
    }

    ctx->pc = 0x35e108u;

    // 0x35e108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e10c: 0x2787cc00  addiu       $a3, $gp, -0x3400
    ctx->pc = 0x35e10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953984));
    // 0x35e110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e114: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x35e114u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e118: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x35e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35e11c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35e11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e120: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x35e120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35e124: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35E124u;
    {
        const bool branch_taken_0x35e124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E124u;
        // 0x35e128: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e124) {
            ctx->pc = 0x35E140u;
            goto label_35e140;
        }
    }
    ctx->pc = 0x35E12Cu;
    // 0x35e12c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x35e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x35e130: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35e130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35e134: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x35e134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35e138: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E138u;
    {
        const bool branch_taken_0x35e138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E138u;
        // 0x35e13c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e138) {
            ctx->pc = 0x35E160u;
            goto label_35e160;
        }
    }
    ctx->pc = 0x35E140u;
label_35e140:
    // 0x35e140: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e144: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x35e144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x35e148: 0x24845f20  addiu       $a0, $a0, 0x5F20
    ctx->pc = 0x35e148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24352));
    // 0x35e14c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E14Cu;
    SET_GPR_U32(ctx, 31, 0x35E154u);
    ctx->pc = 0x35E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E14Cu;
    // 0x35e150: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E14Cu, 0x35E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E154u;
label_35e154:
    // 0x35e154: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e158: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35E158u;
    {
        const bool branch_taken_0x35e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E158u;
        // 0x35e15c: 0x3442003a  ori         $v0, $v0, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e158) {
            ctx->pc = 0x35E174u;
            goto label_35e174;
        }
    }
    ctx->pc = 0x35E160u;
label_35e160:
    // 0x35e160: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x35e160u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x35e164: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x35e164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e168: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E168u;
    SET_GPR_U32(ctx, 31, 0x35E170u);
    ctx->pc = 0x35E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E168u;
    // 0x35e16c: 0x24845f78  addiu       $a0, $a0, 0x5F78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E168u, 0x35E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E170u;
label_35e170:
    // 0x35e170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e174:
    // 0x35e174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e178: 0x3e00008  jr          $ra
    ctx->pc = 0x35E178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E178u;
        // 0x35e17c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E180u;
}
