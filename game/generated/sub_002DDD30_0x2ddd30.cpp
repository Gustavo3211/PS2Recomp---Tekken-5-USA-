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

// Function: sub_002DDD30
// Address: 0x2ddd30 - 0x2dddc0
void sub_002DDD30_0x2ddd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDD30_0x2ddd30");
#endif

    switch (ctx->pc) {
        case 0x2ddd54u: goto label_2ddd54;
        default: break;
    }

    ctx->pc = 0x2ddd30u;

    // 0x2ddd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ddd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ddd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddd38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ddd38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ddd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ddd40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ddd40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd44: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2ddd44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ddd48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ddd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ddd4c: 0xc0cc542  jal         func_331508
    ctx->pc = 0x2DDD4Cu;
    SET_GPR_U32(ctx, 31, 0x2DDD54u);
    ctx->pc = 0x2DDD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD4Cu;
    // 0x2ddd50: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331508u, 0x2DDD4Cu, 0x2DDD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD54u;
label_2ddd54:
    // 0x2ddd54: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2ddd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2ddd58: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x2ddd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ddd5c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2ddd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ddd60: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDD60u;
    {
        const bool branch_taken_0x2ddd60 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2DDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD60u;
        // 0x2ddd64: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd60) {
            ctx->pc = 0x2DDD78u;
            goto label_2ddd78;
        }
    }
    ctx->pc = 0x2DDD68u;
    // 0x2ddd68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ddd68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddd6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDD6Cu;
    {
        const bool branch_taken_0x2ddd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD6Cu;
        // 0x2ddd70: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd6c) {
            ctx->pc = 0x2DDD84u;
            goto label_2ddd84;
        }
    }
    ctx->pc = 0x2DDD74u;
    // 0x2ddd74: 0x0  nop
    ctx->pc = 0x2ddd74u;
    // NOP
label_2ddd78:
    // 0x2ddd78: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ddd78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddd7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ddd7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ddd80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ddd80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ddd84:
    // 0x2ddd84: 0x0  nop
    ctx->pc = 0x2ddd84u;
    // NOP
    // 0x2ddd88: 0x0  nop
    ctx->pc = 0x2ddd88u;
    // NOP
    // 0x2ddd8c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ddd8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2ddd90: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2ddd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2ddd94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ddd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddd98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddd98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddd9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ddd9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddda0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ddda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddda4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ddda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ddda8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDA8u;
        // 0x2dddac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDDB0u;
    // 0x2dddb0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2dddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2dddb4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2dddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2dddb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDB8u;
        // 0x2dddbc: 0xaca00070  sw          $zero, 0x70($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDDC0u;
}
