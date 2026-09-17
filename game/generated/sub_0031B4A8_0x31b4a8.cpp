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

// Function: sub_0031B4A8
// Address: 0x31b4a8 - 0x31b4f0
void sub_0031B4A8_0x31b4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B4A8_0x31b4a8");
#endif

    switch (ctx->pc) {
        case 0x31b4c8u: goto label_31b4c8;
        case 0x31b4dcu: goto label_31b4dc;
        default: break;
    }

    ctx->pc = 0x31b4a8u;

    // 0x31b4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b4ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b4b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4b4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x31b4b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31b4b8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x31b4b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x31b4bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31b4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31b4c0: 0xc0cd642  jal         func_335908
    ctx->pc = 0x31B4C0u;
    SET_GPR_U32(ctx, 31, 0x31B4C8u);
    ctx->pc = 0x31B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4C0u;
    // 0x31b4c4: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335908u, 0x31B4C0u, 0x31B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4C8u;
label_31b4c8:
    // 0x31b4c8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b4c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b4cc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x31b4ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x31b4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4d4: 0xc0c6ce0  jal         func_31B380
    ctx->pc = 0x31B4D4u;
    SET_GPR_U32(ctx, 31, 0x31B4DCu);
    ctx->pc = 0x31B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4D4u;
    // 0x31b4d8: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B380u, 0x31B4D4u, 0x31B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4DCu;
label_31b4dc:
    // 0x31b4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b4e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31b4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b4e4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x31b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31b4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x31B4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4E8u;
        // 0x31b4ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B4F0u;
}
