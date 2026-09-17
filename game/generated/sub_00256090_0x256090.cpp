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

// Function: sub_00256090
// Address: 0x256090 - 0x2561b0
void sub_00256090_0x256090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256090_0x256090");
#endif

    switch (ctx->pc) {
        case 0x25612cu: goto label_25612c;
        case 0x256144u: goto label_256144;
        case 0x256150u: goto label_256150;
        case 0x25616cu: goto label_25616c;
        case 0x256190u: goto label_256190;
        default: break;
    }

    ctx->pc = 0x256090u;

    // 0x256090: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x256090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x256094: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x256094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x256098: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25609c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25609cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560a0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2560a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2560a4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2560a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2560a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2560a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2560ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2560acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2560b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2560b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2560b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2560b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2560b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2560b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2560bc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2560bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2560c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2560c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2560c4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2560c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2560c8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2560c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2560cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2560ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2560d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2560d4: 0x24f20070  addiu       $s2, $a3, 0x70
    ctx->pc = 0x2560d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x2560d8: 0x24510070  addiu       $s1, $v0, 0x70
    ctx->pc = 0x2560d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2560dc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2560dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2560e0: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2560e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2560e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2560e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560e8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2560e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2560ec: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x2560ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2560f0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2560f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2560f4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2560f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2560f8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2560f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2560fc: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2560fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x256100: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x256100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x256104: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x256104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x256108: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x256108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x25610c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x25610cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x256110: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x256110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x256114: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x256114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x256118: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x256118u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25611c: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x25611cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x256120: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x256120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x256124: 0xc04a151  jal         func_128544
    ctx->pc = 0x256124u;
    SET_GPR_U32(ctx, 31, 0x25612Cu);
    ctx->pc = 0x256128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256124u;
    // 0x256128: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x256124u, 0x25612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25612Cu;
label_25612c:
    // 0x25612c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25612cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x256130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256134: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x256134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256138: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x256138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25613c: 0xc0847da  jal         func_211F68
    ctx->pc = 0x25613Cu;
    SET_GPR_U32(ctx, 31, 0x256144u);
    ctx->pc = 0x256140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25613Cu;
    // 0x256140: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x25613Cu, 0x256144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256144u;
label_256144:
    // 0x256144: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x256144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256148: 0xc084814  jal         func_212050
    ctx->pc = 0x256148u;
    SET_GPR_U32(ctx, 31, 0x256150u);
    ctx->pc = 0x25614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256148u;
    // 0x25614c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x256148u, 0x256150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256150u;
label_256150:
    // 0x256150: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x256150u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x256154: 0xc7818a64  lwc1        $f1, -0x759C($gp)
    ctx->pc = 0x256154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256158: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x256158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25615c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x25615Cu;
    {
        const bool branch_taken_0x25615c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x256160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25615Cu;
        // 0x256160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25615c) {
            ctx->pc = 0x256194u;
            goto label_256194;
        }
    }
    ctx->pc = 0x256164u;
    // 0x256164: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x256164u;
    SET_GPR_U32(ctx, 31, 0x25616Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x256164u, 0x25616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25616Cu;
label_25616c:
    // 0x25616c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x25616cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x256170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256174: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x256174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x256178: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x256178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25617c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x256180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256184: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x256184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256188: 0xc0847ec  jal         func_211FB0
    ctx->pc = 0x256188u;
    SET_GPR_U32(ctx, 31, 0x256190u);
    ctx->pc = 0x25618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256188u;
    // 0x25618c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211FB0u, 0x256188u, 0x256190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256190u;
label_256190:
    // 0x256190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256194:
    // 0x256194: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x256194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256198: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x256198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25619c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25619cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2561a0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2561a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2561a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2561a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2561a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2561A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2561ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561A8u;
        // 0x2561ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2561A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2561B0u;
}
