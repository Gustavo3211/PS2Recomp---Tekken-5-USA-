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

// Function: sub_00305110
// Address: 0x305110 - 0x305138
void sub_00305110_0x305110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305110_0x305110");
#endif

    switch (ctx->pc) {
        case 0x305118u: goto label_305118;
        default: break;
    }

    ctx->pc = 0x305110u;

    // 0x305110: 0xc7809598  lwc1        $f0, -0x6A68($gp)
    ctx->pc = 0x305110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305114: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x305114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_305118:
    // 0x305118: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x305118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x30511c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30511cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x305124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x305128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30512c: 0x3e00008  jr          $ra
    ctx->pc = 0x30512Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30512Cu;
        // 0x305130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30512Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305134u;
    // 0x305134: 0x0  nop
    ctx->pc = 0x305134u;
    // NOP
    ctx->pc = 0x305138u;
}
