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

// Function: sub_00360590
// Address: 0x360590 - 0x360600
void sub_00360590_0x360590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360590_0x360590");
#endif

    switch (ctx->pc) {
        case 0x3605b4u: goto label_3605b4;
        default: break;
    }

    ctx->pc = 0x360590u;

    // 0x360590: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x360590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x360594: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x360594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x360598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36059c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x36059cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3605a0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x3605a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3605a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3605a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3605a8: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x3605a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3605ac: 0xc0d7fd2  jal         func_35FF48
    ctx->pc = 0x3605ACu;
    SET_GPR_U32(ctx, 31, 0x3605B4u);
    ctx->pc = 0x3605B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3605ACu;
    // 0x3605b0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FF48u, 0x3605ACu, 0x3605B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3605B4u;
label_3605b4:
    // 0x3605b4: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x3605b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x3605b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3605b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3605bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3605bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3605c0: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x3605c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x3605c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3605c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3605c8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3605c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3605cc: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x3605ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3605d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3605d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3605d4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3605d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3605d8: 0x28434000  slti        $v1, $v0, 0x4000
    ctx->pc = 0x3605d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x3605dc: 0x2844c000  slti        $a0, $v0, -0x4000
    ctx->pc = 0x3605dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294950912) ? 1 : 0);
    // 0x3605e0: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x3605e0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3605e4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x3605e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x3605e8: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x3605e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x3605ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3605ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3605f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3605f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3605f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3605F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3605F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3605F4u;
        // 0x3605f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3605F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3605FCu;
    // 0x3605fc: 0x0  nop
    ctx->pc = 0x3605fcu;
    // NOP
    ctx->pc = 0x360600u;
}
