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

// Function: sub_002DDCB0
// Address: 0x2ddcb0 - 0x2ddd30
void sub_002DDCB0_0x2ddcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDCB0_0x2ddcb0");
#endif

    switch (ctx->pc) {
        case 0x2ddcd4u: goto label_2ddcd4;
        default: break;
    }

    ctx->pc = 0x2ddcb0u;

    // 0x2ddcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ddcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ddcb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddcb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ddcb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ddcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ddcc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ddcc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcc4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2ddcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ddcc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ddcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ddccc: 0xc0cc542  jal         func_331508
    ctx->pc = 0x2DDCCCu;
    SET_GPR_U32(ctx, 31, 0x2DDCD4u);
    ctx->pc = 0x2DDCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCCCu;
    // 0x2ddcd0: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331508u, 0x2DDCCCu, 0x2DDCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCD4u;
label_2ddcd4:
    // 0x2ddcd4: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2ddcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2ddcd8: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x2ddcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ddcdc: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2ddcdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ddce0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDCE0u;
    {
        const bool branch_taken_0x2ddce0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2DDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCE0u;
        // 0x2ddce4: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddce0) {
            ctx->pc = 0x2DDCF8u;
            goto label_2ddcf8;
        }
    }
    ctx->pc = 0x2DDCE8u;
    // 0x2ddce8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ddce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddcec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDCECu;
    {
        const bool branch_taken_0x2ddcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCECu;
        // 0x2ddcf0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcec) {
            ctx->pc = 0x2DDD04u;
            goto label_2ddd04;
        }
    }
    ctx->pc = 0x2DDCF4u;
    // 0x2ddcf4: 0x0  nop
    ctx->pc = 0x2ddcf4u;
    // NOP
label_2ddcf8:
    // 0x2ddcf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ddcf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddcfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ddcfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ddd00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ddd00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ddd04:
    // 0x2ddd04: 0x0  nop
    ctx->pc = 0x2ddd04u;
    // NOP
    // 0x2ddd08: 0x0  nop
    ctx->pc = 0x2ddd08u;
    // NOP
    // 0x2ddd0c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ddd0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2ddd10: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2ddd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2ddd14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ddd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddd18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddd1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ddd1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddd20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ddd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddd24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ddd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ddd28: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD28u;
        // 0x2ddd2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDD30u;
}
