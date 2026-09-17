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

// Function: sub_00503BF8
// Address: 0x503bf8 - 0x503c78
void sub_00503BF8_0x503bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503BF8_0x503bf8");
#endif

    switch (ctx->pc) {
        case 0x503c0cu: goto label_503c0c;
        case 0x503c18u: goto label_503c18;
        case 0x503c30u: goto label_503c30;
        case 0x503c38u: goto label_503c38;
        case 0x503c44u: goto label_503c44;
        case 0x503c5cu: goto label_503c5c;
        case 0x503c64u: goto label_503c64;
        default: break;
    }

    ctx->pc = 0x503bf8u;

    // 0x503bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x503bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x503bfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x503bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x503c00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x503c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x503c04: 0xc140f46  jal         func_503D18
    ctx->pc = 0x503C04u;
    SET_GPR_U32(ctx, 31, 0x503C0Cu);
    ctx->pc = 0x503D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503D18u, 0x503C04u, 0x503C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503C0Cu;
label_503c0c:
    // 0x503c0c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x503c10: 0xc045ff4  jal         func_117FD0
    ctx->pc = 0x503C10u;
    SET_GPR_U32(ctx, 31, 0x503C18u);
    ctx->pc = 0x503C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503C10u;
    // 0x503c14: 0x2484d178  addiu       $a0, $a0, -0x2E88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FD0u, 0x503C10u, 0x503C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503C18u;
label_503c18:
    // 0x503c18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x503c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x503c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503c20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x503c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x503c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503c28: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x503C28u;
    SET_GPR_U32(ctx, 31, 0x503C30u);
    ctx->pc = 0x503C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503C28u;
    // 0x503c2c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D38u, 0x503C28u, 0x503C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503C30u;
label_503c30:
    // 0x503c30: 0xc045fd0  jal         func_117F40
    ctx->pc = 0x503C30u;
    SET_GPR_U32(ctx, 31, 0x503C38u);
    ctx->pc = 0x503C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503C30u;
    // 0x503c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117F40u, 0x503C30u, 0x503C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503C38u;
label_503c38:
    // 0x503c38: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x503c3c: 0xc045ff4  jal         func_117FD0
    ctx->pc = 0x503C3Cu;
    SET_GPR_U32(ctx, 31, 0x503C44u);
    ctx->pc = 0x503C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503C3Cu;
    // 0x503c40: 0x2484d188  addiu       $a0, $a0, -0x2E78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FD0u, 0x503C3Cu, 0x503C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503C44u;
label_503c44:
    // 0x503c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x503c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x503c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x503c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x503c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503c54: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x503C54u;
    SET_GPR_U32(ctx, 31, 0x503C5Cu);
    ctx->pc = 0x503C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503C54u;
    // 0x503c58: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D38u, 0x503C54u, 0x503C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503C5Cu;
label_503c5c:
    // 0x503c5c: 0xc045fd0  jal         func_117F40
    ctx->pc = 0x503C5Cu;
    SET_GPR_U32(ctx, 31, 0x503C64u);
    ctx->pc = 0x503C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503C5Cu;
    // 0x503c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117F40u, 0x503C5Cu, 0x503C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503C64u;
label_503c64:
    // 0x503c64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x503c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x503c68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x503c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x503c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x503C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503C6Cu;
        // 0x503c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503C74u;
    // 0x503c74: 0x0  nop
    ctx->pc = 0x503c74u;
    // NOP
    ctx->pc = 0x503c78u;
}
