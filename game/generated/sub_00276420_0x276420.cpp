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

// Function: sub_00276420
// Address: 0x276420 - 0x2764f0
void sub_00276420_0x276420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276420_0x276420");
#endif

    switch (ctx->pc) {
        case 0x276430u: goto label_276430;
        case 0x276480u: goto label_276480;
        default: break;
    }

    ctx->pc = 0x276420u;

    // 0x276420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276428: 0xc09d480  jal         func_275200
    ctx->pc = 0x276428u;
    SET_GPR_U32(ctx, 31, 0x276430u);
    ctx->pc = 0x27642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276428u;
    // 0x27642c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x276428u, 0x276430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276430u;
label_276430:
    // 0x276430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x276430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276434: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x276434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x276438: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x276438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x27643c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27643cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x276440: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x276440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x276444: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x276444u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x276448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27644c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27644cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x276450: 0xc4830758  lwc1        $f3, 0x758($a0)
    ctx->pc = 0x276450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x276454: 0xc4820750  lwc1        $f2, 0x750($a0)
    ctx->pc = 0x276454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276458: 0xc4600758  lwc1        $f0, 0x758($v1)
    ctx->pc = 0x276458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27645c: 0xc4610750  lwc1        $f1, 0x750($v1)
    ctx->pc = 0x27645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276460: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x276460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x276464: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x276464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x276468: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x276468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27646c: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x27646cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x276470: 0x1880001c  blez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x276470u;
    {
        const bool branch_taken_0x276470 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x276474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276470u;
        // 0x276474: 0x46040882  mul.s       $f2, $f1, $f4 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276470) {
            ctx->pc = 0x2764E4u;
            goto label_2764e4;
        }
    }
    ctx->pc = 0x276478u;
    // 0x276478: 0xc7848c34  lwc1        $f4, -0x73CC($gp)
    ctx->pc = 0x276478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27647c: 0x0  nop
    ctx->pc = 0x27647cu;
    // NOP
label_276480:
    // 0x276480: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x276480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x276484: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x276484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x276488: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276488u;
    {
        const bool branch_taken_0x276488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276488u;
        // 0x27648c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276488) {
            ctx->pc = 0x27649Cu;
            goto label_27649c;
        }
    }
    ctx->pc = 0x276490u;
    // 0x276490: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x276490u;
    {
        const bool branch_taken_0x276490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276490u;
        // 0x276494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276490) {
            ctx->pc = 0x27649Cu;
            goto label_27649c;
        }
    }
    ctx->pc = 0x276498u;
    // 0x276498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27649c:
    // 0x27649c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x27649Cu;
    {
        const bool branch_taken_0x27649c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27649c) {
            ctx->pc = 0x2764A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27649Cu;
            // 0x2764a0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2764D8u;
            goto label_2764d8;
        }
    }
    ctx->pc = 0x2764A4u;
    // 0x2764a4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2764a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2764a8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2764a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2764ac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2764acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2764b0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2764b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2764b4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2764b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2764b8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x2764b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2764bc: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2764bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2764c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2764C0u;
    {
        const bool branch_taken_0x2764c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2764C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764C0u;
        // 0x2764c4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764c0) {
            ctx->pc = 0x2764D8u;
            goto label_2764d8;
        }
    }
    ctx->pc = 0x2764C8u;
    // 0x2764c8: 0x8ca20898  lw          $v0, 0x898($a1)
    ctx->pc = 0x2764c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2200)));
    // 0x2764cc: 0xa0a001bb  sb          $zero, 0x1BB($a1)
    ctx->pc = 0x2764ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x2764d0: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x2764d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x2764d4: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x2764d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
label_2764d8:
    // 0x2764d8: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x2764d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2764dc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2764DCu;
    {
        const bool branch_taken_0x2764dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2764E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764DCu;
        // 0x2764e0: 0x24a508d0  addiu       $a1, $a1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764dc) {
            ctx->pc = 0x276480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276480;
        }
    }
    ctx->pc = 0x2764E4u;
label_2764e4:
    // 0x2764e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2764e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2764e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2764E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2764ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764E8u;
        // 0x2764ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2764E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2764F0u;
}
