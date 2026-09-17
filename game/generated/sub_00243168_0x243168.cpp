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

// Function: sub_00243168
// Address: 0x243168 - 0x2431c0
void sub_00243168_0x243168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243168_0x243168");
#endif

    ctx->pc = 0x243168u;

    // 0x243168: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x243168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x24316c: 0x24425db0  addiu       $v0, $v0, 0x5DB0
    ctx->pc = 0x24316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23984));
    // 0x243170: 0xac4400a0  sw          $a0, 0xA0($v0)
    ctx->pc = 0x243170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x165E50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165E50u, _value); } while (0);
    // 0x243174: 0x3e00008  jr          $ra
    ctx->pc = 0x243174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243174u;
        // 0x243178: 0xac4000a4  sw          $zero, 0xA4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24317Cu;
    // 0x24317c: 0x0  nop
    ctx->pc = 0x24317cu;
    // NOP
    // 0x243180: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x243180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x243184: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x243184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x243188: 0x24635db0  addiu       $v1, $v1, 0x5DB0
    ctx->pc = 0x243188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23984));
    // 0x24318c: 0x248488d0  addiu       $a0, $a0, -0x7730
    ctx->pc = 0x24318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936784));
    // 0x243190: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x243190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x165E54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165E54u, _value); } while (0);
    // 0x243194: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243198: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24319c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x24319cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x2431a0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2431a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x2431a4: 0x78a20750  lq          $v0, 0x750($a1)
    ctx->pc = 0x2431a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 1872)));
    // 0x2431a8: 0x7c620080  sq          $v0, 0x80($v1)
    ctx->pc = 0x2431a8u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165E30u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165E30u, _value); } while (0);
    // 0x2431ac: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x2431acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x165E3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x165E3Cu, _value); } while (0); }
    // 0x2431b0: 0x78c20750  lq          $v0, 0x750($a2)
    ctx->pc = 0x2431b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 1872)));
    // 0x2431b4: 0x7c620090  sq          $v0, 0x90($v1)
    ctx->pc = 0x2431b4u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x165E40u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x165E40u, _value); } while (0);
    // 0x2431b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2431B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2431BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431B8u;
        // 0x2431bc: 0xe460009c  swc1        $f0, 0x9C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2431B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2431C0u;
}
