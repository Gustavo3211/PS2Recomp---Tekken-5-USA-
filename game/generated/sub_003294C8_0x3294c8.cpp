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

// Function: sub_003294C8
// Address: 0x3294c8 - 0x329520
void sub_003294C8_0x3294c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003294C8_0x3294c8");
#endif

    switch (ctx->pc) {
        case 0x3294f4u: goto label_3294f4;
        case 0x329510u: goto label_329510;
        default: break;
    }

    ctx->pc = 0x3294c8u;

    // 0x3294c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3294c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3294cc: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3294ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3294d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3294d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294d4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x3294d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x3294d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3294d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3294dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3294dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3294e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3294e4: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3294e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3294e8: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x3294e8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3294ec: 0xc0cbe4a  jal         func_32F928
    ctx->pc = 0x3294ECu;
    SET_GPR_U32(ctx, 31, 0x3294F4u);
    ctx->pc = 0x3294F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294ECu;
    // 0x3294f0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F928u, 0x3294ECu, 0x3294F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294F4u;
label_3294f4:
    // 0x3294f4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3294f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3294f8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x3294f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3294fc: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x3294fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x329500: 0x2484f380  addiu       $a0, $a0, -0xC80
    ctx->pc = 0x329500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    // 0x329504: 0xc7ae0008  lwc1        $f14, 0x8($sp)
    ctx->pc = 0x329504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x329508: 0xc0ca94e  jal         func_32A538
    ctx->pc = 0x329508u;
    SET_GPR_U32(ctx, 31, 0x329510u);
    ctx->pc = 0x32950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329508u;
    // 0x32950c: 0x24840200  addiu       $a0, $a0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A538u, 0x329508u, 0x329510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329510u;
label_329510:
    // 0x329510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329514: 0x3e00008  jr          $ra
    ctx->pc = 0x329514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329514u;
        // 0x329518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32951Cu;
    // 0x32951c: 0x0  nop
    ctx->pc = 0x32951cu;
    // NOP
    ctx->pc = 0x329520u;
}
