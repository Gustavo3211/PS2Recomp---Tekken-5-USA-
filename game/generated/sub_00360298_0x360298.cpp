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

// Function: sub_00360298
// Address: 0x360298 - 0x360328
void sub_00360298_0x360298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360298_0x360298");
#endif

    switch (ctx->pc) {
        case 0x3602d0u: goto label_3602d0;
        case 0x3602e0u: goto label_3602e0;
        default: break;
    }

    ctx->pc = 0x360298u;

    // 0x360298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x360298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36029c: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x36029cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x3602a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3602a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3602a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3602a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3602a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3602a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3602ac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3602ACu;
    {
        const bool branch_taken_0x3602ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3602B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3602ACu;
        // 0x3602b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3602ac) {
            ctx->pc = 0x3602C8u;
            goto label_3602c8;
        }
    }
    ctx->pc = 0x3602B4u;
    // 0x3602b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3602b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3602b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3602b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3602bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3602bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3602c0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3602C0u;
    {
        const bool branch_taken_0x3602c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3602C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3602C0u;
        // 0x3602c4: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3602c0) {
            ctx->pc = 0x3602E8u;
            goto label_3602e8;
        }
    }
    ctx->pc = 0x3602C8u;
label_3602c8:
    // 0x3602c8: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x3602C8u;
    SET_GPR_U32(ctx, 31, 0x3602D0u);
    ctx->pc = 0x3602CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3602C8u;
    // 0x3602cc: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x3602C8u, 0x3602D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3602D0u;
label_3602d0:
    // 0x3602d0: 0x26106c88  addiu       $s0, $s0, 0x6C88
    ctx->pc = 0x3602d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27784));
    // 0x3602d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3602d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3602d8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3602D8u;
    SET_GPR_U32(ctx, 31, 0x3602E0u);
    ctx->pc = 0x3602DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3602D8u;
    // 0x3602dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3602D8u, 0x3602E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3602E0u;
label_3602e0:
    // 0x3602e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3602E0u;
    {
        const bool branch_taken_0x3602e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3602E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3602E0u;
        // 0x3602e4: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3602e0) {
            ctx->pc = 0x360314u;
            goto label_360314;
        }
    }
    ctx->pc = 0x3602E8u;
label_3602e8:
    // 0x3602e8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3602e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3602ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3602ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3602f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3602f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3602f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3602f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3602f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3602f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3602fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3602fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x360300: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x360300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x360304: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x360304u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360308: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x360308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36030c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x360310: 0x9042bd80  lbu         $v0, -0x4280($v0)
    ctx->pc = 0x360310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950272)));
label_360314:
    // 0x360314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360318: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x360318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36031c: 0x3e00008  jr          $ra
    ctx->pc = 0x36031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36031Cu;
        // 0x360320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360324u;
    // 0x360324: 0x0  nop
    ctx->pc = 0x360324u;
    // NOP
    ctx->pc = 0x360328u;
}
