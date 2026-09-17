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

// Function: sub_00215BE8
// Address: 0x215be8 - 0x215c40
void sub_00215BE8_0x215be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215BE8_0x215be8");
#endif

    switch (ctx->pc) {
        case 0x215c00u: goto label_215c00;
        case 0x215c0cu: goto label_215c0c;
        case 0x215c14u: goto label_215c14;
        case 0x215c1cu: goto label_215c1c;
        default: break;
    }

    ctx->pc = 0x215be8u;

    // 0x215be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215bec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x215becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215bf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x215bf8: 0xc092636  jal         func_2498D8
    ctx->pc = 0x215BF8u;
    SET_GPR_U32(ctx, 31, 0x215C00u);
    ctx->pc = 0x215BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215BF8u;
    // 0x215bfc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2498D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498D8u, 0x215BF8u, 0x215C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C00u;
label_215c00:
    // 0x215c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c04: 0xc08572c  jal         func_215CB0
    ctx->pc = 0x215C04u;
    SET_GPR_U32(ctx, 31, 0x215C0Cu);
    ctx->pc = 0x215C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C04u;
    // 0x215c08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215CB0u, 0x215C04u, 0x215C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C0Cu;
label_215c0c:
    // 0x215c0c: 0xc0b27de  jal         func_2C9F78
    ctx->pc = 0x215C0Cu;
    SET_GPR_U32(ctx, 31, 0x215C14u);
    ctx->pc = 0x2C9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9F78u, 0x215C0Cu, 0x215C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C14u;
label_215c14:
    // 0x215c14: 0xc0851fc  jal         func_2147F0
    ctx->pc = 0x215C14u;
    SET_GPR_U32(ctx, 31, 0x215C1Cu);
    ctx->pc = 0x215C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C14u;
    // 0x215c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147F0u, 0x215C14u, 0x215C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C1Cu;
label_215c1c:
    // 0x215c1c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x215c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x215c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215c24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x215c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215c28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215c30: 0xac83886c  sw          $v1, -0x7794($a0)
    ctx->pc = 0x215c30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x215c34: 0x3e00008  jr          $ra
    ctx->pc = 0x215C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C34u;
        // 0x215c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215C3Cu;
    // 0x215c3c: 0x0  nop
    ctx->pc = 0x215c3cu;
    // NOP
    ctx->pc = 0x215c40u;
}
