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

// Function: sub_003650F8
// Address: 0x3650f8 - 0x365178
void sub_003650F8_0x3650f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003650F8_0x3650f8");
#endif

    switch (ctx->pc) {
        case 0x36516cu: goto label_36516c;
        default: break;
    }

    ctx->pc = 0x3650f8u;

    // 0x3650f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3650f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3650fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3650fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x365100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x365100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365108: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x365108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36510c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x365110: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x365110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x365114: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x365114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x365118: 0xac4509d4  sw          $a1, 0x9D4($v0)
    ctx->pc = 0x365118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2516), GPR_U32(ctx, 5));
    // 0x36511c: 0xa44409f0  sh          $a0, 0x9F0($v0)
    ctx->pc = 0x36511cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2544), (uint16_t)GPR_U32(ctx, 4));
    // 0x365120: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x365120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x365124: 0xac4509e8  sw          $a1, 0x9E8($v0)
    ctx->pc = 0x365124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2536), GPR_U32(ctx, 5));
    // 0x365128: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x365128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36512c: 0xac4309ec  sw          $v1, 0x9EC($v0)
    ctx->pc = 0x36512cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2540), GPR_U32(ctx, 3));
    // 0x365130: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x365130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x365134: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x365134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x365138: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x365138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36513c: 0xe4400a04  swc1        $f0, 0xA04($v0)
    ctx->pc = 0x36513cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2564), bits); }
    // 0x365140: 0xac4009bc  sw          $zero, 0x9BC($v0)
    ctx->pc = 0x365140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2492), GPR_U32(ctx, 0));
    // 0x365144: 0xe44009c0  swc1        $f0, 0x9C0($v0)
    ctx->pc = 0x365144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2496), bits); }
    // 0x365148: 0xe44009c4  swc1        $f0, 0x9C4($v0)
    ctx->pc = 0x365148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2500), bits); }
    // 0x36514c: 0xac4009c8  sw          $zero, 0x9C8($v0)
    ctx->pc = 0x36514cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2504), GPR_U32(ctx, 0));
    // 0x365150: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x365150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x365154: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x365154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x365158: 0xa0400885  sb          $zero, 0x885($v0)
    ctx->pc = 0x365158u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2181), (uint8_t)GPR_U32(ctx, 0));
    // 0x36515c: 0xa0400886  sb          $zero, 0x886($v0)
    ctx->pc = 0x36515cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2182), (uint8_t)GPR_U32(ctx, 0));
    // 0x365160: 0xa0400887  sb          $zero, 0x887($v0)
    ctx->pc = 0x365160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2183), (uint8_t)GPR_U32(ctx, 0));
    // 0x365164: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x365164u;
    SET_GPR_U32(ctx, 31, 0x36516Cu);
    ctx->pc = 0x365168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365164u;
    // 0x365168: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x365164u, 0x36516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36516Cu;
label_36516c:
    // 0x36516c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36516cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365170: 0x3e00008  jr          $ra
    ctx->pc = 0x365170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365170u;
        // 0x365174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365178u;
}
