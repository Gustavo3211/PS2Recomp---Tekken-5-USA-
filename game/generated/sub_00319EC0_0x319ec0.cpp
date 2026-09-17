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

// Function: sub_00319EC0
// Address: 0x319ec0 - 0x319f40
void sub_00319EC0_0x319ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319EC0_0x319ec0");
#endif

    switch (ctx->pc) {
        case 0x319ef4u: goto label_319ef4;
        case 0x319f0cu: goto label_319f0c;
        case 0x319f14u: goto label_319f14;
        case 0x319f20u: goto label_319f20;
        default: break;
    }

    ctx->pc = 0x319ec0u;

    // 0x319ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x319ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x319ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x319ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x319ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319ecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x319eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x319ed0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x319ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319ed4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x319ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x319ed8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x319ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319edc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x319edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x319ee0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x319ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319ee4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x319ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x319ee8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x319ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x319eec: 0xc0cc8ba  jal         func_3322E8
    ctx->pc = 0x319EECu;
    SET_GPR_U32(ctx, 31, 0x319EF4u);
    ctx->pc = 0x319EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319EECu;
    // 0x319ef0: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3322E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3322E8u, 0x319EECu, 0x319EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EF4u;
label_319ef4:
    // 0x319ef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x319ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319ef8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x319ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319efc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x319efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f00: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x319f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f04: 0xc0c6b00  jal         func_31AC00
    ctx->pc = 0x319F04u;
    SET_GPR_U32(ctx, 31, 0x319F0Cu);
    ctx->pc = 0x319F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F04u;
    // 0x319f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AC00u, 0x319F04u, 0x319F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F0Cu;
label_319f0c:
    // 0x319f0c: 0xc0c6bda  jal         func_31AF68
    ctx->pc = 0x319F0Cu;
    SET_GPR_U32(ctx, 31, 0x319F14u);
    ctx->pc = 0x319F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F0Cu;
    // 0x319f10: 0x8f84c594  lw          $a0, -0x3A6C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AF68u, 0x319F0Cu, 0x319F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F14u;
label_319f14:
    // 0x319f14: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x319f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x319f18: 0xc0c75ac  jal         func_31D6B0
    ctx->pc = 0x319F18u;
    SET_GPR_U32(ctx, 31, 0x319F20u);
    ctx->pc = 0x319F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F18u;
    // 0x319f1c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D6B0u, 0x319F18u, 0x319F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F20u;
label_319f20:
    // 0x319f20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x319f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319f24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x319f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x319f28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x319f28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319f2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x319f2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x319f30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x319f30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319f34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x319f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x319f38: 0x3e00008  jr          $ra
    ctx->pc = 0x319F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F38u;
        // 0x319f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319F40u;
}
