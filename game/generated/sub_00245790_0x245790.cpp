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

// Function: sub_00245790
// Address: 0x245790 - 0x245898
void sub_00245790_0x245790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245790_0x245790");
#endif

    switch (ctx->pc) {
        case 0x2457d0u: goto label_2457d0;
        case 0x2457d8u: goto label_2457d8;
        case 0x245810u: goto label_245810;
        case 0x245820u: goto label_245820;
        case 0x245834u: goto label_245834;
        case 0x245848u: goto label_245848;
        default: break;
    }

    ctx->pc = 0x245790u;

    // 0x245790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x245790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x245794: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x245794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x245798: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x245798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x24579c: 0x245068d0  addiu       $s0, $v0, 0x68D0
    ctx->pc = 0x24579cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26832));
    // 0x2457a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2457a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1668F0u));
    // 0x2457a4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2457a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2457a8: 0x24b10044  addiu       $s1, $a1, 0x44
    ctx->pc = 0x2457a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
    // 0x2457ac: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2457acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2457b0: 0x24b20018  addiu       $s2, $a1, 0x18
    ctx->pc = 0x2457b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2457b4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2457b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2457b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2457b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457bc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2457bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2457c0: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2457C0u;
    {
        const bool branch_taken_0x2457c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2457C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457C0u;
        // 0x2457c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2457c0) {
            ctx->pc = 0x245860u;
            goto label_245860;
        }
    }
    ctx->pc = 0x2457C8u;
    // 0x2457c8: 0xc0cba88  jal         func_32EA20
    ctx->pc = 0x2457C8u;
    SET_GPR_U32(ctx, 31, 0x2457D0u);
    ctx->pc = 0x2457CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457C8u;
    // 0x2457cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA20u, 0x2457C8u, 0x2457D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457D0u;
label_2457d0:
    // 0x2457d0: 0xc0cbb5e  jal         func_32ED78
    ctx->pc = 0x2457D0u;
    SET_GPR_U32(ctx, 31, 0x2457D8u);
    ctx->pc = 0x2457D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457D0u;
    // 0x2457d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED78u, 0x2457D0u, 0x2457D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457D8u;
label_2457d8:
    // 0x2457d8: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x2457d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2457dc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2457dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2457e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2457e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2457e4: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2457e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2457e8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2457e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2457ec: 0xc6050018  lwc1        $f5, 0x18($s0)
    ctx->pc = 0x2457ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2457f0: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x2457f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2457f4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2457f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2457f8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2457f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2457fc: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2457fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x245800: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x245800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x245804: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x245804u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x245808: 0xc0915d6  jal         func_245758
    ctx->pc = 0x245808u;
    SET_GPR_U32(ctx, 31, 0x245810u);
    ctx->pc = 0x24580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245808u;
    // 0x24580c: 0xe7a50028  swc1        $f5, 0x28($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x245758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245758u, 0x245808u, 0x245810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245810u;
label_245810:
    // 0x245810: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245814: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x245814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245818: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x245818u;
    SET_GPR_U32(ctx, 31, 0x245820u);
    ctx->pc = 0x24581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245818u;
    // 0x24581c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x245818u, 0x245820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245820u;
label_245820:
    // 0x245820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245824: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x245824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245828: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x245828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24582c: 0xc0cbb70  jal         func_32EDC0
    ctx->pc = 0x24582Cu;
    SET_GPR_U32(ctx, 31, 0x245834u);
    ctx->pc = 0x245830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24582Cu;
    // 0x245830: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EDC0u, 0x24582Cu, 0x245834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245834u;
label_245834:
    // 0x245834: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x245834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x245838: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x245838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24583c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24583cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x245840: 0xc0cbb70  jal         func_32EDC0
    ctx->pc = 0x245840u;
    SET_GPR_U32(ctx, 31, 0x245848u);
    ctx->pc = 0x245844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245840u;
    // 0x245844: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EDC0u, 0x245840u, 0x245848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245848u;
label_245848:
    // 0x245848: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x245848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24584c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x24584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x245850: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x245850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245854: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x245854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x245858: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x245858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x24585c: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x24585cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_245860:
    // 0x245860: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x245860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245864: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x245864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245868: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x245868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24586c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x24586cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x245870: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x245870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x245874: 0x3e00008  jr          $ra
    ctx->pc = 0x245874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245874u;
        // 0x245878: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24587Cu;
    // 0x24587c: 0x0  nop
    ctx->pc = 0x24587cu;
    // NOP
    // 0x245880: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x245880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x245884: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x245884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x245888: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x245888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24588c: 0x3e00008  jr          $ra
    ctx->pc = 0x24588Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24588Cu;
        // 0x245890: 0x8c42f0d8  lw          $v0, -0xF28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963416)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24588Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245894u;
    // 0x245894: 0x0  nop
    ctx->pc = 0x245894u;
    // NOP
    ctx->pc = 0x245898u;
}
