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

// Function: sub_0021F570
// Address: 0x21f570 - 0x21f620
void sub_0021F570_0x21f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F570_0x21f570");
#endif

    switch (ctx->pc) {
        case 0x21f600u: goto label_21f600;
        case 0x21f608u: goto label_21f608;
        default: break;
    }

    ctx->pc = 0x21f570u;

    // 0x21f570: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21f570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21f574: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f578: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x21f578u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x21f57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f580: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21f580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f584: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21F584u;
    {
        const bool branch_taken_0x21f584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F584u;
        // 0x21f588: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f584) {
            ctx->pc = 0x21F5F8u;
            goto label_21f5f8;
        }
    }
    ctx->pc = 0x21F58Cu;
    // 0x21f58c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21f590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21f590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f594: 0x8c6223b4  lw          $v0, 0x23B4($v1)
    ctx->pc = 0x21f594u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x21f598: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x21f598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21f59c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x21f59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f5a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21F5A0u;
    {
        const bool branch_taken_0x21f5a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f5a0) {
            ctx->pc = 0x21F5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F5A0u;
            // 0x21f5a4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F5A8u;
            goto label_21f5a8;
        }
    }
    ctx->pc = 0x21F5A8u;
label_21f5a8:
    // 0x21f5a8: 0x8f82c960  lw          $v0, -0x36A0($gp)
    ctx->pc = 0x21f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953312)));
    // 0x21f5ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21f5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21f5b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21f5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f5b4: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x21f5b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x21f5b8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x21f5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x21f5bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x21f5bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21f5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f5c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21f5c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21f5c8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x21f5c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21f5cc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x21f5ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x21f5d0: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x21f5d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f5d4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21f5d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x21f5d8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x21f5d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x21f5dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21F5DCu;
    {
        const bool branch_taken_0x21f5dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f5dc) {
            ctx->pc = 0x21F5F8u;
            goto label_21f5f8;
        }
    }
    ctx->pc = 0x21F5E4u;
    // 0x21f5e4: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x21f5e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x21f5e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21f5ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21f5ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21f5f0: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x21f5f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x21f5f4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x21f5f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_21f5f8:
    // 0x21f5f8: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F5F8u;
    {
        const bool branch_taken_0x21f5f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f5f8) {
            ctx->pc = 0x21F5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F5F8u;
            // 0x21f5fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F614u;
            goto label_21f614;
        }
    }
    ctx->pc = 0x21F600u;
label_21f600:
    // 0x21f600: 0xc0c4dbe  jal         func_3136F8
    ctx->pc = 0x21F600u;
    SET_GPR_U32(ctx, 31, 0x21F608u);
    ctx->pc = 0x21F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F600u;
    // 0x21f604: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3136F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3136F8u, 0x21F600u, 0x21F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F608u;
label_21f608:
    // 0x21f608: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x21F608u;
    {
        const bool branch_taken_0x21f608 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f608) {
            ctx->pc = 0x21F600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f600;
        }
    }
    ctx->pc = 0x21F610u;
    // 0x21f610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f614:
    // 0x21f614: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f618: 0x3e00008  jr          $ra
    ctx->pc = 0x21F618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F618u;
        // 0x21f61c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F620u;
}
