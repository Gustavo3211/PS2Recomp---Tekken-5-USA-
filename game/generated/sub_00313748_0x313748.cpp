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

// Function: sub_00313748
// Address: 0x313748 - 0x313788
void sub_00313748_0x313748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313748_0x313748");
#endif

    ctx->pc = 0x313748u;

    // 0x313748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x313748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31374c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x31374cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x313750: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x313750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313754: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x313754u;
    {
        const bool branch_taken_0x313754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313754u;
        // 0x313758: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313754) {
            ctx->pc = 0x313760u;
            goto label_313760;
        }
    }
    ctx->pc = 0x31375Cu;
    // 0x31375c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x31375cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_313760:
    // 0x313760: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x313760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x313764: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x313764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x313768: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x313768u;
    {
        const bool branch_taken_0x313768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313768u;
        // 0x31376c: 0xac440064  sw          $a0, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313768) {
            ctx->pc = 0x31377Cu;
            goto label_31377c;
        }
    }
    ctx->pc = 0x313770u;
    // 0x313770: 0xe44c006c  swc1        $f12, 0x6C($v0)
    ctx->pc = 0x313770u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x313774: 0xa4450068  sh          $a1, 0x68($v0)
    ctx->pc = 0x313774u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 5));
    // 0x313778: 0xa446006a  sh          $a2, 0x6A($v0)
    ctx->pc = 0x313778u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 106), (uint16_t)GPR_U32(ctx, 6));
label_31377c:
    // 0x31377c: 0x3e00008  jr          $ra
    ctx->pc = 0x31377Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31377Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313784u;
    // 0x313784: 0x0  nop
    ctx->pc = 0x313784u;
    // NOP
    ctx->pc = 0x313788u;
}
