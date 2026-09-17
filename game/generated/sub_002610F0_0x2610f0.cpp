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

// Function: sub_002610F0
// Address: 0x2610f0 - 0x261160
void sub_002610F0_0x2610f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002610F0_0x2610f0");
#endif

    switch (ctx->pc) {
        case 0x261108u: goto label_261108;
        case 0x261110u: goto label_261110;
        case 0x261134u: goto label_261134;
        case 0x261140u: goto label_261140;
        case 0x261148u: goto label_261148;
        default: break;
    }

    ctx->pc = 0x2610f0u;

    // 0x2610f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2610f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2610f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2610f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2610f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2610f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2610fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2610fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x261100: 0xc0404e6  jal         func_101398
    ctx->pc = 0x261100u;
    SET_GPR_U32(ctx, 31, 0x261108u);
    ctx->pc = 0x261104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261100u;
    // 0x261104: 0x3c110017  lui         $s1, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101398u, 0x261100u, 0x261108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261108u;
label_261108:
    // 0x261108: 0xc0404ea  jal         func_1013A8
    ctx->pc = 0x261108u;
    SET_GPR_U32(ctx, 31, 0x261110u);
    ctx->pc = 0x26110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261108u;
    // 0x26110c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1013A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1013A8u, 0x261108u, 0x261110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261110u;
label_261110:
    // 0x261110: 0x2631edd8  addiu       $s1, $s1, -0x1228
    ctx->pc = 0x261110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962648));
    // 0x261114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x261114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261118: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x261118u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x26111c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x26111cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261120: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x261120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x261124: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x261124u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x261128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26112c: 0xc097fac  jal         func_25FEB0
    ctx->pc = 0x26112Cu;
    SET_GPR_U32(ctx, 31, 0x261134u);
    ctx->pc = 0x261130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26112Cu;
    // 0x261130: 0x261023b0  addiu       $s0, $s0, 0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FEB0u, 0x26112Cu, 0x261134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261134u;
label_261134:
    // 0x261134: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x261134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261138: 0xc09833c  jal         func_260CF0
    ctx->pc = 0x261138u;
    SET_GPR_U32(ctx, 31, 0x261140u);
    ctx->pc = 0x26113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261138u;
    // 0x26113c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CF0u, 0x261138u, 0x261140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261140u;
label_261140:
    // 0x261140: 0xc0983c2  jal         func_260F08
    ctx->pc = 0x261140u;
    SET_GPR_U32(ctx, 31, 0x261148u);
    ctx->pc = 0x261144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261140u;
    // 0x261144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260F08u, 0x261140u, 0x261148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261148u;
label_261148:
    // 0x261148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26114c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26114cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x261150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x261150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261154: 0x3e00008  jr          $ra
    ctx->pc = 0x261154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261154u;
        // 0x261158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26115Cu;
    // 0x26115c: 0x0  nop
    ctx->pc = 0x26115cu;
    // NOP
    ctx->pc = 0x261160u;
}
