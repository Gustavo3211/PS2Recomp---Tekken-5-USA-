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

// Function: sub_00360208
// Address: 0x360208 - 0x360298
void sub_00360208_0x360208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360208_0x360208");
#endif

    switch (ctx->pc) {
        case 0x360240u: goto label_360240;
        case 0x360250u: goto label_360250;
        default: break;
    }

    ctx->pc = 0x360208u;

    // 0x360208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x360208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36020c: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x36020cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x360210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360214: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x360214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36021c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x36021Cu;
    {
        const bool branch_taken_0x36021c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x360220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36021Cu;
        // 0x360220: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36021c) {
            ctx->pc = 0x360238u;
            goto label_360238;
        }
    }
    ctx->pc = 0x360224u;
    // 0x360224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x360228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36022c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x36022cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360230: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x360230u;
    {
        const bool branch_taken_0x360230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x360234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360230u;
        // 0x360234: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360230) {
            ctx->pc = 0x360258u;
            goto label_360258;
        }
    }
    ctx->pc = 0x360238u;
label_360238:
    // 0x360238: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x360238u;
    SET_GPR_U32(ctx, 31, 0x360240u);
    ctx->pc = 0x36023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360238u;
    // 0x36023c: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x360238u, 0x360240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360240u;
label_360240:
    // 0x360240: 0x26106c40  addiu       $s0, $s0, 0x6C40
    ctx->pc = 0x360240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27712));
    // 0x360244: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x360244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360248: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x360248u;
    SET_GPR_U32(ctx, 31, 0x360250u);
    ctx->pc = 0x36024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360248u;
    // 0x36024c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x360248u, 0x360250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360250u;
label_360250:
    // 0x360250: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x360250u;
    {
        const bool branch_taken_0x360250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360250u;
        // 0x360254: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360250) {
            ctx->pc = 0x360284u;
            goto label_360284;
        }
    }
    ctx->pc = 0x360258u;
label_360258:
    // 0x360258: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x360258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x36025c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36025cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360260: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x360260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x360264: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x360268: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x360268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36026c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x36026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x360270: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x360270u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x360274: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x360274u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360278: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x360278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36027c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x360280: 0x9042bc80  lbu         $v0, -0x4380($v0)
    ctx->pc = 0x360280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950016)));
label_360284:
    // 0x360284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360288: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x360288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36028c: 0x3e00008  jr          $ra
    ctx->pc = 0x36028Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36028Cu;
        // 0x360290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36028Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360294u;
    // 0x360294: 0x0  nop
    ctx->pc = 0x360294u;
    // NOP
    ctx->pc = 0x360298u;
}
