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

// Function: sub_0031BDE0
// Address: 0x31bde0 - 0x31be28
void sub_0031BDE0_0x31bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BDE0_0x31bde0");
#endif

    switch (ctx->pc) {
        case 0x31be00u: goto label_31be00;
        case 0x31be14u: goto label_31be14;
        default: break;
    }

    ctx->pc = 0x31bde0u;

    // 0x31bde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31bde4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31bde8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31bde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bdec: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x31bdecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31bdf0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x31bdf0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x31bdf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31bdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31bdf8: 0xc0cd7ac  jal         func_335EB0
    ctx->pc = 0x31BDF8u;
    SET_GPR_U32(ctx, 31, 0x31BE00u);
    ctx->pc = 0x31BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDF8u;
    // 0x31bdfc: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EB0u, 0x31BDF8u, 0x31BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE00u;
label_31be00:
    // 0x31be00: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31be00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31be04: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x31be04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x31be08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31be08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be0c: 0xc0c6ce0  jal         func_31B380
    ctx->pc = 0x31BE0Cu;
    SET_GPR_U32(ctx, 31, 0x31BE14u);
    ctx->pc = 0x31BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE0Cu;
    // 0x31be10: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B380u, 0x31BE0Cu, 0x31BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE14u;
label_31be14:
    // 0x31be14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31be14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31be18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31be18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31be1c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x31be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31be20: 0x3e00008  jr          $ra
    ctx->pc = 0x31BE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE20u;
        // 0x31be24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BE28u;
}
