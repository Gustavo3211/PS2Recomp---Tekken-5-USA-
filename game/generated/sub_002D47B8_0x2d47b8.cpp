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

// Function: sub_002D47B8
// Address: 0x2d47b8 - 0x2d48d0
void sub_002D47B8_0x2d47b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D47B8_0x2d47b8");
#endif

    switch (ctx->pc) {
        case 0x2d486cu: goto label_2d486c;
        case 0x2d4880u: goto label_2d4880;
        case 0x2d48bcu: goto label_2d48bc;
        default: break;
    }

    ctx->pc = 0x2d47b8u;

    // 0x2d47b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d47b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d47bc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2d47bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2d47c0: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x2d47c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d47c4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2d47c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d47c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d47c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d47cc: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x2d47ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x2d47d0: 0x2421df40  addiu       $at, $at, -0x20C0
    ctx->pc = 0x2d47d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294958912));
    // 0x2d47d4: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x2d47d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x2d47d8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2d47d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2d47dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d47dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d47e0: 0x35221060  ori         $v0, $t1, 0x1060
    ctx->pc = 0x2d47e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4192);
    // 0x2d47e4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2d47e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d47e8: 0x35291020  ori         $t1, $t1, 0x1020
    ctx->pc = 0x2d47e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4128);
    // 0x2d47ec: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2d47ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d47f0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2d47f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d47f4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2d47f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d47f8: 0x11400007  beqz        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D47F8u;
    {
        const bool branch_taken_0x2d47f8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47F8u;
        // 0x2d47fc: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47f8) {
            ctx->pc = 0x2D4818u;
            goto label_2d4818;
        }
    }
    ctx->pc = 0x2D4800u;
    // 0x2d4800: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x2d4800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4804: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2d4804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4808: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2d4808u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d480c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2d480cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d4810: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d4810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d4814: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d4814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d4818:
    // 0x2d4818: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2d4818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d481c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2d481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d4820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d4824: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d4824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d4828: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x2d4828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x2d482c: 0xe7ae0010  swc1        $f14, 0x10($sp)
    ctx->pc = 0x2d482cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d4830: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x2d4830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x2d4834: 0xe7ad003c  swc1        $f13, 0x3C($sp)
    ctx->pc = 0x2d4834u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d4838: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2d4838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d483c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2d483cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d4840: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2d4840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d4844: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2d4844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d4848: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2d4848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2d484c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2d484cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d4850: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4850u;
    {
        const bool branch_taken_0x2d4850 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4850u;
        // 0x2d4854: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4850) {
            ctx->pc = 0x2D485Cu;
            goto label_2d485c;
        }
    }
    ctx->pc = 0x2D4858u;
    // 0x2d4858: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d4858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2d485c:
    // 0x2d485c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4860: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x2d4860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x2d4864: 0xc0c8328  jal         func_320CA0
    ctx->pc = 0x2D4864u;
    SET_GPR_U32(ctx, 31, 0x2D486Cu);
    ctx->pc = 0x2D4868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4864u;
    // 0x2d4868: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CA0u, 0x2D4864u, 0x2D486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D486Cu;
label_2d486c:
    // 0x2d486c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4870: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d4870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d4874: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x2d4874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2d4878: 0xc0c8304  jal         func_320C10
    ctx->pc = 0x2D4878u;
    SET_GPR_U32(ctx, 31, 0x2D4880u);
    ctx->pc = 0x2D487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4878u;
    // 0x2d487c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320C10u, 0x2D4878u, 0x2D4880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4880u;
label_2d4880:
    // 0x2d4880: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2d4880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2d4884: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d4884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4888: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2d4888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d488c: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x2d488cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2d4890: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2d4890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d4894: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4894u;
    {
        const bool branch_taken_0x2d4894 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4894u;
        // 0x2d4898: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4894) {
            ctx->pc = 0x2D48A8u;
            goto label_2d48a8;
        }
    }
    ctx->pc = 0x2D489Cu;
    // 0x2d489c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d489cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d48a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D48A0u;
    {
        const bool branch_taken_0x2d48a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D48A0u;
        // 0x2d48a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d48a0) {
            ctx->pc = 0x2D48B4u;
            goto label_2d48b4;
        }
    }
    ctx->pc = 0x2D48A8u;
label_2d48a8:
    // 0x2d48a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d48a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d48ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d48acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d48b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d48b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d48b4:
    // 0x2d48b4: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x2D48B4u;
    SET_GPR_U32(ctx, 31, 0x2D48BCu);
    ctx->pc = 0x2D48B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48B4u;
    // 0x2d48b8: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x2D48B4u, 0x2D48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48BCu;
label_2d48bc:
    // 0x2d48bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d48bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d48c0: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x2d48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d48c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D48C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D48C4u;
        // 0x2d48c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D48C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D48CCu;
    // 0x2d48cc: 0x0  nop
    ctx->pc = 0x2d48ccu;
    // NOP
    ctx->pc = 0x2d48d0u;
}
