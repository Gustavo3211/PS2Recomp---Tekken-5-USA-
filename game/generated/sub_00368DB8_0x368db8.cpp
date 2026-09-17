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

// Function: sub_00368DB8
// Address: 0x368db8 - 0x368df8
void sub_00368DB8_0x368db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368DB8_0x368db8");
#endif

    ctx->pc = 0x368db8u;

    // 0x368db8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x368db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x368dbc: 0x2c820064  sltiu       $v0, $a0, 0x64
    ctx->pc = 0x368dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x368dc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x368DC0u;
    {
        const bool branch_taken_0x368dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368dc0) {
            ctx->pc = 0x368DF0u;
            goto label_368df0;
        }
    }
    ctx->pc = 0x368DC8u;
    // 0x368dc8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x368dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x368dcc: 0xc440643c  lwc1        $f0, 0x643C($v0)
    ctx->pc = 0x368dccu;
    { uint32_t bits = FAST_READ32(0x1D643Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368dd0: 0x0  nop
    ctx->pc = 0x368dd0u;
    // NOP
    // 0x368dd4: 0x0  nop
    ctx->pc = 0x368dd4u;
    // NOP
    // 0x368dd8: 0x46006003  div.s       $f0, $f12, $f0
    ctx->pc = 0x368dd8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[0] = ctx->f[12] / ctx->f[0];
    // 0x368ddc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x368ddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x368de0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x368de0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x368de4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x368de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x368de8: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x368de8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x368dec: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x368decu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_368df0:
    // 0x368df0: 0x3e00008  jr          $ra
    ctx->pc = 0x368DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368DF0u;
        // 0x368df4: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368DF8u;
}
