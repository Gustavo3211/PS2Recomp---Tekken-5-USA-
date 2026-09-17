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

// Function: sub_00246750
// Address: 0x246750 - 0x246858
void sub_00246750_0x246750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246750_0x246750");
#endif

    switch (ctx->pc) {
        case 0x246778u: goto label_246778;
        case 0x24679cu: goto label_24679c;
        case 0x2467bcu: goto label_2467bc;
        case 0x2467ccu: goto label_2467cc;
        case 0x2467dcu: goto label_2467dc;
        case 0x246830u: goto label_246830;
        case 0x246840u: goto label_246840;
        default: break;
    }

    ctx->pc = 0x246750u;

    // 0x246750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24675c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x246760: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246760u;
    {
        const bool branch_taken_0x246760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x246764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246760u;
        // 0x246764: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246760) {
            ctx->pc = 0x246770u;
            goto label_246770;
        }
    }
    ctx->pc = 0x246768u;
    // 0x246768: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x246768u;
    {
        const bool branch_taken_0x246768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246768u;
        // 0x24676c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246768) {
            ctx->pc = 0x246808u;
            goto label_246808;
        }
    }
    ctx->pc = 0x246770u;
label_246770:
    // 0x246770: 0xc08eada  jal         func_23AB68
    ctx->pc = 0x246770u;
    SET_GPR_U32(ctx, 31, 0x246778u);
    ctx->pc = 0x246774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246770u;
    // 0x246774: 0x3c110016  lui         $s1, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB68u, 0x246770u, 0x246778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246778u;
label_246778:
    // 0x246778: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x246778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24677c: 0x26306910  addiu       $s0, $s1, 0x6910
    ctx->pc = 0x24677cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 26896));
    // 0x246780: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246784: 0xc7948868  lwc1        $f20, -0x7798($gp)
    ctx->pc = 0x246784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x246788: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x246788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x24678c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24678cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x246790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x246794: 0xc08eade  jal         func_23AB78
    ctx->pc = 0x246794u;
    SET_GPR_U32(ctx, 31, 0x24679Cu);
    ctx->pc = 0x246798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246794u;
    // 0x246798: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB78u, 0x246794u, 0x24679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24679Cu;
label_24679c:
    // 0x24679c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24679cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2467a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2467a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2467a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2467a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2467a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2467a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2467ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2467acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2467b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2467b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2467b4: 0xc08ead2  jal         func_23AB48
    ctx->pc = 0x2467B4u;
    SET_GPR_U32(ctx, 31, 0x2467BCu);
    ctx->pc = 0x2467B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2467B4u;
    // 0x2467b8: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB48u, 0x2467B4u, 0x2467BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467BCu;
label_2467bc:
    // 0x2467bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2467bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2467c0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2467c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2467c4: 0xc08ead2  jal         func_23AB48
    ctx->pc = 0x2467C4u;
    SET_GPR_U32(ctx, 31, 0x2467CCu);
    ctx->pc = 0x2467C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2467C4u;
    // 0x2467c8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB48u, 0x2467C4u, 0x2467CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467CCu;
label_2467cc:
    // 0x2467cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2467ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2467d0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2467d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2467d4: 0xc08ead2  jal         func_23AB48
    ctx->pc = 0x2467D4u;
    SET_GPR_U32(ctx, 31, 0x2467DCu);
    ctx->pc = 0x2467D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2467D4u;
    // 0x2467d8: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB48u, 0x2467D4u, 0x2467DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467DCu;
label_2467dc:
    // 0x2467dc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2467dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2467e0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2467e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2467e4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2467e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2467e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2467e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2467ec: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2467ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2467f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2467F0u;
    {
        const bool branch_taken_0x2467f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2467F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467F0u;
        // 0x2467f4: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467f0) {
            ctx->pc = 0x2467FCu;
            goto label_2467fc;
        }
    }
    ctx->pc = 0x2467F8u;
    // 0x2467f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2467f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2467fc:
    // 0x2467fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2467FCu;
    {
        const bool branch_taken_0x2467fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467FCu;
        // 0x246800: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467fc) {
            ctx->pc = 0x246810u;
            goto label_246810;
        }
    }
    ctx->pc = 0x246804u;
    // 0x246804: 0x0  nop
    ctx->pc = 0x246804u;
    // NOP
label_246808:
    // 0x246808: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x246808u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x24680c: 0xae206910  sw          $zero, 0x6910($s1)
    ctx->pc = 0x24680cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x166910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166910u, _value); } while (0);
label_246810:
    // 0x246810: 0x26306910  addiu       $s0, $s1, 0x6910
    ctx->pc = 0x246810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 26896));
    // 0x246814: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x246814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246818: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x246818u;
    {
        const bool branch_taken_0x246818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246818) {
            ctx->pc = 0x24681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246818u;
            // 0x24681c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246844u;
            goto label_246844;
        }
    }
    ctx->pc = 0x246820u;
    // 0x246820: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x246820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x246824: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x246824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x246828: 0xc0cb24e  jal         func_32C938
    ctx->pc = 0x246828u;
    SET_GPR_U32(ctx, 31, 0x246830u);
    ctx->pc = 0x24682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246828u;
    // 0x24682c: 0xc60e0014  lwc1        $f14, 0x14($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C938u, 0x246828u, 0x246830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246830u;
label_246830:
    // 0x246830: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x246830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246834: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x246834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x246838: 0xc0cb256  jal         func_32C958
    ctx->pc = 0x246838u;
    SET_GPR_U32(ctx, 31, 0x246840u);
    ctx->pc = 0x24683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246838u;
    // 0x24683c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C958u, 0x246838u, 0x246840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246840u;
label_246840:
    // 0x246840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246844:
    // 0x246844: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x246848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24684c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x24684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x246850: 0x3e00008  jr          $ra
    ctx->pc = 0x246850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246850u;
        // 0x246854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246858u;
}
