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

// Function: sub_00305AF8
// Address: 0x305af8 - 0x305b68
void sub_00305AF8_0x305af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305AF8_0x305af8");
#endif

    switch (ctx->pc) {
        case 0x305b0cu: goto label_305b0c;
        case 0x305b58u: goto label_305b58;
        default: break;
    }

    ctx->pc = 0x305af8u;

    // 0x305af8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x305af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x305afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305b00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x305b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x305b04: 0xc08c1da  jal         func_230768
    ctx->pc = 0x305B04u;
    SET_GPR_U32(ctx, 31, 0x305B0Cu);
    ctx->pc = 0x305B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B04u;
    // 0x305b08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230768u, 0x305B04u, 0x305B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B0Cu;
label_305b0c:
    // 0x305b0c: 0xc78395ac  lwc1        $f3, -0x6A54($gp)
    ctx->pc = 0x305b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x305b10: 0xc78195b0  lwc1        $f1, -0x6A50($gp)
    ctx->pc = 0x305b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305b14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x305b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305b18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x305b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x305b1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x305b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x305b20: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x305b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x305b24: 0xc78095b4  lwc1        $f0, -0x6A4C($gp)
    ctx->pc = 0x305b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305b28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305b2c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x305b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x305b30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x305b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305b34: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x305b34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x305b38: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x305b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x305b3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x305b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x305b40: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x305b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x305b44: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x305b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x305b48: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x305b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x305b4c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x305b4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x305b50: 0xc08c22c  jal         func_2308B0
    ctx->pc = 0x305B50u;
    SET_GPR_U32(ctx, 31, 0x305B58u);
    ctx->pc = 0x305B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B50u;
    // 0x305b54: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308B0u, 0x305B50u, 0x305B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B58u;
label_305b58:
    // 0x305b58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x305b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x305B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B5Cu;
        // 0x305b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305B64u;
    // 0x305b64: 0x0  nop
    ctx->pc = 0x305b64u;
    // NOP
    ctx->pc = 0x305b68u;
}
