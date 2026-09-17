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

// Function: sub_00298128
// Address: 0x298128 - 0x298220
void sub_00298128_0x298128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298128_0x298128");
#endif

    switch (ctx->pc) {
        case 0x298190u: goto label_298190;
        case 0x2981a4u: goto label_2981a4;
        default: break;
    }

    ctx->pc = 0x298128u;

    // 0x298128: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x298128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29812c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29812cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298134: 0x3c0142dc  lui         $at, 0x42DC
    ctx->pc = 0x298134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17116 << 16));
    // 0x298138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x298138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29813c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x29813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x298140: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x298140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298148: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x298148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29814c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298150: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x298150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x298154: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x298154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298158: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x298158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x29815c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x29815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x298160: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x298160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x298164: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x298164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x298168: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x298168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x29816c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x29816cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x298170: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x298170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x298174: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x298174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x298178: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x298178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29817c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x29817cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x298180: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x298180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x298184: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x298184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x298188: 0xc0c8328  jal         func_320CA0
    ctx->pc = 0x298188u;
    SET_GPR_U32(ctx, 31, 0x298190u);
    ctx->pc = 0x29818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298188u;
    // 0x29818c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CA0u, 0x298188u, 0x298190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298190u;
label_298190:
    // 0x298190: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x298190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x298194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298198: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x298198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29819c: 0xc0c8304  jal         func_320C10
    ctx->pc = 0x29819Cu;
    SET_GPR_U32(ctx, 31, 0x2981A4u);
    ctx->pc = 0x2981A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29819Cu;
    // 0x2981a0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320C10u, 0x29819Cu, 0x2981A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981A4u;
label_2981a4:
    // 0x2981a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2981a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2981a8: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x2981a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2981ac: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2981acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2981b0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2981B0u;
    {
        const bool branch_taken_0x2981b0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2981B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981B0u;
        // 0x2981b4: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981b0) {
            ctx->pc = 0x2981C8u;
            goto label_2981c8;
        }
    }
    ctx->pc = 0x2981B8u;
    // 0x2981b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2981b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2981bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2981bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2981c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2981C0u;
    {
        const bool branch_taken_0x2981c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2981C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981C0u;
        // 0x2981c4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981c0) {
            ctx->pc = 0x2981D8u;
            goto label_2981d8;
        }
    }
    ctx->pc = 0x2981C8u;
label_2981c8:
    // 0x2981c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2981c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2981cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2981ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2981d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2981d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2981d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2981d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2981d8:
    // 0x2981d8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2981D8u;
    {
        const bool branch_taken_0x2981d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2981DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981D8u;
        // 0x2981dc: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981d8) {
            ctx->pc = 0x2981F0u;
            goto label_2981f0;
        }
    }
    ctx->pc = 0x2981E0u;
    // 0x2981e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2981e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2981e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2981e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2981e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2981E8u;
    {
        const bool branch_taken_0x2981e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2981ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981E8u;
        // 0x2981ec: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981e8) {
            ctx->pc = 0x29820Cu;
            goto label_29820c;
        }
    }
    ctx->pc = 0x2981F0u;
label_2981f0:
    // 0x2981f0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2981f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2981f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2981f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2981f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2981f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2981fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2981fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298200: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x298200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x298204: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x298204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x298208: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x298208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_29820c:
    // 0x29820c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29820cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298210: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298214: 0x3e00008  jr          $ra
    ctx->pc = 0x298214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298214u;
        // 0x298218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29821Cu;
    // 0x29821c: 0x0  nop
    ctx->pc = 0x29821cu;
    // NOP
    ctx->pc = 0x298220u;
}
