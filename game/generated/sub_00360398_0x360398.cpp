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

// Function: sub_00360398
// Address: 0x360398 - 0x360400
void sub_00360398_0x360398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360398_0x360398");
#endif

    switch (ctx->pc) {
        case 0x3603b4u: goto label_3603b4;
        default: break;
    }

    ctx->pc = 0x360398u;

    // 0x360398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36039c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x36039cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3603a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3603a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3603a4: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x3603a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3603a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3603a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3603ac: 0xc0d80d6  jal         func_360358
    ctx->pc = 0x3603ACu;
    SET_GPR_U32(ctx, 31, 0x3603B4u);
    ctx->pc = 0x3603B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3603ACu;
    // 0x3603b0: 0x52403  sra         $a0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360358u, 0x3603ACu, 0x3603B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3603B4u;
label_3603b4:
    // 0x3603b4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3603b4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3603b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3603b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3603bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3603bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3603c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3603c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3603c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3603c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3603c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3603c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3603cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3603ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3603d0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3603D0u;
    {
        const bool branch_taken_0x3603d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3603D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3603D0u;
        // 0x3603d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3603d0) {
            ctx->pc = 0x3603E8u;
            goto label_3603e8;
        }
    }
    ctx->pc = 0x3603D8u;
    // 0x3603d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3603d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3603dc: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x3603dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x3603e0: 0x24043fff  addiu       $a0, $zero, 0x3FFF
    ctx->pc = 0x3603e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x3603e4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x3603e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_3603e8:
    // 0x3603e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3603e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3603ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3603ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3603f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3603f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3603f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3603F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3603F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3603F4u;
        // 0x3603f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3603F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3603FCu;
    // 0x3603fc: 0x0  nop
    ctx->pc = 0x3603fcu;
    // NOP
    ctx->pc = 0x360400u;
}
