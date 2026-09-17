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

// Function: sub_003059F8
// Address: 0x3059f8 - 0x305a40
void sub_003059F8_0x3059f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003059F8_0x3059f8");
#endif

    switch (ctx->pc) {
        case 0x305a0cu: goto label_305a0c;
        case 0x305a18u: goto label_305a18;
        case 0x305a24u: goto label_305a24;
        default: break;
    }

    ctx->pc = 0x3059f8u;

    // 0x3059f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3059f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3059fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3059fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305a00: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x305a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x305a04: 0xc086396  jal         func_218E58
    ctx->pc = 0x305A04u;
    SET_GPR_U32(ctx, 31, 0x305A0Cu);
    ctx->pc = 0x305A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A04u;
    // 0x305a08: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x305A04u, 0x305A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A0Cu;
label_305a0c:
    // 0x305a0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a10: 0xc08664a  jal         func_219928
    ctx->pc = 0x305A10u;
    SET_GPR_U32(ctx, 31, 0x305A18u);
    ctx->pc = 0x305A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A10u;
    // 0x305a14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x305A10u, 0x305A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A18u;
label_305a18:
    // 0x305a18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305a1c: 0xc08664a  jal         func_219928
    ctx->pc = 0x305A1Cu;
    SET_GPR_U32(ctx, 31, 0x305A24u);
    ctx->pc = 0x305A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A1Cu;
    // 0x305a20: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x305A1Cu, 0x305A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A24u;
label_305a24:
    // 0x305a24: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x305a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x305a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305a2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x305a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x305a30: 0xac438880  sw          $v1, -0x7780($v0)
    ctx->pc = 0x305a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A8880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8880u, _value); } while (0);
    // 0x305a34: 0x3e00008  jr          $ra
    ctx->pc = 0x305A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A34u;
        // 0x305a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305A3Cu;
    // 0x305a3c: 0x0  nop
    ctx->pc = 0x305a3cu;
    // NOP
    ctx->pc = 0x305a40u;
}
