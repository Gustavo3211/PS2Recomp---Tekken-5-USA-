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

// Function: sub_002DDC00
// Address: 0x2ddc00 - 0x2ddc70
void sub_002DDC00_0x2ddc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDC00_0x2ddc00");
#endif

    switch (ctx->pc) {
        case 0x2ddc14u: goto label_2ddc14;
        case 0x2ddc1cu: goto label_2ddc1c;
        default: break;
    }

    ctx->pc = 0x2ddc00u;

    // 0x2ddc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ddc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ddc04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddc08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ddc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ddc0c: 0xc0cc520  jal         func_331480
    ctx->pc = 0x2DDC0Cu;
    SET_GPR_U32(ctx, 31, 0x2DDC14u);
    ctx->pc = 0x331480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331480u, 0x2DDC0Cu, 0x2DDC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC14u;
label_2ddc14:
    // 0x2ddc14: 0xc0cc542  jal         func_331508
    ctx->pc = 0x2DDC14u;
    SET_GPR_U32(ctx, 31, 0x2DDC1Cu);
    ctx->pc = 0x2DDC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC14u;
    // 0x2ddc18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331508u, 0x2DDC14u, 0x2DDC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC1Cu;
label_2ddc1c:
    // 0x2ddc1c: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x2ddc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2ddc20: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2ddc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ddc24: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDC24u;
    {
        const bool branch_taken_0x2ddc24 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2DDC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC24u;
        // 0x2ddc28: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddc24) {
            ctx->pc = 0x2DDC38u;
            goto label_2ddc38;
        }
    }
    ctx->pc = 0x2DDC2Cu;
    // 0x2ddc2c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2ddc2cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddc30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDC30u;
    {
        const bool branch_taken_0x2ddc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC30u;
        // 0x2ddc34: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddc30) {
            ctx->pc = 0x2DDC44u;
            goto label_2ddc44;
        }
    }
    ctx->pc = 0x2DDC38u;
label_2ddc38:
    // 0x2ddc38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ddc38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddc3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ddc3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ddc40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ddc40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ddc44:
    // 0x2ddc44: 0x0  nop
    ctx->pc = 0x2ddc44u;
    // NOP
    // 0x2ddc48: 0x0  nop
    ctx->pc = 0x2ddc48u;
    // NOP
    // 0x2ddc4c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ddc4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2ddc50: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2ddc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2ddc54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ddc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddc58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddc5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ddc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddc60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ddc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ddc64: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC64u;
        // 0x2ddc68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDC6Cu;
    // 0x2ddc6c: 0x0  nop
    ctx->pc = 0x2ddc6cu;
    // NOP
    ctx->pc = 0x2ddc70u;
}
