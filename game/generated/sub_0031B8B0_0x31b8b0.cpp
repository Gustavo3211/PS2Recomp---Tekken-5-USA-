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

// Function: sub_0031B8B0
// Address: 0x31b8b0 - 0x31b8f8
void sub_0031B8B0_0x31b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B8B0_0x31b8b0");
#endif

    switch (ctx->pc) {
        case 0x31b8d0u: goto label_31b8d0;
        case 0x31b8e4u: goto label_31b8e4;
        default: break;
    }

    ctx->pc = 0x31b8b0u;

    // 0x31b8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b8b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b8b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b8bc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x31b8bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31b8c0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x31b8c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x31b8c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31b8c8: 0xc0cd6d0  jal         func_335B40
    ctx->pc = 0x31B8C8u;
    SET_GPR_U32(ctx, 31, 0x31B8D0u);
    ctx->pc = 0x31B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8C8u;
    // 0x31b8cc: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B40u, 0x31B8C8u, 0x31B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8D0u;
label_31b8d0:
    // 0x31b8d0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b8d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b8d4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x31b8d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x31b8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b8dc: 0xc0c6ce0  jal         func_31B380
    ctx->pc = 0x31B8DCu;
    SET_GPR_U32(ctx, 31, 0x31B8E4u);
    ctx->pc = 0x31B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8DCu;
    // 0x31b8e0: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B380u, 0x31B8DCu, 0x31B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8E4u;
label_31b8e4:
    // 0x31b8e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b8e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31b8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b8ec: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x31b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31b8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x31B8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8F0u;
        // 0x31b8f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B8F8u;
}
