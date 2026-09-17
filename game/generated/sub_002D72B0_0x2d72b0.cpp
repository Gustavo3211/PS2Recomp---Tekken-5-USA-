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

// Function: sub_002D72B0
// Address: 0x2d72b0 - 0x2d7300
void sub_002D72B0_0x2d72b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D72B0_0x2d72b0");
#endif

    ctx->pc = 0x2d72b0u;

    // 0x2d72b0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d72b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d72b8: 0x844294e0  lh          $v0, -0x6B20($v0)
    ctx->pc = 0x2d72b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939872)));
    // 0x2d72bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d72c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d72c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d72c4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D72C4u;
    {
        const bool branch_taken_0x2d72c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72C4u;
        // 0x2d72c8: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d72c4) {
            ctx->pc = 0x2D72ECu;
            goto label_2d72ec;
        }
    }
    ctx->pc = 0x2D72CCu;
    // 0x2d72cc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2d72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d72d0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d72d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d72d4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x2d72d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2d72d8: 0xc4219514  lwc1        $f1, -0x6AEC($at)
    ctx->pc = 0x2d72d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d72dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d72e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d72e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d72e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d72e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d72e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d72e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d72ec:
    // 0x2d72ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d72ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d72f0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d72f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d72f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D72F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D72F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D72FCu;
    // 0x2d72fc: 0x0  nop
    ctx->pc = 0x2d72fcu;
    // NOP
    ctx->pc = 0x2d7300u;
}
